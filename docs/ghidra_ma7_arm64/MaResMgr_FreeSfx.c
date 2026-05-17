/* MaResMgr_FreeSfx @ 00231904 72B */


/* YAMAHA::MaResMgr_FreeSfx(unsigned int) */

undefined8 YAMAHA::MaResMgr_FreeSfx(uint param_1)

{
  if (1 < param_1) {
    return 0xfffffffe;
  }
  if (*(char *)(DAT_00748f10 + (ulong)param_1 + 0x1429) != '\x01') {
    return 0xffffffff;
  }
  *(undefined1 *)(DAT_00748f10 + (ulong)param_1 + 0x1429) = 0;
  return 0;
}

