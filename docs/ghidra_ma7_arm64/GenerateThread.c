/* GenerateThread @ 0012f768 628B */


/* GenerateThread(void*) */

undefined8 GenerateThread(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  
  iVar11 = *(int *)PTR_g_nGenerateSample_00567e30;
  if (0 < iVar11) {
    lVar12 = 0;
    DAT_005824d0 = 0;
    DAT_005824d4 = 0;
    do {
      puVar9 = operator_new__((long)(iVar11 << 2));
      iVar11 = *(int *)PTR_g_nGenerateSample_00567e30;
      (&DAT_005824e0)[lVar12] = puVar9;
      if (0 < iVar11) {
        iVar10 = 0;
        do {
          iVar1 = iVar10 + 1;
          iVar2 = iVar10 + 3;
          iVar3 = iVar10 + 4;
          iVar4 = iVar10 + 5;
          iVar5 = iVar10 + 6;
          *puVar9 = 0;
          puVar8 = PTR_g_nGenerateSample_00567e30;
          iVar6 = iVar10 + 7;
          iVar7 = iVar10 + 2;
          iVar10 = iVar10 + 8;
          iVar11 = *(int *)PTR_g_nGenerateSample_00567e30;
          if (iVar11 * 4 <= iVar1) break;
          puVar9[1] = 0;
          iVar11 = *(int *)puVar8;
          if (iVar11 * 4 <= iVar7) break;
          puVar9[2] = 0;
          iVar11 = *(int *)puVar8;
          if (iVar11 * 4 <= iVar2) break;
          puVar9[3] = 0;
          iVar11 = *(int *)puVar8;
          if (iVar11 * 4 <= iVar3) break;
          puVar9[4] = 0;
          iVar11 = *(int *)puVar8;
          if (iVar11 * 4 <= iVar4) break;
          puVar9[5] = 0;
          iVar11 = *(int *)puVar8;
          if (iVar11 * 4 <= iVar5) break;
          puVar9[6] = 0;
          iVar11 = *(int *)puVar8;
          if (iVar11 * 4 <= iVar6) break;
          puVar9[7] = 0;
          puVar9 = puVar9 + 8;
          iVar11 = *(int *)puVar8;
        } while (iVar10 < iVar11 * 4);
      }
      (&DAT_00582510)[lVar12] = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 != 5);
    iVar11 = *(int *)PTR_g_bLoop_00567178;
    while (iVar11 != 0) {
      while ((&DAT_00582510)[DAT_005824d0] != 0) {
        sched_yield();
        if (*(int *)PTR_g_bLoop_00567178 == 0) goto LAB_0012f910;
      }
      (**(code **)((long)param_1 + 8))
                ((&DAT_005824e0)[DAT_005824d0],*(undefined4 *)PTR_g_nGenerateSample_00567e30);
      iVar11 = DAT_005824d0 + 1;
      (&DAT_00582510)[DAT_005824d0] = 1;
      if (4 < iVar11) {
        iVar11 = 0;
      }
      DAT_005824d0 = iVar11;
      sched_yield();
      iVar11 = *(int *)PTR_g_bLoop_00567178;
    }
LAB_0012f910:
    DAT_00582510 = 0;
    if (DAT_005824e0 != (void *)0x0) {
      operator_delete__(DAT_005824e0);
    }
    DAT_00582514 = 0;
    DAT_005824e0 = (void *)0x0;
    if (DAT_005824e8 != (void *)0x0) {
      operator_delete__(DAT_005824e8);
    }
    DAT_005824e8 = (void *)0x0;
    DAT_00582518 = 0;
    if (DAT_005824f0 != (void *)0x0) {
      operator_delete__(DAT_005824f0);
    }
    DAT_005824f0 = (void *)0x0;
    DAT_0058251c = 0;
    if (DAT_005824f8 != (void *)0x0) {
      operator_delete__(DAT_005824f8);
    }
    DAT_005824f8 = (void *)0x0;
    DAT_00582520 = 0;
    if (DAT_00582500 != (void *)0x0) {
      operator_delete__(DAT_00582500);
    }
    DAT_005824d0 = 0;
    DAT_005824d4 = 0;
    DAT_00582500 = (void *)0x0;
  }
  return 0;
}

