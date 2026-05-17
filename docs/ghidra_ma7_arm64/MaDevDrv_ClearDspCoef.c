/* MaDevDrv_ClearDspCoef @ 0022016c 592B */


/* YAMAHA::MaDevDrv_ClearDspCoef(unsigned int, unsigned int) */

undefined8 YAMAHA::MaDevDrv_ClearDspCoef(uint param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if ((param_2 < param_1 || 0x2ff < param_2) || (0x2ff < param_1)) {
    uVar3 = 0xfffffffe;
  }
  else {
    MaDevDrv_DisableIrq();
    uVar4 = param_1 + 1;
    machdep_WriteReg(1,'0');
    bVar2 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar2 & 0xfe);
    machdep_WriteReg(1,'1');
    machdep_WriteReg(2,(uchar)(param_1 >> 8));
    machdep_WriteReg(1,'2');
    machdep_WriteReg(2,(uchar)param_1);
    uVar1 = param_2 - param_1 & 3;
    machdep_WriteReg(1,'7');
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,'8');
    machdep_WriteReg(2,'\0');
    if (uVar4 <= param_2) {
      if (uVar1 == 0) goto LAB_002202f8;
      if (uVar1 != 1) {
        if (uVar1 != 2) {
          uVar4 = param_1 + 2;
          machdep_WriteReg(1,'7');
          machdep_WriteReg(2,'\0');
          machdep_WriteReg(1,'8');
          machdep_WriteReg(2,'\0');
        }
        uVar4 = uVar4 + 1;
        machdep_WriteReg(1,'7');
        machdep_WriteReg(2,'\0');
        machdep_WriteReg(1,'8');
        machdep_WriteReg(2,'\0');
      }
      uVar4 = uVar4 + 1;
      while( true ) {
        machdep_WriteReg(1,'7');
        machdep_WriteReg(2,'\0');
        machdep_WriteReg(1,'8');
        machdep_WriteReg(2,'\0');
        if (param_2 < uVar4) break;
LAB_002202f8:
        uVar4 = uVar4 + 4;
        machdep_WriteReg(1,'7');
        machdep_WriteReg(2,'\0');
        machdep_WriteReg(1,'8');
        machdep_WriteReg(2,'\0');
        machdep_WriteReg(1,'7');
        machdep_WriteReg(2,'\0');
        machdep_WriteReg(1,'8');
        machdep_WriteReg(2,'\0');
        machdep_WriteReg(1,'7');
        machdep_WriteReg(2,'\0');
        machdep_WriteReg(1,'8');
        machdep_WriteReg(2,'\0');
      }
    }
    MaDevDrv_EnableIrq();
    uVar3 = 0;
  }
  return uVar3;
}

