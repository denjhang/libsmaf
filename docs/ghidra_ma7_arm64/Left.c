/* Left @ 0012aeb8 208B */


/* CString::Left(int) */

void CString::Left(int param_1)

{
  CString *pCVar1;
  size_t sVar2;
  int in_w1;
  CString *in_x8;
  CString aCStack_418 [16];
  char acStack_408 [1024];
  long local_8;
  
  pCVar1 = (CString *)(ulong)(uint)param_1;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  sVar2 = strlen(*(char **)pCVar1);
  if ((int)sVar2 < in_w1) {
    CString(in_x8,pCVar1);
  }
  else {
    CString(aCStack_418);
    strncpy(acStack_408,*(char **)pCVar1,(long)in_w1);
    acStack_408[in_w1] = '\0';
    operator=(aCStack_418,acStack_408);
    CString(in_x8,aCStack_418);
    ~CString(aCStack_418);
  }
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

