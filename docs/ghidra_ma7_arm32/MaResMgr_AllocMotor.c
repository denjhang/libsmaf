/* MaResMgr_AllocMotor @ 000ea350 26B */


/* YAMAHA::MaResMgr_AllocMotor() */

undefined4 YAMAHA::MaResMgr_AllocMotor(void)

{
  if (*(char *)(*(int *)(DAT_000ea36c + 0xea356) + 0x1432) == '\0') {
    *(undefined1 *)(*(int *)(DAT_000ea36c + 0xea356) + 0x1432) = 1;
    return 0;
  }
  return 0xfffffffd;
}

