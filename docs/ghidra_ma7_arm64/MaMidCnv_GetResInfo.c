/* MaMidCnv_GetResInfo @ 001d5e20 52B */


/* YAMAHA::MaMidCnv_GetResInfo(_MACNV_SEQ_INFO*) */

undefined4 YAMAHA::MaMidCnv_GetResInfo(_MACNV_SEQ_INFO *param_1)

{
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) && (*(char **)(param_1 + 8) != (char *)0x0)) {
    if (**(char **)(param_1 + 8) == '\x01') {
      return 0x1e080;
    }
    return 0xffffffff;
  }
  return 0xfffffffe;
}

