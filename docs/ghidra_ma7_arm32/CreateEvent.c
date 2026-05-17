/* CreateEvent @ 0002f088 60B */


/* CreateEvent(unsigned int*, unsigned char, unsigned char, char const*) */

pthread_mutex_t * CreateEvent(uint *param_1,uchar param_2,uchar param_3,char *param_4)

{
  pthread_mutex_t *__mutex;
  uint *__attr;
  
  __mutex = malloc(0x10);
  __attr = &(__mutex->__data).__count;
  pthread_mutexattr_init((pthread_mutexattr_t *)__attr);
  pthread_mutexattr_settype((pthread_mutexattr_t *)__attr,1);
  pthread_mutex_init(__mutex,(pthread_mutexattr_t *)__attr);
  pthread_cond_init((pthread_cond_t *)&(__mutex->__data).__owner,(pthread_condattr_t *)0x0);
  (__mutex->__data).__kind = (uint)(param_3 == '\x01');
  return __mutex;
}

