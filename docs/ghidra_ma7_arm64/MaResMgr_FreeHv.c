/* MaResMgr_FreeHv @ 002316e8 44B */


/* YAMAHA::MaResMgr_FreeHv() */

undefined8 YAMAHA::MaResMgr_FreeHv(void)

{
  if (*(char *)(DAT_00748f10 + 0x1430) == '\x01') {
    *(undefined1 *)(DAT_00748f10 + 0x1430) = 0;
    return 0;
  }
  return 0xffffffff;
}

