/* WaitForSingleObject @ 00129c18 236B */


/* WaitForSingleObject(my_event_t*, unsigned int) */

void WaitForSingleObject(my_event_t *param_1,uint param_2)

{
  int iVar1;
  timespec local_28;
  timeval local_18;
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  pthread_mutex_lock((pthread_mutex_t *)param_1);
  if (*(int *)(param_1 + 0x60) == 1) {
    iVar1 = 0;
  }
  else if (param_2 == 0xffffffff) {
    iVar1 = pthread_cond_wait((pthread_cond_t *)(param_1 + 0x30),(pthread_mutex_t *)param_1);
  }
  else {
    gettimeofday(&local_18,(__timezone_ptr_t)0x0);
    local_28.tv_sec = local_18.tv_sec + (ulong)param_2 / 1000;
    local_28.tv_nsec = (ulong)((param_2 % 1000) * 1000000) + local_18.tv_usec * 1000;
    iVar1 = pthread_cond_timedwait
                      ((pthread_cond_t *)(param_1 + 0x30),(pthread_mutex_t *)param_1,&local_28);
  }
  pthread_mutex_unlock((pthread_mutex_t *)param_1);
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}

