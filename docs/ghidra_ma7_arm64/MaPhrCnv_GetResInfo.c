/* MaPhrCnv_GetResInfo @ 001f8bc4 40B */


/* YAMAHA::MaPhrCnv_GetResInfo(_MACNV_SEQ_INFO*) */

undefined4 YAMAHA::MaPhrCnv_GetResInfo(_MACNV_SEQ_INFO *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) && (*(int **)(param_1 + 8) != (int *)0x0)) {
    uVar1 = 0x80;
    if (**(int **)(param_1 + 8) != 1) {
      uVar1 = 0xffffffff;
    }
    return uVar1;
  }
  return 0xfffffffe;
}

