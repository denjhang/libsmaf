/* Timer_Control @ 0013ad74 192B */


/* ARM::Timer_Control(unsigned char, unsigned char, long) */

void ARM::Timer_Control(uchar param_1,uchar param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = (ulong)param_1;
  if (param_1 < 2) {
    if ((param_2 & 1) == 0) {
      (&DAT_00583360)[uVar4 * 0x30] = param_2 & 1;
      return;
    }
    (&DAT_00583362)[uVar4 * 0x30] = param_2 >> 2 & 1;
    (&DAT_00583361)[uVar4 * 0x30] = param_2 >> 1 & 1;
    if ((param_2 >> 2 & 1) == 0) {
      uVar3 = (&DAT_00583368)[uVar4 * 0xc] * 0x90f5;
    }
    else {
      uVar3 = (&DAT_00583364)[uVar4 * 0xc] * 0x43d;
    }
    cVar2 = (&DAT_00583360)[uVar4 * 0x30];
    uVar1 = (&DAT_0058336c)[uVar4 * 0xc];
    (&DAT_00583388)[uVar4 * 6] = (ulong)uVar3;
    lVar5 = (ulong)uVar3 * (ulong)uVar1;
    (&DAT_00583380)[uVar4 * 6] = lVar5;
    if (cVar2 == '\0') {
      (&DAT_00583360)[uVar4 * 0x30] = 1;
      (&DAT_00583370)[uVar4 * 6] = param_3 * 1000000;
      (&DAT_00583378)[uVar4 * 6] = param_3 * 1000000 + lVar5;
      return;
    }
  }
  return;
}

