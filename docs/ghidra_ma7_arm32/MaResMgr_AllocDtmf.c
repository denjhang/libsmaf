/* MaResMgr_AllocDtmf @ 000ea4c4 32B */


/* YAMAHA::MaResMgr_AllocDtmf() */

undefined4 YAMAHA::MaResMgr_AllocDtmf(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_000ea4e4 + 0xea4ca);
  if ((*(char *)(iVar1 + 0x1434) != '\x01') && (*(char *)(iVar1 + 0x1433) == '\0')) {
    *(undefined1 *)(iVar1 + 0x1433) = 1;
    return 0;
  }
  return 0xfffffffd;
}

