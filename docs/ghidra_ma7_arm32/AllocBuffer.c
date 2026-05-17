/* AllocBuffer @ 0002f330 46B */


/* CString::AllocBuffer(int) */

void __thiscall CString::AllocBuffer(CString *this,int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 != 0) {
    puVar1 = operator_new__(param_1 + 0xd);
    puVar1[2] = param_1;
    *puVar1 = 1;
    *(undefined1 *)((int)(puVar1 + 3) + param_1) = 0;
    puVar1[1] = param_1;
    *(undefined4 **)this = puVar1 + 3;
    *(undefined4 *)(this + 4) = 0;
    return;
  }
  Init(this);
  return;
}

