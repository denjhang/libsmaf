/* MaResMgr_FreeBuf @ 000e9d80 44B */


/* YAMAHA::MaResMgr_FreeBuf(unsigned int) */

undefined4 YAMAHA::MaResMgr_FreeBuf(uint param_1)

{
  char *pcVar1;
  
  if (4 < param_1) {
    return 0xfffffffe;
  }
  pcVar1 = (char *)(param_1 + *(int *)(DAT_000e9dac + 0xe9d8a) + 0x1420);
  if (*pcVar1 == '\x01') {
    *pcVar1 = '\0';
    return 0;
  }
  return 0xffffffff;
}

