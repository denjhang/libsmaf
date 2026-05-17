/* MaHvsCnv_GetTick @ 001b63d8 48B */


/* YAMAHA::MaHvsCnv_GetTick(_MACNV_SEQ_INFO*) */

undefined4 YAMAHA::MaHvsCnv_GetTick(_MACNV_SEQ_INFO *param_1)

{
  char *pcVar1;
  
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) &&
     (pcVar1 = *(char **)(param_1 + 8), pcVar1 != (char *)0x0)) {
    if (*pcVar1 == '\x01') {
      return *(undefined4 *)(pcVar1 + 0x3a8);
    }
    return 0xffffffff;
  }
  return 0xfffffffe;
}

