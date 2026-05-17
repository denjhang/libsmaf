/* GenerateThread @ 00032b80 424B */


/* GenerateThread(void*) */

undefined4 GenerateThread(void *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  iVar8 = DAT_00032d2c;
  piVar7 = *(int **)(DAT_00032d28 + 0x32b8e);
  iVar6 = *piVar7;
  if (0 < iVar6) {
    iVar9 = 0;
    piVar4 = (int *)(DAT_00032d2c + 0x32ba2);
    *piVar4 = 0;
    *(undefined4 *)(iVar8 + 0x32ba6) = 0;
    do {
      pvVar2 = operator_new__(iVar6 << 2);
      iVar6 = *piVar7;
      *(void **)(iVar9 + iVar8 + 0x32baa) = pvVar2;
      if (0 < iVar6) {
        iVar5 = 0;
        do {
          *(undefined1 *)((int)pvVar2 + iVar5) = 0;
          iVar16 = iVar5 + 1;
          iVar6 = *piVar7;
          iVar11 = iVar5 + 3;
          iVar15 = iVar5 + 4;
          iVar12 = iVar5 + 5;
          iVar13 = iVar5 + 6;
          iVar14 = iVar5 + 7;
          iVar3 = iVar5 + 2;
          iVar5 = iVar5 + 8;
          if (iVar6 * 4 <= iVar16) break;
          *(undefined1 *)((int)pvVar2 + iVar16) = 0;
          iVar6 = *piVar7;
          if (iVar6 * 4 <= iVar3) break;
          *(undefined1 *)((int)pvVar2 + iVar3) = 0;
          iVar6 = *piVar7;
          if (iVar6 * 4 <= iVar11) break;
          *(undefined1 *)((int)pvVar2 + iVar11) = 0;
          iVar6 = *piVar7;
          if (iVar6 * 4 <= iVar15) break;
          *(undefined1 *)((int)pvVar2 + iVar15) = 0;
          iVar6 = *piVar7;
          if (iVar6 * 4 <= iVar12) break;
          *(undefined1 *)((int)pvVar2 + iVar12) = 0;
          iVar6 = *piVar7;
          if (iVar6 * 4 <= iVar13) break;
          *(undefined1 *)((int)pvVar2 + iVar13) = 0;
          iVar6 = *piVar7;
          if (iVar6 * 4 <= iVar14) break;
          *(undefined1 *)((int)pvVar2 + iVar14) = 0;
          iVar6 = *piVar7;
        } while (iVar5 < iVar6 * 4);
      }
      *(undefined4 *)(iVar9 + iVar8 + 0x32bbe) = 0;
      iVar9 = iVar9 + 4;
    } while (iVar9 != 0x14);
    piVar10 = *(int **)(DAT_00032d30 + 0x32c52);
    iVar8 = *piVar10;
    while (iVar8 != 0) {
      while (piVar4[*piVar4 + 7] == 0) {
        (**(code **)((int)param_1 + 4))(piVar4[*piVar4 + 2],*piVar7);
        iVar8 = *piVar4;
        iVar6 = iVar8 + 1;
        if (4 < iVar6) {
          iVar6 = 0;
        }
        *piVar4 = iVar6;
        piVar4[iVar8 + 7] = 1;
        sched_yield();
        if (*piVar10 == 0) goto LAB_00032ca8;
      }
      sched_yield();
      iVar8 = *piVar10;
    }
LAB_00032ca8:
    iVar8 = DAT_00032d34;
    puVar1 = (undefined4 *)(DAT_00032d34 + 0x32cba);
    *(undefined4 *)(DAT_00032d34 + 0x32cce) = 0;
    if ((void *)*puVar1 != (void *)0x0) {
      operator_delete__((void *)*puVar1);
    }
    *(undefined4 *)(iVar8 + 0x32cba) = 0;
    *(undefined4 *)(iVar8 + 0x32cd2) = 0;
    if (*(void **)(iVar8 + 0x32cbe) != (void *)0x0) {
      operator_delete__(*(void **)(iVar8 + 0x32cbe));
    }
    *(undefined4 *)(iVar8 + 0x32cbe) = 0;
    *(undefined4 *)(iVar8 + 0x32cd6) = 0;
    if (*(void **)(iVar8 + 0x32cc2) != (void *)0x0) {
      operator_delete__(*(void **)(iVar8 + 0x32cc2));
    }
    *(undefined4 *)(iVar8 + 0x32cc2) = 0;
    *(undefined4 *)(iVar8 + 0x32cda) = 0;
    if (*(void **)(iVar8 + 0x32cc6) != (void *)0x0) {
      operator_delete__(*(void **)(iVar8 + 0x32cc6));
    }
    *(undefined4 *)(iVar8 + 0x32cde) = 0;
    *(undefined4 *)(iVar8 + 0x32cc6) = 0;
    if (*(void **)(iVar8 + 0x32cca) != (void *)0x0) {
      operator_delete__(*(void **)(iVar8 + 0x32cca));
    }
    iVar6 = DAT_00032d38;
    *(undefined4 *)(iVar8 + 0x32cca) = 0;
    *(undefined4 *)(iVar6 + 0x32d1e) = 0;
    *(undefined4 *)(iVar6 + 0x32d22) = 0;
  }
  return 0;
}

