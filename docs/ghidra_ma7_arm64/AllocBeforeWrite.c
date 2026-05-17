/* AllocBeforeWrite @ 0012a1d4 80B */


/* CString::AllocBeforeWrite(int) */

void __thiscall CString::AllocBeforeWrite(CString *this,int param_1)

{
  if ((*(int *)(*(long *)this + -0xc) < 2) && (param_1 <= *(int *)(*(long *)this + -4))) {
    return;
  }
  Release(this);
  AllocBuffer(this,param_1);
  return;
}

