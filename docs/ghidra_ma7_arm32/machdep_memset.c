/* machdep_memset @ 00066824 14B */


/* YAMAHA::machdep_memset(void*, unsigned char, unsigned int) */

void * YAMAHA::machdep_memset(void *param_1,uchar param_2,uint param_3)

{
  if (param_3 != 0) {
    memset(param_1,(uint)param_2,param_3);
  }
  return param_1;
}

