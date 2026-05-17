/* MaResMgr_AllocSfx @ 002318bc 72B */


/* YAMAHA::MaResMgr_AllocSfx(unsigned int) */

undefined8 YAMAHA::MaResMgr_AllocSfx(uint param_1)

{
  if (1 < param_1) {
    return 0xfffffffe;
  }
  if (*(char *)(DAT_00748f10 + (ulong)param_1 + 0x1429) != '\0') {
    return 0xfffffffd;
  }
  *(undefined1 *)(DAT_00748f10 + (ulong)param_1 + 0x1429) = 1;
  return 0;
}

