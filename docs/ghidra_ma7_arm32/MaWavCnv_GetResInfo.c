/* MaWavCnv_GetResInfo @ 000d7378 36B */


/* YAMAHA::MaWavCnv_GetResInfo(_MACNV_SEQ_INFO*) */

undefined4 YAMAHA::MaWavCnv_GetResInfo(_MACNV_SEQ_INFO *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) && (iVar2 = *(int *)(param_1 + 4), iVar2 != 0)) {
    if (*(char *)(iVar2 + 8) != '\x01') {
      return 0xffffffff;
    }
    if (*(int *)(iVar2 + 0x10) == 1) {
      uVar1 = 4;
    }
    else {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 0xfffffffe;
}

