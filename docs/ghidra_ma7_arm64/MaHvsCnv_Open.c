/* MaHvsCnv_Open @ 001b6270 168B */


/* YAMAHA::MaHvsCnv_Open(_MACNV_SEQ_INFO*, _MACNV_OPEN_PARAM*) */

undefined8 YAMAHA::MaHvsCnv_Open(_MACNV_SEQ_INFO *param_1,_MACNV_OPEN_PARAM *param_2)

{
  undefined8 uVar1;
  _MAHVSCNV_INFO *p_Var2;
  
  if ((((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
       (p_Var2 = *(_MAHVSCNV_INFO **)(param_1 + 8), param_2 == (_MACNV_OPEN_PARAM *)0x0)) ||
      (p_Var2 == (_MAHVSCNV_INFO *)0x0)) ||
     ((*(long *)(param_2 + 8) == 0 || (*(int *)(param_2 + 0x10) == 0)))) {
    uVar1 = 0xfffffffe;
  }
  else {
    if ((*(uint *)param_2 & 1) == 0) {
      if ((*(long *)(param_2 + 8) != *(long *)(p_Var2 + 0x3b0)) ||
         (*(int *)(param_2 + 0x10) != *(int *)(p_Var2 + 0x3b8))) {
        return 0xffffffff;
      }
    }
    else {
      HvInfo_Init(p_Var2);
      uVar1 = HvChecker(*(uchar **)(param_2 + 8),*(uint *)(param_2 + 0x10),p_Var2);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
    }
    uVar1 = 0;
    *p_Var2 = (_MAHVSCNV_INFO)0x1;
  }
  return uVar1;
}

