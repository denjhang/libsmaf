/* MaJtsCnv_SetTick @ 001b8fb8 60B */


/* YAMAHA::MaJtsCnv_SetTick(_MACNV_SEQ_INFO*, unsigned int) */

undefined8 YAMAHA::MaJtsCnv_SetTick(_MACNV_SEQ_INFO *param_1,uint param_2)

{
  int *piVar1;
  
  if (((param_1 != (_MACNV_SEQ_INFO *)0x0) && (piVar1 = *(int **)(param_1 + 8), param_2 != 0)) &&
     (piVar1 != (int *)0x0)) {
    if (*piVar1 == 1) {
      piVar1[0xb] = param_2;
      return 0;
    }
    return 0xffffffff;
  }
  return 0xfffffffe;
}

