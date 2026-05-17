/* WaitForSingleObject @ 0002f138 122B */


/* WaitForSingleObject(my_event_t*, unsigned int) */

int WaitForSingleObject(my_event_t *param_1,uint param_2)

{
  int iVar1;
  timespec local_28;
  timeval local_20;
  
  pthread_mutex_lock((pthread_mutex_t *)param_1);
  if (*(int *)(param_1 + 0xc) == 1) {
    iVar1 = 0;
  }
  else if (param_2 == 0xffffffff) {
    iVar1 = pthread_cond_wait((pthread_cond_t *)(param_1 + 8),(pthread_mutex_t *)param_1);
  }
  else {
    gettimeofday(&local_20,(__timezone_ptr_t)0x0);
    local_28.tv_sec = local_20.tv_sec + param_2 / 1000;
    local_28.tv_nsec = (param_2 % 1000) * 1000000 + local_20.tv_usec * 1000;
    iVar1 = pthread_cond_timedwait
                      ((pthread_cond_t *)(param_1 + 8),(pthread_mutex_t *)param_1,&local_28);
  }
  pthread_mutex_unlock((pthread_mutex_t *)param_1);
  return iVar1;
}

