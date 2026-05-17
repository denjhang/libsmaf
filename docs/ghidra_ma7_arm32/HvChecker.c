/* HvChecker @ 000933a4 120B */


/* YAMAHA::HvChecker(unsigned char*, unsigned int, _MAHVSCNV_INFO*) */

undefined4 YAMAHA::HvChecker(uchar *param_1,uint param_2,_MAHVSCNV_INFO *param_3)

{
  _MAHVSCNV_INFO _Var1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 1 - (int)param_1;
  if ((uchar *)0x1 < param_1) {
    uVar3 = 0;
  }
  if (0x7ffffffa < param_2 - 5) {
    uVar3 = uVar3 | 1;
  }
  if (uVar3 != 0) {
    return 0xfffffffe;
  }
  if ((*param_1 == 'H') && (param_1[1] == 'V')) {
    if ((param_1[2] == '#') && (param_1[3] == 'J')) {
      _Var1 = (_MAHVSCNV_INFO)0x0;
    }
    else if ((param_1[2] == '#') && (param_1[3] == 'K')) {
      _Var1 = (_MAHVSCNV_INFO)0x1;
    }
    else {
      if ((param_1[2] != '#') || (param_1[3] != 'C')) goto LAB_000933ce;
      _Var1 = (_MAHVSCNV_INFO)0x2;
    }
    param_3[2] = _Var1;
    uVar2 = 0;
    *(uchar **)(param_3 + 0x3b0) = param_1;
    *(uint *)(param_3 + 0x3b4) = param_2;
  }
  else {
LAB_000933ce:
    uVar2 = 0xfffffff0;
  }
  return uVar2;
}

