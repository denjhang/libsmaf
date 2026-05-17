/* FreeLibrary @ 00129d80 32B */


/* FreeLibrary(void*) */

bool FreeLibrary(void *param_1)

{
  int iVar1;
  
  iVar1 = dlclose();
  return iVar1 < 1;
}

