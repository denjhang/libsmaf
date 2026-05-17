/* PutUpInput @ 0014e83c 760B */


/* ARM::CSrc::PutUpInput(unsigned int, ARM::_genbuf*) */

void __thiscall ARM::CSrc::PutUpInput(CSrc *this,uint param_1,_genbuf *param_2)

{
  CSrc *pCVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  ulong uVar18;
  
  if (param_2 == (_genbuf *)0x0) {
    puVar4 = (undefined4 *)0x0;
    puVar6 = (undefined4 *)0x0;
    puVar7 = (undefined4 *)0x0;
    puVar8 = (undefined4 *)0x0;
    puVar9 = (undefined4 *)0x0;
    puVar10 = (undefined4 *)0x0;
    puVar11 = (undefined4 *)0x0;
    puVar12 = (undefined4 *)0x0;
    puVar13 = (undefined4 *)0x0;
    puVar14 = (undefined4 *)0x0;
    puVar15 = (undefined4 *)0x0;
    puVar16 = (undefined4 *)0x0;
    puVar17 = (undefined4 *)0x0;
  }
  else {
    puVar4 = *(undefined4 **)param_2;
    puVar6 = *(undefined4 **)(param_2 + 8);
    puVar7 = *(undefined4 **)(param_2 + 0x10);
    puVar8 = *(undefined4 **)(param_2 + 0x18);
    puVar9 = *(undefined4 **)(param_2 + 0x20);
    puVar10 = *(undefined4 **)(param_2 + 0x28);
    puVar11 = *(undefined4 **)(param_2 + 0x30);
    puVar12 = *(undefined4 **)(param_2 + 0x38);
    puVar13 = *(undefined4 **)(param_2 + 0x40);
    puVar14 = *(undefined4 **)(param_2 + 0x48);
    puVar15 = *(undefined4 **)(param_2 + 0x50);
    puVar16 = *(undefined4 **)(param_2 + 0x58);
    puVar17 = *(undefined4 **)(param_2 + 0x60);
  }
  if (param_1 != 0) {
    uVar3 = 0;
    uVar2 = *(uint *)(this + 0x333e8);
    do {
      if (param_2 == (_genbuf *)0x0) {
        *(undefined4 *)(this + (ulong)uVar2 * 4 + 0x3c) = 0;
        *(undefined4 *)(this + (ulong)uVar2 * 4 + 0x273c) = 0;
        *(undefined4 *)(this + (ulong)uVar2 * 4 + 0x4e3c) = 0;
        *(undefined4 *)(this + (ulong)uVar2 * 4 + 0x753c) = 0;
        *(undefined4 *)(this + (ulong)uVar2 * 4 + 0x9c3c) = 0;
        *(undefined4 *)(this + (ulong)uVar2 * 4 + 0xc33c) = 0;
        *(undefined4 *)(this + (ulong)uVar2 * 4 + 0xea3c) = 0;
        *(undefined4 *)(this + (ulong)uVar2 * 4 + 0x1113c) = 0;
        *(undefined4 *)(this + (ulong)uVar2 * 4 + 0x1383c) = 0;
        *(undefined4 *)(this + (ulong)uVar2 * 4 + 0x15f3c) = 0;
        *(undefined4 *)(this + (ulong)uVar2 * 4 + 0x1863c) = 0;
        *(undefined4 *)(this + (ulong)uVar2 * 4 + 0x1ad3c) = 0;
        *(undefined4 *)(this + (ulong)uVar2 * 4 + 0x1d43c) = 0;
      }
      else {
        uVar18 = (ulong)uVar2;
        if (puVar4 == (undefined4 *)0x0) {
          pCVar1 = this + uVar18 * 4;
          *(undefined4 *)(this + uVar18 * 4 + 0x3c) = 0;
          if (puVar6 != (undefined4 *)0x0) goto LAB_0014e8b0;
LAB_0014ea44:
          *(int *)(pCVar1 + 0x273c) = (int)puVar6;
          if (puVar7 != (undefined4 *)0x0) goto LAB_0014e8c0;
LAB_0014ea50:
          *(int *)(this + (uVar18 + 0x1000) * 4 + 0xe3c) = (int)puVar7;
          if (puVar8 != (undefined4 *)0x0) goto LAB_0014e8d4;
LAB_0014ea60:
          *(int *)(this + (uVar18 + 0x1000) * 4 + 0x353c) = (int)puVar8;
          if (puVar9 != (undefined4 *)0x0) goto LAB_0014e8e8;
LAB_0014ea70:
          *(int *)(this + (uVar18 + 0x2000) * 4 + 0x1c3c) = (int)puVar9;
          if (puVar10 != (undefined4 *)0x0) goto LAB_0014e8fc;
LAB_0014ea80:
          *(int *)(this + (uVar18 + 0x3000) * 4 + 0x33c) = (int)puVar10;
          if (puVar11 != (undefined4 *)0x0) goto LAB_0014e910;
LAB_0014ea90:
          *(int *)(this + (uVar18 + 0x3000) * 4 + 0x2a3c) = (int)puVar11;
          if (puVar12 != (undefined4 *)0x0) goto LAB_0014e924;
LAB_0014eaa0:
          *(int *)(this + (uVar18 + 0x4000) * 4 + 0x113c) = (int)puVar12;
          if (puVar13 != (undefined4 *)0x0) goto LAB_0014e938;
LAB_0014eab0:
          *(int *)(this + (uVar18 + 0x4000) * 4 + 0x383c) = (int)puVar13;
          if (puVar14 != (undefined4 *)0x0) goto LAB_0014e94c;
LAB_0014eac0:
          *(int *)(this + (uVar18 + 0x5000) * 4 + 0x1f3c) = (int)puVar14;
          if (puVar15 != (undefined4 *)0x0) goto LAB_0014e960;
LAB_0014ead0:
          *(int *)(this + (uVar18 + 0x6000) * 4 + 0x63c) = (int)puVar15;
          if (puVar16 != (undefined4 *)0x0) goto LAB_0014e974;
LAB_0014eae0:
          *(int *)(this + (uVar18 + 0x6000) * 4 + 0x2d3c) = (int)puVar16;
        }
        else {
          puVar5 = puVar4 + 1;
          *(undefined4 *)(this + uVar18 * 4 + 0x3c) = *puVar4;
          pCVar1 = this + uVar18 * 4;
          puVar4 = puVar5;
          if (puVar6 == (undefined4 *)0x0) goto LAB_0014ea44;
LAB_0014e8b0:
          puVar5 = puVar6 + 1;
          *(undefined4 *)(pCVar1 + 0x273c) = *puVar6;
          puVar6 = puVar5;
          if (puVar7 == (undefined4 *)0x0) goto LAB_0014ea50;
LAB_0014e8c0:
          puVar5 = puVar7 + 1;
          *(undefined4 *)(this + (uVar18 + 0x1000) * 4 + 0xe3c) = *puVar7;
          puVar7 = puVar5;
          if (puVar8 == (undefined4 *)0x0) goto LAB_0014ea60;
LAB_0014e8d4:
          puVar5 = puVar8 + 1;
          *(undefined4 *)(this + (uVar18 + 0x1000) * 4 + 0x353c) = *puVar8;
          puVar8 = puVar5;
          if (puVar9 == (undefined4 *)0x0) goto LAB_0014ea70;
LAB_0014e8e8:
          puVar5 = puVar9 + 1;
          *(undefined4 *)(this + (uVar18 + 0x2000) * 4 + 0x1c3c) = *puVar9;
          puVar9 = puVar5;
          if (puVar10 == (undefined4 *)0x0) goto LAB_0014ea80;
LAB_0014e8fc:
          puVar5 = puVar10 + 1;
          *(undefined4 *)(this + (uVar18 + 0x3000) * 4 + 0x33c) = *puVar10;
          puVar10 = puVar5;
          if (puVar11 == (undefined4 *)0x0) goto LAB_0014ea90;
LAB_0014e910:
          puVar5 = puVar11 + 1;
          *(undefined4 *)(this + (uVar18 + 0x3000) * 4 + 0x2a3c) = *puVar11;
          puVar11 = puVar5;
          if (puVar12 == (undefined4 *)0x0) goto LAB_0014eaa0;
LAB_0014e924:
          puVar5 = puVar12 + 1;
          *(undefined4 *)(this + (uVar18 + 0x4000) * 4 + 0x113c) = *puVar12;
          puVar12 = puVar5;
          if (puVar13 == (undefined4 *)0x0) goto LAB_0014eab0;
LAB_0014e938:
          puVar5 = puVar13 + 1;
          *(undefined4 *)(this + (uVar18 + 0x4000) * 4 + 0x383c) = *puVar13;
          puVar13 = puVar5;
          if (puVar14 == (undefined4 *)0x0) goto LAB_0014eac0;
LAB_0014e94c:
          puVar5 = puVar14 + 1;
          *(undefined4 *)(this + (uVar18 + 0x5000) * 4 + 0x1f3c) = *puVar14;
          puVar14 = puVar5;
          if (puVar15 == (undefined4 *)0x0) goto LAB_0014ead0;
LAB_0014e960:
          puVar5 = puVar15 + 1;
          *(undefined4 *)(this + (uVar18 + 0x6000) * 4 + 0x63c) = *puVar15;
          puVar15 = puVar5;
          if (puVar16 == (undefined4 *)0x0) goto LAB_0014eae0;
LAB_0014e974:
          *(undefined4 *)(this + (uVar18 + 0x6000) * 4 + 0x2d3c) = *puVar16;
          puVar16 = puVar16 + 1;
        }
        if (puVar17 == (undefined4 *)0x0) {
          *(undefined4 *)(this + (uVar18 + 0x7000) * 4 + 0x143c) = 0;
        }
        else {
          *(undefined4 *)(this + (uVar18 + 0x7000) * 4 + 0x143c) = *puVar17;
          puVar17 = puVar17 + 1;
        }
      }
      uVar2 = uVar2 + 1;
      if (uVar2 == 0x9c0) {
        *(undefined4 *)(this + 0x333e8) = 0;
        uVar2 = 0;
      }
      else {
        *(uint *)(this + 0x333e8) = uVar2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_1);
  }
  return;
}

