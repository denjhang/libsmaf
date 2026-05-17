/* CloseHandle @ 0002f100 54B */


/* CloseHandle(my_event_t*) */

int CloseHandle(my_event_t *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = pthread_cond_destroy((pthread_cond_t *)(param_1 + 8));
  iVar2 = pthread_mutex_destroy((pthread_mutex_t *)param_1);
  if (iVar2 == 0) {
    iVar2 = 1 - uVar1;
    if (1 < uVar1) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0;
  }
  iVar3 = pthread_mutexattr_destroy((pthread_mutexattr_t *)(param_1 + 4));
  if (iVar3 != 0) {
    iVar2 = 0;
  }
  free(param_1);
  return iVar2;
}

