/* MaResMgr_AllocLed @ 000ea30c 26B */


/* YAMAHA::MaResMgr_AllocLed() */

undefined4 YAMAHA::MaResMgr_AllocLed(void)

{
  if (*(char *)(*(int *)(DAT_000ea328 + 0xea312) + 0x1431) == '\0') {
    *(undefined1 *)(*(int *)(DAT_000ea328 + 0xea312) + 0x1431) = 1;
    return 0;
  }
  return 0xfffffffd;
}

