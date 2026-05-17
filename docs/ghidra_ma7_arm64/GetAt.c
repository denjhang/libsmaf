/* GetAt @ 0012a6d8 88B */


/* CString::GetAt(int) */

long __thiscall CString::GetAt(CString *this,int param_1)

{
  size_t sVar1;
  long lVar2;
  char *__s;
  
  __s = *(char **)this;
  if ((-1 < param_1) && (__s != (char *)0x0)) {
    sVar1 = strlen(__s);
    lVar2 = 0;
    if (param_1 < (int)sVar1) {
      lVar2 = (long)__s[param_1];
    }
    return lVar2;
  }
  return 0;
}

