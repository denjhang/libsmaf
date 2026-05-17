/* Timer_SetCounter @ 0013ac64 144B */


/* ARM::Timer_SetCounter(unsigned char, unsigned int) */

void ARM::Timer_SetCounter(uchar param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = (ulong)param_1;
  if (param_1 < 2) {
    if (param_2 == 0) {
      param_2 = 0x80;
    }
    if (((&DAT_0058336c)[uVar3 * 0xc] != param_2) &&
       (cVar1 = (&DAT_00583360)[uVar3 * 0x30], (&DAT_0058336c)[uVar3 * 0xc] = param_2,
       cVar1 == '\x01')) {
      if ((&DAT_00583362)[uVar3 * 0x30] == '\0') {
        uVar2 = (&DAT_00583368)[uVar3 * 0xc] * 0x90f5;
      }
      else {
        uVar2 = (&DAT_00583364)[uVar3 * 0xc] * 0x43d;
      }
      (&DAT_00583388)[uVar3 * 6] = (ulong)uVar2;
      (&DAT_00583380)[uVar3 * 6] = (ulong)uVar2 * (ulong)param_2;
      return;
    }
  }
  return;
}

