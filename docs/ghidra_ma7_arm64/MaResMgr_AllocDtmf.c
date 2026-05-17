/* MaResMgr_AllocDtmf @ 0023194c 64B */


/* YAMAHA::MaResMgr_AllocDtmf() */

undefined8 YAMAHA::MaResMgr_AllocDtmf(void)

{
  if (*(char *)(DAT_00748f10 + 0x1434) == '\x01') {
    return 0xfffffffd;
  }
  if (*(char *)(DAT_00748f10 + 0x1433) != '\0') {
    return 0xfffffffd;
  }
  *(undefined1 *)(DAT_00748f10 + 0x1433) = 1;
  return 0;
}

