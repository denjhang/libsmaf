/* ResetEvent @ 0002f0e8 22B */


/* ResetEvent(my_event_t*) */

undefined4 ResetEvent(my_event_t *param_1)

{
  pthread_mutex_lock((pthread_mutex_t *)param_1);
  *(undefined4 *)(param_1 + 0xc) = 0;
  pthread_mutex_unlock((pthread_mutex_t *)param_1);
  return 1;
}

