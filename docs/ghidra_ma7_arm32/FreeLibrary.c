/* FreeLibrary @ 0002f1f0 16B */


/* FreeLibrary(void*) */

bool FreeLibrary(void *param_1)

{
  int iVar1;
  
  iVar1 = dlclose(param_1);
  return iVar1 < 1;
}

