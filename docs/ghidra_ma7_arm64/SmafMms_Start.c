/* SmafMms_Start @ 001b0fd4 84B */


/* YAMAHA::SmafMms_Start(int) */

undefined8 YAMAHA::SmafMms_Start(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = PreMms_Start(param_1);
  if ((int)uVar1 == -0x65) {
    if ((param_1 & 0xfU) < 2) {
      uVar1 = MaSound_Start(DAT_005ddba0,param_1 & 0xfU,0,(void *)0x0);
      return uVar1;
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

