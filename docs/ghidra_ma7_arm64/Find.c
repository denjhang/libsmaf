/* Find @ 0012aca0 56B */


/* CString::Find(char*) */

int __thiscall CString::Find(CString *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  char *__haystack;
  
  __haystack = *(char **)this;
  if (__haystack == (char *)0x0) {
    iVar1 = -1;
  }
  else {
    pcVar2 = strstr(__haystack,param_1);
    iVar1 = (int)pcVar2 - (int)__haystack;
    if (pcVar2 == (char *)0x0) {
      iVar1 = -1;
    }
  }
  return iVar1;
}

