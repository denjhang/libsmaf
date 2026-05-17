/* SmafMms_Unload @ 001b0c6c 116B */


/* YAMAHA::SmafMms_Unload(int) */

undefined8 YAMAHA::SmafMms_Unload(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = PreMms_Unload(param_1);
  if ((int)uVar2 == -0x65) {
    uVar1 = param_1 & 0xf;
    if (uVar1 < 2) {
      uVar2 = MaSound_Unload(DAT_005ddba0,uVar1,(void *)0x0);
      if (-1 < (int)uVar2) {
        (&DAT_005ddbb8)[(int)uVar1] = 0;
        return uVar2;
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

