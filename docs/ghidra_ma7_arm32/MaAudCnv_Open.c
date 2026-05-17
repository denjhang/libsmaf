/* MaAudCnv_Open @ 00093210 72B */


/* YAMAHA::MaAudCnv_Open(_MACNV_SEQ_INFO*, _MACNV_OPEN_PARAM*) */

int YAMAHA::MaAudCnv_Open(_MACNV_SEQ_INFO *param_1,_MACNV_OPEN_PARAM *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
      (piVar2 = *(int **)(param_1 + 4), piVar2 == (int *)0x0)) ||
     (param_2 == (_MACNV_OPEN_PARAM *)0x0)) {
    return -2;
  }
  if (*(int *)param_2 << 0x1f < 0) {
    *(undefined1 *)(piVar2 + 2) = 0;
    piVar2[9] = 0;
    piVar2[0xb] = 0;
    iVar1 = FUN_00092a8c(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),0,piVar2);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  else {
    if (*piVar2 != *(int *)(param_2 + 8)) {
      return -2;
    }
    if (piVar2[1] != *(int *)(param_2 + 0xc)) {
      return -2;
    }
  }
  *(undefined1 *)(piVar2 + 2) = 1;
  return 0;
}

