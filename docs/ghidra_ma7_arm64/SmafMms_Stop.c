/* SmafMms_Stop @ 001b1028 180B */


/* YAMAHA::SmafMms_Stop(int) */

undefined8 YAMAHA::SmafMms_Stop(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = PreMms_Stop(param_1);
  if ((int)uVar4 == -0x65) {
    uVar1 = param_1 & 0xf;
    if (uVar1 < 2) {
      uVar4 = MaSound_Stop(DAT_005ddba0,uVar1,(void *)0x0);
      puVar2 = DAT_005ddba8;
      if ((int)uVar4 == 0) {
        if (DAT_005ddba8 != (undefined4 *)0x0) {
          uVar3 = MaSound_Control(DAT_005ddba0,uVar1,'\x04',(void *)0x0,(void *)0x0);
          *puVar2 = uVar3;
        }
        if (DAT_005ddbb0 != (code *)0x0) {
          (*DAT_005ddbb0)(0,0);
          return 0;
        }
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0xffffffff;
    }
  }
  return uVar4;
}

