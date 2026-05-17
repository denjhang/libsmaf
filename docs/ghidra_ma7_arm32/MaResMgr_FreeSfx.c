/* MaResMgr_FreeSfx @ 000ea490 46B */


/* YAMAHA::MaResMgr_FreeSfx(unsigned int) */

undefined4 YAMAHA::MaResMgr_FreeSfx(uint param_1)

{
  int iVar1;
  
  if (1 < param_1) {
    return 0xfffffffe;
  }
  iVar1 = *(int *)(DAT_000ea4c0 + 0xea49a) + param_1;
  if (*(char *)(iVar1 + 0x1429) != '\x01') {
    return 0xffffffff;
  }
  *(undefined1 *)(iVar1 + 0x1429) = 0;
  return 0;
}

