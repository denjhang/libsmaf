/* _Unwind_Backtrace @ 0027a254 208B */


undefined8 _Unwind_Backtrace(code *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_a40 [960];
  undefined1 auStack_680 [1664];
  
  FUN_00279a00(auStack_a40,&stack0x00000000);
  while (((iVar1 = FUN_00278e28(auStack_a40,auStack_680), iVar1 == 5 || (iVar1 == 0)) &&
         (iVar2 = (*param_1)(auStack_a40,param_2), iVar2 == 0))) {
    if (iVar1 == 5) {
      return 5;
    }
    FUN_00279acc(auStack_a40,auStack_680);
  }
  return 3;
}

