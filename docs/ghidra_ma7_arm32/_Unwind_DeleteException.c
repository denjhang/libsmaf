/* _Unwind_DeleteException @ 0011f42a 14B */


void _Unwind_DeleteException(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(1,param_1,param_3,pcVar1,param_4);
  }
  return;
}

