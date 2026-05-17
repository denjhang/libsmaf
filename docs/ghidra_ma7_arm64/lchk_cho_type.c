/* lchk_cho_type @ 002486a0 92B */


/* YAMAHA::lchk_cho_type() */

void YAMAHA::lchk_cho_type(void)

{
  char cVar1;
  
  cVar1 = PTR_lprm_00567530[9];
  if (cVar1 == '\x03') {
    if (*(int *)(PTR_lprm_00567530 + 0xc) - 1U < 3) goto LAB_002486e0;
  }
  else {
    if (cVar1 == '\x06') {
LAB_002486e0:
      PTR_lprm_00567530[0x24] = 2;
      return;
    }
    if (cVar1 == '\t') {
      PTR_lprm_00567530[0x24] = PTR_lprm_00567530[0x380];
      return;
    }
  }
  PTR_lprm_00567530[0x24] = 0;
  return;
}

