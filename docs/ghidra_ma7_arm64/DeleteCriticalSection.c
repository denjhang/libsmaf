/* DeleteCriticalSection @ 00129a3c 32B */


/* DeleteCriticalSection(critical_section*) */

int DeleteCriticalSection(critical_section *param_1)

{
  int iVar1;
  
  pthread_mutex_destroy((pthread_mutex_t *)param_1);
  iVar1 = pthread_mutexattr_destroy((pthread_mutexattr_t *)(param_1 + 0x28));
  return iVar1;
}

