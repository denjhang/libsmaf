/* LoadLibraryEx @ 00129d7c 4B */


/* LoadLibraryEx(char const*, my_event_t*, unsigned int) */

void LoadLibraryEx(char *param_1,my_event_t *param_2,uint param_3)

{
  dlopen(param_1,1,param_3);
  return;
}

