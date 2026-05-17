/* Mid @ 0002faac 36B */


/* CString::Mid(int) */

undefined4 __thiscall CString::Mid(CString *this,int param_1)

{
  size_t sVar1;
  undefined4 uVar2;
  
  sVar1 = strlen(*(char **)this);
  if (param_1 < (int)sVar1) {
    uVar2 = Mid(this,param_1,sVar1 - param_1);
    return uVar2;
  }
  return 0;
}

