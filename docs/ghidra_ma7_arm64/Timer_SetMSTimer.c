/* Timer_SetMSTimer @ 0013ab4c 144B */


/* ARM::Timer_SetMSTimer(unsigned char, unsigned int) */

void ARM::Timer_SetMSTimer(uchar param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = (ulong)param_1;
  if (param_1 < 2) {
    if (param_2 == 0) {
      param_2 = 0x80;
    }
    if (((&DAT_00583368)[uVar3 * 0xc] != param_2) &&
       ((&DAT_00583368)[uVar3 * 0xc] = param_2,
       (*(uint *)(&DAT_00583360 + uVar3 * 0x30) & 0xff00ff) == 1)) {
      if ((&DAT_00583362)[uVar3 * 0x30] == '\0') {
        uVar2 = param_2 * 0x90f5;
      }
      else {
        uVar2 = (&DAT_00583364)[uVar3 * 0xc] * 0x43d;
      }
      uVar1 = (&DAT_0058336c)[uVar3 * 0xc];
      (&DAT_00583388)[uVar3 * 6] = (ulong)uVar2;
      (&DAT_00583380)[uVar3 * 6] = (ulong)uVar2 * (ulong)uVar1;
      return;
    }
  }
  return;
}

