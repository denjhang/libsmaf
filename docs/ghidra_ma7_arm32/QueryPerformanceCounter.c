/* QueryPerformanceCounter @ 0002f22c 42B */


/* QueryPerformanceCounter(_LARGE_INTEGER*) */

undefined4 QueryPerformanceCounter(_LARGE_INTEGER *param_1)

{
  timespec local_18;
  
  clock_gettime(0,&local_18);
  *(longlong *)param_1 = (longlong)local_18.tv_sec * 1000000 + (longlong)local_18.tv_nsec;
  return 0;
}

