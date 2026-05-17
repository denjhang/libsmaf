/* Release @ 0002f480 42B */


/* CString::Release(CStringData*) */

void __thiscall CString::Release(CString *this,CStringData *param_1)

{
  int iVar1;
  
  if ((param_1 != (CStringData *)**(int **)(DAT_0002f4ac + 0x2f48c)) &&
     (iVar1 = InterlockedDecrement((int *)param_1), iVar1 < 1)) {
    FreeData(this,param_1);
    return;
  }
  return;
}

