/* MaCmd_SetWtWave @ 0023a7ec 76B */


/* YAMAHA::MaCmd_SetWtWave(unsigned int, unsigned int, unsigned int) */

undefined8 YAMAHA::MaCmd_SetWtWave(uint param_1,uint param_2,uint param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
    lVar1 = *(long *)(&DAT_00763b50 + (ulong)param_1 * 8);
  }
  else {
    lVar1 = *(long *)(&DAT_00763b50 + (ulong)param_1 * 8);
    if (*(int *)(lVar1 + ((ulong)param_2 + 0xf4) * 4) != 0) {
      return 0xfffffffd;
    }
  }
  *(uint *)(lVar1 + ((ulong)param_2 + 0xf4) * 4) = param_3;
  return 0;
}

