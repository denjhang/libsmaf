/* _Unwind_VRS_Set @ 0011f47c 38B */


undefined4
_Unwind_VRS_Set(int param_1,undefined4 param_2,uint param_3,int param_4,undefined4 *param_5)

{
  switch(param_2) {
  case 0:
    if ((param_4 == 0) && (param_3 < 0x10)) {
      *(undefined4 *)(param_1 + param_3 * 4 + 4) = *param_5;
      return 0;
    }
    break;
  case 1:
  case 3:
  case 4:
    return 1;
  }
  return 2;
}

