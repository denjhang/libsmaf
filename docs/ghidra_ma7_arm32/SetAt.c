/* SetAt @ 0002f70c 28B */


/* CString::SetAt(int, char) */

void __thiscall CString::SetAt(CString *this,int param_1,char param_2)

{
  size_t sVar1;
  char *__s;
  
  __s = *(char **)this;
  if ((__s != (char *)0x0) && (-1 < param_1)) {
    sVar1 = strlen(__s);
    if ((int)sVar1 < param_1) {
      __s[param_1] = param_2;
    }
  }
  return;
}

