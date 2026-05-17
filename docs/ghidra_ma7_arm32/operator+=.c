/* operator+= @ 0002f648 24B */


/* CString::TEMPNAMEPLACEHOLDERVALUE(char const*) */

CString * __thiscall CString::operator+=(CString *this,char *param_1)

{
  int iVar1;
  
  iVar1 = SafeStrlen(this,param_1);
  ConcatInPlace(this,iVar1,param_1);
  return this;
}

