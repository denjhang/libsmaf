/* MaHvsCnv_Ctrl @ 001b6560 548B */


/* YAMAHA::MaHvsCnv_Ctrl(_MACNV_SEQ_INFO*, unsigned int, unsigned int, void*) */

void YAMAHA::MaHvsCnv_Ctrl(_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3,void *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  
  lVar6 = *(long *)PTR___stack_chk_guard_00567868;
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) &&
     (pcVar9 = *(char **)(param_1 + 8), pcVar9 != (char *)0x0)) {
    if (param_2 == 10) {
      lVar8 = *(long *)(pcVar9 + 0x3b0);
      if (lVar8 == 0) goto LAB_001b6778;
      lVar7 = *(long *)((long)param_4 + 8);
      if ((lVar7 != 0) && (*(uint *)((long)param_4 + 0x10) != 0)) {
        if ((*(short *)param_4 != 0xff) ||
           ((*(char *)((long)param_4 + 2) != 'L' || (*(char *)((long)param_4 + 3) != 'G')))) {
          uVar3 = 0xffffffeb;
          goto LAB_001b6598;
        }
        if (3 < *(uint *)((long)param_4 + 0x10)) {
          uVar5 = 0;
          *(undefined4 *)((long)param_4 + 0x14) = 4;
          while( true ) {
            iVar4 = (int)uVar5;
            uVar1 = iVar4 + 1;
            *(undefined1 *)(lVar7 + uVar5) = *(undefined1 *)(lVar8 + uVar5);
            if (*(uint *)((long)param_4 + 0x14) <= uVar1) break;
            uVar2 = iVar4 + 2;
            *(undefined1 *)(*(long *)((long)param_4 + 8) + (ulong)uVar1) =
                 *(undefined1 *)(*(long *)(pcVar9 + 0x3b0) + (ulong)uVar1);
            if (*(uint *)((long)param_4 + 0x14) <= uVar2) break;
            uVar1 = iVar4 + 3;
            *(undefined1 *)(*(long *)((long)param_4 + 8) + (ulong)uVar2) =
                 *(undefined1 *)(*(long *)(pcVar9 + 0x3b0) + (ulong)uVar2);
            if (*(uint *)((long)param_4 + 0x14) <= uVar1) break;
            uVar2 = iVar4 + 4;
            *(undefined1 *)(*(long *)((long)param_4 + 8) + (ulong)uVar1) =
                 *(undefined1 *)(*(long *)(pcVar9 + 0x3b0) + (ulong)uVar1);
            if (*(uint *)((long)param_4 + 0x14) <= uVar2) break;
            uVar1 = iVar4 + 5;
            *(undefined1 *)(*(long *)((long)param_4 + 8) + (ulong)uVar2) =
                 *(undefined1 *)(*(long *)(pcVar9 + 0x3b0) + (ulong)uVar2);
            if (*(uint *)((long)param_4 + 0x14) <= uVar1) break;
            uVar2 = iVar4 + 6;
            *(undefined1 *)(*(long *)((long)param_4 + 8) + (ulong)uVar1) =
                 *(undefined1 *)(*(long *)(pcVar9 + 0x3b0) + (ulong)uVar1);
            if (*(uint *)((long)param_4 + 0x14) <= uVar2) break;
            uVar1 = iVar4 + 7;
            *(undefined1 *)(*(long *)((long)param_4 + 8) + (ulong)uVar2) =
                 *(undefined1 *)(*(long *)(pcVar9 + 0x3b0) + (ulong)uVar2);
            if (*(uint *)((long)param_4 + 0x14) <= uVar1) break;
            uVar5 = (ulong)(iVar4 + 8U);
            *(undefined1 *)(*(long *)((long)param_4 + 8) + (ulong)uVar1) =
                 *(undefined1 *)(*(long *)(pcVar9 + 0x3b0) + (ulong)uVar1);
            if (*(uint *)((long)param_4 + 0x14) <= iVar4 + 8U) break;
            lVar7 = *(long *)((long)param_4 + 8);
            lVar8 = *(long *)(pcVar9 + 0x3b0);
          }
          uVar3 = 0;
          goto LAB_001b6598;
        }
      }
    }
    else if (param_2 == 0x50) {
      if (*pcVar9 == '\x01') {
        (*(code *)(&PTR_MaS2PCnvJP_Control_00565d50)[(ulong)(byte)pcVar9[2] * 5])();
        *(undefined4 *)param_4 = 0;
        uVar3 = 0;
        goto LAB_001b6598;
      }
LAB_001b6778:
      uVar3 = 0xffffffff;
      goto LAB_001b6598;
    }
  }
  uVar3 = 0xfffffffe;
LAB_001b6598:
  if (lVar6 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

