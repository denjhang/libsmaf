/* CloseHandle @ 00129bb8 96B */


/* CloseHandle(my_event_t*) */

bool CloseHandle(my_event_t *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = pthread_cond_destroy((pthread_cond_t *)(param_1 + 0x30));
  iVar2 = pthread_mutex_destroy((pthread_mutex_t *)param_1);
  iVar3 = pthread_mutexattr_destroy((pthread_mutexattr_t *)(param_1 + 0x28));
  free(param_1);
  return iVar3 == 0 && (iVar2 == 0 && iVar1 == 0);
}

