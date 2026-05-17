/* machdep_AutoPowerManagement @ 0017c5b4 536B */


/* YAMAHA::machdep_AutoPowerManagement(unsigned int, unsigned int) */

undefined8 YAMAHA::machdep_AutoPowerManagement(uint param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffe;
  switch(param_2) {
  case 0:
    if (param_1 == 0x23) {
      machdep_WriteReg(0x11,'\x13');
      machdep_WriteReg(0x12,'\0');
      machdep_WriteReg(0x11,'\x0f');
      machdep_WriteReg(0x12,'\0');
      machdep_WriteReg(1,'d');
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 | 0x40);
      return 0;
    }
    break;
  case 1:
    if (param_1 == 0x23) {
      machdep_WriteReg(1,'d');
      uVar2 = machdep_ReadReg(2);
      if ((uVar2 >> 6 & 1) == 0) {
        return 0;
      }
      machdep_WriteReg(1,'d');
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 & 0xbf);
      machdep_Wait(0xa2e4);
      machdep_WriteReg(0x11,'\x0e');
      machdep_WriteReg(0x12,0x80);
      machdep_Wait(1000);
      machdep_WriteReg(0x11,'\x0e');
      machdep_WriteReg(0x12,'\0');
      machdep_WriteReg(0x11,'\x13');
      machdep_WriteReg(0x12,'|');
      return 0;
    }
    break;
  case 2:
    if (param_1 - 0x23 < 2) {
      machdep_WriteReg(1,0xe7);
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 | 4);
      machdep_WriteReg(1,0xe6);
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 & 0xfe);
      machdep_WriteReg(1,'d');
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 | 0x20);
      return 0;
    }
    break;
  case 3:
    if (param_1 - 0x23 < 2) {
      machdep_WriteReg(1,'d');
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 & 0xdf);
      return 0;
    }
    break;
  default:
    goto switchD_0017c5dc_default;
  }
  uVar3 = 0xffffffff;
switchD_0017c5dc_default:
  return uVar3;
}

