/* CString @ 0012a304 96B */


/* CString::CString(CString const&) */

void __thiscall CString::CString(CString *this,CString *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)param_1;
  iVar1 = *(int *)(lVar2 + -0xc);
  if (-1 < iVar1) {
    *(long *)this = lVar2;
    *(int *)(lVar2 + -0xc) = iVar1 + 1;
    *(undefined8 *)(this + 8) = 0;
    return;
  }
  Init(this);
  operator=(this,*(char **)param_1);
  return;
}

