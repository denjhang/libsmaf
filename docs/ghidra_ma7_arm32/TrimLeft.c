/* TrimLeft @ 0002f97c 98B */


/* CString::TrimLeft() */

void __thiscall CString::TrimLeft(CString *this)

{
  byte *__dest;
  int iVar1;
  byte *__src;
  
  CopyBeforeWrite(this);
  __dest = *(byte **)this;
  if ((*__dest != 0xff) &&
     (__src = __dest,
     (int)((uint)*(byte *)(**(int **)(DAT_0002f9e0 + 0x2f994) + (uint)*__dest + 1) << 0x1c) < 0)) {
    do {
      __src = __src + 1;
      if (*__src == 0xff) break;
    } while ((int)((uint)*(byte *)(**(int **)(DAT_0002f9e0 + 0x2f994) + (uint)*__src + 1) << 0x1c) <
             0);
    if (__dest == __src) {
      return;
    }
    iVar1 = *(int *)(__dest + -8);
    memmove(__dest,__src,(size_t)(__dest + (iVar1 - (int)__src) + 1));
    *(byte **)(*(int *)this + -8) = __dest + (iVar1 - (int)__src);
  }
  return;
}

