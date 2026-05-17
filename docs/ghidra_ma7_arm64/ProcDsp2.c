/* ProcDsp2 @ 00172060 26152B */


/* ARM::CDsp2::ProcDsp2() */

void __thiscall ARM::CDsp2::ProcDsp2(CDsp2 *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  short sVar27;
  short sVar28;
  int iVar29;
  int iVar30;
  long lVar31;
  int iVar32;
  int iVar33;
  uint uVar34;
  int iVar35;
  uint uVar36;
  long lVar37;
  int iVar38;
  int iVar39;
  long lVar40;
  long lVar41;
  long *plVar42;
  ulong uVar43;
  uint uVar44;
  int iVar45;
  undefined4 uVar46;
  ulong uVar47;
  int iVar48;
  long lVar49;
  ulong uVar50;
  int iVar51;
  long lVar52;
  uint uVar53;
  int iVar54;
  uint uVar55;
  uint uVar56;
  long lVar57;
  long lVar58;
  uint uVar59;
  int iVar60;
  ulong uVar61;
  ulong uVar62;
  CDsp2 *pCVar63;
  long lVar64;
  int iVar65;
  long lVar66;
  long lVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  int iVar70;
  int iVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  int iVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  uint local_20;
  
  if (*(int *)(this + 0x14) == 0) {
    return;
  }
  if (*(int *)(this + 0xc) == 0) {
    return;
  }
  uVar1 = *(uint *)(this + 0x9a70);
  iVar65 = uVar1 + 1;
  if (iVar65 == 0x20) {
    *(undefined4 *)(this + 0x9a70) = 0;
    iVar65 = 0;
  }
  else {
    *(int *)(this + 0x9a70) = iVar65;
  }
  uVar36 = iVar65 + 0x1f;
  if (-1 < (int)(iVar65 - 1U)) {
    uVar36 = iVar65 - 1U;
  }
  uVar44 = uVar36 & 0x1f;
  if (uVar36 < 0x20) {
    uVar44 = uVar36;
  }
  uVar59 = *(int *)(this + 0x9a70) - 2;
  *(uint *)(this + 0x9a74) = uVar44;
  uVar36 = *(int *)(this + 0x9a70) + 0x1e;
  if (-1 < (int)uVar59) {
    uVar36 = uVar59;
  }
  iVar65 = 3;
  uVar44 = uVar36 & 0x1f;
  if (uVar36 < 0x20) {
    uVar44 = uVar36;
  }
  *(uint *)(this + 0x9a78) = uVar44;
  iVar60 = *(int *)(this + 0x9a70);
  pCVar63 = this + 0x9a7c;
  while( true ) {
    uVar44 = iVar60 - iVar65;
    uVar36 = uVar44 + 0x20;
    if (-1 < (int)uVar44) {
      uVar36 = uVar44;
    }
    iVar60 = iVar65 + 1;
    uVar44 = uVar36 & 0x1f;
    if (uVar36 < 0x20) {
      uVar44 = uVar36;
    }
    *(uint *)pCVar63 = uVar44;
    iVar74 = iVar65 + 3;
    iVar39 = iVar65 + 4;
    iVar33 = iVar65 + 2;
    iVar65 = iVar65 + 5;
    if (iVar60 == 0x18) break;
    uVar44 = *(int *)(this + 0x9a70) - iVar60;
    uVar36 = uVar44 + 0x20;
    if (-1 < (int)uVar44) {
      uVar36 = uVar44;
    }
    uVar44 = uVar36 & 0x1f;
    if (uVar36 < 0x20) {
      uVar44 = uVar36;
    }
    *(uint *)(pCVar63 + 4) = uVar44;
    uVar44 = *(int *)(this + 0x9a70) - iVar33;
    uVar36 = uVar44 + 0x20;
    if (-1 < (int)uVar44) {
      uVar36 = uVar44;
    }
    uVar44 = uVar36 & 0x1f;
    if (uVar36 < 0x20) {
      uVar44 = uVar36;
    }
    *(uint *)(pCVar63 + 8) = uVar44;
    uVar44 = *(int *)(this + 0x9a70) - iVar74;
    uVar36 = uVar44 + 0x20;
    if (-1 < (int)uVar44) {
      uVar36 = uVar44;
    }
    uVar44 = uVar36 & 0x1f;
    if (uVar36 < 0x20) {
      uVar44 = uVar36;
    }
    *(uint *)(pCVar63 + 0xc) = uVar44;
    uVar44 = *(int *)(this + 0x9a70) - iVar39;
    uVar36 = uVar44 + 0x20;
    if (-1 < (int)uVar44) {
      uVar36 = uVar44;
    }
    uVar44 = uVar36 & 0x1f;
    if (uVar36 < 0x20) {
      uVar44 = uVar36;
    }
    *(uint *)(pCVar63 + 0x10) = uVar44;
    iVar60 = *(int *)(this + 0x9a70);
    pCVar63 = pCVar63 + 0x14;
  }
  uVar36 = *(int *)(this + 0x9a2c) + 1;
  iVar65 = *(int *)(this + 0x742c) + 1;
  if (iVar65 == 0x8000) {
    iVar65 = 0;
  }
  *(int *)(this + 0x742c) = iVar65;
  *(uint *)(this + 0x9a2c) = uVar36;
  if (uVar36 == 0xffffffff) {
    *(undefined4 *)(this + 0x9a2c) = 0;
LAB_001727d8:
    iVar65 = *(int *)(this + 0x9a28) + 1;
    if (iVar65 == 0x8000) {
      iVar65 = 0;
    }
    *(int *)(this + 0x9a28) = iVar65;
  }
  else if (uVar36 == (uVar36 / 3) * 3) goto LAB_001727d8;
  lVar40 = *(long *)this;
  plVar42 = *(long **)(&DAT_003bf7a0 + lVar40);
  uVar36 = *(uint *)(&DAT_003bf7a8 + lVar40);
  if (plVar42 == (long *)0x0) {
    iVar65 = 0;
    *(undefined4 *)(this + 0x9a34) = 0;
    *(undefined4 *)(this + 0x9a38) = 0;
    iVar74 = 0;
    *(undefined4 *)(this + 0x9a3c) = 0;
    *(undefined4 *)(this + 0x9a40) = 0;
    *(undefined4 *)(this + 0x9a44) = 0;
    *(undefined4 *)(this + 0x9a48) = 0;
    *(undefined4 *)(this + 0x9a4c) = 0;
    *(undefined4 *)(this + 0x9a50) = 0;
    *(undefined4 *)(this + 0x9a54) = 0;
    *(undefined4 *)(this + 0x9a58) = 0;
    *(undefined4 *)(this + 0x9a5c) = 0;
    lVar57 = 0;
    lVar41 = 0;
    lVar31 = 0;
    lVar49 = 0;
    lVar58 = 0;
    lVar66 = 0;
    iVar60 = iVar65;
  }
  else {
    if (plVar42[0xb] == 0) {
      iVar65 = 0;
    }
    else {
      iVar65 = *(int *)(plVar42[0xb] + (ulong)uVar36 * 4) << 8;
    }
    lVar57 = plVar42[0xc];
    *(int *)(this + 0x9a34) = iVar65;
    iVar65 = 0;
    if (lVar57 != 0) {
      iVar65 = *(int *)(lVar57 + (ulong)uVar36 * 4) << 8;
    }
    lVar57 = *plVar42;
    *(int *)(this + 0x9a38) = iVar65;
    if (lVar57 == 0) {
      iVar65 = 0;
      lVar66 = 0;
    }
    else {
      iVar65 = *(int *)(lVar57 + (ulong)uVar36 * 4) << 8;
      lVar66 = (long)iVar65;
    }
    lVar57 = plVar42[1];
    *(int *)(this + 0x9a3c) = iVar65;
    if (lVar57 == 0) {
      iVar65 = 0;
      lVar31 = 0;
    }
    else {
      iVar65 = *(int *)(lVar57 + (ulong)uVar36 * 4) << 8;
      lVar31 = (long)iVar65;
    }
    lVar57 = plVar42[2];
    *(int *)(this + 0x9a40) = iVar65;
    if (lVar57 == 0) {
      iVar74 = 0;
    }
    else {
      iVar74 = *(int *)(lVar57 + (ulong)uVar36 * 4) << 8;
    }
    lVar57 = plVar42[3];
    *(int *)(this + 0x9a44) = iVar74;
    if (lVar57 == 0) {
      iVar65 = 0;
    }
    else {
      iVar65 = *(int *)(lVar57 + (ulong)uVar36 * 4) << 8;
    }
    lVar57 = plVar42[4];
    *(int *)(this + 0x9a48) = iVar65;
    iVar60 = 0;
    if (lVar57 != 0) {
      iVar60 = *(int *)(lVar57 + (ulong)uVar36 * 4) << 8;
    }
    lVar57 = plVar42[5];
    *(int *)(this + 0x9a4c) = iVar60;
    if (lVar57 == 0) {
      iVar39 = 0;
      lVar49 = 0;
    }
    else {
      iVar39 = *(int *)(lVar57 + (ulong)uVar36 * 4) << 8;
      lVar49 = (long)iVar39;
    }
    lVar57 = plVar42[6];
    *(int *)(this + 0x9a50) = iVar39;
    if (lVar57 == 0) {
      iVar39 = 0;
      lVar58 = 0;
    }
    else {
      iVar39 = *(int *)(lVar57 + (ulong)uVar36 * 4) << 8;
      lVar58 = (long)iVar39;
    }
    lVar57 = plVar42[7];
    *(int *)(this + 0x9a54) = iVar39;
    if (lVar57 == 0) {
      iVar39 = 0;
      lVar41 = 0;
    }
    else {
      iVar39 = *(int *)(lVar57 + (ulong)uVar36 * 4) << 8;
      lVar41 = (long)iVar39;
    }
    lVar57 = plVar42[8];
    *(int *)(this + 0x9a58) = iVar39;
    if (lVar57 == 0) {
      *(undefined4 *)(this + 0x9a5c) = 0;
      lVar57 = 0;
    }
    else {
      iVar39 = *(int *)(lVar57 + (ulong)uVar36 * 4) << 8;
      *(int *)(this + 0x9a5c) = iVar39;
      lVar57 = (long)iVar39;
    }
  }
  local_20 = *(uint *)(this + 0x9a70);
  uVar50 = (ulong)local_20;
  *(undefined4 *)(this + uVar50 * 4 + 0xa750) = 0;
  *(undefined4 *)(this + uVar50 * 4 + 0xa7d0) = 0;
  *(undefined4 *)(this + uVar50 * 4 + 0xa2d0) = 0;
  *(undefined4 *)(this + uVar50 * 4 + 0xa350) = 0;
  *(undefined4 *)(this + uVar50 * 4 + 0xa3d0) = 0;
  *(undefined4 *)(this + uVar50 * 4 + 0xa450) = 0;
  *(undefined4 *)(this + uVar50 * 4 + 0xa850) = 0;
  *(undefined4 *)(this + uVar50 * 4 + 0xa8d0) = 0;
  iVar39 = *(int *)(this + 0x1e3c);
  if (iVar39 == 0) {
    uVar44 = (uint)((long)*(int *)(this + 0x366c) * (long)iVar65 >> 0xf);
    *(uint *)(this + uVar50 * 4 + 0x9ad0) = uVar44;
    lVar37 = (long)*(int *)(this + 0x3670) * (long)iVar60 >> 0xf;
    uVar36 = (uint)lVar37;
    *(uint *)(this + uVar50 * 4 + 0x9b50) = uVar36;
    iVar65 = *(int *)(this + 0x1e48);
    if (iVar65 == 0) {
      uVar59 = *(uint *)(this + 0x9a74);
      uVar55 = *(uint *)(this + 0x9a78);
      iVar65 = (int)((long)*(int *)(this + 0x4338) * -0x8000 >> 0xf) -
               (int)((long)*(int *)(this + 0x433c) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x2ac2d0) >> 0xf);
      if (iVar65 < 0x800000) {
        if (iVar65 < -0x800000) {
          iVar65 = iVar65 + 0x1000000;
        }
      }
      else {
        iVar65 = iVar65 + -0x1000000;
      }
      *(int *)(this + uVar50 * 4 + 0x2ac2d0) = iVar65;
      iVar65 = *(int *)(this + (ulong)uVar59 * 4 + 0x2ac2d0);
      uVar56 = iVar65 + (int)((long)*(int *)(this + 0x4340) * -0x800000 >> 0xf);
      if ((int)uVar56 < 0x800000) {
        if ((int)uVar56 < -0x800000) {
          uVar56 = uVar56 + 0x1000000;
        }
      }
      else {
        uVar56 = uVar56 - 0x1000000;
      }
      *(uint *)(this + uVar50 * 4 + 0x2ac350) = uVar56;
      uVar34 = iVar65 + (int)((long)*(int *)(this + 0x4344) * -0x800000 >> 0xf);
      if ((int)uVar34 < 0x800000) {
        if ((int)uVar34 < -0x800000) {
          uVar34 = uVar34 + 0x1000000;
        }
      }
      else {
        uVar34 = uVar34 - 0x1000000;
      }
      *(uint *)(this + uVar50 * 4 + 0x2ac3d0) = uVar34;
      uVar53 = (uint)((long)*(int *)(this + 0x4348) * (long)iVar65 >> 0xf);
      if ((int)uVar53 < 0x800000) {
        if ((int)uVar53 < -0x800000) {
          uVar53 = uVar53 + 0x1000000;
        }
      }
      else {
        uVar53 = uVar53 - 0x1000000;
      }
      iVar60 = (uVar53 ^ (int)uVar53 >> 0x1f) - ((int)uVar53 >> 0x1f);
      *(int *)(this + uVar50 * 4 + 0x2ac450) = iVar60;
      iVar65 = (int)((long)*(int *)(this + 0x434c) *
                     (long)(int)((uVar56 ^ (int)uVar56 >> 0x1f) - ((int)uVar56 >> 0x1f)) >> 0xf);
      if (iVar65 < -0x800000) {
        iVar65 = -0x800000;
      }
      if (0x7fffff < iVar65) {
        iVar65 = 0x7fffff;
      }
      *(int *)(this + uVar50 * 4 + 0x2ac4d0) = iVar65;
      iVar33 = (int)((long)*(int *)(this + 0x4350) *
                     (long)(int)((uVar34 ^ (int)uVar34 >> 0x1f) - ((int)uVar34 >> 0x1f)) >> 0xf);
      if (iVar33 < -0x800000) {
        iVar33 = -0x800000;
      }
      if (0x7fffff < iVar33) {
        iVar33 = 0x7fffff;
      }
      *(int *)(this + uVar50 * 4 + 0x2ac550) = iVar33;
      iVar30 = *(int *)(this + 0x9838);
      iVar35 = *(int *)(this + 0x9840);
      uVar56 = *(int *)(this + 0x9834) + iVar60;
      iVar60 = *(int *)(this + 0x983c);
      sVar27 = (short)(iVar60 + iVar65 >> 0xb);
      sVar9 = (short)(iVar33 + iVar35 >> 0xb);
      if (iVar60 < 0) {
        sVar27 = *(short *)(this + 0x2ecad0) + sVar27;
        sVar9 = *(short *)(this + 0x2ecad0) + sVar9;
      }
      uVar34 = *(uint *)(this + 0x742c);
      iVar54 = (int)(short)((short)((int)uVar56 >> 0xb) + 2);
      if (iVar54 < 0) {
        sVar10 = *(short *)(this + 0x1e20);
        while( true ) {
          sVar28 = sVar10 + (short)iVar54;
          iVar54 = (int)sVar28;
          if (-1 < iVar54) break;
          sVar28 = sVar10 + sVar28;
          iVar54 = (int)sVar28;
          if (-1 < iVar54) break;
          sVar28 = sVar10 + sVar28;
          iVar54 = (int)sVar28;
          if (-1 < iVar54) break;
          sVar28 = sVar10 + sVar28;
          iVar54 = (int)sVar28;
          if (-1 < iVar54) break;
          sVar28 = sVar10 + sVar28;
          iVar54 = (int)sVar28;
          if (-1 < iVar54) break;
          sVar28 = sVar10 + sVar28;
          iVar54 = (int)sVar28;
          if (-1 < iVar54) break;
          sVar28 = sVar10 + sVar28;
          iVar54 = (int)sVar28;
          if (-1 < iVar54) break;
          sVar28 = sVar10 + sVar28;
          iVar54 = (int)sVar28;
          if (-1 < iVar54) break;
          sVar28 = sVar10 + sVar28;
          iVar54 = (int)sVar28;
          if (-1 < iVar54) break;
          sVar28 = sVar10 + sVar28;
          iVar54 = (int)sVar28;
          if (-1 < iVar54) break;
          sVar28 = sVar10 + sVar28;
          iVar54 = (int)sVar28;
          if (-1 < iVar54) break;
          sVar28 = sVar10 + sVar28;
          iVar54 = (int)sVar28;
          if (-1 < iVar54) break;
          sVar28 = sVar10 + sVar28;
          iVar54 = (int)sVar28;
          if (-1 < iVar54) break;
          sVar28 = sVar10 + sVar28;
          iVar54 = (int)sVar28;
          if (-1 < iVar54) break;
          sVar28 = sVar10 + sVar28;
          iVar54 = (int)sVar28;
          if ((-1 < iVar54) || (iVar54 = (int)(short)(sVar10 + sVar28), -1 < iVar54)) break;
        }
      }
      uVar13 = uVar34 - iVar54;
      uVar53 = uVar13 + 0x8000;
      if (-1 < (int)uVar13) {
        uVar53 = uVar13;
      }
      uVar13 = uVar53 & 0x7fff;
      if (uVar53 < 0x8000) {
        uVar13 = uVar53;
      }
      iVar54 = (int)(short)((short)(iVar33 + iVar30 >> 0xb) + 2);
      uVar53 = uVar13 - 1;
      if (uVar53 == 0xffffffff) {
        uVar53 = 0x7fff;
      }
      if (iVar54 < 0) {
        sVar10 = *(short *)(this + 0x1e20);
        while( true ) {
          sVar28 = sVar10 + (short)iVar54;
          iVar54 = (int)sVar28;
          if (-1 < iVar54) break;
          sVar28 = sVar10 + sVar28;
          iVar54 = (int)sVar28;
          if (-1 < iVar54) break;
          sVar28 = sVar10 + sVar28;
          iVar54 = (int)sVar28;
          if (-1 < iVar54) break;
          sVar28 = sVar10 + sVar28;
          iVar54 = (int)sVar28;
          if (-1 < iVar54) break;
          sVar28 = sVar10 + sVar28;
          iVar54 = (int)sVar28;
          if (-1 < iVar54) break;
          sVar28 = sVar10 + sVar28;
          iVar54 = (int)sVar28;
          if (-1 < iVar54) break;
          sVar28 = sVar10 + sVar28;
          iVar54 = (int)sVar28;
          if (-1 < iVar54) break;
          sVar28 = sVar10 + sVar28;
          iVar54 = (int)sVar28;
          if (-1 < iVar54) break;
          sVar28 = sVar10 + sVar28;
          iVar54 = (int)sVar28;
          if (-1 < iVar54) break;
          sVar28 = sVar10 + sVar28;
          iVar54 = (int)sVar28;
          if (-1 < iVar54) break;
          sVar28 = sVar10 + sVar28;
          iVar54 = (int)sVar28;
          if (-1 < iVar54) break;
          sVar28 = sVar10 + sVar28;
          iVar54 = (int)sVar28;
          if (-1 < iVar54) break;
          sVar28 = sVar10 + sVar28;
          iVar54 = (int)sVar28;
          if (-1 < iVar54) break;
          sVar28 = sVar10 + sVar28;
          iVar54 = (int)sVar28;
          if (-1 < iVar54) break;
          sVar28 = sVar10 + sVar28;
          iVar54 = (int)sVar28;
          if ((-1 < iVar54) || (iVar54 = (int)(short)(sVar10 + sVar28), -1 < iVar54)) break;
        }
      }
      uVar15 = uVar34 - iVar54;
      uVar14 = uVar15 + 0x8000;
      if (-1 < (int)uVar15) {
        uVar14 = uVar15;
      }
      uVar15 = uVar14 & 0x7fff;
      if (uVar14 < 0x8000) {
        uVar15 = uVar14;
      }
      iVar54 = (int)(short)(sVar27 + 2);
      uVar14 = uVar15 - 1;
      if (uVar14 == 0xffffffff) {
        uVar14 = 0x7fff;
      }
      if (iVar54 < 0) {
        sVar27 = *(short *)(this + 0x1e20);
        while( true ) {
          sVar10 = sVar27 + (short)iVar54;
          iVar54 = (int)sVar10;
          if (-1 < iVar54) break;
          sVar10 = sVar27 + sVar10;
          iVar54 = (int)sVar10;
          if (-1 < iVar54) break;
          sVar10 = sVar27 + sVar10;
          iVar54 = (int)sVar10;
          if (-1 < iVar54) break;
          sVar10 = sVar27 + sVar10;
          iVar54 = (int)sVar10;
          if (-1 < iVar54) break;
          sVar10 = sVar27 + sVar10;
          iVar54 = (int)sVar10;
          if (-1 < iVar54) break;
          sVar10 = sVar27 + sVar10;
          iVar54 = (int)sVar10;
          if (-1 < iVar54) break;
          sVar10 = sVar27 + sVar10;
          iVar54 = (int)sVar10;
          if (-1 < iVar54) break;
          sVar10 = sVar27 + sVar10;
          iVar54 = (int)sVar10;
          if (-1 < iVar54) break;
          sVar10 = sVar27 + sVar10;
          iVar54 = (int)sVar10;
          if (-1 < iVar54) break;
          sVar10 = sVar27 + sVar10;
          iVar54 = (int)sVar10;
          if (-1 < iVar54) break;
          sVar10 = sVar27 + sVar10;
          iVar54 = (int)sVar10;
          if (-1 < iVar54) break;
          sVar10 = sVar27 + sVar10;
          iVar54 = (int)sVar10;
          if (-1 < iVar54) break;
          sVar10 = sVar27 + sVar10;
          iVar54 = (int)sVar10;
          if (-1 < iVar54) break;
          sVar10 = sVar27 + sVar10;
          iVar54 = (int)sVar10;
          if (-1 < iVar54) break;
          sVar10 = sVar27 + sVar10;
          iVar54 = (int)sVar10;
          if ((-1 < iVar54) || (iVar54 = (int)(short)(sVar27 + sVar10), -1 < iVar54)) break;
        }
      }
      uVar12 = uVar34 - iVar54;
      uVar16 = uVar12 + 0x8000;
      if (-1 < (int)uVar12) {
        uVar16 = uVar12;
      }
      uVar12 = uVar16 & 0x7fff;
      if (uVar16 < 0x8000) {
        uVar12 = uVar16;
      }
      iVar54 = (int)(short)(sVar9 + 2);
      uVar16 = uVar12 - 1;
      if (uVar16 == 0xffffffff) {
        uVar16 = 0x7fff;
      }
      if (iVar54 < 0) {
        sVar9 = *(short *)(this + 0x1e20);
        while( true ) {
          sVar27 = sVar9 + (short)iVar54;
          iVar54 = (int)sVar27;
          if (-1 < iVar54) break;
          sVar27 = sVar9 + sVar27;
          iVar54 = (int)sVar27;
          if (-1 < iVar54) break;
          sVar27 = sVar9 + sVar27;
          iVar54 = (int)sVar27;
          if (-1 < iVar54) break;
          sVar27 = sVar9 + sVar27;
          iVar54 = (int)sVar27;
          if (-1 < iVar54) break;
          sVar27 = sVar9 + sVar27;
          iVar54 = (int)sVar27;
          if (-1 < iVar54) break;
          sVar27 = sVar9 + sVar27;
          iVar54 = (int)sVar27;
          if (-1 < iVar54) break;
          sVar27 = sVar9 + sVar27;
          iVar54 = (int)sVar27;
          if (-1 < iVar54) break;
          sVar27 = sVar9 + sVar27;
          iVar54 = (int)sVar27;
          if (-1 < iVar54) break;
          sVar27 = sVar9 + sVar27;
          iVar54 = (int)sVar27;
          if (-1 < iVar54) break;
          sVar27 = sVar9 + sVar27;
          iVar54 = (int)sVar27;
          if (-1 < iVar54) break;
          sVar27 = sVar9 + sVar27;
          iVar54 = (int)sVar27;
          if (-1 < iVar54) break;
          sVar27 = sVar9 + sVar27;
          iVar54 = (int)sVar27;
          if (-1 < iVar54) break;
          sVar27 = sVar9 + sVar27;
          iVar54 = (int)sVar27;
          if (-1 < iVar54) break;
          sVar27 = sVar9 + sVar27;
          iVar54 = (int)sVar27;
          if (-1 < iVar54) break;
          sVar27 = sVar9 + sVar27;
          iVar54 = (int)sVar27;
          if ((-1 < iVar54) || (iVar54 = (int)(short)(sVar9 + sVar27), -1 < iVar54)) break;
        }
      }
      uVar17 = uVar34 - iVar54;
      iVar54 = (int)((long)*(int *)(this + 0x4354) * (long)(int)uVar44 >> 0xf) +
               (int)((long)*(int *)(this + 0x4358) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x9ad0) >> 0xf) +
               (int)((long)*(int *)(this + 0x435c) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x2ac5d0) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x2ac5d0) = iVar54;
      uVar61 = (ulong)((iVar33 + iVar30 & 0x7ffU) << 4);
      uVar44 = uVar17 + 0x8000;
      if (-1 < (int)uVar17) {
        uVar44 = uVar17;
      }
      iVar30 = (int)((long)*(int *)(this + 0x4360) * (long)(int)uVar36 >> 0xf) +
               (int)((long)*(int *)(this + 0x4364) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x9b50) >> 0xf) +
               (int)((long)*(int *)(this + 0x4368) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x2ac650) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x2ac650) = iVar30;
      uVar36 = uVar44 & 0x7fff;
      if (uVar44 < 0x8000) {
        uVar36 = uVar44;
      }
      uVar62 = (ulong)((iVar60 + iVar65 & 0x7ffU) << 4);
      uVar44 = uVar36 - 1;
      if (uVar44 == 0xffffffff) {
        uVar44 = 0x7fff;
      }
      *(int *)(this + uVar50 * 4 + 0x2ac6d0) =
           (int)((long)*(int *)(this + 0x436c) * (long)iVar54 >> 0xf) +
           (int)((long)*(int *)(this + 0x4370) * (long)*(int *)(this + (ulong)uVar59 * 4 + 0x2ac5d0)
                >> 0xf) +
           (int)((long)*(int *)(this + 0x4374) * (long)*(int *)(this + (ulong)uVar55 * 4 + 0x2ac5d0)
                >> 0xf) +
           (int)((long)*(int *)(this + 0x4378) * (long)*(int *)(this + (ulong)uVar59 * 4 + 0x2ac6d0)
                >> 0xf) +
           (int)((long)*(int *)(this + 0x437c) * (long)*(int *)(this + (ulong)uVar55 * 4 + 0x2ac6d0)
                >> 0xf);
      uVar43 = (ulong)((iVar33 + iVar35 & 0x7ffU) << 4);
      *(int *)(this + uVar50 * 4 + 0x2ac750) =
           (int)((long)*(int *)(this + 0x4380) * (long)iVar30 >> 0xf) +
           (int)((long)*(int *)(this + 0x4384) * (long)*(int *)(this + (ulong)uVar59 * 4 + 0x2ac650)
                >> 0xf) +
           (int)((long)*(int *)(this + 0x4388) * (long)*(int *)(this + (ulong)uVar55 * 4 + 0x2ac650)
                >> 0xf) +
           (int)((long)*(int *)(this + 0x438c) * (long)*(int *)(this + (ulong)uVar59 * 4 + 0x2ac750)
                >> 0xf) +
           (int)((long)*(int *)(this + 0x4390) * (long)*(int *)(this + (ulong)uVar55 * 4 + 0x2ac750)
                >> 0xf);
      uVar47 = (ulong)((uVar56 & 0x7ff) << 4);
      iVar65 = (int)((long)*(int *)(this + 0x4394) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x2ac6d0) >> 0xf) +
               (int)((long)*(int *)(this + 0x4398) *
                     (long)*(int *)(this + (ulong)uVar55 * 4 + 0x2ac6d0) >> 0xf) +
               (int)((long)*(int *)(this + 0x439c) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x2ac7d0) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x2ac7d0) = iVar65;
      iVar33 = (int)((long)*(int *)(this + 0x43a0) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x2ac750) >> 0xf) +
               (int)((long)*(int *)(this + 0x43a4) *
                     (long)*(int *)(this + (ulong)uVar55 * 4 + 0x2ac750) >> 0xf) +
               (int)((long)*(int *)(this + 0x43a8) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x2ac850) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x2ac850) = iVar33;
      iVar30 = (*(int *)(this + ((ulong)uVar13 + 0xab2b4) * 4) -
               (int)((long)(uVar47 * (long)*(int *)(this + ((ulong)uVar13 + 0xab2b4) * 4)) >> 0xf))
               + (int)((long)(uVar47 * (long)*(int *)(this + ((ulong)uVar53 + 0xab2b4) * 4)) >> 0xf)
      ;
      *(int *)(this + uVar50 * 4 + 0x2ac8d0) = iVar30;
      iVar35 = (*(int *)(this + ((ulong)uVar15 + 0xab2b4) * 4) -
               (int)((long)(uVar61 * (long)*(int *)(this + ((ulong)uVar15 + 0xab2b4) * 4)) >> 0xf))
               + (int)((long)(uVar61 * (long)*(int *)(this + ((ulong)uVar14 + 0xab2b4) * 4)) >> 0xf)
      ;
      *(int *)(this + uVar50 * 4 + 0x2ac950) = iVar35;
      iVar54 = (*(int *)(this + ((ulong)uVar12 + 0xb32b4) * 4) -
               (int)((long)(uVar62 * (long)*(int *)(this + ((ulong)uVar12 + 0xb32b4) * 4)) >> 0xf))
               + (int)((long)(uVar62 * (long)*(int *)(this + ((ulong)uVar16 + 0xb32b4) * 4)) >> 0xf)
      ;
      *(int *)(this + uVar50 * 4 + 0x2ac9d0) = iVar54;
      iVar29 = (*(int *)(this + ((ulong)uVar36 + 0xb32b4) * 4) -
               (int)((long)(uVar43 * (long)*(int *)(this + ((ulong)uVar36 + 0xb32b4) * 4)) >> 0xf))
               + (int)((long)(uVar43 * (long)*(int *)(this + ((ulong)uVar44 + 0xb32b4) * 4)) >> 0xf)
      ;
      *(int *)(this + uVar50 * 4 + 0x2aca50) = iVar29;
      iVar32 = (int)((long)*(int *)(this + 0x43b0) * (long)iVar33 >> 0xf) +
               (int)((long)*(int *)(this + 0x43ac) * (long)iVar65 >> 0xf) +
               (int)((long)*(int *)(this + 0x43b4) * (long)iVar30 >> 0xf);
      *(int *)(this + (ulong)uVar34 * 4 + 0x2acad0) = iVar32;
      if (iVar60 >= 0) {
        iVar32 = (int)((long)*(int *)(this + 0x43bc) * (long)iVar54 >> 0xf) +
                 (int)((long)iVar33 * (long)*(int *)(this + 0x43b8) >> 0xf);
      }
      *(int *)(this + (ulong)uVar34 * 4 + 0x2ccad0) = iVar32;
      *(int *)(this + uVar50 * 4 + 0x9d50) =
           (int)((long)iVar30 * (long)*(int *)(this + 0x43c4) >> 0xf) +
           (int)((long)iVar65 * (long)*(int *)(this + 0x43c0) >> 0xf) +
           (int)((long)*(int *)(this + 0x43c8) * (long)iVar35 >> 0xf);
      iVar65 = (int)((long)iVar33 * (long)*(int *)(this + 0x43cc) >> 0xf) +
               (int)((long)*(int *)(this + 0x43d0) * (long)iVar54 >> 0xf) +
               (int)((long)*(int *)(this + 0x43d4) * (long)iVar29 >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x9dd0) = iVar65;
      lVar37 = (long)iVar65;
    }
    else if (iVar65 == 1) {
      uVar55 = *(uint *)(this + 0x9a74);
      uVar56 = *(uint *)(this + 0x742c);
      uVar59 = uVar56 + 0x7fff;
      if (-1 < (int)(uVar56 - 1)) {
        uVar59 = uVar56 - 1;
      }
      iVar65 = ((int)((long)*(int *)(this + 0x43d8) * -0x8000 >> 0xf) +
               (int)((long)*(int *)(this + 0x43dc) * -0x8000 >> 0xf)) -
               (int)((long)*(int *)(this + 0x43e0) *
                     (long)*(int *)(this + (ulong)uVar55 * 4 + 0x2ecad4) >> 0xf);
      uVar34 = uVar59 & 0x7fff;
      if (uVar59 < 0x8000) {
        uVar34 = uVar59;
      }
      if (iVar65 < 0x800000) {
        if (iVar65 < -0x800000) {
          iVar65 = iVar65 + 0x1000000;
        }
      }
      else {
        iVar65 = iVar65 + -0x1000000;
      }
      *(int *)(this + uVar50 * 4 + 0x2ecad4) = iVar65;
      iVar65 = *(int *)(this + (ulong)uVar55 * 4 + 0x2ecad4);
      uVar59 = iVar65 + (int)((long)*(int *)(this + 0x43e4) * -0x800000 >> 0xf);
      if ((int)uVar59 < 0x800000) {
        if ((int)uVar59 < -0x800000) {
          uVar59 = uVar59 + 0x1000000;
        }
      }
      else {
        uVar59 = uVar59 - 0x1000000;
      }
      iVar60 = (*(int *)(this + (ulong)uVar55 * 4 + 0x2ecb54) +
               (int)((long)*(int *)(this + 0x442c) *
                     (long)(int)((long)*(int *)(this + 0x43ec) *
                                 (long)(int)(((uVar59 ^ (int)uVar59 >> 0x1f) - ((int)uVar59 >> 0x1f)
                                             ) + (int)((long)*(int *)(this + 0x43e8) * -0x800000 >>
                                                      0xf)) >> 0xf) >> 0xf)) -
               (int)((long)*(int *)(this + 0x4430) *
                     (long)(int)((long)*(int *)(this + 0x43f0) *
                                 (long)*(int *)(this + (ulong)uVar55 * 4 + 0x2ecb54) >> 0xf) >> 0xf)
      ;
      *(int *)(this + uVar50 * 4 + 0x2ecb54) = iVar60;
      uVar59 = iVar65 + (int)((long)*(int *)(this + 0x43f4) * -0x800000 >> 0xf);
      if ((int)uVar59 < 0x800000) {
        if ((int)uVar59 < -0x800000) {
          uVar59 = uVar59 + 0x1000000;
        }
      }
      else {
        uVar59 = uVar59 - 0x1000000;
      }
      iVar33 = (*(int *)(this + (ulong)uVar55 * 4 + 0x2ecbd4) +
               (int)((long)*(int *)(this + 0x4434) *
                     (long)(int)((long)*(int *)(this + 0x43fc) *
                                 (long)(int)(((uVar59 ^ (int)uVar59 >> 0x1f) - ((int)uVar59 >> 0x1f)
                                             ) + (int)((long)*(int *)(this + 0x43f8) * -0x800000 >>
                                                      0xf)) >> 0xf) >> 0xf)) -
               (int)((long)*(int *)(this + 0x4438) *
                     (long)(int)((long)*(int *)(this + 0x4400) *
                                 (long)*(int *)(this + (ulong)uVar55 * 4 + 0x2ecbd4) >> 0xf) >> 0xf)
      ;
      *(int *)(this + uVar50 * 4 + 0x2ecbd4) = iVar33;
      iVar65 = (int)((long)*(int *)(this + 0x4404) * (long)iVar60 >> 0xf);
      if (iVar65 < -0x800000) {
        iVar65 = -0x800000;
      }
      if (0x7fffff < iVar65) {
        iVar65 = 0x7fffff;
      }
      iVar65 = iVar65 + (int)((long)*(int *)(this + 0x4408) * -0x800000 >> 0xf);
      if (iVar65 < 0) {
        iVar65 = 0;
      }
      else if (0x7fffff < iVar65) {
        iVar65 = 0x7fffff;
      }
      iVar65 = (iVar65 + (int)((long)*(int *)(this + 0x440c) * -0x800000 >> 0xf)) * 4;
      if (iVar65 < -0x800000) {
        iVar65 = -0x800000;
      }
      if (0x7fffff < iVar65) {
        iVar65 = 0x7fffff;
      }
      *(int *)(this + uVar50 * 4 + 0x2ecc54) = iVar65;
      iVar65 = (int)((long)*(int *)(this + 0x4410) * (long)iVar33 >> 0xf);
      if (iVar65 < -0x800000) {
        iVar65 = -0x800000;
      }
      if (0x7fffff < iVar65) {
        iVar65 = 0x7fffff;
      }
      iVar65 = iVar65 + (int)((long)*(int *)(this + 0x4414) * -0x800000 >> 0xf);
      if (iVar65 < 0) {
        iVar65 = 0;
      }
      else if (0x7fffff < iVar65) {
        iVar65 = 0x7fffff;
      }
      iVar65 = (iVar65 + (int)((long)*(int *)(this + 0x4418) * -0x800000 >> 0xf)) * 4;
      if (iVar65 < -0x800000) {
        iVar65 = -0x800000;
      }
      if (0x7fffff < iVar65) {
        iVar65 = 0x7fffff;
      }
      *(int *)(this + uVar50 * 4 + 0x2eccd4) = iVar65;
      iVar60 = *(int *)(this + (ulong)uVar55 * 4 + 0x2ecc54);
      iVar65 = (int)((long)*(int *)(this + 0x441c) * (long)iVar60 >> 0xf);
      if (iVar65 < -0x800000) {
        iVar65 = -0x800000;
      }
      if (0x7fffff < iVar65) {
        iVar65 = 0x7fffff;
      }
      *(int *)(this + uVar50 * 4 + 0x2ecd54) = iVar65;
      iVar60 = (int)((long)iVar60 * (long)*(int *)(this + 0x4420) >> 0xf);
      if (iVar60 < -0x800000) {
        iVar60 = -0x800000;
      }
      if (0x7fffff < iVar60) {
        iVar60 = 0x7fffff;
      }
      *(int *)(this + uVar50 * 4 + 0x2ecdd4) = iVar60;
      iVar30 = *(int *)(this + (ulong)uVar55 * 4 + 0x2eccd4);
      iVar33 = (int)((long)*(int *)(this + 0x4424) * (long)iVar30 >> 0xf);
      if (iVar33 < -0x800000) {
        iVar33 = -0x800000;
      }
      if (0x7fffff < iVar33) {
        iVar33 = 0x7fffff;
      }
      *(int *)(this + uVar50 * 4 + 0x2ece54) = iVar33;
      iVar30 = (int)((long)iVar30 * (long)*(int *)(this + 0x4428) >> 0xf);
      if (iVar30 < -0x800000) {
        iVar30 = -0x800000;
      }
      if (0x7fffff < iVar30) {
        iVar30 = 0x7fffff;
      }
      *(int *)(this + uVar50 * 4 + 0x2eced4) = iVar30;
      iVar54 = *(int *)(this + 0x9844);
      iVar29 = *(int *)(this + 0x9848);
      iVar35 = iVar60 + iVar54 >> 0xb;
      iVar32 = (int)(short)iVar35;
      sVar9 = (short)(iVar29 + iVar30 >> 0xb);
      if (iVar29 < 0) {
        sVar9 = sVar9 + (short)*(undefined4 *)(this + 0x32d2d4);
      }
      iVar70 = (int)sVar9;
      if (iVar32 < 0) {
        uVar11 = *(ushort *)(this + 0x1e20);
        uVar59 = (uint)uVar11 + iVar35 & 0xffff;
        do {
          sVar9 = (short)uVar59 + uVar11;
          iVar32 = (int)(short)uVar59;
          if (-1 < iVar32) break;
          sVar27 = sVar9 + uVar11;
          iVar32 = (int)sVar9;
          if (-1 < iVar32) break;
          sVar9 = sVar27 + uVar11;
          iVar32 = (int)sVar27;
          if (-1 < iVar32) break;
          sVar27 = sVar9 + uVar11;
          iVar32 = (int)sVar9;
          if (-1 < iVar32) break;
          sVar9 = sVar27 + uVar11;
          iVar32 = (int)sVar27;
          if (-1 < iVar32) break;
          sVar27 = sVar9 + uVar11;
          iVar32 = (int)sVar9;
          if (-1 < iVar32) break;
          sVar9 = sVar27 + uVar11;
          iVar32 = (int)sVar27;
          if (-1 < iVar32) break;
          sVar27 = sVar9 + uVar11;
          iVar32 = (int)sVar9;
          if (-1 < iVar32) break;
          sVar9 = sVar27 + uVar11;
          iVar32 = (int)sVar27;
          if (-1 < iVar32) break;
          sVar27 = sVar9 + uVar11;
          iVar32 = (int)sVar9;
          if (-1 < iVar32) break;
          sVar9 = sVar27 + uVar11;
          iVar32 = (int)sVar27;
          if (-1 < iVar32) break;
          sVar27 = sVar9 + uVar11;
          iVar32 = (int)sVar9;
          if (-1 < iVar32) break;
          sVar9 = sVar27 + uVar11;
          iVar32 = (int)sVar27;
          if (-1 < iVar32) break;
          sVar27 = sVar9 + uVar11;
          iVar32 = (int)sVar9;
          if (-1 < iVar32) break;
          sVar9 = sVar27 + uVar11;
          iVar32 = (int)sVar27;
          if (-1 < iVar32) break;
          iVar32 = (int)sVar9;
          uVar59 = (uint)(ushort)(sVar9 + uVar11);
        } while (iVar32 < 0);
      }
      uVar53 = uVar56 - iVar32;
      uVar59 = uVar53 + 0x8000;
      if (-1 < (int)uVar53) {
        uVar59 = uVar53;
      }
      uVar53 = uVar59 & 0x7fff;
      if (uVar59 < 0x8000) {
        uVar53 = uVar59;
      }
      uVar59 = uVar53 - 1;
      if (uVar59 == 0xffffffff) {
        uVar59 = 0x7fff;
      }
      if (iVar70 < 0) {
        sVar9 = *(short *)(this + 0x1e20);
        while( true ) {
          sVar27 = sVar9 + (short)iVar70;
          iVar70 = (int)sVar27;
          if (-1 < iVar70) break;
          sVar27 = sVar9 + sVar27;
          iVar70 = (int)sVar27;
          if (-1 < iVar70) break;
          sVar27 = sVar9 + sVar27;
          iVar70 = (int)sVar27;
          if (-1 < iVar70) break;
          sVar27 = sVar9 + sVar27;
          iVar70 = (int)sVar27;
          if (-1 < iVar70) break;
          sVar27 = sVar9 + sVar27;
          iVar70 = (int)sVar27;
          if (-1 < iVar70) break;
          sVar27 = sVar9 + sVar27;
          iVar70 = (int)sVar27;
          if (-1 < iVar70) break;
          sVar27 = sVar9 + sVar27;
          iVar70 = (int)sVar27;
          if (-1 < iVar70) break;
          sVar27 = sVar9 + sVar27;
          iVar70 = (int)sVar27;
          if (-1 < iVar70) break;
          sVar27 = sVar9 + sVar27;
          iVar70 = (int)sVar27;
          if (-1 < iVar70) break;
          sVar27 = sVar9 + sVar27;
          iVar70 = (int)sVar27;
          if (-1 < iVar70) break;
          sVar27 = sVar9 + sVar27;
          iVar70 = (int)sVar27;
          if (-1 < iVar70) break;
          sVar27 = sVar9 + sVar27;
          iVar70 = (int)sVar27;
          if (-1 < iVar70) break;
          sVar27 = sVar9 + sVar27;
          iVar70 = (int)sVar27;
          if (-1 < iVar70) break;
          sVar27 = sVar9 + sVar27;
          iVar70 = (int)sVar27;
          if (-1 < iVar70) break;
          sVar27 = sVar9 + sVar27;
          iVar70 = (int)sVar27;
          if ((-1 < iVar70) || (iVar70 = (int)(short)(sVar9 + sVar27), -1 < iVar70)) break;
        }
      }
      uVar14 = uVar56 - iVar70;
      uVar13 = uVar14 + 0x8000;
      if (-1 < (int)uVar14) {
        uVar13 = uVar14;
      }
      iVar35 = (int)((long)*(int *)(this + 0x443c) * (long)(int)uVar44 >> 0xf) +
               (int)((long)*(int *)(this + 0x4440) *
                     (long)*(int *)(this + (ulong)uVar55 * 4 + 0x9ad0) >> 0xf) +
               (int)((long)*(int *)(this + 0x4444) *
                     (long)*(int *)(this + (ulong)uVar55 * 4 + 0x2ecf54) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x2ecf54) = iVar35;
      uVar44 = uVar13 & 0x7fff;
      if (uVar13 < 0x8000) {
        uVar44 = uVar13;
      }
      uVar13 = uVar44 - 1;
      if (uVar13 == 0xffffffff) {
        uVar13 = 0x7fff;
      }
      iVar32 = (int)((long)*(int *)(this + 0x4448) * (long)(int)uVar36 >> 0xf) +
               (int)((long)*(int *)(this + 0x444c) *
                     (long)*(int *)(this + (ulong)uVar55 * 4 + 0x9b50) >> 0xf) +
               (int)((long)*(int *)(this + 0x4450) *
                     (long)*(int *)(this + (ulong)uVar55 * 4 + 0x2ecfd4) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x2ecfd4) = iVar32;
      iVar35 = (int)((long)*(int *)(this + 0x4454) * (long)iVar35 >> 0xf) +
               (int)((long)*(int *)(this + 0x4458) *
                     (long)*(int *)(this + (ulong)uVar55 * 4 + 0x2ecf54) >> 0xf) +
               (int)((long)*(int *)(this + 0x445c) *
                     (long)*(int *)(this + (ulong)uVar55 * 4 + 0x2ed054) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x2ed054) = iVar35;
      iVar32 = (int)((long)*(int *)(this + 0x4460) * (long)iVar32 >> 0xf) +
               (int)((long)*(int *)(this + 0x4464) *
                     (long)*(int *)(this + (ulong)uVar55 * 4 + 0x2ecfd4) >> 0xf) +
               (int)((long)*(int *)(this + 0x4468) *
                     (long)*(int *)(this + (ulong)uVar34 * 4 + 0x2ed0d4) >> 0xf);
      *(int *)(this + (ulong)uVar56 * 4 + 0x2ed0d4) = iVar32;
      iVar35 = (int)((long)*(int *)(this + 0x4470) * (long)iVar32 >> 0xf) +
               (int)((long)*(int *)(this + 0x446c) * (long)iVar35 >> 0xf);
      *(int *)(this + (ulong)uVar56 * 4 + 0x30d0d4) = iVar35;
      if (iVar29 < 0) {
        *(int *)(this + (ulong)uVar56 * 4 + 0x2ed0d4) = iVar35;
      }
      uVar62 = (ulong)((iVar60 + iVar54 & 0x7ffU) << 4);
      uVar61 = (ulong)((iVar29 + iVar30 & 0x7ffU) << 4);
      *(int *)(this + uVar50 * 4 + 0x32d0d4) =
           (*(int *)(this + ((ulong)uVar53 + 0xc3000) * 4 + 0x10d4) -
           (int)((long)(uVar62 * (long)*(int *)(this + ((ulong)uVar53 + 0xc3000) * 4 + 0x10d4)) >>
                0xf)) +
           (int)((long)(uVar62 * (long)*(int *)(this + ((ulong)uVar59 + 0xc3000) * 4 + 0x10d4)) >>
                0xf);
      *(int *)(this + uVar50 * 4 + 0x32d154) =
           (*(int *)(this + ((ulong)uVar44 + 0xbb000) * 4 + 0x10d4) -
           (int)((long)(uVar61 * (long)*(int *)(this + ((ulong)uVar44 + 0xbb000) * 4 + 0x10d4)) >>
                0xf)) +
           (int)((long)(uVar61 * (long)*(int *)(this + ((ulong)uVar13 + 0xbb000) * 4 + 0x10d4)) >>
                0xf);
      iVar60 = *(int *)(this + (ulong)uVar55 * 4 + 0x32d0d4) +
               (int)((long)iVar65 * (long)*(int *)(this + (ulong)uVar55 * 4 + 0x32d0d4) >> 0x17);
      *(int *)(this + uVar50 * 4 + 0x32d1d4) = iVar60;
      iVar30 = *(int *)(this + (ulong)uVar55 * 4 + 0x32d154) +
               (int)((long)iVar33 * (long)*(int *)(this + (ulong)uVar55 * 4 + 0x32d154) >> 0x17);
      *(int *)(this + uVar50 * 4 + 0x32d254) = iVar30;
      *(int *)(this + uVar50 * 4 + 0x9d50) =
           (int)((long)*(int *)(this + 0x4478) *
                 (long)(int)((long)iVar65 * (long)*(int *)(this + (ulong)uVar55 * 4 + 0x2ed054) >>
                            0x17) >> 0xf) +
           (int)((long)*(int *)(this + (ulong)uVar55 * 4 + 0x2ed054) * (long)*(int *)(this + 0x4474)
                >> 0xf) + (int)((long)*(int *)(this + 0x447c) * (long)iVar60 >> 0xf);
      iVar65 = (int)((long)*(int *)(this + 0x4484) *
                     (long)(int)((long)iVar33 * (long)*(int *)(this + (ulong)uVar34 * 4 + 0x2ed0d4)
                                >> 0x17) >> 0xf) +
               (int)((long)*(int *)(this + (ulong)uVar34 * 4 + 0x2ed0d4) *
                     (long)*(int *)(this + 0x4480) >> 0xf) +
               (int)((long)*(int *)(this + 0x4488) * (long)iVar30 >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x9dd0) = iVar65;
      lVar37 = (long)iVar65;
    }
    else if (iVar65 == 2) {
      uVar59 = *(uint *)(this + 0x9a74);
      iVar65 = *(int *)(this + (ulong)uVar59 * 4 + 0x32d2d8) +
               (int)((long)*(int *)(this + 0x448c) * -0x8000 >> 0xf);
      if (iVar65 < 0x800000) {
        if (iVar65 < -0x800000) {
          iVar65 = iVar65 + 0x1000000;
        }
      }
      else {
        iVar65 = iVar65 + -0x1000000;
      }
      *(int *)(this + uVar50 * 4 + 0x32d2d8) = iVar65;
      iVar65 = (int)((long)*(int *)(this + 0x4490) * (long)iVar65 >> 0xf) +
               (int)((long)*(int *)(this + 0x4494) * -0x800000 >> 0xf);
      if (iVar65 < 0) {
        iVar65 = 0;
      }
      else if (0x7fffff < iVar65) {
        iVar65 = 0x7fffff;
      }
      *(int *)(this + uVar50 * 4 + 0x32d358) = iVar65;
      iVar65 = (int)((long)*(int *)(this + 0x4498) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x32d358) >> 0xf);
      if (iVar65 < 0) {
        iVar65 = 0;
      }
      else if (0x7fffff < iVar65) {
        iVar65 = 0x7fffff;
      }
      *(int *)(this + uVar50 * 4 + 0x32d458) = iVar65;
      iVar33 = *(int *)(this + (ulong)uVar59 * 4 + 0x32d2d8);
      iVar60 = iVar33 + (int)((long)*(int *)(this + 0x449c) * -0x800000 >> 0xf);
      if (iVar60 < 0x800000) {
        if (iVar60 < -0x800000) {
          iVar60 = iVar60 + 0x1000000;
        }
      }
      else {
        iVar60 = iVar60 + -0x1000000;
      }
      iVar60 = (int)((long)*(int *)(this + 0x44a0) * (long)iVar60 >> 0xf) +
               (int)((long)*(int *)(this + 0x44a4) * -0x800000 >> 0xf);
      if ((iVar60 < 0) ||
         (iVar60 = (int)((long)*(int *)(this + 0x44a8) * (long)iVar60 >> 0xf), iVar60 < 0)) {
        iVar60 = 0;
      }
      else if (0x7fffff < iVar60) {
        iVar60 = 0x7fffff;
      }
      *(int *)(this + uVar50 * 4 + 0x32d4d8) = iVar60;
      uVar55 = (uint)((ulong)((long)*(int *)(this + 0x44ac) * (long)iVar33 * 0x20000) >> 0x20);
      uVar56 = (int)uVar55 >> 0x1f;
      iVar30 = ((uVar55 ^ uVar56) - uVar56) * 4;
      iVar33 = iVar30 + (int)((long)*(int *)(this + 0x44b0) * -0x800000 >> 0xf);
      if (iVar33 < 0) {
        lVar37 = 0;
        iVar33 = 0;
      }
      else {
        iVar33 = (int)((long)iVar33 * (long)*(int *)(this + 0x44b4) >> 0xf);
        if (iVar33 < -0x800000) {
          iVar33 = -0x800000;
        }
        if (0x7fffff < iVar33) {
          iVar33 = 0x7fffff;
        }
        lVar37 = (long)iVar33;
      }
      *(int *)(this + uVar50 * 4 + 0x32d658) = iVar33;
      iVar30 = iVar30 + (int)((long)*(int *)(this + 0x44b8) * -0x800000 >> 0xf);
      if (iVar30 < 0) {
        lVar64 = 0;
        iVar33 = 0;
      }
      else {
        iVar33 = (int)((long)iVar30 * (long)*(int *)(this + 0x44bc) >> 0xf);
        if (iVar33 < -0x800000) {
          iVar33 = -0x800000;
        }
        if (0x7fffff < iVar33) {
          iVar33 = 0x7fffff;
        }
        lVar64 = (long)iVar33;
      }
      *(int *)(this + uVar50 * 4 + 0x32d6d8) = iVar33;
      iVar33 = *(int *)(this + (ulong)uVar59 * 4 + 0x32d3d8) +
               (int)((long)*(int *)(this + 0x44c0) * -0x8000 >> 0xf);
      if (iVar33 < 0x800000) {
        if (iVar33 < -0x800000) {
          iVar33 = iVar33 + 0x1000000;
        }
      }
      else {
        iVar33 = iVar33 + -0x1000000;
      }
      *(int *)(this + uVar50 * 4 + 0x32d3d8) = iVar33;
      iVar30 = *(int *)(this + (ulong)uVar59 * 4 + 0x32d3d8);
      iVar33 = (int)((long)*(int *)(this + 0x44c4) * (long)iVar30 >> 0xf) +
               (int)((long)*(int *)(this + 0x44c8) * -0x800000 >> 0xf);
      if ((iVar33 < 0) ||
         (iVar33 = (int)((long)*(int *)(this + 0x44cc) * (long)iVar33 >> 0xf), iVar33 < 0)) {
        iVar33 = 0;
      }
      else if (0x7fffff < iVar33) {
        iVar33 = 0x7fffff;
      }
      *(int *)(this + uVar50 * 4 + 0x32d558) = iVar33;
      iVar35 = iVar30 + (int)((long)*(int *)(this + 0x44d0) * -0x800000 >> 0xf);
      if (iVar35 < 0x800000) {
        if (iVar35 < -0x800000) {
          iVar35 = iVar35 + 0x1000000;
        }
      }
      else {
        iVar35 = iVar35 + -0x1000000;
      }
      iVar35 = (int)((long)*(int *)(this + 0x44d4) * (long)iVar35 >> 0xf) +
               (int)((long)*(int *)(this + 0x44d8) * -0x800000 >> 0xf);
      if ((iVar35 < 0) ||
         (iVar35 = (int)((long)*(int *)(this + 0x44dc) * (long)iVar35 >> 0xf), iVar35 < 0)) {
        iVar35 = 0;
      }
      else if (0x7fffff < iVar35) {
        iVar35 = 0x7fffff;
      }
      *(int *)(this + uVar50 * 4 + 0x32d5d8) = iVar35;
      uVar55 = (uint)((ulong)((long)iVar30 * (long)*(int *)(this + 0x44e0) * 0x20000) >> 0x20);
      uVar56 = (int)uVar55 >> 0x1f;
      iVar54 = ((uVar55 ^ uVar56) - uVar56) * 4;
      iVar30 = iVar54 + (int)((long)*(int *)(this + 0x44e4) * -0x800000 >> 0xf);
      if (iVar30 < 0) {
        lVar67 = 0;
        iVar30 = 0;
      }
      else {
        iVar30 = (int)((long)iVar30 * (long)*(int *)(this + 0x44e8) >> 0xf);
        if (iVar30 < -0x800000) {
          iVar30 = -0x800000;
        }
        if (0x7fffff < iVar30) {
          iVar30 = 0x7fffff;
        }
        lVar67 = (long)iVar30;
      }
      *(int *)(this + uVar50 * 4 + 0x32d758) = iVar30;
      iVar54 = iVar54 + (int)((long)*(int *)(this + 0x44ec) * -0x800000 >> 0xf);
      if (iVar54 < 0) {
        lVar52 = 0;
        iVar30 = 0;
      }
      else {
        iVar30 = (int)((long)iVar54 * (long)*(int *)(this + 0x44f0) >> 0xf);
        if (iVar30 < -0x800000) {
          iVar30 = -0x800000;
        }
        if (0x7fffff < iVar30) {
          iVar30 = 0x7fffff;
        }
        lVar52 = (long)iVar30;
      }
      *(int *)(this + uVar50 * 4 + 0x32d7d8) = iVar30;
      iVar30 = (int)(short)((short)(iVar65 + *(int *)(this + 0x984c) >> 0xb) + 2);
      uVar55 = *(uint *)(this + 0x742c);
      if (iVar30 < 0) {
        sVar9 = *(short *)(this + 0x1e20);
        while( true ) {
          sVar27 = sVar9 + (short)iVar30;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if ((-1 < iVar30) || (iVar30 = (int)(short)(sVar9 + sVar27), -1 < iVar30)) break;
        }
      }
      uVar34 = uVar55 - iVar30;
      uVar56 = uVar34 + 0x8000;
      if (-1 < (int)uVar34) {
        uVar56 = uVar34;
      }
      uVar34 = uVar56 & 0x7fff;
      if (uVar56 < 0x8000) {
        uVar34 = uVar56;
      }
      iVar30 = (int)(short)((short)(iVar33 + *(int *)(this + 0x9854) >> 0xb) + 2);
      uVar56 = uVar34 - 1;
      if (uVar56 == 0xffffffff) {
        uVar56 = 0x7fff;
      }
      if (iVar30 < 0) {
        sVar9 = *(short *)(this + 0x1e20);
        while( true ) {
          sVar27 = sVar9 + (short)iVar30;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if ((-1 < iVar30) || (iVar30 = (int)(short)(sVar9 + sVar27), -1 < iVar30)) break;
        }
      }
      uVar13 = uVar55 - iVar30;
      uVar53 = uVar13 + 0x8000;
      if (-1 < (int)uVar13) {
        uVar53 = uVar13;
      }
      uVar13 = uVar53 & 0x7fff;
      if (uVar53 < 0x8000) {
        uVar13 = uVar53;
      }
      iVar30 = (int)(short)((short)(iVar60 + *(int *)(this + 0x9850) >> 0xb) + 2);
      uVar53 = uVar13 - 1;
      if (uVar53 == 0xffffffff) {
        uVar53 = 0x7fff;
      }
      if (iVar30 < 0) {
        sVar9 = *(short *)(this + 0x1e20);
        while( true ) {
          sVar27 = sVar9 + (short)iVar30;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if ((-1 < iVar30) || (iVar30 = (int)(short)(sVar9 + sVar27), -1 < iVar30)) break;
        }
      }
      uVar15 = uVar55 - iVar30;
      uVar14 = uVar15 + 0x8000;
      if (-1 < (int)uVar15) {
        uVar14 = uVar15;
      }
      uVar15 = uVar14 & 0x7fff;
      if (uVar14 < 0x8000) {
        uVar15 = uVar14;
      }
      uVar14 = uVar15 - 1;
      if (uVar14 == 0xffffffff) {
        uVar14 = 0x7fff;
      }
      iVar30 = (int)(short)((short)(iVar35 + *(int *)(this + 39000) >> 0xb) + 2);
      if (iVar30 < 0) {
        sVar9 = *(short *)(this + 0x1e20);
        while( true ) {
          sVar27 = sVar9 + (short)iVar30;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if (-1 < iVar30) break;
          sVar27 = sVar9 + sVar27;
          iVar30 = (int)sVar27;
          if ((-1 < iVar30) || (iVar30 = (int)(short)(sVar9 + sVar27), -1 < iVar30)) break;
        }
      }
      uVar61 = (ulong)((iVar65 + *(int *)(this + 0x984c) & 0x7ffU) << 4);
      uVar47 = (ulong)((iVar33 + *(int *)(this + 0x9854) & 0x7ffU) << 4);
      uVar68 = NEON_sshr(uVar61 * (long)*(int *)(this + ((ulong)uVar56 + 0xcb000) * 4 + 7000),0xf);
      uVar56 = uVar55 - iVar30;
      uVar62 = (ulong)((iVar60 + *(int *)(this + 0x9850) & 0x7ffU) << 4);
      uVar16 = uVar56 + 0x8000;
      if (-1 < (int)uVar56) {
        uVar16 = uVar56;
      }
      uVar69 = NEON_sshr(uVar61 * (long)*(int *)(this + ((ulong)uVar34 + 0xcb000) * 4 + 7000),0xf);
      uVar61 = (ulong)((iVar35 + *(int *)(this + 39000) & 0x7ffU) << 4);
      *(int *)(this + uVar50 * 4 + 0x32d858) =
           (*(int *)(this + ((ulong)uVar34 + 0xcb000) * 4 + 7000) - (int)uVar69) + (int)uVar68;
      uVar56 = uVar16 & 0x7fff;
      if (uVar16 < 0x8000) {
        uVar56 = uVar16;
      }
      uVar34 = uVar56 - 1;
      if (uVar34 == 0xffffffff) {
        uVar34 = 0x7fff;
      }
      uVar68 = NEON_sshr(*(int *)(this + (ulong)uVar59 * 4 + 0x32da58) * lVar64,0x17);
      iVar65 = (*(int *)(this + (ulong)uVar59 * 4 + 0x32d858) -
               (int)(*(int *)(this + (ulong)uVar59 * 4 + 0x32d858) * lVar37 >> 0x17)) + (int)uVar68;
      *(int *)(this + uVar50 * 4 + 0x32d8d8) = iVar65;
      uVar68 = NEON_sshr(uVar47 * (long)*(int *)(this + ((ulong)uVar13 + 0xd3000) * 4 + 7000),0xf);
      *(int *)(this + uVar50 * 4 + 0x32d958) =
           (*(int *)(this + ((ulong)uVar13 + 0xd3000) * 4 + 7000) - (int)uVar68) +
           (int)((long)(uVar47 * (long)*(int *)(this + ((ulong)uVar53 + 0xd3000) * 4 + 7000)) >> 0xf
                );
      iVar60 = (*(int *)(this + (ulong)uVar59 * 4 + 0x32d958) -
               (int)(*(int *)(this + (ulong)uVar59 * 4 + 0x32d958) * lVar67 >> 0x17)) +
               (int)(*(int *)(this + (ulong)uVar59 * 4 + 0x32dad8) * lVar52 >> 0x17);
      *(int *)(this + uVar50 * 4 + 0x32d9d8) = iVar60;
      *(int *)(this + uVar50 * 4 + 0x32da58) =
           (*(int *)(this + ((ulong)uVar15 + 0xcb000) * 4 + 7000) -
           (int)((long)(uVar62 * (long)*(int *)(this + ((ulong)uVar15 + 0xcb000) * 4 + 7000)) >> 0xf
                )) + (int)((long)(uVar62 * (long)*(int *)(this + ((ulong)uVar14 + 0xcb000) * 4 +
                                                                 7000)) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x32dad8) =
           (*(int *)(this + ((ulong)uVar56 + 0xd3000) * 4 + 7000) -
           (int)((long)(uVar61 * (long)*(int *)(this + ((ulong)uVar56 + 0xd3000) * 4 + 7000)) >> 0xf
                )) + (int)((long)(uVar61 * (long)*(int *)(this + ((ulong)uVar34 + 0xd3000) * 4 +
                                                                 7000)) >> 0xf);
      *(int *)(this + (ulong)uVar55 * 4 + 0x32db58) =
           (int)((long)*(int *)(this + 0x44f4) * (long)(int)uVar44 >> 0xf) +
           (int)((long)*(int *)(this + 0x44f8) * (long)(int)uVar36 >> 0xf) +
           (int)((long)*(int *)(this + 0x44fc) * (long)iVar65 >> 0xf);
      *(int *)(this + (ulong)uVar55 * 4 + 0x34db58) =
           (int)((long)*(int *)(this + 0x4504) * (long)iVar60 >> 0xf) +
           (int)((long)(int)uVar36 * (long)*(int *)(this + 0x4500) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x9d50) =
           (int)((long)iVar65 * (long)*(int *)(this + 0x450c) >> 0xf) +
           (int)((long)*(int *)(this + 0x4508) * (long)*(int *)(this + (ulong)uVar59 * 4 + 0x9ad0)
                >> 0xf) + (int)((long)iVar60 * (long)*(int *)(this + 0x4510) >> 0xf);
      iVar65 = (int)((long)iVar65 * (long)*(int *)(this + 0x4518) >> 0xf) +
               (int)((long)*(int *)(this + 0x4514) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x9b50) >> 0xf) +
               (int)((long)iVar60 * (long)*(int *)(this + 0x451c) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x9dd0) = iVar65;
      lVar37 = (long)iVar65;
    }
    else if (iVar65 == 3) {
      uVar59 = *(uint *)(this + 0x9a74);
      uVar55 = *(uint *)(this + 0x9a78);
      iVar65 = (int)((long)*(int *)(this + 0x4520) * -0x8000 >> 0xf) -
               (int)((long)*(int *)(this + 0x4524) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36db58) >> 0xf);
      if (iVar65 < 0x800000) {
        if (iVar65 < -0x800000) {
          iVar65 = iVar65 + 0x1000000;
        }
      }
      else {
        iVar65 = iVar65 + -0x1000000;
      }
      *(int *)(this + uVar50 * 4 + 0x36db58) = iVar65;
      uVar56 = (uint)((long)*(int *)(this + 0x4528) *
                      (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36db58) >> 0xf);
      if ((int)uVar56 < 0x800000) {
        if ((int)uVar56 < -0x800000) {
          uVar56 = uVar56 + 0x1000000;
        }
      }
      else {
        uVar56 = uVar56 - 0x1000000;
      }
      iVar65 = ((uVar56 ^ (int)uVar56 >> 0x1f) - ((int)uVar56 >> 0x1f)) +
               (int)((long)*(int *)(this + 0x452c) * -0x800000 >> 0xf);
      if (iVar65 < -0x800000) {
        iVar65 = -0x800000;
      }
      if (0x7fffff < iVar65) {
        iVar65 = 0x7fffff;
      }
      lVar37 = (long)iVar65 * (long)iVar65 >> 0x17;
      lVar37 = lVar37 * lVar37 >> 0x17;
      *(int *)(this + uVar50 * 4 + 0x36dbd8) = (int)lVar37;
      iVar65 = (int)((long)*(int *)(this + 0x4530) * (long)(int)uVar44 >> 0xf) +
               (int)((long)*(int *)(this + 0x4534) * (long)(int)uVar36 >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x36dc58) = iVar65;
      *(int *)(this + uVar50 * 4 + 0x36dcd8) =
           (int)((long)*(int *)(this + 0x4538) * (long)iVar65 >> 0xf) +
           (int)((long)*(int *)(this + 0x453c) * (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36dc58)
                >> 0xf) +
           (int)((long)*(int *)(this + 0x4540) * (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36dcd8)
                >> 0xf);
      iVar33 = (int)((long)*(int *)(this + 0x4544) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36dcd8) >> 0xf) +
               (int)((long)*(int *)(this + 0x4548) *
                     (long)*(int *)(this + ((ulong)uVar55 + 0xdb000) * 4 + 0x1cd8) >> 0xf) +
               (int)((long)*(int *)(this + 0x454c) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36dd58) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x36dd58) = iVar33;
      iVar30 = *(int *)(this + (ulong)uVar59 * 4 + 0x36e058);
      iVar35 = *(int *)(this + (ulong)uVar59 * 4 + 0x36e158);
      iVar54 = *(int *)(this + (ulong)uVar59 * 4 + 0x36e0d8);
      uVar68 = NEON_sshr((long)*(int *)(this + 0x4550) * (long)iVar30,0xf);
      uVar75 = NEON_sshr(iVar30 * lVar37,0x17);
      iVar65 = (int)uVar68 + (int)((long)*(int *)(this + 0x4554) * (long)iVar54 >> 0xf) +
               (int)((long)*(int *)(this + 0x4558) * (long)iVar35 >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x36ddd8) = iVar65;
      uVar76 = NEON_sshr(iVar54 * lVar37,0x17);
      iVar29 = *(int *)(this + (ulong)uVar59 * 4 + 0x36e1d8);
      uVar69 = NEON_sshr(iVar35 * lVar37,0x17);
      uVar68 = NEON_sshr((long)iVar54 * (long)*(int *)(this + 0x455c),0xf);
      iVar60 = (int)uVar68 + (int)((long)iVar35 * (long)*(int *)(this + 0x4560) >> 0xf) +
               (int)((long)*(int *)(this + 0x4564) * (long)iVar29 >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x36de58) = iVar60;
      uVar68 = NEON_sshr(iVar29 * lVar37,0x17);
      iVar33 = iVar33 + (int)((long)*(int *)(this + 0x4568) * (long)iVar60 >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x36ded8) = iVar33;
      uVar73 = NEON_sshr((long)*(int *)(this + 0x456c) *
                         (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36ded8),0xf);
      uVar72 = NEON_sshr(lVar37 * *(int *)(this + (ulong)uVar59 * 4 + 0x36df58),0x17);
      iVar33 = ((((int)uVar73 + (int)(lVar37 * iVar33 >> 0x17)) -
                (int)((long)iVar33 * (long)*(int *)(this + 0x4570) >> 0xf)) +
               *(int *)(this + (ulong)uVar59 * 4 + 0x36df58)) - (int)uVar72;
      *(int *)(this + uVar50 * 4 + 0x36df58) = iVar33;
      uVar72 = NEON_sshr(lVar37 * iVar33,0x17);
      iVar33 = ((((int)uVar72 +
                 (int)((long)*(int *)(this + 0x4574) *
                       (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36df58) >> 0xf)) -
                (int)((long)iVar33 * (long)*(int *)(this + 0x4578) >> 0xf)) +
               *(int *)(this + (ulong)uVar59 * 4 + 0x36dfd8)) -
               (int)(lVar37 * *(int *)(this + (ulong)uVar59 * 4 + 0x36dfd8) >> 0x17);
      *(int *)(this + uVar50 * 4 + 0x36dfd8) = iVar33;
      uVar72 = NEON_sshr(lVar37 * iVar33,0x17);
      iVar33 = (iVar30 + (((int)uVar72 +
                          (int)((long)*(int *)(this + 0x457c) *
                                (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36dfd8) >> 0xf)) -
                         (int)((long)iVar33 * (long)*(int *)(this + 0x4580) >> 0xf))) - (int)uVar75;
      *(int *)(this + uVar50 * 4 + 0x36e058) = iVar33;
      iVar33 = (iVar54 + (((int)(lVar37 * iVar33 >> 0x17) +
                          (int)((long)*(int *)(this + 0x4584) *
                                (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36e058) >> 0xf)) -
                         (int)((long)iVar33 * (long)*(int *)(this + 0x4588) >> 0xf))) - (int)uVar76;
      *(int *)(this + uVar50 * 4 + 0x36e0d8) = iVar33;
      iVar33 = (iVar35 + (((int)(lVar37 * iVar33 >> 0x17) +
                          (int)((long)*(int *)(this + 0x458c) *
                                (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36e0d8) >> 0xf)) -
                         (int)((long)iVar33 * (long)*(int *)(this + 0x4590) >> 0xf))) - (int)uVar69;
      *(int *)(this + uVar50 * 4 + 0x36e158) = iVar33;
      *(int *)(this + uVar50 * 4 + 0x36e1d8) =
           (iVar29 + (((int)(lVar37 * iVar33 >> 0x17) +
                      (int)((long)*(int *)(this + 0x4594) *
                            (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36e158) >> 0xf)) -
                     (int)((long)iVar33 * (long)*(int *)(this + 0x4598) >> 0xf))) - (int)uVar68;
      *(int *)(this + uVar50 * 4 + 0x9d50) =
           (int)((long)*(int *)(this + 0x45a0) * (long)iVar65 >> 0xf) +
           (int)((long)*(int *)(this + 0x459c) * (long)*(int *)(this + (ulong)uVar59 * 4 + 0x9ad0)
                >> 0xf) + (int)((long)iVar60 * (long)*(int *)(this + 0x45a4) >> 0xf);
      iVar65 = (int)((long)iVar60 * (long)*(int *)(this + 0x45ac) >> 0xf) +
               (int)((long)*(int *)(this + 0x45a8) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x9b50) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x9dd0) = iVar65;
      lVar37 = (long)iVar65;
    }
    else if (iVar65 == 4) {
      uVar59 = *(uint *)(this + 0x9a74);
      uVar55 = *(uint *)(this + 0x9a78);
      iVar65 = (int)((long)*(int *)(this + 0x45b0) * (long)(int)uVar44 >> 0xf) +
               (int)((long)*(int *)(this + 0x45b4) * (long)(int)uVar36 >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x36e258) = iVar65;
      iVar60 = (int)((long)*(int *)(this + 0x45b8) * (long)iVar65 >> 0xf) +
               (int)((long)*(int *)(this + 0x45bc) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36e258) >> 0xf);
      if (iVar60 < -0x800000) {
        iVar60 = -0x800000;
      }
      if (0x7fffff < iVar60) {
        iVar60 = 0x7fffff;
      }
      iVar60 = iVar60 + (int)((long)*(int *)(this + 0x45c0) *
                              (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36e2d8) >> 0xf);
      if (iVar60 < -0x800000) {
        iVar60 = -0x800000;
      }
      if (0x7fffff < iVar60) {
        iVar60 = 0x7fffff;
      }
      *(int *)(this + uVar50 * 4 + 0x36e2d8) = iVar60;
      iVar60 = (int)((long)*(int *)(this + 0x45c4) * (long)iVar60 >> 0xf) +
               (int)((long)*(int *)(this + 0x45c8) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36e2d8) >> 0xf);
      if (iVar60 < -0x800000) {
        iVar60 = -0x800000;
      }
      if (0x7fffff < iVar60) {
        iVar60 = 0x7fffff;
      }
      iVar60 = iVar60 + (int)((long)*(int *)(this + 0x45cc) *
                              (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36e358) >> 0xf);
      if (iVar60 < -0x800000) {
        iVar60 = -0x800000;
      }
      if (0x7fffff < iVar60) {
        iVar60 = 0x7fffff;
      }
      *(int *)(this + uVar50 * 4 + 0x36e358) = iVar60;
      iVar60 = (int)((long)*(int *)(this + 0x45d0) * (long)iVar60 >> 0xf);
      if (iVar60 < -0x800000) {
        iVar60 = -0x800000;
      }
      if (0x7fffff < iVar60) {
        iVar60 = 0x7fffff;
      }
      iVar60 = (int)((long)*(int *)(this + 0x45d4) * (long)iVar60 >> 0xf);
      if (iVar60 < -0x800000) {
        iVar60 = -0x800000;
      }
      if (0x7fffff < iVar60) {
        iVar60 = 0x7fffff;
      }
      iVar60 = (int)((long)*(int *)(this + 0x45d8) * (long)iVar60 >> 0xf);
      if (iVar60 < -0x800000) {
        iVar60 = -0x800000;
      }
      if (0x7fffff < iVar60) {
        iVar60 = 0x7fffff;
      }
      iVar60 = (int)((long)*(int *)(this + 0x45dc) * (long)iVar60 >> 0xf);
      if (iVar60 < -0x800000) {
        iVar60 = -0x800000;
      }
      if (0x7fffff < iVar60) {
        iVar60 = 0x7fffff;
      }
      iVar33 = (int)((long)*(int *)(this + 0x45e0) * (long)iVar60 >> 0xf);
      if (iVar33 < -0x800000) {
        iVar33 = -0x800000;
      }
      if (0x7fffff < iVar33) {
        iVar33 = 0x7fffff;
      }
      iVar30 = (int)((long)*(int *)(this + 0x45e4) * (long)iVar33 >> 0xf);
      if (iVar30 < -0x800000) {
        iVar30 = -0x800000;
      }
      if (0x7fffff < iVar30) {
        iVar30 = 0x7fffff;
      }
      iVar35 = (int)((long)*(int *)(this + 0x45e8) * (long)iVar30 >> 0xf);
      if (iVar35 < -0x800000) {
        iVar35 = -0x800000;
      }
      if (0x7fffff < iVar35) {
        iVar35 = 0x7fffff;
      }
      iVar54 = (int)((long)*(int *)(this + 0x45ec) * (long)iVar35 >> 0xf);
      if (iVar54 < -0x800000) {
        iVar54 = -0x800000;
      }
      if (0x7fffff < iVar54) {
        iVar54 = 0x7fffff;
      }
      iVar29 = (int)((long)*(int *)(this + 0x45f0) * (long)iVar54 >> 0xf);
      if (iVar29 < -0x800000) {
        iVar29 = -0x800000;
      }
      if (0x7fffff < iVar29) {
        iVar29 = 0x7fffff;
      }
      *(int *)(this + uVar50 * 4 + 0x36e3d8) =
           (int)((long)iVar60 * (long)*(int *)(this + 0x45f4) >> 0xf) +
           (int)((long)iVar33 * (long)*(int *)(this + 0x45f8) >> 0xf) +
           (int)((long)iVar30 * (long)*(int *)(this + 0x45fc) >> 0xf) +
           (int)((long)iVar35 * (long)*(int *)(this + 0x4600) >> 0xf) +
           (int)((long)iVar54 * (long)*(int *)(this + 0x4604) >> 0xf) +
           (int)((long)*(int *)(this + 0x4608) * (long)iVar29 >> 0xf);
      iVar60 = (int)((long)*(int *)(this + 0x460c) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36e3d8) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x36e458) = iVar60;
      iVar60 = (int)((long)*(int *)(this + 0x4610) * (long)iVar60 >> 0xf) +
               (int)((long)*(int *)(this + 0x4614) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36e458) >> 0xf) +
               (int)((long)*(int *)(this + 0x4618) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36e4d8) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x36e4d8) = iVar60;
      iVar60 = (int)((long)*(int *)(this + 0x461c) * (long)iVar60 >> 0xf) +
               (int)((long)*(int *)(this + 0x4620) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36e4d8) >> 0xf) +
               (int)((long)*(int *)(this + 0x4624) *
                     (long)*(int *)(this + (ulong)uVar55 * 4 + 0x36e4d8) >> 0xf) +
               (int)((long)*(int *)(this + 0x4628) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36e558) >> 0xf) +
               (int)((long)*(int *)(this + 0x462c) *
                     (long)*(int *)(this + (ulong)uVar55 * 4 + 0x36e558) >> 0xf);
      if (iVar60 < -0x800000) {
        iVar60 = -0x800000;
      }
      if (0x7fffff < iVar60) {
        iVar60 = 0x7fffff;
      }
      *(int *)(this + uVar50 * 4 + 0x36e558) = iVar60;
      iVar60 = (int)((long)*(int *)(this + 0x4630) * (long)iVar60 >> 0xf) +
               (int)((long)*(int *)(this + 0x4634) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36e558) >> 0xf);
      if (iVar60 < -0x800000) {
        iVar60 = -0x800000;
      }
      if (0x7fffff < iVar60) {
        iVar60 = 0x7fffff;
      }
      iVar60 = iVar60 + (int)((long)*(int *)(this + 0x4638) *
                              (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36e5d8) >> 0xf);
      if (iVar60 < -0x800000) {
        iVar60 = -0x800000;
      }
      if (0x7fffff < iVar60) {
        iVar60 = 0x7fffff;
      }
      *(int *)(this + uVar50 * 4 + 0x36e5d8) = iVar60;
      iVar33 = (int)((long)*(int *)(this + 0x4658) *
                     (long)(int)((long)*(int *)(this + 0x4654) *
                                 (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36e758) >> 0xf) >> 0xf)
               + (int)((long)*(int *)(this + (ulong)uVar59 * 4 + 0x36e758) *
                       (long)*(int *)(this + 0x465c) >> 0xf);
      iVar65 = (int)((long)*(int *)(this + 0x4680) *
                     (long)(int)((uint)(iVar65 >= 0) * iVar65 + (uint)(iVar65 < 0) * -iVar65) >> 0xf
                    );
      if (iVar65 < iVar33) {
        iVar65 = iVar33;
      }
      *(int *)(this + uVar50 * 4 + 0x36e758) = iVar65;
      iVar33 = *(int *)(this + 0x4660);
      iVar30 = *(int *)(this + 0x4664);
      iVar35 = *(int *)(this + 0x4668);
      iVar32 = *(int *)(this + 0x466c);
      iVar70 = *(int *)(this + 0x4670);
      iVar54 = *(int *)(this + 0x4678);
      iVar71 = *(int *)(this + 0x4674);
      iVar29 = *(int *)(this + 0x467c);
      *(int *)(this + uVar50 * 4 + 0x36e658) =
           (int)((long)(int)uVar44 * (long)*(int *)(this + 0x463c) >> 0xf);
      iVar33 = (int)((long)iVar35 *
                     (long)(int)((long)iVar30 * (long)(int)((long)iVar33 * (long)iVar65 >> 0xf) >>
                                0xf) >> 0xf);
      iVar65 = iVar32 * 0x80 - iVar33;
      if (iVar65 < 0) {
        iVar65 = 0;
      }
      iVar33 = iVar70 * 0x80 - iVar33;
      if (iVar33 < 0) {
        iVar33 = 0;
      }
      *(int *)(this + uVar50 * 4 + 0x36e6d8) =
           (int)((long)(int)uVar36 * (long)*(int *)(this + 0x4640) >> 0xf);
      iVar65 = (int)((long)(((int)((long)iVar54 * (long)iVar65 >> 0xf) + iVar71 * 0x100 +
                            (int)((long)iVar29 * (long)iVar33 >> 0xf)) * 0x100) * (long)iVar60 >>
                    0x17);
      *(int *)(this + uVar50 * 4 + 0x9d50) =
           (int)((long)*(int *)(this + 0x4644) * (long)iVar65 >> 0xf) +
           (int)((long)*(int *)(this + 0x4648) * (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36e658)
                >> 0xf);
      iVar65 = (int)((long)iVar65 * (long)*(int *)(this + 0x464c) >> 0xf) +
               (int)((long)*(int *)(this + 18000) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36e6d8) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x9dd0) = iVar65;
      lVar37 = (long)iVar65;
    }
    else if (iVar65 == 5) {
      uVar59 = *(uint *)(this + 0x9a74);
      *(int *)(this + uVar50 * 4 + 0x36e7d8) =
           *(int *)(this + 0x4684) * 0x100 -
           (int)((long)*(int *)(this + 0x4688) * (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36e7d8)
                >> 0xf);
      iVar65 = *(int *)(this + 0x468c) -
               (int)((long)*(int *)(this + 0x4690) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36e858) >> 0xf);
      if (iVar65 < 0x800000) {
        if (iVar65 < -0x800000) {
          iVar65 = iVar65 + 0x1000000;
        }
      }
      else {
        iVar65 = iVar65 + -0x1000000;
      }
      *(int *)(this + uVar50 * 4 + 0x36e858) = iVar65;
      *(int *)(this + uVar50 * 4 + 0x36e8d8) =
           *(int *)(this + 0x4694) * 0x100 -
           (int)((long)*(int *)(this + 0x4698) * (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36e8d8)
                >> 0xf);
      uVar55 = (uint)((long)(int)((long)*(int *)(this + 0x469c) *
                                  (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36e7d8) >> 0xf) *
                      (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36e858) >> 0x17);
      if ((int)uVar55 < 0x800000) {
        if ((int)uVar55 < -0x800000) {
          uVar55 = uVar55 + 0x1000000;
        }
      }
      else {
        uVar55 = uVar55 - 0x1000000;
      }
      iVar65 = ((uVar55 ^ (int)uVar55 >> 0x1f) - ((int)uVar55 >> 0x1f)) +
               (int)((long)*(int *)(this + 0x46a0) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36e8d8) >> 0xf);
      if (iVar65 < -0x800000) {
        iVar65 = -0x800000;
      }
      if (0x7fffff < iVar65) {
        iVar65 = 0x7fffff;
      }
      lVar37 = (long)iVar65 * (long)iVar65 >> 0x17;
      lVar37 = lVar37 * lVar37 >> 0x17;
      *(int *)(this + uVar50 * 4 + 0x36e958) = (int)lVar37;
      iVar70 = *(int *)(this + (ulong)uVar59 * 4 + 0x9ad0);
      iVar65 = (int)((long)*(int *)(this + 0x46a4) * (long)(int)uVar44 >> 0xf) +
               (int)((long)*(int *)(this + 0x46a8) * (long)iVar70 >> 0xf) +
               (int)((long)*(int *)(this + 0x46ac) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36e9d8) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x36e9d8) = iVar65;
      iVar29 = *(int *)(this + (ulong)uVar59 * 4 + 0x9b50);
      iVar60 = (int)((long)*(int *)(this + 0x46b0) * (long)(int)uVar36 >> 0xf) +
               (int)((long)*(int *)(this + 0x46b4) * (long)iVar29 >> 0xf) +
               (int)((long)*(int *)(this + 0x46b8) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36ea58) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x36ea58) = iVar60;
      *(int *)(this + uVar50 * 4 + 0x36ead8) =
           (int)((long)*(int *)(this + 0x46bc) * (long)iVar65 >> 0xf) +
           (int)((long)*(int *)(this + 0x46c0) * (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36e9d8)
                >> 0xf) +
           (int)((long)*(int *)(this + 0x46c4) * (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36ead8)
                >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x36eb58) =
           (int)((long)*(int *)(this + 0x46c8) * (long)iVar60 >> 0xf) +
           (int)((long)*(int *)(this + 0x46cc) * (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36ea58)
                >> 0xf) +
           (int)((long)*(int *)(this + 0x46d0) * (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36eb58)
                >> 0xf);
      iVar71 = *(int *)(this + (ulong)uVar59 * 4 + 0x36ead8);
      iVar33 = *(int *)(this + (ulong)uVar59 * 4 + 0x36ecd8);
      iVar35 = *(int *)(this + (ulong)uVar59 * 4 + 0x36edd8);
      iVar65 = (int)((long)*(int *)(this + 0x46d4) * (long)iVar71 >> 0xf) +
               (int)((long)*(int *)(this + 0x46d8) * (long)iVar33 >> 0xf) +
               (int)((long)*(int *)(this + 0x46dc) * (long)iVar35 >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x36ebd8) = iVar65;
      iVar32 = *(int *)(this + (ulong)uVar59 * 4 + 0x36eb58);
      iVar30 = *(int *)(this + (ulong)uVar59 * 4 + 0x36ed58);
      iVar54 = *(int *)(this + (ulong)uVar59 * 4 + 0x36ee58);
      iVar60 = (int)((long)*(int *)(this + 0x46e0) * (long)iVar32 >> 0xf) +
               (int)((long)*(int *)(this + 0x46e4) * (long)iVar30 >> 0xf) +
               (int)((long)*(int *)(this + 0x46e8) * (long)iVar54 >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x36ec58) = iVar60;
      iVar33 = (int)(lVar37 * iVar65 >> 0x17) +
               (int)((long)iVar33 * (long)*(int *)(this + 0x46ec) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x36ecd8) = iVar33;
      iVar30 = (int)(lVar37 * iVar60 >> 0x17) +
               (int)((long)iVar30 * (long)*(int *)(this + 0x46f0) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x36ed58) = iVar30;
      iVar35 = (int)(lVar37 * iVar33 >> 0x17) +
               (int)((long)iVar35 * (long)*(int *)(this + 0x46f4) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x36edd8) = iVar35;
      iVar54 = (int)(lVar37 * iVar30 >> 0x17) +
               (int)((long)iVar54 * (long)*(int *)(this + 0x46f8) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x36ee58) = iVar54;
      *(int *)(this + uVar50 * 4 + 0x9d50) =
           (int)((long)iVar70 * (long)*(int *)(this + 0x46fc) >> 0xf) +
           (int)((long)iVar71 * (long)*(int *)(this + 0x4700) >> 0xf) +
           (int)((long)iVar65 * (long)*(int *)(this + 0x4704) >> 0xf) +
           (int)((long)iVar33 * (long)*(int *)(this + 0x4708) >> 0xf) +
           (int)((long)*(int *)(this + 0x470c) * (long)iVar35 >> 0xf);
      iVar65 = (int)((long)iVar29 * (long)*(int *)(this + 0x4710) >> 0xf) +
               (int)((long)iVar32 * (long)*(int *)(this + 0x4714) >> 0xf) +
               (int)((long)iVar60 * (long)*(int *)(this + 0x4718) >> 0xf) +
               (int)((long)iVar30 * (long)*(int *)(this + 0x471c) >> 0xf) +
               (int)((long)*(int *)(this + 0x4720) * (long)iVar54 >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x9dd0) = iVar65;
      lVar37 = (long)iVar65;
    }
    else if (iVar65 == 6) {
      uVar59 = *(uint *)(this + 0x9a74);
      iVar65 = (uVar36 ^ (int)uVar36 >> 0x1f) - ((int)uVar36 >> 0x1f);
      iVar60 = (uVar44 ^ (int)uVar44 >> 0x1f) - ((int)uVar44 >> 0x1f);
      if (iVar65 < iVar60) {
        iVar65 = iVar60;
      }
      iVar60 = (int)((long)*(int *)(this + 0x47a0) *
                     (long)(int)((long)*(int *)(this + 0x479c) *
                                 (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36f0d8) >> 0xf) >> 0xf)
               + (int)((long)*(int *)(this + (ulong)uVar59 * 4 + 0x36f0d8) *
                       (long)*(int *)(this + 0x47a4) >> 0xf);
      iVar33 = iVar65;
      if (iVar65 < iVar60) {
        iVar33 = iVar60;
      }
      *(int *)(this + uVar50 * 4 + 0x36f0d8) = iVar33;
      iVar33 = (int)((long)*(int *)(this + 0x47b0) *
                     (long)(int)((long)*(int *)(this + 0x47ac) *
                                 (long)(int)((long)*(int *)(this + 0x47a8) * (long)iVar33 >> 0xf) >>
                                0xf) >> 0xf);
      iVar60 = *(int *)(this + 0x47b8) * 0x80 - iVar33;
      if (iVar60 < 0) {
        iVar60 = 0;
      }
      iVar30 = *(int *)(this + 0x47c0) * 0x80 - iVar33;
      if (iVar30 < 0) {
        iVar30 = 0;
      }
      iVar33 = *(int *)(this + 0x47c8) * 0x80 - iVar33;
      if (iVar33 < 0) {
        iVar33 = 0;
      }
      iVar60 = ((int)((long)*(int *)(this + 0x47bc) * (long)iVar60 >> 0xf) +
                *(int *)(this + 0x47b4) * 0x100 +
                (int)((long)*(int *)(this + 0x47c4) * (long)iVar30 >> 0xf) +
               (int)((long)*(int *)(this + 0x47cc) * (long)iVar33 >> 0xf)) * 0x100;
      *(int *)(this + uVar50 * 4 + 0x36f158) = iVar60;
      iVar60 = (int)((long)*(int *)(this + 0x47d0) * (long)iVar60 >> 0xf) +
               (int)((long)*(int *)(this + 0x47d4) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36f158) >> 0xf) +
               (int)((long)*(int *)(this + 0x47d8) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36f1d8) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x36f1d8) = iVar60;
      iVar33 = (int)((long)*(int *)(this + 0x4728) *
                     (long)(int)((long)*(int *)(this + 0x4724) *
                                 (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36eed8) >> 0xf) >> 0xf)
               + (int)((long)*(int *)(this + (ulong)uVar59 * 4 + 0x36eed8) *
                       (long)*(int *)(this + 0x472c) >> 0xf);
      iVar30 = iVar65;
      if (iVar65 < iVar33) {
        iVar30 = iVar33;
      }
      *(int *)(this + uVar50 * 4 + 0x36eed8) = iVar30;
      uVar68 = NEON_sshr((long)iVar60 * (long)(int)uVar44,0x17);
      iVar33 = (int)((long)*(int *)(this + 0x4734) *
                     (long)(int)((long)*(int *)(this + 0x4730) *
                                 (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36ef58) >> 0xf) >> 0xf)
               + (int)((long)*(int *)(this + (ulong)uVar59 * 4 + 0x36ef58) *
                       (long)*(int *)(this + 0x4738) >> 0xf) +
               (int)((long)*(int *)(this + 0x47e0) *
                     (long)(int)((long)*(int *)(this + 0x47dc) * (long)iVar30 >> 0xf) >> 0xf) +
               (int)((long)iVar30 * (long)*(int *)(this + 0x473c) >> 0xf);
      if (iVar33 < iVar65) {
        iVar33 = iVar65;
      }
      *(int *)(this + uVar50 * 4 + 0x36ef58) = iVar33;
      iVar33 = (int)((long)*(int *)(this + 0x4740) * (long)iVar33 >> 0xf);
      iVar65 = iVar33 + *(int *)(this + 0x4768) * 0x100;
      if (iVar65 < 0) {
        iVar65 = 0;
      }
      iVar30 = iVar33 + *(int *)(this + 0x4770) * 0x100;
      if (iVar30 < 0) {
        iVar30 = 0;
      }
      iVar35 = iVar33 + *(int *)(this + 0x4778) * 0x100;
      if (iVar35 < 0) {
        iVar35 = 0;
      }
      iVar54 = iVar33 + *(int *)(this + 0x4780) * 0x100;
      if (iVar54 < 0) {
        iVar54 = 0;
      }
      iVar29 = iVar33 + *(int *)(this + 0x4748) * 0x100;
      if (iVar29 < 0) {
        iVar29 = 0;
      }
      iVar32 = iVar33 + *(int *)(this + 0x4750) * 0x100;
      if (iVar32 < 0) {
        iVar32 = 0;
      }
      iVar70 = iVar33 + *(int *)(this + 0x4758) * 0x100;
      if (iVar70 < 0) {
        iVar70 = 0;
      }
      iVar33 = iVar33 + *(int *)(this + 0x4760) * 0x100;
      if (iVar33 < 0) {
        iVar33 = 0;
      }
      iVar65 = ((int)((long)*(int *)(this + 0x4788) *
                      (long)((int)((long)*(int *)(this + 0x476c) * (long)iVar65 >> 0xf) +
                             (int)((long)*(int *)(this + 0x4774) * (long)iVar30 >> 0xf) +
                             (int)((long)*(int *)(this + 0x477c) * (long)iVar35 >> 0xf) +
                            (int)((long)*(int *)(this + 0x4784) * (long)iVar54 >> 0xf)) >> 0xf) +
                *(int *)(this + 0x4744) * 0x100 +
                (int)((long)*(int *)(this + 0x474c) * (long)iVar29 >> 0xf) +
                (int)((long)*(int *)(this + 0x4754) * (long)iVar32 >> 0xf) +
                (int)((long)*(int *)(this + 0x475c) * (long)iVar70 >> 0xf) +
               (int)((long)*(int *)(this + 0x4764) * (long)iVar33 >> 0xf)) * 0x100;
      *(int *)(this + uVar50 * 4 + 0x36efd8) = iVar65;
      iVar65 = (int)((long)*(int *)(this + 0x478c) * (long)iVar65 >> 0xf) +
               (int)((long)*(int *)(this + 0x4790) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36efd8) >> 0xf) +
               (int)((long)*(int *)(this + 0x4794) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36f058) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x36f058) = iVar65;
      iVar65 = (int)((long)*(int *)(this + 0x4798) * (long)iVar65 >> 0xf) << 3;
      iVar60 = (int)((long)iVar65 * (long)(int)((long)iVar60 * (long)(int)uVar36 >> 0x17) >> 0x17);
      *(int *)(this + uVar50 * 4 + 0x9dd0) = iVar60;
      *(int *)(this + uVar50 * 4 + 0x9d50) = (int)((long)iVar65 * (long)(int)uVar68 >> 0x17);
      lVar37 = (long)iVar60;
    }
    else if (iVar65 == 8) {
      *(uint *)(this + uVar50 * 4 + 0x9d50) = uVar44;
      lVar37 = (long)(int)uVar36;
      *(uint *)(this + uVar50 * 4 + 0x9dd0) = uVar36;
    }
    else if (iVar65 == 7) {
      uVar59 = *(uint *)(this + 0x9a74);
      uVar55 = *(uint *)(this + 0x9a78);
      *(uint *)(this + uVar50 * 4 + 0x36f458) = uVar44 - uVar36;
      iVar65 = (int)((long)*(int *)(this + 0x486c) * (long)(int)(uVar44 - uVar36) >> 0xf) +
               (int)((long)*(int *)(this + 0x4870) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36f458) >> 0xf) +
               (int)((long)*(int *)(this + 0x4874) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36f4d8) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x36f4d8) = iVar65;
      iVar65 = (int)((long)*(int *)(this + 0x4878) * (long)iVar65 >> 0xf) +
               (int)((long)*(int *)(this + 0x487c) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36f4d8) >> 0xf) +
               (int)((long)*(int *)(this + 0x4880) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36f558) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x36f558) = iVar65;
      iVar33 = *(int *)(this + (ulong)uVar59 * 4 + 0x9ad0);
      iVar30 = *(int *)(this + (ulong)uVar55 * 4 + 0x9ad0);
      iVar60 = (int)((long)*(int *)(this + 0x4884) * (long)(int)uVar44 >> 0xf) +
               (int)((long)*(int *)(this + 0x4888) * (long)iVar33 >> 0xf) +
               (int)((long)*(int *)(this + 0x488c) * (long)iVar30 >> 0xf) +
               (int)((long)*(int *)(this + 0x4890) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36f5d8) >> 0xf) +
               (int)((long)*(int *)(this + 0x4894) *
                     (long)*(int *)(this + (ulong)uVar55 * 4 + 0x36f5d8) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x36f5d8) = iVar60;
      iVar33 = (int)((long)(int)uVar44 * (long)*(int *)(this + 0x4898) >> 0xf) +
               (int)((long)iVar33 * (long)*(int *)(this + 0x489c) >> 0xf) +
               (int)((long)iVar30 * (long)*(int *)(this + 0x48a0) >> 0xf) +
               (int)((long)*(int *)(this + 0x48a4) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36f658) >> 0xf) +
               (int)((long)*(int *)(this + 0x48a8) *
                     (long)*(int *)(this + (ulong)uVar55 * 4 + 0x36f658) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x36f658) = iVar33;
      iVar35 = *(int *)(this + (ulong)uVar59 * 4 + 0x9b50);
      iVar54 = *(int *)(this + (ulong)uVar55 * 4 + 0x9b50);
      iVar30 = (int)((long)*(int *)(this + 0x48ac) * (long)(int)uVar36 >> 0xf) +
               (int)((long)*(int *)(this + 0x48b0) * (long)iVar35 >> 0xf) +
               (int)((long)*(int *)(this + 0x48b4) * (long)iVar54 >> 0xf) +
               (int)((long)*(int *)(this + 0x48b8) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36f6d8) >> 0xf) +
               (int)((long)*(int *)(this + 0x48bc) *
                     (long)*(int *)(this + (ulong)uVar55 * 4 + 0x36f6d8) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x36f6d8) = iVar30;
      iVar35 = (int)((long)(int)uVar36 * (long)*(int *)(this + 0x48c0) >> 0xf) +
               (int)((long)iVar35 * (long)*(int *)(this + 0x48c4) >> 0xf) +
               (int)((long)iVar54 * (long)*(int *)(this + 0x48c8) >> 0xf) +
               (int)((long)*(int *)(this + 0x48cc) *
                     (long)*(int *)(this + (ulong)uVar59 * 4 + 0x36f758) >> 0xf) +
               (int)((long)*(int *)(this + 0x48d0) *
                     (long)*(int *)(this + (ulong)uVar55 * 4 + 0x36f758) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x36f758) = iVar35;
      *(int *)(this + uVar50 * 4 + 0x9d50) =
           (int)((long)*(int *)(this + 0x48d8) * (long)iVar60 >> 0xf) +
           (int)((long)*(int *)(this + 0x48d4) * (long)iVar65 >> 0xf) +
           (int)((long)*(int *)(this + 0x48dc) * (long)iVar33 >> 0xf);
      iVar65 = (int)((long)*(int *)(this + 0x48e4) * (long)iVar30 >> 0xf) +
               (int)((long)iVar65 * (long)*(int *)(this + 0x48e0) >> 0xf) +
               (int)((long)*(int *)(this + 0x48e8) * (long)iVar35 >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x9dd0) = iVar65;
      lVar37 = (long)iVar65;
    }
    else if (iVar65 == 9) {
      *(undefined4 *)(this + uVar50 * 4 + 0x9d50) = 0;
      lVar37 = 0;
      *(undefined4 *)(this + uVar50 * 4 + 0x9dd0) = 0;
    }
    else if (iVar65 == 10) {
      lVar37 = (lVar37 << 0x20) >> 0x22;
      *(undefined4 *)(this + uVar50 * 4 + 0x9c50) = 0;
      *(undefined4 *)(this + uVar50 * 4 + 0x9cd0) = 0;
      *(int *)(this + uVar50 * 4 + 0x9d50) = (int)uVar44 >> 2;
      *(int *)(this + uVar50 * 4 + 0x9dd0) = (int)uVar36 >> 2;
    }
    else {
      lVar37 = (long)*(int *)(this + uVar50 * 4 + 0x9dd0);
    }
    iVar65 = (int)((long)*(int *)(this + 0x3674) * (long)iVar74 >> 0xf) +
             (int)((long)*(int *)(this + 0x3678) * (long)*(int *)(this + uVar50 * 4 + 0x9d50) >> 0xf
                  ) + (int)(*(int *)(this + 0x367c) * lVar37 >> 0xf);
    *(int *)(this + uVar50 * 4 + 0x9bd0) = iVar65;
    iVar60 = *(int *)(this + 0x1e44);
    if (iVar60 == 0) {
      uVar36 = *(uint *)(this + 0x9a74);
      uVar44 = *(uint *)(this + 0x9a78);
      uVar59 = *(uint *)(this + 0x9a7c);
      iVar65 = (int)((long)*(int *)(this + 0x4204) * (long)iVar65 >> 0xf) +
               (int)((long)*(int *)(this + 0x4208) *
                     (long)*(int *)(this + (ulong)uVar36 * 4 + 0x9bd0) >> 0xf) +
               (int)((long)*(int *)(this + 0x420c) *
                     (long)*(int *)(this + (ulong)uVar36 * 4 + 0x14bc50) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x14bc50) = iVar65;
      iVar65 = (int)((long)*(int *)(this + 0x4210) * (long)iVar65 >> 0xf) +
               (int)((long)*(int *)(this + 0x4214) *
                     (long)*(int *)(this + (ulong)uVar36 * 4 + 0x14bc50) >> 0xf) +
               (int)((long)*(int *)(this + 0x4218) *
                     (long)*(int *)(this + (ulong)uVar36 * 4 + 0x14bcd0) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x14bcd0) = iVar65;
      iVar65 = (int)((long)*(int *)(this + 0x421c) * (long)iVar65 >> 0xf) +
               (int)((long)*(int *)(this + 0x4220) *
                     (long)*(int *)(this + (ulong)uVar36 * 4 + 0x14bcd0) >> 0xf) +
               (int)((long)*(int *)(this + 0x4224) *
                     (long)*(int *)(this + (ulong)uVar44 * 4 + 0x14bcd0) >> 0xf) +
               (int)((long)*(int *)(this + 0x4228) *
                     (long)*(int *)(this + ((ulong)uVar59 + 0x52f34) * 4) >> 0xf) +
               (int)((long)*(int *)(this + 0x422c) *
                     (long)*(int *)(this + (ulong)uVar36 * 4 + 0x14bd50) >> 0xf) +
               (int)((long)*(int *)(this + 0x4230) *
                     (long)*(int *)(this + (ulong)uVar44 * 4 + 0x14bd50) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x14bd50) = iVar65;
      if (*(uint *)(this + 0x9a2c) % 3 == 0) {
        uVar44 = local_20 + 1;
        if (uVar44 == 0x20) {
          local_20 = 1;
          uVar44 = 0;
        }
        else {
          local_20 = local_20 + 2;
          if (local_20 == 0x20) {
            local_20 = 0;
          }
        }
        iVar60 = (int)*(short *)(this + 0x9924);
        uVar59 = *(uint *)(this + 0x9a28);
        if (*(short *)(this + 0x9924) < 0) {
          sVar9 = *(short *)(this + 0x1e20);
          while( true ) {
            sVar27 = sVar9 + (short)iVar60;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if ((-1 < iVar60) || (iVar60 = (int)(short)(sVar9 + sVar27), -1 < iVar60)) break;
          }
        }
        uVar56 = uVar59 - iVar60;
        iVar60 = (int)*(short *)(this + 0x9926);
        uVar55 = uVar56 + 0x8000;
        if (-1 < (int)uVar56) {
          uVar55 = uVar56;
        }
        uVar56 = uVar55 & 0x7fff;
        if (uVar55 < 0x8000) {
          uVar56 = uVar55;
        }
        if (*(short *)(this + 0x9926) < 0) {
          sVar9 = *(short *)(this + 0x1e20);
          while( true ) {
            sVar27 = sVar9 + (short)iVar60;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if ((-1 < iVar60) || (iVar60 = (int)(short)(sVar9 + sVar27), -1 < iVar60)) break;
          }
        }
        uVar34 = uVar59 - iVar60;
        iVar60 = (int)*(short *)(this + 0x9928);
        uVar55 = uVar34 + 0x8000;
        if (-1 < (int)uVar34) {
          uVar55 = uVar34;
        }
        uVar34 = uVar55 & 0x7fff;
        if (uVar55 < 0x8000) {
          uVar34 = uVar55;
        }
        if (*(short *)(this + 0x9928) < 0) {
          sVar9 = *(short *)(this + 0x1e20);
          while( true ) {
            sVar27 = sVar9 + (short)iVar60;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if ((-1 < iVar60) || (iVar60 = (int)(short)(sVar9 + sVar27), -1 < iVar60)) break;
          }
        }
        uVar53 = uVar59 - iVar60;
        iVar60 = (int)*(short *)(this + 0x992a);
        uVar55 = uVar53 + 0x8000;
        if (-1 < (int)uVar53) {
          uVar55 = uVar53;
        }
        uVar53 = uVar55 & 0x7fff;
        if (uVar55 < 0x8000) {
          uVar53 = uVar55;
        }
        if (*(short *)(this + 0x992a) < 0) {
          sVar9 = *(short *)(this + 0x1e20);
          while( true ) {
            sVar27 = sVar9 + (short)iVar60;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if ((-1 < iVar60) || (iVar60 = (int)(short)(sVar9 + sVar27), -1 < iVar60)) break;
          }
        }
        uVar13 = uVar59 - iVar60;
        iVar60 = (int)*(short *)(this + 0x992c);
        uVar55 = uVar13 + 0x8000;
        if (-1 < (int)uVar13) {
          uVar55 = uVar13;
        }
        uVar13 = uVar55 & 0x7fff;
        if (uVar55 < 0x8000) {
          uVar13 = uVar55;
        }
        if (*(short *)(this + 0x992c) < 0) {
          sVar9 = *(short *)(this + 0x1e20);
          while( true ) {
            sVar27 = sVar9 + (short)iVar60;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if ((-1 < iVar60) || (iVar60 = (int)(short)(sVar9 + sVar27), -1 < iVar60)) break;
          }
        }
        uVar14 = uVar59 - iVar60;
        iVar60 = (int)*(short *)(this + 0x992e);
        uVar55 = uVar14 + 0x8000;
        if (-1 < (int)uVar14) {
          uVar55 = uVar14;
        }
        uVar14 = uVar55 & 0x7fff;
        if (uVar55 < 0x8000) {
          uVar14 = uVar55;
        }
        if (*(short *)(this + 0x992e) < 0) {
          sVar9 = *(short *)(this + 0x1e20);
          while( true ) {
            sVar27 = sVar9 + (short)iVar60;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if ((-1 < iVar60) || (iVar60 = (int)(short)(sVar9 + sVar27), -1 < iVar60)) break;
          }
        }
        uVar15 = uVar59 - iVar60;
        iVar60 = (int)*(short *)(this + 0x9930);
        uVar55 = uVar15 + 0x8000;
        if (-1 < (int)uVar15) {
          uVar55 = uVar15;
        }
        uVar15 = uVar55 & 0x7fff;
        if (uVar55 < 0x8000) {
          uVar15 = uVar55;
        }
        if (*(short *)(this + 0x9930) < 0) {
          sVar9 = *(short *)(this + 0x1e20);
          while( true ) {
            sVar27 = sVar9 + (short)iVar60;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if ((-1 < iVar60) || (iVar60 = (int)(short)(sVar9 + sVar27), -1 < iVar60)) break;
          }
        }
        uVar55 = uVar59 - iVar60;
        iVar60 = (int)*(short *)(this + 0x9932);
        uVar16 = uVar55 + 0x8000;
        if (-1 < (int)uVar55) {
          uVar16 = uVar55;
        }
        uVar55 = uVar16 & 0x7fff;
        if (uVar16 < 0x8000) {
          uVar55 = uVar16;
        }
        if (*(short *)(this + 0x9932) < 0) {
          sVar9 = *(short *)(this + 0x1e20);
          while( true ) {
            sVar27 = sVar9 + (short)iVar60;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if ((-1 < iVar60) || (iVar60 = (int)(short)(sVar9 + sVar27), -1 < iVar60)) break;
          }
        }
        uVar16 = uVar59 - iVar60;
        iVar60 = (int)*(short *)(this + 0x9934);
        uVar12 = uVar16 + 0x8000;
        if (-1 < (int)uVar16) {
          uVar12 = uVar16;
        }
        uVar16 = uVar12 & 0x7fff;
        if (uVar12 < 0x8000) {
          uVar16 = uVar12;
        }
        if (*(short *)(this + 0x9934) < 0) {
          sVar9 = *(short *)(this + 0x1e20);
          while( true ) {
            sVar27 = sVar9 + (short)iVar60;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if ((-1 < iVar60) || (iVar60 = (int)(short)(sVar9 + sVar27), -1 < iVar60)) break;
          }
        }
        uVar17 = uVar59 - iVar60;
        iVar60 = (int)*(short *)(this + 0x9936);
        uVar12 = uVar17 + 0x8000;
        if (-1 < (int)uVar17) {
          uVar12 = uVar17;
        }
        uVar17 = uVar12 & 0x7fff;
        if (uVar12 < 0x8000) {
          uVar17 = uVar12;
        }
        if (*(short *)(this + 0x9936) < 0) {
          sVar9 = *(short *)(this + 0x1e20);
          while( true ) {
            sVar27 = sVar9 + (short)iVar60;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if ((-1 < iVar60) || (iVar60 = (int)(short)(sVar9 + sVar27), -1 < iVar60)) break;
          }
        }
        uVar18 = uVar59 - iVar60;
        iVar60 = (int)*(short *)(this + 0x9938);
        uVar12 = uVar18 + 0x8000;
        if (-1 < (int)uVar18) {
          uVar12 = uVar18;
        }
        uVar18 = uVar12 & 0x7fff;
        if (uVar12 < 0x8000) {
          uVar18 = uVar12;
        }
        if (*(short *)(this + 0x9938) < 0) {
          sVar9 = *(short *)(this + 0x1e20);
          while( true ) {
            sVar27 = sVar9 + (short)iVar60;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if ((-1 < iVar60) || (iVar60 = (int)(short)(sVar9 + sVar27), -1 < iVar60)) break;
          }
        }
        uVar19 = uVar59 - iVar60;
        iVar60 = (int)*(short *)(this + 0x993a);
        uVar12 = uVar19 + 0x8000;
        if (-1 < (int)uVar19) {
          uVar12 = uVar19;
        }
        uVar19 = uVar12 & 0x7fff;
        if (uVar12 < 0x8000) {
          uVar19 = uVar12;
        }
        if (*(short *)(this + 0x993a) < 0) {
          sVar9 = *(short *)(this + 0x1e20);
          while( true ) {
            sVar27 = sVar9 + (short)iVar60;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if ((-1 < iVar60) || (iVar60 = (int)(short)(sVar9 + sVar27), -1 < iVar60)) break;
          }
        }
        uVar20 = uVar59 - iVar60;
        iVar60 = (int)*(short *)(this + 0x993c);
        uVar12 = uVar20 + 0x8000;
        if (-1 < (int)uVar20) {
          uVar12 = uVar20;
        }
        uVar20 = uVar12 & 0x7fff;
        if (uVar12 < 0x8000) {
          uVar20 = uVar12;
        }
        if (*(short *)(this + 0x993c) < 0) {
          sVar9 = *(short *)(this + 0x1e20);
          while( true ) {
            sVar27 = sVar9 + (short)iVar60;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if ((-1 < iVar60) || (iVar60 = (int)(short)(sVar9 + sVar27), -1 < iVar60)) break;
          }
        }
        uVar21 = uVar59 - iVar60;
        iVar60 = (int)*(short *)(this + 0x993e);
        uVar12 = uVar21 + 0x8000;
        if (-1 < (int)uVar21) {
          uVar12 = uVar21;
        }
        uVar21 = uVar12 & 0x7fff;
        if (uVar12 < 0x8000) {
          uVar21 = uVar12;
        }
        if (*(short *)(this + 0x993e) < 0) {
          sVar9 = *(short *)(this + 0x1e20);
          while( true ) {
            sVar27 = sVar9 + (short)iVar60;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if ((-1 < iVar60) || (iVar60 = (int)(short)(sVar9 + sVar27), -1 < iVar60)) break;
          }
        }
        uVar22 = uVar59 - iVar60;
        iVar60 = (int)*(short *)(this + 0x9940);
        uVar12 = uVar22 + 0x8000;
        if (-1 < (int)uVar22) {
          uVar12 = uVar22;
        }
        uVar22 = uVar12 & 0x7fff;
        if (uVar12 < 0x8000) {
          uVar22 = uVar12;
        }
        if (*(short *)(this + 0x9940) < 0) {
          sVar9 = *(short *)(this + 0x1e20);
          while( true ) {
            sVar27 = sVar9 + (short)iVar60;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if ((-1 < iVar60) || (iVar60 = (int)(short)(sVar9 + sVar27), -1 < iVar60)) break;
          }
        }
        uVar23 = uVar59 - iVar60;
        iVar60 = (int)*(short *)(this + 0x9942);
        uVar12 = uVar23 + 0x8000;
        if (-1 < (int)uVar23) {
          uVar12 = uVar23;
        }
        uVar23 = uVar12 & 0x7fff;
        if (uVar12 < 0x8000) {
          uVar23 = uVar12;
        }
        if (*(short *)(this + 0x9942) < 0) {
          sVar9 = *(short *)(this + 0x1e20);
          while( true ) {
            sVar27 = sVar9 + (short)iVar60;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if ((-1 < iVar60) || (iVar60 = (int)(short)(sVar9 + sVar27), -1 < iVar60)) break;
          }
        }
        uVar24 = uVar59 - iVar60;
        iVar60 = (int)*(short *)(this + 0x9944);
        uVar12 = uVar24 + 0x8000;
        if (-1 < (int)uVar24) {
          uVar12 = uVar24;
        }
        uVar24 = uVar12 & 0x7fff;
        if (uVar12 < 0x8000) {
          uVar24 = uVar12;
        }
        if (*(short *)(this + 0x9944) < 0) {
          sVar9 = *(short *)(this + 0x1e20);
          while( true ) {
            sVar27 = sVar9 + (short)iVar60;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if ((-1 < iVar60) || (iVar60 = (int)(short)(sVar9 + sVar27), -1 < iVar60)) break;
          }
        }
        uVar25 = uVar59 - iVar60;
        iVar60 = (int)*(short *)(this + 0x9946);
        uVar12 = uVar25 + 0x8000;
        if (-1 < (int)uVar25) {
          uVar12 = uVar25;
        }
        uVar25 = uVar12 & 0x7fff;
        if (uVar12 < 0x8000) {
          uVar25 = uVar12;
        }
        if (*(short *)(this + 0x9946) < 0) {
          sVar9 = *(short *)(this + 0x1e20);
          while( true ) {
            sVar27 = sVar9 + (short)iVar60;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if (-1 < iVar60) break;
            sVar27 = sVar9 + sVar27;
            iVar60 = (int)sVar27;
            if ((-1 < iVar60) || (iVar60 = (int)(short)(sVar9 + sVar27), -1 < iVar60)) break;
          }
        }
        uVar26 = uVar59 - iVar60;
        uVar12 = uVar26 + 0x8000;
        if (-1 < (int)uVar26) {
          uVar12 = uVar26;
        }
        uVar68 = NEON_sshr((long)*(int *)(this + 0x4234) *
                           (long)*(int *)(this + (ulong)uVar56 * 4 + 0x14bdd0),0xf);
        uVar61 = (ulong)(uVar14 - 1);
        *(int *)(this + (ulong)uVar59 * 4 + 0x14bdd0) = iVar65 + (int)uVar68;
        iVar65 = *(int *)(this + (ulong)uVar56 * 4 + 0x14bdd0);
        uVar56 = uVar12 & 0x7fff;
        if (uVar12 < 0x8000) {
          uVar56 = uVar12;
        }
        if (uVar14 - 1 == 0xffffffff) {
          uVar61 = 0x7fff;
        }
        uVar62 = (ulong)(uVar15 - 1);
        uVar68 = NEON_sshr((long)*(int *)(this + 0x4238) * (long)iVar65,0xf);
        if (uVar15 - 1 == 0xffffffff) {
          uVar62 = 0x7fff;
        }
        uVar47 = (ulong)(uVar55 - 1);
        *(int *)(this + (ulong)uVar59 * 4 + 0x16bdd0) =
             (int)uVar68 +
             (int)((long)*(int *)(this + 0x423c) *
                   (long)*(int *)(this + (ulong)uVar34 * 4 + 0x16bdd0) >> 0xf);
        if (uVar55 - 1 == 0xffffffff) {
          uVar47 = 0x7fff;
        }
        uVar12 = uVar16 - 1;
        if (uVar12 == 0xffffffff) {
          uVar12 = 0x7fff;
        }
        iVar65 = (int)((long)iVar65 * (long)*(int *)(this + 0x4240) >> 0xf) +
                 (int)((long)*(int *)(this + 0x4244) *
                       (long)*(int *)(this + (ulong)uVar34 * 4 + 0x16bdd0) >> 0xf);
        *(int *)(this + uVar50 * 4 + 0x18bdd0) = iVar65;
        *(int *)(this + (ulong)uVar59 * 4 + 0x18be50) =
             (int)((long)*(int *)(this + 0x4248) * (long)iVar65 >> 0xf) +
             (int)((long)*(int *)(this + 0x424c) *
                   (long)*(int *)(this + (ulong)uVar53 * 4 + 0x18be50) >> 0xf);
        uVar43 = (ulong)(uVar17 - 1);
        if (uVar17 - 1 == 0xffffffff) {
          uVar43 = 0x7fff;
        }
        uVar68 = NEON_sshr((long)iVar65 * (long)*(int *)(this + 0x4250),0xf);
        uVar22 = uVar22 - 1;
        if (uVar22 == 0xffffffff) {
          uVar22 = 0x7fff;
        }
        iVar65 = (int)uVar68 +
                 (int)((long)*(int *)(this + 0x4254) *
                       (long)*(int *)(this + (ulong)uVar53 * 4 + 0x18be50) >> 0xf);
        *(int *)(this + uVar50 * 4 + 0x1abe50) = iVar65;
        *(int *)(this + (ulong)uVar59 * 4 + 0x1abed0) =
             (int)((long)*(int *)(this + 0x4258) * (long)iVar65 >> 0xf) +
             (int)((long)*(int *)(this + 0x425c) *
                   (long)*(int *)(this + (ulong)uVar13 * 4 + 0x1abed0) >> 0xf);
        *(int *)(this + uVar50 * 4 + 0x1cbed0) =
             (int)((long)iVar65 * (long)*(int *)(this + 0x4260) >> 0xf) +
             (int)((long)*(int *)(this + 0x4264) *
                   (long)*(int *)(this + (ulong)uVar13 * 4 + 0x1abed0) >> 0xf);
        iVar65 = *(int *)(this + (ulong)uVar36 * 4 + 0x1cbed0);
        uVar68 = NEON_sshr((long)*(int *)(this + 17000) * (long)iVar65,0xf);
        *(int *)(this + (ulong)uVar59 * 4 + 0x1cbf50) =
             (int)uVar68 +
             (int)((long)*(int *)(this + 0x426c) *
                   (long)*(int *)(this + ((ulong)uVar14 + 0x72fd4) * 4) >> 0xf) +
             (int)((long)*(int *)(this + 0x4270) * (long)*(int *)(this + (uVar61 + 0x72fd4) * 4) >>
                  0xf);
        *(int *)(this + (ulong)uVar59 * 4 + 0x1ebf50) =
             (int)((long)iVar65 * (long)*(int *)(this + 0x4274) >> 0xf) +
             (int)((long)*(int *)(this + 0x4278) *
                   (long)*(int *)(this + ((ulong)uVar15 + 0x7afd4) * 4) >> 0xf) +
             (int)((long)*(int *)(this + 0x427c) * (long)*(int *)(this + (uVar62 + 0x7afd4) * 4) >>
                  0xf);
        *(int *)(this + (ulong)uVar59 * 4 + 0x20bf50) =
             (int)((long)iVar65 * (long)*(int *)(this + 0x4280) >> 0xf) +
             (int)((long)*(int *)(this + 0x4284) *
                   (long)*(int *)(this + ((ulong)uVar55 + 0x82fd4) * 4) >> 0xf) +
             (int)((long)*(int *)(this + 0x4288) * (long)*(int *)(this + (uVar47 + 0x82fd4) * 4) >>
                  0xf);
        *(int *)(this + (ulong)uVar59 * 4 + 0x22bf50) =
             (int)((long)iVar65 * (long)*(int *)(this + 0x428c) >> 0xf) +
             (int)((long)*(int *)(this + 0x4290) *
                   (long)*(int *)(this + ((ulong)uVar16 + 0x8afd4) * 4) >> 0xf) +
             (int)((long)*(int *)(this + 0x4294) *
                   (long)*(int *)(this + ((ulong)uVar12 + 0x8afd4) * 4) >> 0xf);
        iVar65 = (int)((long)*(int *)(this + 0x4298) * (long)*(int *)(this + (uVar43 + 0x52f74) * 4)
                      >> 0xf) +
                 (int)((long)*(int *)(this + 0x429c) *
                       (long)*(int *)(this + ((ulong)uVar18 + 0x72fd4) * 4) >> 0xf) +
                 (int)((long)*(int *)(this + 0x42a0) *
                       (long)*(int *)(this + ((ulong)uVar19 + 0x7afd4) * 4) >> 0xf) +
                 (int)((long)*(int *)(this + 0x42a4) *
                       (long)*(int *)(this + ((ulong)uVar20 + 0x82fd4) * 4) >> 0xf) +
                 (int)((long)*(int *)(this + 0x42a8) *
                       (long)*(int *)(this + ((ulong)uVar21 + 0x8afd4) * 4) >> 0xf);
        *(int *)(this + uVar50 * 4 + 0x24bf50) = iVar65;
        *(int *)(this + (ulong)uVar44 * 4 + 0x24bf50) = iVar65;
        *(int *)(this + (ulong)local_20 * 4 + 0x24bf50) = iVar65;
        iVar65 = (int)((long)*(int *)(this + 0x42ac) *
                       (long)*(int *)(this + ((ulong)uVar22 + 0x52f74) * 4) >> 0xf) +
                 (int)((long)*(int *)(this + 0x42b0) *
                       (long)*(int *)(this + ((ulong)uVar23 + 0x72fd4) * 4) >> 0xf) +
                 (int)((long)*(int *)(this + 0x42b4) *
                       (long)*(int *)(this + ((ulong)uVar24 + 0x7afd4) * 4) >> 0xf) +
                 (int)((long)*(int *)(this + 0x42b8) *
                       (long)*(int *)(this + ((ulong)uVar25 + 0x82fd4) * 4) >> 0xf) +
                 (int)((long)*(int *)(this + 0x42bc) *
                       (long)*(int *)(this + ((ulong)uVar56 + 0x8afd4) * 4) >> 0xf);
        *(int *)(this + uVar50 * 4 + 0x24bfd0) = iVar65;
        *(int *)(this + (ulong)uVar44 * 4 + 0x24bfd0) = iVar65;
        *(int *)(this + (ulong)local_20 * 4 + 0x24bfd0) = iVar65;
      }
      *(int *)(this + uVar50 * 4 + 0x9c50) =
           (int)((long)*(int *)(this + 0x42c0) * (long)*(int *)(this + uVar50 * 4 + 0x24bf50) >> 0xf
                ) + (int)((long)*(int *)(this + 0x42c4) *
                          (long)*(int *)(this + (ulong)uVar36 * 4 + 0x24bf50) >> 0xf) +
           (int)((long)*(int *)(this + 0x42c8) * (long)*(int *)(this + (ulong)uVar36 * 4 + 0x9c50)
                >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x9cd0) =
           (int)((long)*(int *)(this + 0x42cc) * (long)*(int *)(this + uVar50 * 4 + 0x24bfd0) >> 0xf
                ) + (int)((long)*(int *)(this + 0x42d0) *
                          (long)*(int *)(this + (ulong)uVar36 * 4 + 0x24bfd0) >> 0xf) +
           (int)((long)*(int *)(this + 0x42d4) * (long)*(int *)(this + (ulong)uVar36 * 4 + 0x9cd0)
                >> 0xf);
    }
    else if (iVar60 == 1) {
      uVar36 = *(uint *)(this + 0x9a74);
      iVar60 = (int)((long)*(int *)(this + 0x42d8) * (long)iVar65 >> 0xf) +
               (int)((long)*(int *)(this + 0x42dc) *
                     (long)*(int *)(this + (ulong)uVar36 * 4 + 0x9bd0) >> 0xf) +
               (int)((long)*(int *)(this + 0x42e0) *
                     (long)*(int *)(this + (ulong)*(uint *)(this + 0x9a78) * 4 + 0x9bd0) >> 0xf) +
               (int)((long)*(int *)(this + 0x42e4) *
                     (long)*(int *)(this + ((ulong)*(uint *)(this + 0x9a7c) + 0x26f4) * 4) >> 0xf) +
               (int)((long)*(int *)(this + 0x42e8) *
                     (long)*(int *)(this + (ulong)uVar36 * 4 + 0x24c050) >> 0xf) +
               (int)((long)*(int *)(this + 0x42ec) *
                     (long)*(int *)(this + (ulong)*(uint *)(this + 0x9a78) * 4 + 0x24c050) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x24c050) = iVar60;
      if (*(uint *)(this + 0x9a2c) % 3 == 0) {
        uVar44 = local_20 + 1;
        if (uVar44 == 0x20) {
          local_20 = 1;
          uVar44 = 0;
        }
        else {
          local_20 = local_20 + 2;
          if (local_20 == 0x20) {
            local_20 = 0;
          }
        }
        iVar74 = (int)*(short *)(this + 0x9948);
        uVar59 = *(uint *)(this + 0x9a28);
        if (*(short *)(this + 0x9948) < 0) {
          sVar9 = *(short *)(this + 0x1e20);
          while( true ) {
            sVar27 = sVar9 + (short)iVar74;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if ((-1 < iVar74) || (iVar74 = (int)(short)(sVar9 + sVar27), -1 < iVar74)) break;
          }
        }
        uVar56 = uVar59 - iVar74;
        iVar74 = (int)*(short *)(this + 0x994a);
        uVar55 = uVar56 + 0x8000;
        if (-1 < (int)uVar56) {
          uVar55 = uVar56;
        }
        uVar56 = uVar55 & 0x7fff;
        if (uVar55 < 0x8000) {
          uVar56 = uVar55;
        }
        if (*(short *)(this + 0x994a) < 0) {
          sVar9 = *(short *)(this + 0x1e20);
          while( true ) {
            sVar27 = sVar9 + (short)iVar74;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if ((-1 < iVar74) || (iVar74 = (int)(short)(sVar9 + sVar27), -1 < iVar74)) break;
          }
        }
        uVar34 = uVar59 - iVar74;
        uVar55 = uVar34 + 0x8000;
        if (-1 < (int)uVar34) {
          uVar55 = uVar34;
        }
        iVar74 = (int)(short)((short)(*(int *)(this + 0x988c) >> 0xb) + 1);
        uVar34 = uVar55 & 0x7fff;
        if (uVar55 < 0x8000) {
          uVar34 = uVar55;
        }
        if (iVar74 < 0) {
          sVar9 = *(short *)(this + 0x1e20);
          while( true ) {
            sVar27 = sVar9 + (short)iVar74;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if ((-1 < iVar74) || (iVar74 = (int)(short)(sVar9 + sVar27), -1 < iVar74)) break;
          }
        }
        uVar55 = uVar59 - iVar74;
        uVar53 = uVar55 + 0x8000;
        if (-1 < (int)uVar55) {
          uVar53 = uVar55;
        }
        uVar55 = uVar53 & 0x7fff;
        if (uVar53 < 0x8000) {
          uVar55 = uVar53;
        }
        iVar74 = (int)(short)((short)(*(int *)(this + 0x9890) >> 0xb) + 1);
        if (iVar74 < 0) {
          sVar9 = *(short *)(this + 0x1e20);
          while( true ) {
            sVar27 = sVar9 + (short)iVar74;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if (-1 < iVar74) break;
            sVar27 = sVar9 + sVar27;
            iVar74 = (int)sVar27;
            if ((-1 < iVar74) || (iVar74 = (int)(short)(sVar9 + sVar27), -1 < iVar74)) break;
          }
        }
        uVar13 = uVar59 - iVar74;
        uVar53 = uVar13 + 0x8000;
        if (-1 < (int)uVar13) {
          uVar53 = uVar13;
        }
        uVar68 = NEON_sshr((long)*(int *)(this + 0x42f0) * (long)iVar60,0xf);
        uVar13 = uVar53 & 0x7fff;
        if (uVar53 < 0x8000) {
          uVar13 = uVar53;
        }
        *(int *)(this + (ulong)uVar59 * 4 + 0x24c0d0) =
             (int)uVar68 +
             (int)((long)*(int *)(this + 0x42f4) *
                   (long)*(int *)(this + (ulong)uVar56 * 4 + 0x24c0d0) >> 0xf);
        iVar60 = (int)((long)iVar60 * (long)*(int *)(this + 0x42f8) >> 0xf) +
                 (int)((long)*(int *)(this + 0x42fc) *
                       (long)*(int *)(this + (ulong)uVar56 * 4 + 0x24c0d0) >> 0xf);
        *(int *)(this + uVar50 * 4 + 0x26c0d0) = iVar60;
        *(int *)(this + (ulong)uVar59 * 4 + 0x26c150) =
             (int)((long)*(int *)(this + 0x4300) * (long)iVar60 >> 0xf) +
             (int)((long)*(int *)(this + 0x4304) *
                   (long)*(int *)(this + (ulong)uVar34 * 4 + 0x26c150) >> 0xf);
        iVar60 = (int)((long)iVar60 * (long)*(int *)(this + 0x4308) >> 0xf) +
                 (int)((long)*(int *)(this + 0x430c) *
                       (long)*(int *)(this + (ulong)uVar34 * 4 + 0x26c150) >> 0xf);
        *(int *)(this + uVar50 * 4 + 0x28c150) = iVar60;
        *(int *)(this + (ulong)uVar59 * 4 + 0x28c1d0) =
             iVar60 + (int)((long)*(int *)(this + 0x4310) *
                            (long)((int)((long)*(int *)(this + 0x4314) *
                                         (long)*(int *)(this + ((ulong)uVar55 + 0xa3074) * 4) >> 0xf
                                        ) + (int)((long)*(int *)(this + 0x4318) *
                                                  (long)*(int *)(this + (ulong)uVar13 * 4 + 0x28c1d0
                                                                ) >> 0xf)) >> 0xf);
        uVar46 = *(undefined4 *)(this + (ulong)uVar13 * 4 + 0x28c1d0);
        *(undefined4 *)(this + uVar50 * 4 + 0x2ac1d0) = uVar46;
        *(undefined4 *)(this + ((ulong)uVar44 + 0xab074) * 4) = uVar46;
        *(undefined4 *)(this + ((ulong)local_20 + 0xab074) * 4) = uVar46;
      }
      iVar60 = (int)((long)*(int *)(this + 0x431c) * (long)*(int *)(this + uVar50 * 4 + 0x2ac1d0) >>
                    0xf) +
               (int)((long)*(int *)(this + 0x4320) *
                     (long)*(int *)(this + (ulong)uVar36 * 4 + 0x2ac1d0) >> 0xf) +
               (int)((long)*(int *)(this + 0x4324) *
                     (long)*(int *)(this + (ulong)uVar36 * 4 + 0x2ac250) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x2ac250) = iVar60;
      *(int *)(this + uVar50 * 4 + 0x9c50) =
           (int)((long)*(int *)(this + 0x432c) * (long)iVar60 >> 0xf) +
           (int)((long)iVar65 * (long)*(int *)(this + 0x4328) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x9cd0) =
           (int)((long)iVar60 * (long)*(int *)(this + 0x4334) >> 0xf) +
           (int)((long)iVar65 * (long)*(int *)(this + 0x4330) >> 0xf);
    }
    else if (iVar60 == 2) {
      *(int *)(this + uVar50 * 4 + 0x9c50) = iVar65;
      *(int *)(this + uVar50 * 4 + 0x9cd0) = iVar65;
    }
    else if (iVar60 == 3) {
      *(undefined4 *)(this + uVar50 * 4 + 0x9c50) = 0;
      *(undefined4 *)(this + uVar50 * 4 + 0x9cd0) = 0;
    }
  }
  iVar30 = (int)(*(int *)(this + 0x3688) * lVar66 >> 0xf);
  iVar35 = (int)(*(int *)(this + 0x368c) * lVar31 >> 0xf);
  iVar65 = (int)(*(int *)(this + 0x3690) * lVar49 >> 0xf);
  iVar60 = (int)(*(int *)(this + 0x3694) * lVar58 >> 0xf);
  iVar74 = (int)(*(int *)(this + 0x3698) * lVar41 >> 0xf);
  iVar33 = (int)(*(int *)(this + 0x369c) * lVar57 >> 0xf);
  if (iVar39 == 0) {
    iVar54 = (int)((long)*(int *)(this + 0x36a8) * (long)*(int *)(this + uVar50 * 4 + 0x9cd0) >> 0xf
                  ) + (int)((long)*(int *)(this + 0x36ac) *
                            (long)*(int *)(this + uVar50 * 4 + 0x9dd0) >> 0xf);
    iVar29 = (int)((long)*(int *)(this + 0x36a0) * (long)*(int *)(this + uVar50 * 4 + 0x9c50) >> 0xf
                  ) + (int)((long)*(int *)(this + 0x36a4) *
                            (long)*(int *)(this + uVar50 * 4 + 0x9d50) >> 0xf);
    iVar32 = (iVar29 >> 1) + (iVar54 >> 1);
    iVar30 = iVar30 + (int)((long)iVar29 * (long)*(int *)(this + 14000) >> 0xf);
    iVar35 = iVar35 + (int)((long)iVar54 * (long)*(int *)(this + 0x36b4) >> 0xf);
    iVar65 = iVar65 + (int)((long)*(int *)(this + 0x36b8) * (long)iVar32 >> 0xf);
    iVar60 = iVar60 + (int)((long)iVar32 * (long)*(int *)(this + 0x36bc) >> 0xf);
    iVar74 = iVar74 + (int)((long)iVar32 * (long)*(int *)(this + 0x36c0) >> 0xf);
    iVar33 = iVar33 + (int)((long)iVar32 * (long)*(int *)(this + 0x36c4) >> 0xf);
  }
  *(int *)(this + uVar50 * 4 + 0xa1d0) = iVar30;
  *(int *)(this + uVar50 * 4 + 0xa250) = iVar35;
  *(int *)(this + uVar50 * 4 + 0x9fd0) = iVar65;
  *(int *)(this + uVar50 * 4 + 0xa050) = iVar60;
  *(int *)(this + uVar50 * 4 + 0xa0d0) = iVar74;
  *(int *)(this + uVar50 * 4 + 0xa150) = iVar33;
  iVar54 = *(int *)(this + 0x1e50);
  if (iVar54 == 0) {
    uVar44 = *(uint *)(this + 0x742c);
    iVar29 = (int)*(short *)(this + 0x99a2);
    uVar36 = uVar44 + 0x7fff;
    if (-1 < (int)(uVar44 - 1)) {
      uVar36 = uVar44 - 1;
    }
    uVar59 = uVar36 & 0x7fff;
    if (uVar36 < 0x8000) {
      uVar59 = uVar36;
    }
    uVar36 = uVar44 + 0x7ffe;
    if (-1 < (int)(uVar44 - 2)) {
      uVar36 = uVar44 - 2;
    }
    uVar56 = *(uint *)(this + 0x9a74);
    uVar34 = *(uint *)(this + 0x9a78);
    uVar55 = uVar36 & 0x7fff;
    if (uVar36 < 0x8000) {
      uVar55 = uVar36;
    }
    if (*(short *)(this + 0x99a2) < 0) {
      sVar9 = *(short *)(this + 0x1e20);
      while( true ) {
        sVar27 = sVar9 + (short)iVar29;
        iVar29 = (int)sVar27;
        if (-1 < iVar29) break;
        sVar27 = sVar9 + sVar27;
        iVar29 = (int)sVar27;
        if (-1 < iVar29) break;
        sVar27 = sVar9 + sVar27;
        iVar29 = (int)sVar27;
        if (-1 < iVar29) break;
        sVar27 = sVar9 + sVar27;
        iVar29 = (int)sVar27;
        if (-1 < iVar29) break;
        sVar27 = sVar9 + sVar27;
        iVar29 = (int)sVar27;
        if (-1 < iVar29) break;
        sVar27 = sVar9 + sVar27;
        iVar29 = (int)sVar27;
        if (-1 < iVar29) break;
        sVar27 = sVar9 + sVar27;
        iVar29 = (int)sVar27;
        if (-1 < iVar29) break;
        sVar27 = sVar9 + sVar27;
        iVar29 = (int)sVar27;
        if (-1 < iVar29) break;
        sVar27 = sVar9 + sVar27;
        iVar29 = (int)sVar27;
        if (-1 < iVar29) break;
        sVar27 = sVar9 + sVar27;
        iVar29 = (int)sVar27;
        if (-1 < iVar29) break;
        sVar27 = sVar9 + sVar27;
        iVar29 = (int)sVar27;
        if (-1 < iVar29) break;
        sVar27 = sVar9 + sVar27;
        iVar29 = (int)sVar27;
        if (-1 < iVar29) break;
        sVar27 = sVar9 + sVar27;
        iVar29 = (int)sVar27;
        if (-1 < iVar29) break;
        sVar27 = sVar9 + sVar27;
        iVar29 = (int)sVar27;
        if (-1 < iVar29) break;
        sVar27 = sVar9 + sVar27;
        iVar29 = (int)sVar27;
        if ((-1 < iVar29) || (iVar29 = (int)(short)(sVar9 + sVar27), -1 < iVar29)) break;
      }
    }
    uVar36 = uVar44 - iVar29;
    iVar29 = (int)*(short *)(this + 0x99a4);
    uVar53 = uVar36 + 0x8000;
    if (-1 < (int)uVar36) {
      uVar53 = uVar36;
    }
    uVar36 = uVar53 & 0x7fff;
    if (uVar53 < 0x8000) {
      uVar36 = uVar53;
    }
    if (*(short *)(this + 0x99a4) < 0) {
      sVar9 = *(short *)(this + 0x1e20);
      while( true ) {
        sVar27 = sVar9 + (short)iVar29;
        iVar29 = (int)sVar27;
        if (-1 < iVar29) break;
        sVar27 = sVar9 + sVar27;
        iVar29 = (int)sVar27;
        if (-1 < iVar29) break;
        sVar27 = sVar9 + sVar27;
        iVar29 = (int)sVar27;
        if (-1 < iVar29) break;
        sVar27 = sVar9 + sVar27;
        iVar29 = (int)sVar27;
        if (-1 < iVar29) break;
        sVar27 = sVar9 + sVar27;
        iVar29 = (int)sVar27;
        if (-1 < iVar29) break;
        sVar27 = sVar9 + sVar27;
        iVar29 = (int)sVar27;
        if (-1 < iVar29) break;
        sVar27 = sVar9 + sVar27;
        iVar29 = (int)sVar27;
        if (-1 < iVar29) break;
        sVar27 = sVar9 + sVar27;
        iVar29 = (int)sVar27;
        if (-1 < iVar29) break;
        sVar27 = sVar9 + sVar27;
        iVar29 = (int)sVar27;
        if (-1 < iVar29) break;
        sVar27 = sVar9 + sVar27;
        iVar29 = (int)sVar27;
        if (-1 < iVar29) break;
        sVar27 = sVar9 + sVar27;
        iVar29 = (int)sVar27;
        if (-1 < iVar29) break;
        sVar27 = sVar9 + sVar27;
        iVar29 = (int)sVar27;
        if (-1 < iVar29) break;
        sVar27 = sVar9 + sVar27;
        iVar29 = (int)sVar27;
        if (-1 < iVar29) break;
        sVar27 = sVar9 + sVar27;
        iVar29 = (int)sVar27;
        if (-1 < iVar29) break;
        sVar27 = sVar9 + sVar27;
        iVar29 = (int)sVar27;
        if ((-1 < iVar29) || (iVar29 = (int)(short)(sVar9 + sVar27), -1 < iVar29)) break;
      }
    }
    uVar13 = uVar44 - iVar29;
    uVar68 = NEON_sshr((long)*(int *)(this + 0x3d78) * (long)(iVar30 << 5),0xf);
    uVar53 = uVar13 + 0x8000;
    if (-1 < (int)uVar13) {
      uVar53 = uVar13;
    }
    iVar29 = (int)uVar68;
    *(int *)(this + (ulong)uVar44 * 4 + 0x10b250) = iVar29;
    uVar13 = uVar53 & 0x7fff;
    if (uVar53 < 0x8000) {
      uVar13 = uVar53;
    }
    uVar68 = NEON_sshr((long)*(int *)(this + 0x3d7c) * (long)iVar29,0xf);
    iVar32 = (int)uVar68 +
             (int)((long)*(int *)(this + 0x3d80) *
                   (long)*(int *)(this + (ulong)uVar59 * 4 + 0x10b250) >> 0xf) +
             (int)((long)*(int *)(this + 0x3d84) *
                   (long)*(int *)(this + (ulong)uVar55 * 4 + 0x10b250) >> 0xf) +
             (int)((long)*(int *)(this + 0x3d88) *
                   (long)*(int *)(this + (ulong)uVar56 * 4 + 0x12b250) >> 0xf) +
             (int)((long)*(int *)(this + 0x3d8c) *
                   (long)*(int *)(this + (ulong)uVar34 * 4 + 0x12b250) >> 0xf);
    *(int *)(this + uVar50 * 4 + 0x12b250) = iVar32;
    iVar32 = (int)((long)*(int *)(this + 0x3d90) * (long)iVar32 >> 0xf) +
             (int)((long)*(int *)(this + 0x3d94) *
                   (long)*(int *)(this + (ulong)uVar56 * 4 + 0x12b250) >> 0xf) +
             (int)((long)*(int *)(this + 0x3d98) *
                   (long)*(int *)(this + (ulong)uVar56 * 4 + 0x12b2d0) >> 0xf);
    *(int *)(this + uVar50 * 4 + 0x12b2d0) = iVar32;
    iVar70 = *(int *)(this + ((ulong)uVar36 + 0x42c94) * 4);
    *(int *)(this + uVar50 * 4 + 0x12b350) = iVar70;
    uVar68 = NEON_sshr((long)*(int *)(this + 0x3d9c) * (long)iVar70,0xf);
    iVar70 = (int)uVar68 +
             (int)((long)*(int *)(this + 0x3da0) *
                   (long)*(int *)(this + (ulong)uVar56 * 4 + 0x12b350) >> 0xf) +
             (int)((long)*(int *)(this + 0x3da4) *
                   (long)*(int *)(this + (ulong)uVar34 * 4 + 0x12b350) >> 0xf) +
             (int)((long)*(int *)(this + 0x3da8) *
                   (long)*(int *)(this + (ulong)uVar56 * 4 + 0x12b3d0) >> 0xf) +
             (int)((long)*(int *)(this + 0x3dac) *
                   (long)*(int *)(this + (ulong)uVar34 * 4 + 0x12b3d0) >> 0xf);
    *(int *)(this + uVar50 * 4 + 0x12b3d0) = iVar70;
    iVar70 = (int)((long)*(int *)(this + 0x3db0) * (long)iVar70 >> 0xf) +
             (int)((long)*(int *)(this + 0x3db4) *
                   (long)*(int *)(this + (ulong)uVar56 * 4 + 0x12b3d0) >> 0xf) +
             (int)((long)*(int *)(this + 0x3db8) *
                   (long)*(int *)(this + (ulong)uVar34 * 4 + 0x12b3d0) >> 0xf) +
             (int)((long)*(int *)(this + 0x3dbc) *
                   (long)*(int *)(this + (ulong)uVar56 * 4 + 0x12b450) >> 0xf) +
             (int)((long)*(int *)(this + 0x3dc0) *
                   (long)*(int *)(this + (ulong)uVar34 * 4 + 0x12b450) >> 0xf);
    *(int *)(this + uVar50 * 4 + 0x12b450) = iVar70;
    iVar70 = (int)((long)*(int *)(this + 0x3dc4) * (long)iVar70 >> 0xf) +
             (int)((long)*(int *)(this + 0x3dc8) *
                   (long)*(int *)(this + (ulong)uVar56 * 4 + 0x12b450) >> 0xf) +
             (int)((long)*(int *)(this + 0x3dcc) *
                   (long)*(int *)(this + (ulong)uVar56 * 4 + 0x12b4d0) >> 0xf);
    *(int *)(this + uVar50 * 4 + 0x12b4d0) = iVar70;
    iVar71 = (int)((long)iVar29 * (long)*(int *)(this + 0x4180) >> 0xf) +
             (int)((long)*(int *)(this + 0x4184) *
                   (long)*(int *)(this + (ulong)uVar56 * 4 + 0x12b550) >> 0xf);
    *(int *)(this + uVar50 * 4 + 0x12b550) = iVar71;
    iVar45 = (int)((long)*(int *)(this + 0x3de4) * (long)(iVar35 << 5) >> 0xf);
    *(int *)(this + (ulong)uVar44 * 4 + 0x12b5d0) = iVar45;
    iVar2 = (int)((long)*(int *)(this + 0x3de8) * (long)iVar45 >> 0xf) +
            (int)((long)*(int *)(this + 0x3dec) *
                  (long)*(int *)(this + (ulong)uVar59 * 4 + 0x12b5d0) >> 0xf) +
            (int)((long)*(int *)(this + 0x3df0) *
                  (long)*(int *)(this + (ulong)uVar55 * 4 + 0x12b5d0) >> 0xf) +
            (int)((long)*(int *)(this + 0x3df4) *
                  (long)*(int *)(this + (ulong)uVar56 * 4 + 0x14b5d0) >> 0xf) +
            (int)((long)*(int *)(this + 0x3df8) *
                  (long)*(int *)(this + (ulong)uVar34 * 4 + 0x14b5d0) >> 0xf);
    *(int *)(this + uVar50 * 4 + 0x14b5d0) = iVar2;
    iVar2 = (int)((long)*(int *)(this + 0x3dfc) * (long)iVar2 >> 0xf) +
            (int)((long)*(int *)(this + 0x3e00) *
                  (long)*(int *)(this + (ulong)uVar56 * 4 + 0x14b5d0) >> 0xf) +
            (int)((long)*(int *)(this + 0x3e04) *
                  (long)*(int *)(this + (ulong)uVar56 * 4 + 0x14b650) >> 0xf);
    *(int *)(this + uVar50 * 4 + 0x14b650) = iVar2;
    iVar51 = *(int *)(this + ((ulong)uVar13 + 0x4ad74) * 4);
    *(int *)(this + uVar50 * 4 + 0x14b6d0) = iVar51;
    iVar51 = (int)((long)*(int *)(this + 0x3e08) * (long)iVar51 >> 0xf) +
             (int)((long)*(int *)(this + 0x3e0c) *
                   (long)*(int *)(this + (ulong)uVar56 * 4 + 0x14b6d0) >> 0xf) +
             (int)((long)*(int *)(this + 0x3e10) *
                   (long)*(int *)(this + (ulong)uVar34 * 4 + 0x14b6d0) >> 0xf) +
             (int)((long)*(int *)(this + 0x3e14) *
                   (long)*(int *)(this + (ulong)uVar56 * 4 + 0x14b750) >> 0xf) +
             (int)((long)*(int *)(this + 0x3e18) *
                   (long)*(int *)(this + (ulong)uVar34 * 4 + 0x14b750) >> 0xf);
    *(int *)(this + uVar50 * 4 + 0x14b750) = iVar51;
    iVar51 = (int)((long)*(int *)(this + 0x3e1c) * (long)iVar51 >> 0xf) +
             (int)((long)*(int *)(this + 0x3e20) *
                   (long)*(int *)(this + (ulong)uVar56 * 4 + 0x14b750) >> 0xf) +
             (int)((long)*(int *)(this + 0x3e24) *
                   (long)*(int *)(this + (ulong)uVar34 * 4 + 0x14b750) >> 0xf) +
             (int)((long)*(int *)(this + 0x3e28) *
                   (long)*(int *)(this + (ulong)uVar56 * 4 + 0x14b7d0) >> 0xf) +
             (int)((long)*(int *)(this + 0x3e2c) *
                   (long)*(int *)(this + (ulong)uVar34 * 4 + 0x14b7d0) >> 0xf);
    *(int *)(this + uVar50 * 4 + 0x14b7d0) = iVar51;
    iVar51 = (int)((long)*(int *)(this + 0x3e30) * (long)iVar51 >> 0xf) +
             (int)((long)*(int *)(this + 0x3e34) *
                   (long)*(int *)(this + (ulong)uVar56 * 4 + 0x14b7d0) >> 0xf) +
             (int)((long)*(int *)(this + 0x3e38) *
                   (long)*(int *)(this + (ulong)uVar56 * 4 + 0x14b850) >> 0xf);
    *(int *)(this + uVar50 * 4 + 0x14b850) = iVar51;
    iVar3 = (int)((long)iVar45 * (long)*(int *)(this + 0x4188) >> 0xf) +
            (int)((long)*(int *)(this + 0x418c) *
                  (long)*(int *)(this + (ulong)uVar56 * 4 + 0x14b8d0) >> 0xf);
    *(int *)(this + uVar50 * 4 + 0x14b8d0) = iVar3;
    iVar4 = *(int *)(this + 0x3de0);
    iVar51 = (int)((long)*(int *)(this + 0x3dd4) * (long)iVar32 >> 0xf) +
             (int)((long)iVar29 * (long)*(int *)(this + 0x3dd0) >> 0xf) +
             (int)((long)*(int *)(this + 0x3dd8) * (long)iVar2 >> 0xf) +
             (int)((long)*(int *)(this + 0x3ddc) * (long)iVar51 >> 0xf);
    if ((iVar4 + 0x8000U < 0x10000) && (iVar5 = iVar51 >> 8, iVar5 + 0x8000U < 0x10000)) {
      iVar51 = iVar4 * iVar5 >> 7;
    }
    else {
      iVar51 = (int)((ulong)((long)iVar4 * (long)iVar51) >> 0xf);
    }
    iVar4 = *(int *)(this + 0x3e3c);
    iVar5 = *(int *)(this + 0x3e40);
    iVar6 = *(int *)(this + 0x3e44);
    iVar7 = *(int *)(this + 0x3e48);
    iVar38 = *(int *)(this + 0x36e0);
    iVar48 = *(int *)(this + 0x36dc);
    iVar8 = *(int *)(this + 0x3e4c);
    *(int *)(this + uVar50 * 4 + 0xa450) = iVar71 + iVar3 >> 5;
    *(int *)(this + uVar50 * 4 + 0xa850) = iVar51 >> 5;
    *(int *)(this + uVar50 * 4 + 0xa750) = iVar30;
    *(int *)(this + uVar50 * 4 + 0xa7d0) = iVar35;
    *(int *)(this + uVar50 * 4 + 0xa8d0) =
         (int)((long)iVar8 *
               (long)((int)((long)iVar2 * (long)iVar5 >> 0xf) +
                      (int)((long)iVar45 * (long)iVar4 >> 0xf) +
                      (int)((long)iVar32 * (long)iVar6 >> 0xf) +
                     (int)((long)iVar7 * (long)iVar70 >> 0xf)) >> 0xf) >> 5;
    *(int *)(this + uVar50 * 4 + 0xa3d0) =
         (int)((long)iVar29 * (long)iVar48 >> 0xf) + (int)((long)iVar45 * (long)iVar38 >> 0xf) >> 5;
  }
  else if (iVar54 == 1) {
    uVar36 = *(uint *)(this + 0x9a74);
    iVar70 = *(int *)(this + 0x3f0c);
    iVar29 = (int)((long)iVar30 * (long)*(int *)(this + 0x4180) >> 0xf) +
             (int)((long)*(int *)(this + 0x4184) *
                   (long)*(int *)(this + (ulong)uVar36 * 4 + 0x14ba50) >> 0xf);
    *(int *)(this + uVar50 * 4 + 0x14ba50) = iVar29;
    iVar71 = *(int *)(this + 0x36dc);
    iVar2 = *(int *)(this + 0x3fd4);
    iVar32 = (int)((long)iVar35 * (long)*(int *)(this + 0x4188) >> 0xf) +
             (int)((long)*(int *)(this + 0x418c) *
                   (long)*(int *)(this + (ulong)uVar36 * 4 + 0x14bad0) >> 0xf);
    *(int *)(this + uVar50 * 4 + 0x14bad0) = iVar32;
    iVar51 = *(int *)(this + 0x36e0);
    uVar46 = (undefined4)((long)iVar70 * (long)iVar30 >> 0xf);
    *(undefined4 *)(this + uVar50 * 4 + 0xa850) = uVar46;
    *(undefined4 *)(this + uVar50 * 4 + 0xa2d0) = uVar46;
    *(int *)(this + uVar50 * 4 + 0xa750) = iVar30;
    *(int *)(this + uVar50 * 4 + 0xa7d0) = iVar35;
    uVar46 = (undefined4)((long)iVar2 * (long)iVar35 >> 0xf);
    *(undefined4 *)(this + uVar50 * 4 + 0xa8d0) = uVar46;
    *(undefined4 *)(this + uVar50 * 4 + 0xa350) = uVar46;
    *(int *)(this + uVar50 * 4 + 0xa450) = iVar29 + iVar32;
    *(int *)(this + uVar50 * 4 + 0xa3d0) =
         (int)((long)iVar30 * (long)iVar71 >> 0xf) + (int)((long)iVar35 * (long)iVar51 >> 0xf);
  }
  else {
    if (iVar54 == 2) {
      uVar36 = *(uint *)(this + 0x9a74);
      iVar29 = (int)((long)*(int *)(this + 0x4180) * (long)iVar30 >> 0xf) +
               (int)((long)*(int *)(this + 0x4184) *
                     (long)*(int *)(this + (ulong)uVar36 * 4 + 0x14bb50) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x14bb50) = iVar29;
      lVar57 = (long)iVar30 * (long)*(int *)(this + 0x36dc);
      iVar32 = (int)((long)*(int *)(this + 0x4188) * (long)iVar35 >> 0xf) +
               (int)((long)*(int *)(this + 0x418c) *
                     (long)*(int *)(this + (ulong)uVar36 * 4 + 0x14bad0) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x14bad0) = iVar32;
    }
    else {
      if (iVar54 != 3) {
        if (iVar54 == 4) {
          uVar36 = *(uint *)(this + 0x9a74);
          uVar44 = *(uint *)(this + 0x9a78);
          *(int *)(this + uVar50 * 4 + 0x36f7d8) = iVar30 - iVar35;
          iVar29 = (int)((long)*(int *)(this + 0x48ec) * (long)(iVar30 - iVar35) >> 0xf) +
                   (int)((long)*(int *)(this + 0x48f0) *
                         (long)*(int *)(this + (ulong)uVar36 * 4 + 0x36f7d8) >> 0xf) +
                   (int)((long)*(int *)(this + 0x48f4) *
                         (long)*(int *)(this + (ulong)uVar36 * 4 + 0x36f858) >> 0xf);
          *(int *)(this + uVar50 * 4 + 0x36f858) = iVar29;
          iVar29 = (int)((long)*(int *)(this + 0x48f8) * (long)iVar29 >> 0xf) +
                   (int)((long)*(int *)(this + 0x48fc) *
                         (long)*(int *)(this + (ulong)uVar36 * 4 + 0x36f858) >> 0xf) +
                   (int)((long)*(int *)(this + 0x4900) *
                         (long)*(int *)(this + (ulong)uVar36 * 4 + 0x36f8d8) >> 0xf);
          *(int *)(this + uVar50 * 4 + 0x36f8d8) = iVar29;
          iVar70 = *(int *)(this + (ulong)uVar36 * 4 + 0xa1d0);
          iVar71 = *(int *)(this + (ulong)uVar44 * 4 + 0xa1d0);
          iVar32 = (int)((long)*(int *)(this + 0x4904) * (long)iVar30 >> 0xf) +
                   (int)((long)*(int *)(this + 0x4908) * (long)iVar70 >> 0xf) +
                   (int)((long)*(int *)(this + 0x490c) * (long)iVar71 >> 0xf) +
                   (int)((long)*(int *)(this + 0x4910) *
                         (long)*(int *)(this + (ulong)uVar36 * 4 + 0x36f958) >> 0xf) +
                   (int)((long)*(int *)(this + 0x4914) *
                         (long)*(int *)(this + (ulong)uVar44 * 4 + 0x36f958) >> 0xf);
          *(int *)(this + uVar50 * 4 + 0x36f958) = iVar32;
          iVar70 = (int)((long)iVar30 * (long)*(int *)(this + 0x4918) >> 0xf) +
                   (int)((long)iVar70 * (long)*(int *)(this + 0x491c) >> 0xf) +
                   (int)((long)iVar71 * (long)*(int *)(this + 0x4920) >> 0xf) +
                   (int)((long)*(int *)(this + 0x4924) *
                         (long)*(int *)(this + (ulong)uVar36 * 4 + 0x36f9d8) >> 0xf) +
                   (int)((long)*(int *)(this + 0x4928) *
                         (long)*(int *)(this + (ulong)uVar44 * 4 + 0x36f9d8) >> 0xf);
          *(int *)(this + uVar50 * 4 + 0x36f9d8) = iVar70;
          iVar2 = *(int *)(this + (ulong)uVar36 * 4 + 0xa250);
          iVar51 = *(int *)(this + (ulong)uVar44 * 4 + 0xa250);
          iVar71 = (int)((long)*(int *)(this + 0x492c) * (long)iVar35 >> 0xf) +
                   (int)((long)*(int *)(this + 0x4930) * (long)iVar2 >> 0xf) +
                   (int)((long)*(int *)(this + 0x4934) * (long)iVar51 >> 0xf) +
                   (int)((long)*(int *)(this + 0x4938) *
                         (long)*(int *)(this + (ulong)uVar36 * 4 + 0x36fa58) >> 0xf) +
                   (int)((long)*(int *)(this + 0x493c) *
                         (long)*(int *)(this + (ulong)uVar44 * 4 + 0x36fa58) >> 0xf);
          *(int *)(this + uVar50 * 4 + 0x36fa58) = iVar71;
          iVar2 = (int)((long)iVar35 * (long)*(int *)(this + 0x4940) >> 0xf) +
                  (int)((long)iVar2 * (long)*(int *)(this + 0x4944) >> 0xf) +
                  (int)((long)iVar51 * (long)*(int *)(this + 0x4948) >> 0xf) +
                  (int)((long)*(int *)(this + 0x494c) *
                        (long)*(int *)(this + (ulong)uVar36 * 4 + 0x36fad8) >> 0xf) +
                  (int)((long)*(int *)(this + 0x4950) *
                        (long)*(int *)(this + (ulong)uVar44 * 4 + 0x36fad8) >> 0xf);
          *(int *)(this + uVar50 * 4 + 0x36fad8) = iVar2;
          *(int *)(this + uVar50 * 4 + 0xa850) =
               (int)((long)*(int *)(this + 0x4958) * (long)iVar32 >> 0xf) +
               (int)((long)*(int *)(this + 0x4954) * (long)iVar29 >> 0xf) +
               (int)((long)*(int *)(this + 0x495c) * (long)iVar70 >> 0xf);
          iVar32 = *(int *)(this + 0x4964);
          iVar70 = *(int *)(this + 0x4960);
          iVar51 = *(int *)(this + 0x4968);
          *(int *)(this + uVar50 * 4 + 0xa750) = iVar30;
          *(int *)(this + uVar50 * 4 + 0xa7d0) = iVar35;
          *(int *)(this + uVar50 * 4 + 0xa8d0) =
               (int)((long)iVar32 * (long)iVar71 >> 0xf) + (int)((long)iVar29 * (long)iVar70 >> 0xf)
               + (int)((long)iVar51 * (long)iVar2 >> 0xf);
        }
        goto LAB_00172500;
      }
      uVar36 = *(uint *)(this + 0x9a74);
      iVar29 = (int)((long)*(int *)(this + 0x4180) * (long)iVar30 >> 0xf) +
               (int)((long)*(int *)(this + 0x4184) *
                     (long)*(int *)(this + (ulong)uVar36 * 4 + 0x14b950) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x14b950) = iVar29;
      lVar57 = (long)iVar30 * (long)*(int *)(this + 0x36dc);
      iVar32 = (int)((long)*(int *)(this + 0x4188) * (long)iVar35 >> 0xf) +
               (int)((long)*(int *)(this + 0x418c) *
                     (long)*(int *)(this + (ulong)uVar36 * 4 + 0x14b9d0) >> 0xf);
      *(int *)(this + uVar50 * 4 + 0x14b9d0) = iVar32;
    }
    iVar70 = *(int *)(this + 0x36e0);
    *(int *)(this + uVar50 * 4 + 0xa750) = iVar30;
    *(int *)(this + uVar50 * 4 + 0xa7d0) = iVar35;
    *(int *)(this + uVar50 * 4 + 0xa850) = iVar30;
    *(int *)(this + uVar50 * 4 + 0xa8d0) = iVar35;
    *(int *)(this + uVar50 * 4 + 0xa450) = iVar29 + iVar32;
    *(int *)(this + uVar50 * 4 + 0xa3d0) =
         (int)(lVar57 >> 0xf) + (int)((long)iVar35 * (long)iVar70 >> 0xf);
  }
LAB_00172500:
  if (*(int *)(&DAT_003bf7e0 + lVar40) != 0) {
    uVar1 = *(uint *)(&DAT_003bf7a8 + lVar40);
    plVar42 = *(long **)(&DAT_003bf7a0 + lVar40);
    if ((iVar54 - 2U < 3) || (iVar54 == 0)) {
      iVar30 = (int)((long)*(int *)(this + 0x485c) * (long)*(int *)(this + uVar50 * 4 + 0xa750) >>
                    0xf) +
               (int)((long)*(int *)(this + 0x4864) * (long)*(int *)(this + uVar50 * 4 + 0xa850) >>
                    0xf);
      iVar35 = (int)((long)*(int *)(this + 0x4860) * (long)*(int *)(this + uVar50 * 4 + 0xa7d0) >>
                    0xf) +
               (int)((long)*(int *)(this + 0x4868) * (long)*(int *)(this + uVar50 * 4 + 0xa8d0) >>
                    0xf);
    }
    if (plVar42 == (long *)0x0) {
      return;
    }
    if (*plVar42 != 0) {
      *(int *)(*plVar42 + (ulong)uVar1 * 4) = (iVar30 >> 8) << 2;
    }
    if (plVar42[1] != 0) {
      *(int *)(plVar42[1] + (ulong)uVar1 * 4) = (iVar35 >> 8) << 2;
    }
    if (plVar42[5] != 0) {
      *(int *)(plVar42[5] + (ulong)uVar1 * 4) = (*(int *)(this + (uVar50 + 0x27f4) * 4) >> 8) << 2;
    }
    if (plVar42[6] != 0) {
      *(int *)(plVar42[6] + (ulong)uVar1 * 4) = (*(int *)(this + (uVar50 + 0x2814) * 4) >> 8) << 2;
    }
    if (plVar42[7] != 0) {
      *(int *)(plVar42[7] + (ulong)uVar1 * 4) = (*(int *)(this + (uVar50 + 0x2834) * 4) >> 8) << 2;
    }
    if (plVar42[8] != 0) {
      *(int *)(plVar42[8] + (ulong)uVar1 * 4) = (*(int *)(this + (uVar50 + 0x2854) * 4) >> 8) << 2;
    }
    if (plVar42[0xb] != 0) {
      *(int *)(plVar42[0xb] + (ulong)uVar1 * 4) = *(int *)(this + 0x9a34) >> 8;
    }
    if (plVar42[0xc] == 0) {
      return;
    }
    *(int *)(plVar42[0xc] + (ulong)uVar1 * 4) = *(int *)(this + 0x9a38) >> 8;
    return;
  }
  uVar36 = *(uint *)(this + 0x9a74);
  iVar32 = *(int *)(this + 0x3d58);
  iVar70 = *(int *)(this + 0x3d5c);
  iVar30 = (int)((long)iVar65 * (long)*(int *)(this + 0x4160) >> 0xf) +
           (int)((long)*(int *)(this + 0x4164) * (long)*(int *)(this + (ulong)uVar36 * 4 + 0x10b050)
                >> 0xf);
  *(int *)(this + uVar50 * 4 + 0x10b050) = iVar30;
  iVar71 = *(int *)(this + 0x36cc);
  iVar2 = *(int *)(this + 0x3d60);
  iVar51 = *(int *)(this + 0x3d64);
  iVar35 = (int)((long)iVar60 * (long)*(int *)(this + 0x4168) >> 0xf) +
           (int)((long)*(int *)(this + 0x416c) * (long)*(int *)(this + (ulong)uVar36 * 4 + 0x10b0d0)
                >> 0xf);
  *(int *)(this + uVar50 * 4 + 0x10b0d0) = iVar35;
  iVar3 = *(int *)(this + 0x36d0);
  iVar4 = *(int *)(this + 0x3d68);
  iVar54 = (int)((long)iVar74 * (long)*(int *)(this + 0x4170) >> 0xf) +
           (int)((long)*(int *)(this + 0x4174) * (long)*(int *)(this + (ulong)uVar36 * 4 + 0x10b150)
                >> 0xf);
  iVar45 = *(int *)(this + 0x3d6c);
  *(int *)(this + uVar50 * 4 + 0x10b150) = iVar54;
  iVar5 = *(int *)(this + 0x3d70);
  iVar6 = *(int *)(this + 0x36d4);
  iVar29 = (int)((long)iVar33 * (long)*(int *)(this + 0x4178) >> 0xf) +
           (int)((long)*(int *)(this + 0x417c) * (long)*(int *)(this + (ulong)uVar36 * 4 + 0x10b1d0)
                >> 0xf);
  iVar7 = *(int *)(this + 0x3d74);
  *(int *)(this + uVar50 * 4 + 0x10b1d0) = iVar29;
  iVar48 = (int)((long)*(int *)(this + 0x3d50) * (long)*(int *)(this + 0x9a34) >> 0xf);
  iVar38 = (int)((long)*(int *)(this + 0x3d54) * (long)*(int *)(this + 0x9a38) >> 0xf);
  iVar32 = (int)((long)iVar32 * (long)iVar65 >> 0xf) + (int)((long)iVar2 * (long)iVar60 >> 0xf) +
           (int)((long)iVar4 * (long)iVar74 >> 0xf) + (int)((long)iVar5 * (long)iVar33 >> 0xf) +
           iVar48 + *(int *)(this + uVar50 * 4 + 0xa2d0);
  iVar70 = (int)((long)iVar65 * (long)iVar70 >> 0xf) + (int)((long)iVar60 * (long)iVar51 >> 0xf) +
           (int)((long)iVar74 * (long)iVar45 >> 0xf) + (int)((long)iVar33 * (long)iVar7 >> 0xf) +
           iVar38 + *(int *)(this + uVar50 * 4 + 0xa350);
  iVar30 = iVar30 + iVar35 + iVar54 + iVar29 + *(int *)(this + uVar50 * 4 + 0xa450);
  iVar65 = (int)((long)iVar65 * (long)iVar71 >> 0xf) + (int)((long)iVar60 * (long)iVar3 >> 0xf) +
           (int)((long)iVar74 * (long)iVar6 >> 0xf) +
           (int)((long)iVar33 * (long)*(int *)(this + 0x36d8) >> 0xf) +
           (int)((long)*(int *)(this + 0x36e4) * (long)iVar48 >> 0xf) +
           (int)((long)*(int *)(this + 0x36e8) * (long)iVar38 >> 0xf) +
           *(int *)(this + uVar50 * 4 + 0xa3d0);
  *(int *)(this + uVar50 * 4 + 0xa2d0) = iVar32;
  *(int *)(this + uVar50 * 4 + 0xa350) = iVar70;
  *(int *)(this + uVar50 * 4 + 0xa450) = iVar30;
  *(int *)(this + uVar50 * 4 + 0xa3d0) = iVar65;
  if (iVar39 == 1) {
    *(int *)(this + uVar50 * 4 + 0xa4d0) = iVar30;
    *(int *)(this + uVar50 * 4 + 0xa550) = iVar30;
    *(int *)(this + uVar50 * 4 + 0xa5d0) = iVar30;
    iVar60 = *(int *)(this + 0x1e40);
    if (iVar60 == 1) {
      iVar65 = iVar65 + (int)((long)*(int *)(this + 0x36c8) * (long)iVar30 >> 0xf);
      goto LAB_00173d00;
    }
  }
  else {
    iVar60 = *(int *)(this + 0x1e40);
    if (iVar60 == 1) {
LAB_00173d00:
      *(int *)(this + uVar50 * 4 + 0x9e50) = iVar65;
      iVar32 = iVar32 + iVar65;
      *(int *)(this + uVar50 * 4 + 0x9ed0) = iVar65;
      iVar70 = iVar70 + iVar65;
      *(int *)(this + uVar50 * 4 + 0x9f50) = iVar65;
      iVar60 = 1;
    }
    if (iVar39 != 1) goto LAB_00172700;
  }
  iVar32 = iVar32 + (int)((long)*(int *)(this + 0x3680) * (long)*(int *)(this + uVar50 * 4 + 0xa4d0)
                         >> 0xf);
  iVar70 = iVar70 + (int)((long)*(int *)(this + 0x3684) * (long)*(int *)(this + uVar50 * 4 + 0xa550)
                         >> 0xf);
LAB_00172700:
  *(int *)(this + uVar50 * 4 + 0xa650) = iVar32;
  *(int *)(this + uVar50 * 4 + 0xa6d0) = iVar70;
  if (iVar60 == 0) {
    *(int *)(this + uVar50 * 4 + 0xa950) = iVar32;
    *(int *)(this + uVar50 * 4 + 0xa9d0) = iVar70;
  }
  else {
    uVar46 = *(undefined4 *)(this + (ulong)uVar1 * 4 + 0xa6d0);
    *(undefined4 *)(this + (ulong)uVar1 * 4 + 0xa950) =
         *(undefined4 *)(this + (ulong)uVar1 * 4 + 0xa650);
    *(undefined4 *)(this + (ulong)uVar1 * 4 + 0xa9d0) = uVar46;
  }
  uVar1 = *(uint *)(this + 0x9a70);
  iVar65 = *(int *)(this + (ulong)uVar1 * 4 + 0xa950) +
           (int)((long)*(int *)(this + 0x485c) * (long)*(int *)(this + (ulong)uVar1 * 4 + 0xa750) >>
                0xf);
  iVar60 = *(int *)(this + (ulong)uVar1 * 4 + 0xa9d0) +
           (int)((long)*(int *)(this + 0x4860) * (long)*(int *)(this + (ulong)uVar1 * 4 + 0xa7d0) >>
                0xf);
  if ((*(int *)(this + 0x1e50) - 2U < 3) || (*(int *)(this + 0x1e50) == 0)) {
    iVar65 = iVar65 + (int)((long)*(int *)(this + 0x4864) *
                            (long)*(int *)(this + (ulong)uVar1 * 4 + 0xa850) >> 0xf);
    iVar60 = iVar60 + (int)((long)*(int *)(this + 0x4868) *
                            (long)*(int *)(this + (ulong)uVar1 * 4 + 0xa8d0) >> 0xf);
  }
  plVar42 = *(long **)(&DAT_003bf7a0 + *(long *)this);
  *(ulong *)(this + 0x9a68) = CONCAT44(iVar60 << 2,iVar65 << 2);
  *(ulong *)(this + 0x9a60) = CONCAT44(iVar60 << 2,iVar65 << 2);
  uVar1 = *(uint *)(&DAT_003bf7a8 + *(long *)this);
  if (plVar42 != (long *)0x0) {
    if (*plVar42 != 0) {
      *(int *)(*plVar42 + (ulong)uVar1 * 4) = (iVar65 << 2) >> 8;
    }
    if (plVar42[1] != 0) {
      *(int *)(plVar42[1] + (ulong)uVar1 * 4) = *(int *)(this + 0x9a6c) >> 8;
    }
  }
  return;
}

