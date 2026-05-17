/* Compare @ 0012af88 8B */


/* CString::Compare(char const*) */

int __thiscall CString::Compare(CString *this,char *param_1)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)this,param_1);
  return iVar1;
}

