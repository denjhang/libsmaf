/* MaResMgr_AllocFmExtWave @ 00231324 36B */


/* YAMAHA::MaResMgr_AllocFmExtWave(unsigned int, unsigned int) */

undefined8 YAMAHA::MaResMgr_AllocFmExtWave(uint param_1,uint param_2)

{
  if (*(int *)(DAT_00748f10 + (ulong)param_1 * 4) == 0) {
    *(uint *)(DAT_00748f10 + (ulong)param_1 * 4) = param_2;
    return 0;
  }
  return 0xfffffffd;
}

