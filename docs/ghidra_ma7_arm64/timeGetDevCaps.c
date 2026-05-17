/* timeGetDevCaps @ 00129d5c 8B */


/* timeGetDevCaps(TIMECAPS*, unsigned int) */

undefined1  [16] timeGetDevCaps(TIMECAPS *param_1,uint param_2)

{
  return ZEXT416(param_2) << 0x40;
}

