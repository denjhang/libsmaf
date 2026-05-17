/* MaAtRmdCnv_Close @ 00090934 28B */


/* YAMAHA::MaAtRmdCnv_Close(_MACNV_SEQ_INFO*) */

undefined4 YAMAHA::MaAtRmdCnv_Close(_MACNV_SEQ_INFO *param_1)

{
  int *piVar1;
  
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) && (piVar1 = *(int **)(param_1 + 4), piVar1 != (int *)0x0)
     ) {
    if (*piVar1 != 0) {
      *piVar1 = 0;
      return 0;
    }
    return 0xffffffff;
  }
  return 0xfffffffe;
}

