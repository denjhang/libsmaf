/* QueryPerformanceFrequency @ 00129e50 16B */


/* QueryPerformanceFrequency(_LARGE_INTEGER*) */

undefined8 QueryPerformanceFrequency(_LARGE_INTEGER *param_1)

{
  *(undefined8 *)param_1 = 1;
  return 0;
}

