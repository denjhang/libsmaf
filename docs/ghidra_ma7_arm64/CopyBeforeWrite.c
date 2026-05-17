/* CopyBeforeWrite @ 0012a170 100B */


/* CString::CopyBeforeWrite() */

void __thiscall CString::CopyBeforeWrite(CString *this)

{
  void *__src;
  
  __src = *(void **)this;
  if (1 < *(int *)((long)__src + -0xc)) {
    Release(this);
    AllocBuffer(this,*(int *)((long)__src + -8));
    memcpy(*(void **)this,__src,(long)(*(int *)((long)__src + -8) + 1));
    return;
  }
  return;
}

