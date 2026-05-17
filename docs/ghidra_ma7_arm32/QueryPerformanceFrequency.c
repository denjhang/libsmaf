/* QueryPerformanceFrequency @ 0002f258 12B */


/* QueryPerformanceFrequency(_LARGE_INTEGER*) */

undefined4 QueryPerformanceFrequency(_LARGE_INTEGER *param_1)

{
  *(undefined4 *)param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0;
  return 0;
}

