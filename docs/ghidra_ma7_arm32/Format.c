/* Format @ 0002f688 86B */


/* CString::Format(char*, ...) */

void CString::Format(char *param_1,...)

{
  int iVar1;
  char *in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  int *piVar2;
  char acStack_424 [1024];
  int local_24;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar2 = *(int **)(DAT_0002f6e0 + 0x2f69e);
  local_24 = *piVar2;
  uStack_8 = in_r2;
  uStack_4 = in_r3;
  vsprintf(acStack_424,in_r1,&uStack_8);
  iVar1 = SafeStrlen((CString *)param_1,acStack_424);
  AssignCopy((CString *)param_1,iVar1,acStack_424);
  if (local_24 == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

