/* CString @ 0002f4ec 60B */


/* CString::CString(CString const&) */

CString * __thiscall CString::CString(CString *this,CString *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1;
  if (-1 < *(int *)(iVar1 + -0xc)) {
    *(int *)this = iVar1;
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + 1;
    *(undefined4 *)(this + 4) = 0;
    return this;
  }
  Init(this);
  operator=(this,*(char **)param_1);
  return this;
}

