/* MaResMgr_AllocFmExtWave @ 000ea010 26B */


/* YAMAHA::MaResMgr_AllocFmExtWave(unsigned int, unsigned int) */

undefined4 YAMAHA::MaResMgr_AllocFmExtWave(uint param_1,uint param_2)

{
  if (*(int *)(*(int *)(DAT_000ea02c + 0xea016) + param_1 * 4) == 0) {
    *(uint *)(*(int *)(DAT_000ea02c + 0xea016) + param_1 * 4) = param_2;
    return 0;
  }
  return 0xfffffffd;
}

