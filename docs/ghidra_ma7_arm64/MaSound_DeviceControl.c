/* MaSound_DeviceControl @ 0018aaf8 160B */


/* YAMAHA::MaSound_DeviceControl(unsigned char, unsigned char, unsigned char, unsigned char) */

void YAMAHA::MaSound_DeviceControl(uchar param_1,uchar param_2,uchar param_3,uchar param_4)

{
  ulong uVar1;
  uint local_c;
  long local_8;
  
  local_c = 0;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (DAT_0057c414 == -2) {
    if (param_1 == '\v') {
      uVar1 = MaSmw_DevCtrl(6,0,0,&local_c);
      if (-1 < (int)uVar1) {
        uVar1 = (ulong)local_c;
      }
      goto LAB_0018ab3c;
    }
    if (param_1 == '\r') {
      uVar1 = MaSmw_DevCtrl(0,0,0,(void *)0x0);
      goto LAB_0018ab3c;
    }
  }
  uVar1 = 0xffffffff;
LAB_0018ab3c:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

