/* MaMmfCnv_Close @ 001eab50 52B */


/* YAMAHA::MaMmfCnv_Close(_MACNV_SEQ_INFO*) */

undefined8 YAMAHA::MaMmfCnv_Close(_MACNV_SEQ_INFO *param_1)

{
  long lVar1;
  
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) && (lVar1 = *(long *)(param_1 + 8), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0xc) == '\x02') {
      *(undefined1 *)(lVar1 + 0xc) = 0;
      return 0;
    }
    return 0xffffffff;
  }
  return 0xfffffffe;
}

