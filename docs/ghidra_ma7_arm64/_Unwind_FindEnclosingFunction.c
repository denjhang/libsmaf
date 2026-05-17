/* _Unwind_FindEnclosingFunction @ 00278880 40B */


undefined8 _Unwind_FindEnclosingFunction(long param_1)

{
  long lVar1;
  undefined1 auStack_18 [16];
  undefined8 local_8;
  
  lVar1 = _Unwind_Find_FDE(param_1 + -1,auStack_18);
  if (lVar1 == 0) {
    local_8 = 0;
  }
  return local_8;
}

