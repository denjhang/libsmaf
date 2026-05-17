/* SetAt @ 0012a730 68B */


/* CString::SetAt(int, char) */

void __thiscall CString::SetAt(CString *this,int param_1,char param_2)

{
  size_t sVar1;
  char *__s;
  
  __s = *(char **)this;
  if (((-1 < param_1) && (__s != (char *)0x0)) && (sVar1 = strlen(__s), (int)sVar1 < param_1)) {
    __s[param_1] = param_2;
  }
  return;
}

