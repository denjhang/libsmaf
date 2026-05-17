/* AllocBuffer @ 00129fb4 104B */


/* CString::AllocBuffer(int) */

void __thiscall CString::AllocBuffer(CString *this,int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 != 0) {
    puVar1 = operator_new__((long)(param_1 + 1) + 0xc);
    puVar1[2] = param_1;
    *puVar1 = 1;
    *(undefined1 *)((long)(puVar1 + 3) + (long)param_1) = 0;
    puVar1[1] = param_1;
    *(undefined4 **)this = puVar1 + 3;
    *(undefined8 *)(this + 8) = 0;
    return;
  }
  Init(this);
  return;
}

