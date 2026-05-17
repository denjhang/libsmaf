/* machdep_Sleep @ 0017868c 4B */


/* YAMAHA::machdep_Sleep(unsigned int) */

void YAMAHA::machdep_Sleep(uint param_1)

{
  undefined *puVar1;
  timespec tStack_18;
  long lStack_8;
  
  puVar1 = PTR___stack_chk_guard_00567868;
  tStack_18.tv_sec = 0;
  tStack_18.tv_nsec = (long)(param_1 * 1000000);
  lStack_8 = *(long *)PTR___stack_chk_guard_00567868;
  nanosleep(&tStack_18,(timespec *)0x0);
  if (lStack_8 == *(long *)puVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

