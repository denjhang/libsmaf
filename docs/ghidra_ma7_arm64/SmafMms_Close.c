/* SmafMms_Close @ 001b0d60 196B */


/* YAMAHA::SmafMms_Close(int) */

undefined8 YAMAHA::SmafMms_Close(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = PreMms_Close(param_1);
  if ((int)uVar3 == -0x65) {
    uVar1 = param_1 & 0xf;
    if (uVar1 < 2) {
      MaSound_Stop(DAT_005ddba0,uVar1,(void *)0x0);
      uVar2 = MaSound_Control(DAT_005ddba0,uVar1,'\x04',(void *)0x0,(void *)0x0);
      uVar3 = MaSound_Close(DAT_005ddba0,uVar1,(void *)0x0);
      if (-1 < (int)uVar3) {
        if (DAT_005ddba8 != (undefined4 *)0x0) {
          *DAT_005ddba8 = uVar2;
        }
        DAT_005ddbb0 = FUN_001b0880;
        DAT_005ddba8 = (undefined4 *)0x0;
        return uVar3;
      }
    }
    else {
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}

