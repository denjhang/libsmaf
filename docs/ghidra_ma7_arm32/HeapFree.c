/* HeapFree @ 0002f07c 12B */


/* HeapFree(my_event_t*, unsigned int, void*) */

undefined4 HeapFree(my_event_t *param_1,uint param_2,void *param_3)

{
  free(param_3);
  return 1;
}

