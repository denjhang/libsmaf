/* MaAudCnv_Check @ 000931d0 62B */


/* YAMAHA::MaAudCnv_Check(_MACNV_SEQ_INFO*, _MACNV_CHECK_PARAM*) */

int YAMAHA::MaAudCnv_Check(_MACNV_SEQ_INFO *param_1,_MACNV_CHECK_PARAM *param_2)

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
    puVar2[0xb] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    iVar1 = FUN_00092a8c(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
                         *(uint *)param_2 & 3,puVar2);
    if (-1 < iVar1) {
      *puVar2 = *(undefined4 *)(param_2 + 8);
      puVar2[1] = *(undefined4 *)(param_2 + 0xc);
      return 0;
    }
  }
  return iVar1;
}

