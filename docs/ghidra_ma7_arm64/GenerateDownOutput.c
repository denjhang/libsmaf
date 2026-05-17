/* GenerateDownOutput @ 0014f1f4 1156B */


/* ARM::CSrc::GenerateDownOutput(unsigned int, ARM::_genbuf*) */

void __thiscall ARM::CSrc::GenerateDownOutput(CSrc *this,uint param_1,_genbuf *param_2)

{
  CSrc *pCVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  long lVar28;
  uint uVar29;
  int *piVar30;
  int *piVar31;
  
  lVar5 = *(long *)this;
  iVar4 = *(int *)(&DAT_003bf7e0 + lVar5);
  if (param_2 == (_genbuf *)0x0) {
    *(undefined8 *)(this + 0x333a8) = 0;
    *(undefined8 *)(this + 0x333b0) = 0;
    piVar30 = (int *)0x0;
    piVar31 = piVar30;
    if (iVar4 != 0) {
      *(undefined8 *)(this + 0x333c0) = 0;
      *(undefined8 *)(this + 0x333b8) = 0;
      *(undefined8 *)(this + 0x333d0) = 0;
      *(undefined8 *)(this + 0x333c8) = 0;
      *(undefined8 *)(this + 0x333e0) = 0;
      *(undefined8 *)(this + 0x333d8) = 0;
    }
  }
  else {
    piVar30 = *(int **)param_2;
    piVar31 = *(int **)(param_2 + 8);
    *(int **)(this + 0x333b0) = piVar31;
    *(int **)(this + 0x333a8) = piVar30;
    if (iVar4 != 0) {
      uVar10 = *(undefined8 *)(param_2 + 0x28);
      uVar9 = *(undefined8 *)(param_2 + 0x30);
      uVar12 = *(undefined8 *)(param_2 + 0x38);
      uVar13 = *(undefined8 *)(param_2 + 0x40);
      uVar14 = *(undefined8 *)(param_2 + 0x58);
      *(undefined8 *)(this + 0x333e0) = *(undefined8 *)(param_2 + 0x60);
      *(undefined8 *)(this + 0x333b8) = uVar10;
      *(undefined8 *)(this + 0x333c0) = uVar9;
      *(undefined8 *)(this + 0x333c8) = uVar12;
      *(undefined8 *)(this + 0x333d0) = uVar13;
      *(undefined8 *)(this + 0x333d8) = uVar14;
    }
  }
  if (param_1 == 0) {
    return;
  }
  iVar20 = *(int *)(this + 0x20);
  uVar6 = *(uint *)(this + 0x333f8);
  uVar29 = 0;
  pCVar1 = this + 0x333fc;
  uVar8 = *(int *)(this + 0x333fc) * iVar20;
  if (iVar20 == 0) goto LAB_0014f4e0;
  do {
    lVar28 = *(long *)(this + 0x30);
    if (iVar4 == 0) {
      uVar2 = uVar8 + iVar20;
      iVar20 = *(int *)(lVar28 + (ulong)uVar8 * 4);
      uVar7 = uVar8 + 1;
      uVar22 = uVar6 - 1;
      if (uVar6 == 0) {
        uVar22 = 0x9bf;
      }
      uVar17 = (long)iVar20 * (long)*(int *)(this + (ulong)uVar6 * 4 + 0x1fba8);
      uVar11 = (long)iVar20 * (long)*(int *)(this + (ulong)uVar6 * 4 + 0x222a8);
      uVar18 = uVar17 >> 8;
      uVar16 = (uint)(uVar17 >> 8);
      uVar17 = uVar11 >> 8;
      uVar19 = (uint)(uVar11 >> 8);
      if (uVar7 != uVar2) {
        if ((~uVar8 + uVar2 & 1) != 0) {
          iVar20 = *(int *)(lVar28 + (ulong)uVar7 * 4);
          uVar6 = uVar22 - 1;
          uVar7 = uVar8 + 2;
          if (uVar22 == 0) {
            uVar6 = 0x9bf;
          }
          uVar16 = uVar16 + (int)((ulong)((long)iVar20 *
                                         (long)*(int *)(this + (ulong)uVar22 * 4 + 0x1fba8)) >> 8);
          uVar18 = (ulong)uVar16;
          uVar19 = uVar19 + (int)((ulong)((long)iVar20 *
                                         (long)*(int *)(this + (ulong)uVar22 * 4 + 0x222a8)) >> 8);
          uVar17 = (ulong)uVar19;
          uVar22 = uVar6;
          if (uVar7 == uVar2) goto LAB_0014f39c;
        }
        do {
          uVar8 = uVar22 - 1;
          if (uVar22 == 0) {
            uVar8 = 0x9bf;
          }
          uVar6 = uVar7 + 1;
          iVar20 = *(int *)(lVar28 + (ulong)uVar7 * 4);
          uVar3 = uVar8 - 1;
          uVar7 = uVar7 + 2;
          iVar26 = *(int *)(lVar28 + (ulong)uVar6 * 4);
          if (uVar8 == 0) {
            uVar3 = 0x9bf;
          }
          uVar16 = (int)uVar18 +
                   (int)((ulong)((long)iVar20 * (long)*(int *)(this + (ulong)uVar22 * 4 + 0x1fba8))
                        >> 8) +
                   (int)((ulong)((long)iVar26 * (long)*(int *)(this + (ulong)uVar8 * 4 + 0x1fba8))
                        >> 8);
          uVar18 = (ulong)uVar16;
          uVar19 = (int)uVar17 +
                   (int)((ulong)((long)iVar20 * (long)*(int *)(this + (ulong)uVar22 * 4 + 0x222a8))
                        >> 8) +
                   (int)((ulong)((long)iVar26 * (long)*(int *)(this + (ulong)uVar8 * 4 + 0x222a8))
                        >> 8);
          uVar17 = (ulong)uVar19;
          uVar22 = uVar3;
        } while (uVar7 != uVar2);
      }
LAB_0014f39c:
      iVar15 = 0;
      iVar23 = 0;
      iVar24 = 0;
      iVar25 = 0;
      iVar26 = 0;
      iVar20 = 0;
    }
    else {
      iVar15 = 0;
      uVar7 = uVar8 + iVar20;
      iVar23 = 0;
      iVar24 = 0;
      iVar25 = 0;
      iVar26 = 0;
      iVar20 = 0;
      uVar19 = 0;
      uVar16 = 0;
      do {
        iVar21 = *(int *)(lVar28 + (ulong)uVar8 * 4);
        uVar2 = uVar6 - 1;
        uVar8 = uVar8 + 1;
        if (uVar6 == 0) {
          uVar2 = 0x9bf;
        }
        uVar16 = uVar16 + (int)((ulong)((long)iVar21 *
                                       (long)*(int *)(this + (ulong)uVar6 * 4 + 0x1fba8)) >> 8);
        uVar19 = uVar19 + (int)((ulong)((long)iVar21 *
                                       (long)*(int *)(this + (ulong)uVar6 * 4 + 0x222a8)) >> 8);
        iVar20 = iVar20 + (int)((ulong)((long)iVar21 *
                                       (long)*(int *)(this + (ulong)uVar6 * 4 + 0x249a8)) >> 8);
        iVar26 = iVar26 + (int)((ulong)((long)iVar21 *
                                       (long)*(int *)(this + (ulong)uVar6 * 4 + 0x270a8)) >> 8);
        iVar25 = iVar25 + (int)((ulong)((long)iVar21 *
                                       (long)*(int *)(this + (ulong)uVar6 * 4 + 0x297a8)) >> 8);
        iVar24 = iVar24 + (int)((ulong)((long)iVar21 *
                                       (long)*(int *)(this + (ulong)uVar6 * 4 + 0x2bea8)) >> 8);
        iVar23 = iVar23 + (int)((ulong)((long)iVar21 *
                                       (long)*(int *)(this + (ulong)uVar6 * 4 + 0x2e5a8)) >> 8);
        iVar15 = iVar15 + (int)((ulong)((long)iVar21 *
                                       (long)*(int *)(this + (ulong)uVar6 * 4 + 0x30ca8)) >> 8);
        uVar6 = uVar2;
      } while (uVar8 != uVar7);
    }
    iVar21 = (int)uVar19 >> 7;
    iVar27 = (int)uVar16 >> 7;
    while( true ) {
      if (iVar4 != 0) {
        iVar20 = iVar20 >> 7;
        iVar26 = iVar26 >> 7;
        iVar25 = iVar25 >> 7;
        iVar24 = iVar24 >> 7;
        iVar23 = iVar23 >> 7;
        iVar15 = iVar15 >> 7;
      }
      if (piVar30 != (int *)0x0) {
        *piVar30 = iVar27;
        *(int **)(this + 0x333a8) = piVar30 + 1;
      }
      if (piVar31 != (int *)0x0) {
        *piVar31 = iVar21;
        *(int **)(this + 0x333b0) = piVar31 + 1;
      }
      if (iVar4 != 0) {
        piVar30 = *(int **)(this + 0x333b8);
        if (piVar30 != (int *)0x0) {
          *piVar30 = iVar20;
          *(int **)(this + 0x333b8) = piVar30 + 1;
        }
        piVar30 = *(int **)(this + 0x333c0);
        if (piVar30 != (int *)0x0) {
          *piVar30 = iVar26;
          *(int **)(this + 0x333c0) = piVar30 + 1;
        }
        piVar30 = *(int **)(this + 0x333c8);
        if (piVar30 != (int *)0x0) {
          *piVar30 = iVar25;
          *(int **)(this + 0x333c8) = piVar30 + 1;
        }
        piVar30 = *(int **)(this + 0x333d0);
        if (piVar30 != (int *)0x0) {
          *piVar30 = iVar24;
          *(int **)(this + 0x333d0) = piVar30 + 1;
        }
        piVar30 = *(int **)(this + 0x333d8);
        if (piVar30 != (int *)0x0) {
          *piVar30 = iVar23;
          *(int **)(this + 0x333d8) = piVar30 + 1;
        }
        piVar30 = *(int **)(this + 0x333e0);
        if (piVar30 != (int *)0x0) {
          *piVar30 = iVar15;
          *(int **)(this + 0x333e0) = piVar30 + 1;
        }
      }
      uVar7 = *(uint *)(this + 0x18);
      uVar8 = *(int *)(this + 0x14) + *(uint *)pCVar1;
      *(uint *)pCVar1 = uVar8;
      uVar16 = 0;
      if (uVar7 != 0) {
        uVar16 = uVar8 / uVar7;
      }
      uVar6 = uVar16 + *(int *)(this + 0x333f8);
      if (0x9bf < uVar6) {
        uVar6 = uVar6 % 0x9c0;
      }
      *(uint *)(this + 0x333f8) = uVar6;
      uVar8 = uVar8 - uVar16 * uVar7;
      uVar29 = uVar29 + 1;
      *(uint *)pCVar1 = uVar8;
      if (uVar29 == param_1) {
        return;
      }
      iVar20 = *(int *)(this + 0x20);
      piVar30 = *(int **)(this + 0x333a8);
      piVar31 = *(int **)(this + 0x333b0);
      uVar8 = uVar8 * iVar20;
      iVar4 = *(int *)(&DAT_003bf7e0 + lVar5);
      if (iVar20 != 0) break;
LAB_0014f4e0:
      iVar21 = 0;
      iVar27 = iVar21;
      iVar20 = iVar21;
      iVar26 = iVar21;
      iVar25 = iVar21;
      iVar24 = iVar21;
      iVar23 = iVar21;
      iVar15 = iVar21;
    }
  } while( true );
}

