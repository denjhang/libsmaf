/* MaResMgr_FreeFmExtWave @ 000ea030 28B */


/* YAMAHA::MaResMgr_FreeFmExtWave(unsigned int) */

undefined4 YAMAHA::MaResMgr_FreeFmExtWave(uint param_1)

{
  if (*(int *)(*(int *)(DAT_000ea04c + 0xea036) + param_1 * 4) != 0) {
    *(undefined4 *)(*(int *)(DAT_000ea04c + 0xea036) + param_1 * 4) = 0;
    return 0;
  }
  return 0xffffffff;
}

