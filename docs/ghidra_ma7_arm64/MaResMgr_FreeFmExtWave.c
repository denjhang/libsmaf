/* MaResMgr_FreeFmExtWave @ 00231348 40B */


/* YAMAHA::MaResMgr_FreeFmExtWave(unsigned int) */

undefined8 YAMAHA::MaResMgr_FreeFmExtWave(uint param_1)

{
  if (*(int *)(DAT_00748f10 + (ulong)param_1 * 4) != 0) {
    *(undefined4 *)(DAT_00748f10 + (ulong)param_1 * 4) = 0;
    return 0;
  }
  return 0xffffffff;
}

