/* ResetEvent @ 00129b8c 44B */


/* ResetEvent(my_event_t*) */

undefined8 ResetEvent(my_event_t *param_1)

{
  pthread_mutex_lock((pthread_mutex_t *)param_1);
  *(undefined4 *)(param_1 + 0x60) = 0;
  pthread_mutex_unlock((pthread_mutex_t *)param_1);
  return 1;
}

