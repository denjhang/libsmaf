/* operator= @ 0002f54c 86B */


/* CString::TEMPNAMEPLACEHOLDERVALUE(CString const&) */

CString * __thiscall CString::operator=(CString *this,CString *param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)this;
  pcVar1 = *(char **)param_1;
  if (pcVar3 != pcVar1) {
    if (((*(int *)(pcVar3 + -0xc) < 0) &&
        ((char *)**(undefined4 **)(DAT_0002f5a4 + 0x2f58e) != pcVar3 + -0xc)) ||
       (*(int *)(pcVar1 + -0xc) < 0)) {
      AssignCopy(this,*(int *)(pcVar1 + -8),pcVar1);
      return this;
    }
    Release(this);
    iVar2 = *(int *)param_1;
    *(int *)this = iVar2;
    InterlockedIncrement((int *)(iVar2 + -0xc));
    *(undefined4 *)(this + 4) = 0;
  }
  return this;
}

