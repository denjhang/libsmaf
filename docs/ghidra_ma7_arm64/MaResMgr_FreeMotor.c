/* MaResMgr_FreeMotor @ 00231790 44B */


/* YAMAHA::MaResMgr_FreeMotor() */

undefined8 YAMAHA::MaResMgr_FreeMotor(void)

{
  if (*(char *)(DAT_00748f10 + 0x1432) == '\x01') {
    *(undefined1 *)(DAT_00748f10 + 0x1432) = 0;
    return 0;
  }
  return 0xffffffff;
}

