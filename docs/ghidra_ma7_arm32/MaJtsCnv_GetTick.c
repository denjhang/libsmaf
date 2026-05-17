/* MaJtsCnv_GetTick @ 00095774 28B */


/* YAMAHA::MaJtsCnv_GetTick(_MACNV_SEQ_INFO*) */

int YAMAHA::MaJtsCnv_GetTick(_MACNV_SEQ_INFO *param_1)

{
  int *piVar1;
  
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) && (piVar1 = *(int **)(param_1 + 4), piVar1 != (int *)0x0)
     ) {
    if (*piVar1 == 1) {
      return piVar1[8];
    }
    return -1;
  }
  return -2;
}

