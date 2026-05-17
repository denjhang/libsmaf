/* CompareNoCase @ 0012af90 172B */


/* CString::CompareNoCase(char const*) const */

void __thiscall CString::CompareNoCase(CString *this,char *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  CString aCStack_28 [16];
  char *local_18 [2];
  long local_8;
  
  puVar1 = PTR___stack_chk_guard_00567868;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  CString(aCStack_28);
  CString((CString *)local_18,param_1);
  operator=(aCStack_28,*(char **)this);
  MakeLower(aCStack_28);
  MakeLower((CString *)local_18);
  uVar2 = Compare(aCStack_28,local_18[0]);
  ~CString((CString *)local_18);
  ~CString(aCStack_28);
  if (local_8 == *(long *)puVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

