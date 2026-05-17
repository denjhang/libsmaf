/* CompareNoCase @ 0002fb94 72B */


/* CString::CompareNoCase(char const*) const */

undefined4 __thiscall CString::CompareNoCase(CString *this,char *param_1)

{
  undefined4 uVar1;
  CString aCStack_20 [8];
  char *local_18 [2];
  
  CString(aCStack_20);
  CString((CString *)local_18,param_1);
  operator=(aCStack_20,*(char **)this);
  MakeLower(aCStack_20);
  MakeLower((CString *)local_18);
  uVar1 = Compare(aCStack_20,local_18[0]);
  ~CString((CString *)local_18);
  ~CString(aCStack_20);
  return uVar1;
}

