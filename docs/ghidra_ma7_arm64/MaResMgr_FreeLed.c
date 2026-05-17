/* MaResMgr_FreeLed @ 0023173c 44B */


/* YAMAHA::MaResMgr_FreeLed() */

undefined8 YAMAHA::MaResMgr_FreeLed(void)

{
  if (*(char *)(DAT_00748f10 + 0x1431) == '\x01') {
    *(undefined1 *)(DAT_00748f10 + 0x1431) = 0;
    return 0;
  }
  return 0xffffffff;
}

