/* MaMmfCnv_GetTick @ 001ede48 48B */


/* YAMAHA::MaMmfCnv_GetTick(_MACNV_SEQ_INFO*) */

undefined4 YAMAHA::MaMmfCnv_GetTick(_MACNV_SEQ_INFO *param_1)

{
  long lVar1;
  
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) && (lVar1 = *(long *)(param_1 + 8), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0xc) == '\x02') {
      return *(undefined4 *)(lVar1 + 0x2c);
    }
    return 0xffffffff;
  }
  return 0xfffffffe;
}

