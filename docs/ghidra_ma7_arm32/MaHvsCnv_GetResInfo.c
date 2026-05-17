/* MaHvsCnv_GetResInfo @ 000934dc 26B */


/* YAMAHA::MaHvsCnv_GetResInfo(_MACNV_SEQ_INFO*) */

undefined4 YAMAHA::MaHvsCnv_GetResInfo(_MACNV_SEQ_INFO *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) && (*(char **)(param_1 + 4) != (char *)0x0)) {
    if (**(char **)(param_1 + 4) == '\x01') {
      uVar1 = 0x40;
    }
    else {
      uVar1 = 0xffffffff;
    }
    return uVar1;
  }
  return 0xfffffffe;
}

