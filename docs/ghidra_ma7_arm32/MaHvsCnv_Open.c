/* MaHvsCnv_Open @ 0009344c 84B */


/* YAMAHA::MaHvsCnv_Open(_MACNV_SEQ_INFO*, _MACNV_OPEN_PARAM*) */

int YAMAHA::MaHvsCnv_Open(_MACNV_SEQ_INFO *param_1,_MACNV_OPEN_PARAM *param_2)

{
  int iVar1;
  _MAHVSCNV_INFO *p_Var2;
  
  if ((((param_1 != (_MACNV_SEQ_INFO *)0x0) &&
       (p_Var2 = *(_MAHVSCNV_INFO **)(param_1 + 4), p_Var2 != (_MAHVSCNV_INFO *)0x0)) &&
      (param_2 != (_MACNV_OPEN_PARAM *)0x0)) &&
     ((*(int *)(param_2 + 8) != 0 && (*(int *)(param_2 + 0xc) != 0)))) {
    if (*(int *)param_2 << 0x1f < 0) {
      HvInfo_Init(p_Var2);
      iVar1 = HvChecker(*(uchar **)(param_2 + 8),*(uint *)(param_2 + 0xc),p_Var2);
      if (iVar1 < 0) {
        return iVar1;
      }
    }
    else if ((*(int *)(param_2 + 8) != *(int *)(p_Var2 + 0x3b0)) ||
            (*(int *)(param_2 + 0xc) != *(int *)(p_Var2 + 0x3b4))) {
      return -1;
    }
    *p_Var2 = (_MAHVSCNV_INFO)0x1;
    return 0;
  }
  return -2;
}

