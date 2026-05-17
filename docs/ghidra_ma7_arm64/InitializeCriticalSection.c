/* InitializeCriticalSection @ 001299fc 64B */


/* InitializeCriticalSection(critical_section*) */

int InitializeCriticalSection(critical_section *param_1)

{
  pthread_mutexattr_t *__attr;
  int iVar1;
  
  __attr = (pthread_mutexattr_t *)(param_1 + 0x28);
  pthread_mutexattr_init(__attr);
  pthread_mutexattr_settype(__attr,1);
  iVar1 = pthread_mutex_init((pthread_mutex_t *)param_1,__attr);
  return iVar1;
}

