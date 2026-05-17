/* Timer_Generate @ 0013ae34 156B */


/* ARM::Timer_Generate(long) */

uint ARM::Timer_Generate(long param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = 0;
  lVar2 = param_1 * 1000000;
  if (DAT_00583360 != '\0') {
    DAT_00583370 = lVar2;
    if (DAT_00583378 <= lVar2) {
      uVar1 = 1;
      DAT_00583378 = DAT_00583378 + DAT_00583380;
      if (DAT_00583361 == '\x01') {
        DAT_00583360 = '\0';
      }
    }
  }
  if (DAT_00583390 != '\0') {
    DAT_005833a0 = lVar2;
    if (DAT_005833a8 <= lVar2) {
      uVar1 = uVar1 | 2;
      DAT_005833a8 = DAT_005833a8 + DAT_005833b0;
      if (DAT_00583391 == '\x01') {
        DAT_00583390 = '\0';
      }
    }
  }
  return uVar1;
}

