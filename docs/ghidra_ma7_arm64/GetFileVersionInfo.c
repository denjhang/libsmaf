/* GetFileVersionInfo @ 00129e60 8B */


/* GetFileVersionInfo(char*, unsigned int, unsigned int, void*) */

undefined1  [16] GetFileVersionInfo(char *param_1,uint param_2,uint param_3,void *param_4)

{
  return ZEXT416(param_2) << 0x40;
}

