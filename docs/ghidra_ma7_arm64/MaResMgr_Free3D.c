/* MaResMgr_Free3D @ 00231834 72B */


/* YAMAHA::MaResMgr_Free3D(unsigned int) */

undefined8 YAMAHA::MaResMgr_Free3D(uint param_1)

{
  if (3 < param_1) {
    return 0xfffffffe;
  }
  if (*(char *)(DAT_00748f10 + (ulong)param_1 + 0x1425) != '\x01') {
    return 0xffffffff;
  }
  *(undefined1 *)(DAT_00748f10 + (ulong)param_1 + 0x1425) = 0;
  return 0;
}

