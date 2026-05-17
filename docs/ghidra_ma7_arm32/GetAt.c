/* GetAt @ 0002f6e4 40B */


/* CString::GetAt(int) */

int __thiscall CString::GetAt(CString *this,int param_1)

{
  size_t sVar1;
  char *__s;
  
  __s = *(char **)this;
  if (__s == (char *)0x0) {
    return 0;
  }
  if ((-1 < param_1) && (sVar1 = strlen(__s), param_1 < (int)sVar1)) {
    return (int)__s[param_1];
  }
  return 0;
}

