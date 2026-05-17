/* AllocBeforeWrite @ 0002f454 44B */


/* CString::AllocBeforeWrite(int) */

void __thiscall CString::AllocBeforeWrite(CString *this,int param_1)

{
  if ((*(int *)(*(int *)this + -0xc) < 2) && (param_1 <= *(int *)(*(int *)this + -4))) {
    return;
  }
  Release(this);
  AllocBuffer(this,param_1);
  return;
}

