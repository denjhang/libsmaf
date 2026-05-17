/* MaPhrCnv_GetResInfo @ 000bfdec 26B */


/* YAMAHA::MaPhrCnv_GetResInfo(_MACNV_SEQ_INFO*) */

undefined4 YAMAHA::MaPhrCnv_GetResInfo(_MACNV_SEQ_INFO *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) && (*(int **)(param_1 + 4) != (int *)0x0)) {
    if (**(int **)(param_1 + 4) == 1) {
      uVar1 = 0x80;
    }
    else {
      uVar1 = 0xffffffff;
    }
    return uVar1;
  }
  return 0xfffffffe;
}

