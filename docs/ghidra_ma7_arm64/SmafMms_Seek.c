/* SmafMms_Seek @ 001b0ee8 236B */


/* YAMAHA::SmafMms_Seek(int, unsigned int) */

undefined8 YAMAHA::SmafMms_Seek(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = PreMms_Seek(param_1,param_2);
  if ((int)uVar6 == -0x65) {
    uVar1 = param_1 & 0xf;
    if (uVar1 < 2) {
      uVar4 = MaSound_Control(DAT_005ddba0,uVar1,'\x05',(void *)0x0,(void *)0x0);
      uVar2 = uVar4 - 1;
      if (param_2 < uVar4) {
        uVar2 = param_2;
      }
      uVar6 = MaSound_Seek(DAT_005ddba0,uVar1,uVar2,'\0',(void *)0x0);
      puVar3 = DAT_005ddba8;
      if ((int)uVar6 == 0) {
        if (DAT_005ddba8 != (undefined4 *)0x0) {
          uVar5 = MaSound_Control(DAT_005ddba0,uVar1,'\x04',(void *)0x0,(void *)0x0);
          *puVar3 = uVar5;
        }
        if (DAT_005ddbb0 != (code *)0x0) {
          (*DAT_005ddbb0)(0,0);
          return 0;
        }
        uVar6 = 0;
      }
    }
    else {
      uVar6 = 0xffffffff;
    }
  }
  return uVar6;
}

