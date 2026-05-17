/* MaHvsCnv_Close @ 000934a0 54B */


/* YAMAHA::MaHvsCnv_Close(_MACNV_SEQ_INFO*) */

undefined4 YAMAHA::MaHvsCnv_Close(_MACNV_SEQ_INFO *param_1)

{
  char *pcVar1;
  
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) &&
     (pcVar1 = *(char **)(param_1 + 4), pcVar1 != (char *)0x0)) {
    if (*pcVar1 == '\x01') {
      (**(code **)(DAT_000934d8 + (uint)(byte)pcVar1[2] * 0x14 + 0x934ca))();
      *pcVar1 = '\0';
      return 0;
    }
    return 0xffffffff;
  }
  return 0xfffffffe;
}

