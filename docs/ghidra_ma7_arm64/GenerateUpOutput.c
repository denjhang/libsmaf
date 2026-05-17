/* GenerateUpOutput @ 0014ecd0 1316B */


/* ARM::CSrc::GenerateUpOutput(unsigned int, ARM::_genbuf*) */

void __thiscall ARM::CSrc::GenerateUpOutput(CSrc *this,uint param_1,_genbuf *param_2)

{
  CSrc *pCVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int *piVar20;
  int *piVar21;
  int *piVar22;
  int *piVar23;
  int *piVar24;
  int *piVar25;
  int *piVar26;
  int *piVar27;
  int *piVar28;
  int *piVar29;
  int *piVar30;
  int *piVar31;
  uint uVar32;
  int *piVar33;
  undefined8 uVar34;
  
  if (param_2 == (_genbuf *)0x0) {
    *(undefined8 *)(this + 0x1fb40) = 0;
    *(undefined8 *)(this + 0x1fb48) = 0;
    *(undefined8 *)(this + 0x1fb50) = 0;
    *(undefined8 *)(this + 0x1fb58) = 0;
    *(undefined8 *)(this + 0x1fb60) = 0;
    *(undefined8 *)(this + 0x1fb68) = 0;
    *(undefined8 *)(this + 0x1fb70) = 0;
    *(undefined8 *)(this + 0x1fb78) = 0;
    *(undefined8 *)(this + 0x1fb80) = 0;
    *(undefined8 *)(this + 0x1fb88) = 0;
    *(undefined8 *)(this + 0x1fb90) = 0;
    *(undefined8 *)(this + 0x1fb98) = 0;
    *(undefined8 *)(this + 0x1fba0) = 0;
    piVar20 = (int *)0x0;
    piVar21 = (int *)0x0;
    piVar22 = (int *)0x0;
    piVar23 = (int *)0x0;
    piVar24 = (int *)0x0;
    piVar25 = (int *)0x0;
    piVar26 = (int *)0x0;
    piVar27 = (int *)0x0;
    piVar28 = (int *)0x0;
    piVar29 = (int *)0x0;
    piVar30 = (int *)0x0;
    piVar31 = (int *)0x0;
    piVar33 = (int *)0x0;
  }
  else {
    piVar21 = *(int **)param_2;
    piVar22 = *(int **)(param_2 + 8);
    piVar23 = *(int **)(param_2 + 0x10);
    piVar24 = *(int **)(param_2 + 0x18);
    piVar25 = *(int **)(param_2 + 0x20);
    piVar26 = *(int **)(param_2 + 0x28);
    piVar27 = *(int **)(param_2 + 0x30);
    piVar28 = *(int **)(param_2 + 0x38);
    piVar29 = *(int **)(param_2 + 0x40);
    piVar30 = *(int **)(param_2 + 0x48);
    piVar31 = *(int **)(param_2 + 0x50);
    piVar33 = *(int **)(param_2 + 0x58);
    piVar20 = *(int **)(param_2 + 0x60);
    *(int **)(this + 0x1fba0) = piVar20;
    *(int **)(this + 0x1fb40) = piVar21;
    *(int **)(this + 0x1fb48) = piVar22;
    *(int **)(this + 0x1fb50) = piVar23;
    *(int **)(this + 0x1fb58) = piVar24;
    *(int **)(this + 0x1fb60) = piVar25;
    *(int **)(this + 0x1fb68) = piVar26;
    *(int **)(this + 0x1fb70) = piVar27;
    *(int **)(this + 0x1fb78) = piVar28;
    *(int **)(this + 0x1fb80) = piVar29;
    *(int **)(this + 0x1fb88) = piVar30;
    *(int **)(this + 0x1fb90) = piVar31;
    *(int **)(this + 0x1fb98) = piVar33;
  }
  if (param_1 == 0) {
    return;
  }
  uVar32 = 0;
  iVar10 = *(int *)(this + 0x1c);
  pCVar1 = this + 0x333f4;
  uVar5 = *(uint *)(this + 0x333f0);
  uVar6 = *(int *)(this + 0x333f4) * iVar10;
  if (iVar10 == 0) goto LAB_0014f134;
  do {
    iVar11 = 0;
    uVar2 = uVar6 + iVar10;
    iVar12 = 0;
    iVar7 = 0;
    iVar8 = 0;
    iVar14 = 0;
    iVar9 = 0;
    iVar17 = 0;
    iVar13 = iVar7;
    iVar15 = iVar8;
    iVar16 = iVar8;
    iVar10 = iVar9;
    iVar18 = iVar9;
    iVar19 = iVar9;
    do {
      iVar3 = *(int *)(*(long *)(this + 0x28) + (ulong)uVar6 * 4);
      uVar4 = uVar5 - 1;
      uVar6 = uVar6 + 1;
      if (uVar5 == 0) {
        uVar4 = 0x9bf;
      }
      uVar34 = NEON_sshr((long)iVar3 * (long)*(int *)(this + (ulong)uVar5 * 4 + 0x3c),8);
      iVar10 = iVar10 + (int)((ulong)((long)iVar3 * (long)*(int *)(this + (ulong)uVar5 * 4 + 0x4e3c)
                                     ) >> 8);
      iVar9 = iVar9 + (int)((ulong)((long)iVar3 * (long)*(int *)(this + (ulong)uVar5 * 4 + 0x753c))
                           >> 8);
      iVar18 = iVar18 + (int)((ulong)((long)iVar3 * (long)*(int *)(this + (ulong)uVar5 * 4 + 0x273c)
                                     ) >> 8);
      iVar7 = iVar7 + (int)((ulong)((long)iVar3 * (long)*(int *)(this + (ulong)uVar5 * 4 + 0x1ad3c))
                           >> 8);
      iVar19 = iVar19 + (int)uVar34;
      iVar17 = iVar17 + (int)((ulong)((long)iVar3 * (long)*(int *)(this + (ulong)uVar5 * 4 + 0x9c3c)
                                     ) >> 8);
      iVar16 = iVar16 + (int)((ulong)((long)iVar3 * (long)*(int *)(this + (ulong)uVar5 * 4 + 0xc33c)
                                     ) >> 8);
      iVar15 = iVar15 + (int)((ulong)((long)iVar3 * (long)*(int *)(this + (ulong)uVar5 * 4 + 0xea3c)
                                     ) >> 8);
      iVar8 = iVar8 + (int)((ulong)((long)iVar3 * (long)*(int *)(this + (ulong)uVar5 * 4 + 0x1113c))
                           >> 8);
      iVar14 = iVar14 + (int)((ulong)((long)iVar3 *
                                     (long)*(int *)(this + (ulong)uVar5 * 4 + 0x1383c)) >> 8);
      iVar13 = iVar13 + (int)((ulong)((long)iVar3 *
                                     (long)*(int *)(this + (ulong)uVar5 * 4 + 0x15f3c)) >> 8);
      iVar12 = iVar12 + (int)((ulong)((long)iVar3 *
                                     (long)*(int *)(this + (ulong)uVar5 * 4 + 0x1863c)) >> 8);
      iVar11 = iVar11 + (int)((ulong)((long)iVar3 *
                                     (long)*(int *)(this + (ulong)uVar5 * 4 + 0x1d43c)) >> 8);
      uVar5 = uVar4;
    } while (uVar6 != uVar2);
    iVar11 = iVar11 >> 7;
    iVar17 = iVar17 >> 7;
    iVar19 = iVar19 >> 7;
    iVar16 = iVar16 >> 7;
    iVar18 = iVar18 >> 7;
    iVar15 = iVar15 >> 7;
    iVar10 = iVar10 >> 7;
    iVar8 = iVar8 >> 7;
    iVar9 = iVar9 >> 7;
    iVar14 = iVar14 >> 7;
    iVar13 = iVar13 >> 7;
    iVar12 = iVar12 >> 7;
    iVar7 = iVar7 >> 7;
    while( true ) {
      if (piVar21 != (int *)0x0) {
        *piVar21 = iVar19;
        *(int **)(this + 0x1fb40) = piVar21 + 1;
      }
      if (piVar22 != (int *)0x0) {
        *piVar22 = iVar18;
        *(int **)(this + 0x1fb48) = piVar22 + 1;
      }
      if (piVar23 != (int *)0x0) {
        *piVar23 = iVar10;
        *(int **)(this + 0x1fb50) = piVar23 + 1;
      }
      if (piVar24 != (int *)0x0) {
        *piVar24 = iVar9;
        *(int **)(this + 0x1fb58) = piVar24 + 1;
      }
      if (piVar25 != (int *)0x0) {
        *piVar25 = iVar17;
        *(int **)(this + 0x1fb60) = piVar25 + 1;
      }
      if (piVar26 != (int *)0x0) {
        *piVar26 = iVar16;
        *(int **)(this + 0x1fb68) = piVar26 + 1;
      }
      if (piVar27 != (int *)0x0) {
        *piVar27 = iVar15;
        *(int **)(this + 0x1fb70) = piVar27 + 1;
      }
      if (piVar28 != (int *)0x0) {
        *piVar28 = iVar8;
        *(int **)(this + 0x1fb78) = piVar28 + 1;
      }
      if (piVar29 != (int *)0x0) {
        *piVar29 = iVar14;
        *(int **)(this + 0x1fb80) = piVar29 + 1;
      }
      if (piVar30 != (int *)0x0) {
        *piVar30 = iVar13;
        *(int **)(this + 0x1fb88) = piVar30 + 1;
      }
      if (piVar31 != (int *)0x0) {
        *piVar31 = iVar12;
        *(int **)(this + 0x1fb90) = piVar31 + 1;
      }
      if (piVar33 != (int *)0x0) {
        *piVar33 = iVar7;
        *(int **)(this + 0x1fb98) = piVar33 + 1;
      }
      if (piVar20 != (int *)0x0) {
        *piVar20 = iVar11;
        *(int **)(this + 0x1fba0) = piVar20 + 1;
      }
      uVar2 = *(uint *)(this + 0x10);
      uVar6 = *(int *)(this + 0xc) + *(uint *)pCVar1;
      *(uint *)pCVar1 = uVar6;
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = uVar6 / uVar2;
      }
      uVar5 = uVar4 + *(int *)(this + 0x333f0);
      if (0x9bf < uVar5) {
        uVar5 = uVar5 % 0x9c0;
      }
      uVar32 = uVar32 + 1;
      *(uint *)(this + 0x333f0) = uVar5;
      uVar6 = uVar6 - uVar4 * uVar2;
      *(uint *)pCVar1 = uVar6;
      if (uVar32 == param_1) {
        return;
      }
      piVar21 = *(int **)(this + 0x1fb40);
      piVar22 = *(int **)(this + 0x1fb48);
      piVar23 = *(int **)(this + 0x1fb50);
      piVar24 = *(int **)(this + 0x1fb58);
      iVar10 = *(int *)(this + 0x1c);
      piVar25 = *(int **)(this + 0x1fb60);
      piVar26 = *(int **)(this + 0x1fb68);
      piVar27 = *(int **)(this + 0x1fb70);
      piVar28 = *(int **)(this + 0x1fb78);
      piVar29 = *(int **)(this + 0x1fb80);
      piVar30 = *(int **)(this + 0x1fb88);
      piVar31 = *(int **)(this + 0x1fb90);
      piVar33 = *(int **)(this + 0x1fb98);
      piVar20 = *(int **)(this + 0x1fba0);
      uVar6 = uVar6 * iVar10;
      if (iVar10 != 0) break;
LAB_0014f134:
      iVar11 = 0;
      iVar17 = iVar11;
      iVar19 = iVar11;
      iVar16 = iVar11;
      iVar18 = iVar11;
      iVar15 = iVar11;
      iVar10 = iVar11;
      iVar8 = iVar11;
      iVar9 = iVar11;
      iVar14 = iVar11;
      iVar13 = iVar11;
      iVar12 = iVar11;
      iVar7 = iVar11;
    }
  } while( true );
}

