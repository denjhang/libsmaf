/* MaWavCnv_Check @ 000d72d8 56B */


/* YAMAHA::MaWavCnv_Check(_MACNV_SEQ_INFO*, _MACNV_CHECK_PARAM*) */

int YAMAHA::MaWavCnv_Check(_MACNV_SEQ_INFO *param_1,_MACNV_CHECK_PARAM *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
      (puVar2 = *(undefined4 **)(param_1 + 4), puVar2 == (undefined4 *)0x0)) ||
     (param_2 == (_MACNV_CHECK_PARAM *)0x0)) {
    iVar1 = -2;
  }
  else {
    *(undefined1 *)(puVar2 + 2) = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    iVar1 = FUN_000d6f88(puVar2,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
    if (-1 < iVar1) {
      *puVar2 = *(undefined4 *)(param_2 + 8);
      puVar2[1] = *(undefined4 *)(param_2 + 0xc);
      return 0;
    }
  }
  return iVar1;
}

