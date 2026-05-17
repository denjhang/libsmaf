/* Empty @ 0002f528 32B */


/* CString::Empty() */

void __thiscall CString::Empty(CString *this)

{
  if (*(int *)(*(int *)this + -8) == 0) {
    return;
  }
  if (-1 < *(int *)(*(int *)this + -0xc)) {
    Release(this);
    return;
  }
  operator=(this,*(char **)(DAT_0002f548 + 0x2f542));
  return;
}

