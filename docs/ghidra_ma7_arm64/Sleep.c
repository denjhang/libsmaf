/* Sleep @ 00129d04 88B */


/* Sleep(unsigned int) */

void Sleep(uint param_1)

{
  undefined *puVar1;
  timespec local_18;
  long local_8;
  
  puVar1 = PTR___stack_chk_guard_00567868;
  local_18.tv_sec = 0;
  local_18.tv_nsec = (long)(param_1 * 1000000);
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  nanosleep(&local_18,(timespec *)0x0);
  if (local_8 == *(long *)puVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

