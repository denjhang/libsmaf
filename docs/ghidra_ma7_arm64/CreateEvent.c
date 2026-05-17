/* CreateEvent @ 00129ad8 108B */


/* CreateEvent(unsigned int*, unsigned char, unsigned char, char const*) */

pthread_mutex_t * CreateEvent(uint *param_1,uchar param_2,uchar param_3,char *param_4)

{
  pthread_mutex_t *__attr;
  pthread_mutex_t *__mutex;
  
  __mutex = malloc(0x68);
  __attr = __mutex + 1;
  pthread_mutexattr_init((pthread_mutexattr_t *)__attr);
  pthread_mutexattr_settype((pthread_mutexattr_t *)__attr,1);
  pthread_mutex_init(__mutex,(pthread_mutexattr_t *)__attr);
  pthread_cond_init((pthread_cond_t *)((long)__mutex + 0x30),(pthread_condattr_t *)0x0);
  *(uint *)((long)__mutex + 0x60) = (uint)(param_3 == '\x01');
  return __mutex;
}

