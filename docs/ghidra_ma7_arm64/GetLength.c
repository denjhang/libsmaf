/* GetLength @ 0012a774 16B */


/* CString::GetLength() */

undefined4 __thiscall CString::GetLength(CString *this)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(long *)this != 0) {
    uVar1 = *(undefined4 *)(*(long *)this + -8);
  }
  return uVar1;
}

