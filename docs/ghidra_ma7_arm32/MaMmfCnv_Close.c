/* MaMmfCnv_Close @ 000b5c14 30B */


/* YAMAHA::MaMmfCnv_Close(_MACNV_SEQ_INFO*) */

undefined4 YAMAHA::MaMmfCnv_Close(_MACNV_SEQ_INFO *param_1)

{
  int iVar1;
  
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) && (iVar1 = *(int *)(param_1 + 4), iVar1 != 0)) {
    if (*(char *)(iVar1 + 8) == '\x02') {
      *(undefined1 *)(iVar1 + 8) = 0;
      return 0;
    }
    return 0xffffffff;
  }
  return 0xfffffffe;
}

