/* MaHvsCnv_GetResInfo @ 001b6380 40B */


/* YAMAHA::MaHvsCnv_GetResInfo(_MACNV_SEQ_INFO*) */

undefined4 YAMAHA::MaHvsCnv_GetResInfo(_MACNV_SEQ_INFO *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) && (*(char **)(param_1 + 8) != (char *)0x0)) {
    uVar1 = 0x40;
    if (**(char **)(param_1 + 8) != '\x01') {
      uVar1 = 0xffffffff;
    }
    return uVar1;
  }
  return 0xfffffffe;
}

