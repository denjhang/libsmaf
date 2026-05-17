/* Hw_SetInfo @ 0003427c 86B */


undefined4 Hw_SetInfo(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (*(char *)(DAT_000342d4 + 0x34286) != -1) {
    EnterCriticalSection((critical_section *)(DAT_000342d8 + 0x34298));
    if (param_1 == 0) {
      if (param_3 == (undefined4 *)0x0) {
        uVar1 = ARM::DINCONTROL_SetDinBufInfo(param_2,(short *)0x0,(short *)0x0,0);
      }
      else {
        uVar1 = ARM::DINCONTROL_SetDinBufInfo
                          (param_2,(short *)*param_3,(short *)param_3[1],param_3[2]);
      }
    }
    else {
      uVar1 = 0xffffffff;
    }
    LeaveCriticalSection((critical_section *)(DAT_000342dc + 0x342b8));
    return uVar1;
  }
  return 0xffffffff;
}

