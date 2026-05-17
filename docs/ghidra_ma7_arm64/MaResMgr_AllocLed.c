/* MaResMgr_AllocLed @ 00231714 40B */


/* YAMAHA::MaResMgr_AllocLed() */

undefined8 YAMAHA::MaResMgr_AllocLed(void)

{
  if (*(char *)(DAT_00748f10 + 0x1431) == '\0') {
    *(undefined1 *)(DAT_00748f10 + 0x1431) = 1;
    return 0;
  }
  return 0xfffffffd;
}

