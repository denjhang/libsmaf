/* MaPhrCnv_Ctrl @ 000bf3a0 148B */


/* YAMAHA::MaPhrCnv_Ctrl(_MACNV_SEQ_INFO*, unsigned int, unsigned int, void*) */

undefined4 YAMAHA::MaPhrCnv_Ctrl(_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3,void *param_4)

{
  short sVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int *piVar4;
  
  if (((param_1 != (_MACNV_SEQ_INFO *)0x0) &&
      (piVar4 = *(int **)(param_1 + 4), piVar4 != (int *)0x0)) && (param_4 != (void *)0x0)) {
    if (param_2 != 10) {
      if (param_2 == 0x2b) {
        if (*piVar4 == 1) {
          *(int *)param_4 = piVar4[0xc] * piVar4[8];
          return 0;
        }
      }
      else if (param_2 == 5) {
        *(int *)param_4 = piVar4[0xd] * piVar4[8];
        return 0;
      }
      return 0xffffffff;
    }
    puVar3 = *(undefined1 **)((int)param_4 + 4);
    if ((puVar3 != (undefined1 *)0x0) && (*(int *)((int)param_4 + 8) != 0)) {
      sVar1 = *(short *)((int)param_4 + 2);
      if (sVar1 == 0x3043) {
        *puVar3 = (char)piVar4[3];
        *(undefined4 *)((int)param_4 + 0xc) = 1;
        return 0;
      }
      if (sVar1 == 0x3143) {
        uVar2 = 0;
        *puVar3 = (char)piVar4[4];
      }
      else {
        uVar2 = 0xffffffeb;
      }
      *(uint *)((int)param_4 + 0xc) = (uint)(sVar1 == 0x3143);
      return uVar2;
    }
  }
  return 0xfffffffe;
}

