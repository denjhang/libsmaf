/* _Unwind_Resume_or_Rethrow @ 0027a134 252B */


undefined1  [16] _Unwind_Resume_or_Rethrow(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined1 auStack_780 [960];
  undefined1 auStack_3c0 [784];
  undefined8 local_b0;
  undefined8 local_a8;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    _Unwind_RaiseException();
  }
  else {
    FUN_00279a00(auStack_780,&stack0x00000000);
    memcpy(auStack_3c0,auStack_780,0x3c0);
    iVar2 = FUN_00279bd8(param_1,auStack_3c0);
    if (iVar2 != 7) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_002786e0(auStack_780,auStack_3c0);
    FUN_00279db8(local_b0,local_a8);
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}

