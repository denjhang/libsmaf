/* MakeLower @ 0002fad0 54B */


/* CString::MakeLower() */

void __thiscall CString::MakeLower(CString *this)

{
  char cVar1;
  size_t sVar2;
  uint uVar3;
  char *__s;
  
  __s = *(char **)this;
  if (__s != (char *)0x0) {
    uVar3 = 0;
    while( true ) {
      sVar2 = strlen(__s);
      if (sVar2 <= uVar3) break;
      cVar1 = __s[uVar3];
      if ((uint)(int)cVar1 < 0x100) {
        cVar1 = (char)*(undefined2 *)(**(int **)(DAT_0002fb08 + 0x2faea) + ((int)cVar1 + 1U) * 2);
      }
      __s[uVar3] = cVar1;
      uVar3 = uVar3 + 1;
      __s = *(char **)this;
    }
  }
  return;
}

