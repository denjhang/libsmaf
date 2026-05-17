/* MaResMgr_FreeDtmf @ 0023198c 44B */


/* YAMAHA::MaResMgr_FreeDtmf() */

undefined8 YAMAHA::MaResMgr_FreeDtmf(void)

{
  if (*(char *)(DAT_00748f10 + 0x1433) == '\x01') {
    *(undefined1 *)(DAT_00748f10 + 0x1433) = 0;
    return 0;
  }
  return 0xffffffff;
}

