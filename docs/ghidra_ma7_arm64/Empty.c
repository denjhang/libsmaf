/* Empty @ 0012a364 40B */


/* CString::Empty() */

void __thiscall CString::Empty(CString *this)

{
  if (*(int *)(*(long *)this + -8) == 0) {
    return;
  }
  if (-1 < *(int *)(*(long *)this + -0xc)) {
    Release(this);
    return;
  }
  operator=(this,PTR_afxChNil_00567fc0);
  return;
}

