/* TrimLeft @ 0012ab40 240B */


/* CString::TrimLeft() */

void __thiscall CString::TrimLeft(CString *this)

{
  char *pcVar1;
  int iVar2;
  char *__src;
  char *__dest;
  
  CopyBeforeWrite(this);
  __dest = *(char **)this;
  iVar2 = isspace((int)*__dest);
  pcVar1 = __dest;
  while (__src = pcVar1, iVar2 != 0) {
    __src = pcVar1 + 1;
    iVar2 = isspace((int)*__src);
    if (iVar2 == 0) break;
    __src = pcVar1 + 2;
    iVar2 = isspace((int)*__src);
    if (iVar2 == 0) break;
    __src = pcVar1 + 3;
    iVar2 = isspace((int)pcVar1[3]);
    if (iVar2 == 0) break;
    __src = pcVar1 + 4;
    iVar2 = isspace((int)pcVar1[4]);
    if (iVar2 == 0) break;
    __src = pcVar1 + 5;
    iVar2 = isspace((int)pcVar1[5]);
    if (iVar2 == 0) break;
    __src = pcVar1 + 6;
    iVar2 = isspace((int)pcVar1[6]);
    if (iVar2 == 0) break;
    __src = pcVar1 + 7;
    iVar2 = isspace((int)pcVar1[7]);
    if (iVar2 == 0) break;
    pcVar1 = pcVar1 + 8;
    iVar2 = isspace((int)*pcVar1);
  }
  if (__dest != __src) {
    iVar2 = *(int *)(__dest + -8) + ((int)__dest - (int)__src);
    memmove(__dest,__src,(long)(iVar2 + 1));
    *(int *)(*(long *)this + -8) = iVar2;
  }
  return;
}

