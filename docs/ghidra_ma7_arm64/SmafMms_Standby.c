/* SmafMms_Standby @ 001b0e24 196B */


/* YAMAHA::SmafMms_Standby(int, unsigned int, unsigned int) */

int YAMAHA::SmafMms_Standby(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = PreMms_Standby(param_1,param_2,param_3);
  if (iVar3 == -0x65) {
    uVar1 = param_1 & 0xf;
    if (uVar1 < 2) {
      iVar3 = MaSound_Standby(DAT_005ddba0,uVar1,(void *)0x0);
      if (iVar3 == 0) {
        uVar4 = MaSound_Control(DAT_005ddba0,uVar1,'\x05',(void *)0x0,(void *)0x0);
        uVar2 = uVar4 - 1;
        if (param_3 < uVar4) {
          uVar2 = param_3;
        }
        MaSound_Seek(DAT_005ddba0,uVar1,uVar2,'\0',(void *)0x0);
        if (DAT_005ddbb0 != (code *)0x0) {
          (*DAT_005ddbb0)(0,0);
        }
      }
    }
    else {
      iVar3 = -1;
    }
  }
  return iVar3;
}

