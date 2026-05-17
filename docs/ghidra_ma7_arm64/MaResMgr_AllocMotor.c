/* MaResMgr_AllocMotor @ 00231768 40B */


/* YAMAHA::MaResMgr_AllocMotor() */

undefined8 YAMAHA::MaResMgr_AllocMotor(void)

{
  if (*(char *)(DAT_00748f10 + 0x1432) == '\0') {
    *(undefined1 *)(DAT_00748f10 + 0x1432) = 1;
    return 0;
  }
  return 0xfffffffd;
}

