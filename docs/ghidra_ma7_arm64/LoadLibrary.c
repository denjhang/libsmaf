/* LoadLibrary @ 00129d74 8B */


/* LoadLibrary(char const*) */

void LoadLibrary(char *param_1)

{
  dlopen(param_1,1);
  return;
}

