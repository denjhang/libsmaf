/* GetLength @ 0002f728 10B */


/* CString::GetLength() */

undefined4 __thiscall CString::GetLength(CString *this)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = *(undefined4 *)(*(int *)this + -8);
  }
  return uVar1;
}

