/* Mapi_DeviceControl @ 0017fbd0 232B */


/* YAMAHA::Mapi_DeviceControl(unsigned char, unsigned char, unsigned char, unsigned char) */

void YAMAHA::Mapi_DeviceControl(uchar param_1,uchar param_2,uchar param_3,uchar param_4)

{
  uint uVar1;
  byte local_9;
  long local_8;
  
  local_9 = 0;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  mapimachdep_LockApi();
  if (DAT_00577e10 == '\0') {
    mapimachdep_UnlockApi();
    uVar1 = 0xfffffff8;
  }
  else {
    if (param_1 == '\x11') {
      uVar1 = 0xffffffff;
      if (param_2 == '\0') {
        uVar1 = MaSmw_DevCtrl(4,(uint)param_3,(uint)param_4,(void *)0x0);
      }
    }
    else if (param_1 == '\x12') {
      uVar1 = 0xffffffff;
      if (param_2 == '\0') {
        uVar1 = MaSmw_DevCtrl(5,(uint)param_3,0,&local_9);
        if (-1 < (int)uVar1) {
          uVar1 = (uint)local_9;
        }
      }
    }
    else {
      uVar1 = 0xffffffe8;
    }
    mapimachdep_UnlockApi();
  }
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

