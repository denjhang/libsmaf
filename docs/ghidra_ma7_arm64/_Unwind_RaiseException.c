/* _Unwind_RaiseException @ 00279dbc 392B */


undefined1  [16] _Unwind_RaiseException(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  long lVar3;
  undefined1 auStack_e00 [960];
  undefined1 auStack_a40 [784];
  undefined8 local_730;
  undefined8 local_728;
  long local_700;
  undefined1 auStack_680 [1616];
  code *local_30;
  
  FUN_00279a00(auStack_e00,&stack0x00000000);
  memcpy(auStack_a40,auStack_e00,0x3c0);
  do {
    iVar2 = FUN_00278e28(auStack_a40,auStack_680);
    if ((iVar2 == 5) || (iVar2 != 0)) goto LAB_00279f04;
    if (local_30 != (code *)0x0) {
      iVar2 = (*local_30)(1,1,*param_1,param_1,auStack_a40);
      if (iVar2 == 6) {
        param_1[2] = 0;
        lVar3 = _Unwind_GetCFA(auStack_a40);
        param_1[3] = lVar3 + (local_700 >> 0x3f);
        memcpy(auStack_a40,auStack_e00,0x3c0);
        iVar2 = FUN_00279b18(param_1,auStack_a40);
        if (iVar2 == 7) {
          FUN_002786e0(auStack_e00,auStack_a40,7);
          FUN_00279db8(local_730,local_728);
        }
LAB_00279f04:
        auVar1._8_8_ = param_2;
        auVar1._0_8_ = param_1;
        return auVar1;
      }
      if (iVar2 != 8) goto LAB_00279f04;
    }
    FUN_00279acc(auStack_a40,auStack_680);
  } while( true );
}

