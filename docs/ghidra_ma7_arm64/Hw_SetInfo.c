/* Hw_SetInfo @ 00131888 172B */


undefined4 Hw_SetInfo(int param_1,uint param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  
  if (DAT_00568030 == -1) {
    uVar1 = 0xffffffff;
  }
  else {
    EnterCriticalSection((critical_section *)&DAT_00582978);
    if (param_1 == 0) {
      if (param_3 == (undefined8 *)0x0) {
        uVar1 = ARM::DINCONTROL_SetDinBufInfo(param_2,(short *)0x0,(short *)0x0,0);
      }
      else {
        uVar1 = ARM::DINCONTROL_SetDinBufInfo
                          (param_2,(short *)*param_3,(short *)param_3[1],*(uint *)(param_3 + 2));
      }
    }
    else {
      uVar1 = 0xffffffff;
    }
    LeaveCriticalSection((critical_section *)&DAT_00582978);
  }
  return uVar1;
}

