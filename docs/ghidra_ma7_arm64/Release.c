/* Release @ 0012a224 96B */


/* CString::Release(CStringData*) */

void __thiscall CString::Release(CString *this,CStringData *param_1)

{
  int iVar1;
  
  if ((param_1 != *(CStringData **)PTR__afxDataNil_00567208) &&
     (iVar1 = InterlockedDecrement((int *)param_1), iVar1 < 1)) {
    FreeData(this,param_1);
    return;
  }
  return;
}

