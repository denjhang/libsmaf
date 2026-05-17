/* lchk_cho_type @ 000fbfbc 54B */


/* YAMAHA::lchk_cho_type() */

void YAMAHA::lchk_cho_type(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_000fbff4 + 0xfbfc2);
  cVar1 = *(char *)(iVar2 + 9);
  if (cVar1 == '\x03') {
    if (*(int *)(iVar2 + 0xc) - 1U < 3) goto LAB_000fbfe0;
  }
  else {
    if (cVar1 == '\x06') {
LAB_000fbfe0:
      *(undefined1 *)(iVar2 + 0x24) = 2;
      return;
    }
    if (cVar1 == '\t') {
      *(undefined1 *)(iVar2 + 0x24) = *(undefined1 *)(iVar2 + 0x374);
      return;
    }
  }
  *(undefined1 *)(iVar2 + 0x24) = 0;
  return;
}

