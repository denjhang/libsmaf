/* GetProcAddress @ 00129da0 60B */


/* GetProcAddress(void*, char const*) */

undefined8 GetProcAddress(void *param_1,char *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  dlerror();
  uVar1 = dlsym(param_1,param_2);
  lVar2 = dlerror();
  if (lVar2 != 0) {
    uVar1 = 0;
  }
  return uVar1;
}

