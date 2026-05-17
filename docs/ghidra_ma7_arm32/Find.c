/* Find @ 0002fa44 24B */


/* CString::Find(char*) */

int __thiscall CString::Find(CString *this,char *param_1)

{
  char *pcVar1;
  char *__haystack;
  
  __haystack = *(char **)this;
  if ((__haystack != (char *)0x0) && (pcVar1 = strstr(__haystack,param_1), pcVar1 != (char *)0x0)) {
    return (int)pcVar1 - (int)__haystack;
  }
  return -1;
}

