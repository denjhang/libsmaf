/* Timer_GetCounter @ 0013acf4 128B */


/* ARM::Timer_GetCounter(unsigned char) */

uint ARM::Timer_GetCounter(uchar param_1)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar2 = (ulong)param_1;
  if (param_1 < 2) {
    if ((&DAT_00583360)[uVar2 * 0x30] == '\0') {
      uVar4 = (uint)*(byte *)(&DAT_0058336c + uVar2 * 0xc);
    }
    else {
      lVar3 = (&DAT_00583388)[uVar2 * 6];
      if (lVar3 == 0) {
        bVar1 = *(byte *)(&DAT_0058336c + uVar2 * 0xc);
        uVar4 = (uint)bVar1;
      }
      else {
        bVar1 = *(byte *)(&DAT_0058336c + uVar2 * 0xc);
        uVar4 = 0;
        if (lVar3 != 0) {
          uVar4 = (uint)((long)((&DAT_00583378)[uVar2 * 6] - (&DAT_00583370)[uVar2 * 6]) / lVar3);
        }
        uVar4 = uVar4 & 0xff;
      }
      if (bVar1 <= uVar4) {
        uVar4 = (uint)bVar1;
      }
    }
    if ((char)uVar4 < '\0') {
      uVar4 = 0;
    }
    return uVar4;
  }
  return 0xff;
}

