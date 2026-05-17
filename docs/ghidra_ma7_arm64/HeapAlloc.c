/* HeapAlloc @ 00129a74 68B */


/* HeapAlloc(my_event_t*, unsigned int, unsigned int) */

void * HeapAlloc(my_event_t *param_1,uint param_2,uint param_3)

{
  void *__s;
  
  __s = malloc((ulong)param_3);
  if (param_2 == 0) {
    memset(__s,0,(ulong)param_3);
  }
  return __s;
}

