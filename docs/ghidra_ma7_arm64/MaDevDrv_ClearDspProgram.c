/* MaDevDrv_ClearDspProgram @ 0021fe40 812B */


/* YAMAHA::MaDevDrv_ClearDspProgram(unsigned int, unsigned int) */

undefined8 YAMAHA::MaDevDrv_ClearDspProgram(uint param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  
  if ((param_2 < param_1 || 0x2ff < param_2) || (0x2ff < param_1)) {
    return 0xfffffffe;
  }
  MaDevDrv_DisableIrq();
  uVar2 = param_1 + 1;
  machdep_WriteReg(1,'0');
  bVar1 = machdep_ReadReg(2);
  machdep_WriteReg(2,bVar1 | 1);
  machdep_WriteReg(1,'1');
  machdep_WriteReg(2,(uchar)(param_1 >> 8));
  machdep_WriteReg(1,'2');
  machdep_WriteReg(2,(uchar)param_1);
  machdep_WriteReg(1,'3');
  machdep_WriteReg(2,'\0');
  machdep_WriteReg(1,'4');
  machdep_WriteReg(2,'\0');
  machdep_WriteReg(1,'5');
  machdep_WriteReg(2,'\0');
  machdep_WriteReg(1,'6');
  machdep_WriteReg(2,'\0');
  machdep_WriteReg(1,'7');
  machdep_WriteReg(2,'\0');
  machdep_WriteReg(1,'8');
  machdep_WriteReg(2,'\0');
  if (uVar2 <= param_2) {
    if ((param_2 - param_1 & 1) != 0) {
      uVar2 = param_1 + 2;
      machdep_WriteReg(1,'3');
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,'4');
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,'5');
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,'6');
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,'7');
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,'8');
      machdep_WriteReg(2,'\0');
      if (param_2 < uVar2) goto LAB_00220148;
    }
    do {
      machdep_WriteReg(1,'3');
      uVar2 = uVar2 + 2;
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,'4');
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,'5');
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,'6');
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,'7');
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,'8');
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,'3');
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,'4');
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,'5');
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,'6');
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,'7');
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,'8');
      machdep_WriteReg(2,'\0');
    } while (uVar2 <= param_2);
  }
LAB_00220148:
  MaDevDrv_EnableIrq();
  return 0;
}

