/* operator= @ 0012a2d0 52B */


/* CString::TEMPNAMEPLACEHOLDERVALUE(char const*) */

CString * __thiscall CString::operator=(CString *this,char *param_1)

{
  int iVar1;
  
  iVar1 = SafeStrlen(this,param_1);
  AssignCopy(this,iVar1,param_1);
  return this;
}

