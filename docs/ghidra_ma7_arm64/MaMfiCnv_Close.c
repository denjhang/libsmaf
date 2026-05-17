/* MaMfiCnv_Close @ 001c1b50 52B */


/* YAMAHA::MaMfiCnv_Close(_MACNV_SEQ_INFO*) */

undefined8 YAMAHA::MaMfiCnv_Close(_MACNV_SEQ_INFO *param_1)

{
  char *pcVar1;
  
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) &&
     (pcVar1 = *(char **)(param_1 + 8), pcVar1 != (char *)0x0)) {
    if (*pcVar1 == '\x01') {
      *pcVar1 = '\0';
      return 0;
    }
    return 0xffffffff;
  }
  return 0xfffffffe;
}

