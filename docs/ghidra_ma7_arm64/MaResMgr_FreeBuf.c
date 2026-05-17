/* MaResMgr_FreeBuf @ 002310e8 64B */


/* YAMAHA::MaResMgr_FreeBuf(unsigned int) */

undefined8 YAMAHA::MaResMgr_FreeBuf(uint param_1)

{
  if (4 < param_1) {
    return 0xfffffffe;
  }
  if (*(char *)(DAT_00748f10 + (ulong)param_1 + 0x1420) == '\x01') {
    *(undefined1 *)(DAT_00748f10 + (ulong)param_1 + 0x1420) = 0;
    return 0;
  }
  return 0xffffffff;
}

