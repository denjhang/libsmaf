/* MaResMgr_AllocHv @ 002316a8 64B */


/* YAMAHA::MaResMgr_AllocHv() */

undefined8 YAMAHA::MaResMgr_AllocHv(void)

{
  if (*(char *)(DAT_00748f10 + 0x1434) == '\x01') {
    return 0xfffffffd;
  }
  if (*(char *)(DAT_00748f10 + 0x1430) != '\0') {
    return 0xfffffffd;
  }
  *(undefined1 *)(DAT_00748f10 + 0x1430) = 1;
  return 0;
}

