/* MaHvsCnv_Check @ 0009341c 46B */


/* YAMAHA::MaHvsCnv_Check(_MACNV_SEQ_INFO*, _MACNV_CHECK_PARAM*) */

undefined4 YAMAHA::MaHvsCnv_Check(_MACNV_SEQ_INFO *param_1,_MACNV_CHECK_PARAM *param_2)

{
  undefined4 uVar1;
  _MAHVSCNV_INFO *p_Var2;
  
  if ((((param_1 != (_MACNV_SEQ_INFO *)0x0) &&
       (p_Var2 = *(_MAHVSCNV_INFO **)(param_1 + 4), p_Var2 != (_MAHVSCNV_INFO *)0x0)) &&
      (param_2 != (_MACNV_CHECK_PARAM *)0x0)) &&
     ((*(int *)(param_2 + 8) != 0 && (*(int *)(param_2 + 0xc) != 0)))) {
    HvInfo_Init(p_Var2);
    uVar1 = HvChecker(*(uchar **)(param_2 + 8),*(uint *)(param_2 + 0xc),p_Var2);
    return uVar1;
  }
  return 0xfffffffe;
}

