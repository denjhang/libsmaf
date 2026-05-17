/* MaCmd_SetWtWave @ 000f368c 46B */


/* YAMAHA::MaCmd_SetWtWave(unsigned int, unsigned int, unsigned int) */

undefined4 YAMAHA::MaCmd_SetWtWave(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = *(int *)(DAT_000f36bc + 0xf3696 + param_1 * 4);
  }
  else {
    iVar1 = *(int *)(DAT_000f36c0 + 0xf36aa + param_1 * 4);
    if (*(int *)(iVar1 + (param_2 + 0xf4) * 4) != 0) {
      return 0xfffffffd;
    }
  }
  *(uint *)(iVar1 + (param_2 + 0xf4) * 4) = param_3;
  return 0;
}

