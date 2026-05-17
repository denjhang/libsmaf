/* MaResMgr_AllocHv @ 000ea2c4 32B */


/* YAMAHA::MaResMgr_AllocHv() */

undefined4 YAMAHA::MaResMgr_AllocHv(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_000ea2e4 + 0xea2ca);
  if ((*(char *)(iVar1 + 0x1434) != '\x01') && (*(char *)(iVar1 + 0x1430) == '\0')) {
    *(undefined1 *)(iVar1 + 0x1430) = 1;
    return 0;
  }
  return 0xfffffffd;
}

