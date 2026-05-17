/* MaHvsCnv_Ctrl @ 00093608 324B */


/* YAMAHA::MaHvsCnv_Ctrl(_MACNV_SEQ_INFO*, unsigned int, unsigned int, void*) */

undefined4 YAMAHA::MaHvsCnv_Ctrl(_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3,void *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 local_24;
  
  if ((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
     (pcVar6 = *(char **)(param_1 + 4), pcVar6 == (char *)0x0)) {
LAB_00093654:
    uVar2 = 0xfffffffe;
  }
  else {
    if (param_2 == 10) {
      if (*(int *)(pcVar6 + 0x3b0) != 0) {
        iVar1 = *(int *)((int)param_4 + 4);
        if ((iVar1 != 0) && (*(uint *)((int)param_4 + 8) != 0)) {
          if ((*(short *)param_4 != 0xff) ||
             ((*(char *)((int)param_4 + 2) != 'L' || (*(char *)((int)param_4 + 3) != 'G')))) {
            return 0xffffffeb;
          }
          if (3 < *(uint *)((int)param_4 + 8)) {
            uVar5 = 0;
            *(undefined4 *)((int)param_4 + 0xc) = 4;
            while( true ) {
              uVar9 = uVar5 + 1;
              uVar4 = uVar5 + 2;
              uVar3 = uVar5 + 3;
              uVar7 = uVar5 + 4;
              uVar11 = uVar5 + 5;
              uVar8 = uVar5 + 6;
              uVar10 = uVar5 + 7;
              *(undefined1 *)(iVar1 + uVar5) = *(undefined1 *)(*(int *)(pcVar6 + 0x3b0) + uVar5);
              uVar5 = uVar5 + 8;
              if (((((*(uint *)((int)param_4 + 0xc) <= uVar9) ||
                    (*(undefined1 *)(*(int *)((int)param_4 + 4) + uVar9) =
                          *(undefined1 *)(*(int *)(pcVar6 + 0x3b0) + uVar9),
                    *(uint *)((int)param_4 + 0xc) <= uVar4)) ||
                   (*(undefined1 *)(*(int *)((int)param_4 + 4) + uVar4) =
                         *(undefined1 *)(*(int *)(pcVar6 + 0x3b0) + uVar4),
                   *(uint *)((int)param_4 + 0xc) <= uVar3)) ||
                  ((*(undefined1 *)(*(int *)((int)param_4 + 4) + uVar3) =
                         *(undefined1 *)(*(int *)(pcVar6 + 0x3b0) + uVar3),
                   *(uint *)((int)param_4 + 0xc) <= uVar7 ||
                   (*(undefined1 *)(*(int *)((int)param_4 + 4) + uVar7) =
                         *(undefined1 *)(*(int *)(pcVar6 + 0x3b0) + uVar7),
                   *(uint *)((int)param_4 + 0xc) <= uVar11)))) ||
                 ((*(undefined1 *)(*(int *)((int)param_4 + 4) + uVar11) =
                        *(undefined1 *)(*(int *)(pcVar6 + 0x3b0) + uVar11),
                  *(uint *)((int)param_4 + 0xc) <= uVar8 ||
                  ((*(undefined1 *)(*(int *)((int)param_4 + 4) + uVar8) =
                         *(undefined1 *)(*(int *)(pcVar6 + 0x3b0) + uVar8),
                   *(uint *)((int)param_4 + 0xc) <= uVar10 ||
                   (*(undefined1 *)(*(int *)((int)param_4 + 4) + uVar10) =
                         *(undefined1 *)(*(int *)(pcVar6 + 0x3b0) + uVar10),
                   *(uint *)((int)param_4 + 0xc) <= uVar5)))))) break;
              iVar1 = *(int *)((int)param_4 + 4);
            }
            return 0;
          }
        }
        goto LAB_00093654;
      }
    }
    else {
      if (param_2 != 0x50) goto LAB_00093654;
      if (*pcVar6 == '\x01') {
        local_24 = 0;
        iVar1 = (**(code **)(DAT_0009374c + (uint)(byte)pcVar6[2] * 0x14 + 0x93642))(1,&local_24);
        uVar2 = 0;
        if (-1 < iVar1) {
          uVar2 = local_24;
        }
        *(undefined4 *)param_4 = uVar2;
        return 0;
      }
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

