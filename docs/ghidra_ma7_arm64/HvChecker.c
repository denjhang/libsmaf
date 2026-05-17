/* HvChecker @ 001b6150 192B */


/* YAMAHA::HvChecker(unsigned char*, unsigned int, _MAHVSCNV_INFO*) */

undefined8 YAMAHA::HvChecker(uchar *param_1,uint param_2,_MAHVSCNV_INFO *param_3)

{
  _MAHVSCNV_INFO _Var1;
  undefined8 uVar2;
  
  if ((param_2 - 5 < 0x7ffffffb) && (param_1 != (uchar *)0x0)) {
    uVar2 = 0xfffffff0;
    if ((*param_1 == 'H') && (param_1[1] == 'V')) {
      if ((param_1[2] == '#') && (param_1[3] == 'J')) {
        _Var1 = (_MAHVSCNV_INFO)0x0;
      }
      else if ((param_1[2] == '#') && (param_1[3] == 'K')) {
        _Var1 = (_MAHVSCNV_INFO)0x1;
      }
      else {
        if (param_1[2] != '#') {
          return 0xfffffff0;
        }
        if (param_1[3] != 'C') {
          return 0xfffffff0;
        }
        _Var1 = (_MAHVSCNV_INFO)0x0;
      }
      *(uchar **)(param_3 + 0x3b0) = param_1;
      param_3[2] = _Var1;
      *(uint *)(param_3 + 0x3b8) = param_2;
      return 0;
    }
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}

