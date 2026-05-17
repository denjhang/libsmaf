/* ~CString @ 0012a094 104B */


/* CString::~CString() */

void __thiscall CString::~CString(CString *this)

{
  int iVar1;
  
  if ((*(int **)PTR__afxDataNil_00567208 != (int *)(*(long *)this + -0xc)) &&
     (iVar1 = InterlockedDecrement((int *)(*(long *)this + -0xc)), iVar1 < 1)) {
    FreeData(this,(CStringData *)(*(long *)this + -0xc));
    if (*(void **)(this + 8) != (void *)0x0) {
      operator_delete__(*(void **)(this + 8));
      return;
    }
  }
  return;
}

