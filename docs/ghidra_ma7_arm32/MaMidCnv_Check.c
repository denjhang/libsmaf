/* MaMidCnv_Check @ 000a9754 56B */


/* YAMAHA::MaMidCnv_Check(_MACNV_SEQ_INFO*, _MACNV_CHECK_PARAM*) */

int YAMAHA::MaMidCnv_Check(_MACNV_SEQ_INFO *param_1,_MACNV_CHECK_PARAM *param_2)

{
  int iVar1;
  int iVar2;
  
  if ((((param_1 == (_MACNV_SEQ_INFO *)0x0) || (iVar2 = *(int *)(param_1 + 4), iVar2 == 0)) ||
      (param_2 == (_MACNV_CHECK_PARAM *)0x0)) ||
     ((*(int *)(param_2 + 8) == 0 || (*(int *)(param_2 + 0xc) == 0)))) {
    iVar1 = -2;
  }
  else {
    *(int *)(iVar2 + 4) = *(int *)(param_2 + 8);
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_2 + 0xc);
    iVar1 = FUN_000a8970(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
    if (-1 < iVar1) {
      *(undefined1 *)(iVar2 + 0x618) = 1;
      return 0;
    }
  }
  return iVar1;
}

