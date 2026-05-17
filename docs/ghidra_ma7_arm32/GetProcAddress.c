/* GetProcAddress @ 0002f200 34B */


/* GetProcAddress(void*, char const*) */

undefined4 GetProcAddress(void *param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  dlerror();
  uVar1 = dlsym(param_1,param_2);
  iVar2 = dlerror();
  if (iVar2 != 0) {
    uVar1 = 0;
  }
  return uVar1;
}

