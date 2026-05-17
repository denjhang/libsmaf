/* ~CString @ 0002f3a0 60B */


/* CString::~CString() */

CString * __thiscall CString::~CString(CString *this)

{
  int iVar1;
  
  if (((int *)(*(int *)this + -0xc) != (int *)**(undefined4 **)(DAT_0002f3dc + 0x2f3a8)) &&
     (iVar1 = InterlockedDecrement((int *)(*(int *)this + -0xc)), iVar1 < 1)) {
    FreeData(this,(CStringData *)(*(int *)this + -0xc));
    if (*(void **)(this + 4) != (void *)0x0) {
      operator_delete__(*(void **)(this + 4));
      *(undefined4 *)(this + 4) = 0;
    }
  }
  return this;
}

