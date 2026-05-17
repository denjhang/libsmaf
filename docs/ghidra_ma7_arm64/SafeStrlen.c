/* SafeStrlen @ 00129f84 48B */


/* CString::SafeStrlen(char const*) */

size_t __thiscall CString::SafeStrlen(CString *this,char *param_1)

{
  size_t sVar1;
  
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    return sVar1;
  }
  return 0;
}

