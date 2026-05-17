/* QueryPerformanceCounter @ 00129de4 108B */


/* QueryPerformanceCounter(_LARGE_INTEGER*) */

void QueryPerformanceCounter(_LARGE_INTEGER *param_1)

{
  undefined *puVar1;
  timespec local_18;
  long local_8;
  
  puVar1 = PTR___stack_chk_guard_00567868;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  clock_gettime(0,&local_18);
  *(long *)param_1 = local_18.tv_nsec + local_18.tv_sec * 1000000;
  if (local_8 == *(long *)puVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}

