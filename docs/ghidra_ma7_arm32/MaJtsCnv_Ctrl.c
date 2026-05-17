/* MaJtsCnv_Ctrl @ 00095424 96B */


/* YAMAHA::MaJtsCnv_Ctrl(_MACNV_SEQ_INFO*, unsigned int, unsigned int, void*) */

undefined4 YAMAHA::MaJtsCnv_Ctrl(_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3,void *param_4)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
      (piVar2 = *(int **)(param_1 + 4), piVar2 == (int *)0x0)) || (param_4 == (void *)0x0)) {
    uVar1 = 0xfffffffe;
  }
  else {
    if (param_2 == 10) {
      if ((*(int *)((int)param_4 + 8) != 0) &&
         ((uint)*(byte *)((int)param_4 + 3) + (uint)*(byte *)((int)param_4 + 2) * 0x100 == 0x5653))
      {
        **(undefined1 **)((int)param_4 + 4) = (char)piVar2[0xb];
        return 0;
      }
    }
    else if (param_2 == 0x2b) {
      if (*piVar2 == 1) {
        *(int *)param_4 = piVar2[9];
        return 0;
      }
    }
    else if (param_2 == 5) {
      *(int *)param_4 = piVar2[10];
      return 0;
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

