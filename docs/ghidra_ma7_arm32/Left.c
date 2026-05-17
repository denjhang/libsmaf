/* Left @ 0002fb0c 122B */


/* CString::Left(int) */

void CString::Left(int param_1)

{
  size_t sVar1;
  CString *in_r1;
  size_t in_r2;
  int *piVar2;
  CString aCStack_424 [8];
  char acStack_41c [1024];
  int local_1c;
  
  piVar2 = *(int **)(DAT_0002fb88 + 0x2fb20);
  local_1c = *piVar2;
  sVar1 = strlen(*(char **)in_r1);
  if ((int)sVar1 < (int)in_r2) {
    CString((CString *)param_1,in_r1);
  }
  else {
    CString(aCStack_424);
    strncpy(acStack_41c,*(char **)in_r1,in_r2);
    acStack_41c[in_r2] = '\0';
    operator=(aCStack_424,acStack_41c);
    CString((CString *)param_1,aCStack_424);
    ~CString(aCStack_424);
  }
  if (local_1c == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}

