/* HeapFree @ 00129ab8 32B */


/* HeapFree(my_event_t*, unsigned int, void*) */

undefined8 HeapFree(my_event_t *param_1,uint param_2,void *param_3)

{
  free(param_3);
  return 1;
}

