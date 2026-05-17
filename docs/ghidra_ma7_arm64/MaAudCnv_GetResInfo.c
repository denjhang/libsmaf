/* MaAudCnv_GetResInfo @ 001b4f68 64B */


/* YAMAHA::MaAudCnv_GetResInfo(_MACNV_SEQ_INFO*) */

undefined4 YAMAHA::MaAudCnv_GetResInfo(_MACNV_SEQ_INFO *param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) && (lVar1 = *(long *)(param_1 + 8), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0xc) == '\x01') {
      uVar2 = 4;
      if ((*(uint *)(lVar1 + 0x14) & 0x40) != 0) {
        uVar2 = 1;
      }
      return uVar2;
    }
    return 0xffffffff;
  }
  return 0xfffffffe;
}

