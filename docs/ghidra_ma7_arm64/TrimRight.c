/* TrimRight @ 0012ac30 112B */


/* CString::TrimRight() */

void __thiscall CString::TrimRight(CString *this)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  CopyBeforeWrite(this);
  pcVar4 = *(char **)this;
  iVar2 = (int)*pcVar4;
  if (*pcVar4 != '\0') {
    pcVar3 = (char *)0x0;
    do {
      while( true ) {
        iVar2 = isspace(iVar2);
        if (iVar2 != 0) break;
        pcVar4 = pcVar4 + 1;
        cVar1 = *pcVar4;
        iVar2 = (int)cVar1;
        pcVar3 = (char *)0x0;
        if (iVar2 == 0) goto LAB_0012ac7c;
      }
      if (pcVar3 == (char *)0x0) {
        pcVar3 = pcVar4;
      }
      pcVar4 = pcVar4 + 1;
      iVar2 = (int)*pcVar4;
      cVar1 = '\0';
    } while (*pcVar4 != '\0');
LAB_0012ac7c:
    if (pcVar3 != (char *)0x0) {
      *pcVar3 = cVar1;
      *(int *)(*(long *)this + -8) = (int)pcVar3 - (int)*(long *)this;
    }
  }
  return;
}

