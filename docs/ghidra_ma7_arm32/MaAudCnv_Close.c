/* MaAudCnv_Close @ 00093258 30B */


/* YAMAHA::MaAudCnv_Close(_MACNV_SEQ_INFO*) */

undefined4 YAMAHA::MaAudCnv_Close(_MACNV_SEQ_INFO *param_1)

{
  int iVar1;
  
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) && (iVar1 = *(int *)(param_1 + 4), iVar1 != 0)) {
    if (*(char *)(iVar1 + 8) == '\x01') {
      *(undefined1 *)(iVar1 + 8) = 0;
      return 0;
    }
    return 0xffffffff;
  }
  return 0xfffffffe;
}

