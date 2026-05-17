/* MaMmfCnv_GetTick @ 000b8268 28B */


/* YAMAHA::MaMmfCnv_GetTick(_MACNV_SEQ_INFO*) */

undefined4 YAMAHA::MaMmfCnv_GetTick(_MACNV_SEQ_INFO *param_1)

{
  int iVar1;
  
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) && (iVar1 = *(int *)(param_1 + 4), iVar1 != 0)) {
    if (*(char *)(iVar1 + 8) == '\x02') {
      return *(undefined4 *)(iVar1 + 0x24);
    }
    return 0xffffffff;
  }
  return 0xfffffffe;
}

