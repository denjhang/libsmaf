/* SetEvent @ 00129b44 72B */


/* SetEvent(my_event_t*) */

bool SetEvent(my_event_t *param_1)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)param_1);
  iVar1 = pthread_cond_signal((pthread_cond_t *)(param_1 + 0x30));
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x60) = 1;
  }
  pthread_mutex_unlock((pthread_mutex_t *)param_1);
  return iVar1 == 0;
}

