/* Replace @ 0012a784 176B */


/* CString::Replace(char, char) */

int __thiscall CString::Replace(CString *this,char param_1,char param_2)

{
  size_t sVar1;
  long lVar2;
  char *__s;
  int iVar3;
  
  __s = *(char **)this;
  if (__s == (char *)0x0) {
    return 0;
  }
  lVar2 = 0;
  sVar1 = strlen(__s);
  iVar3 = 0;
  if (0 < (int)sVar1) {
    do {
      if (__s[lVar2] == param_1) {
        __s[lVar2] = param_2;
        iVar3 = iVar3 + 1;
        __s = *(char **)this;
        sVar1 = strlen(__s);
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < (int)sVar1);
  }
  return iVar3;
}

