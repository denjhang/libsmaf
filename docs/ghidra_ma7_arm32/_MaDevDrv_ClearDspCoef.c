/* _MaDevDrv_ClearDspCoef @ 000db9a8 4B */


/* YAMAHA::_MaDevDrv_ClearDspCoef(unsigned int, unsigned int) */

undefined4 YAMAHA::_MaDevDrv_ClearDspCoef(uint param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_1 <= param_2 && param_1 < 0x300) && (param_2 < 0x300)) {
    MaDevDrv_DisableIrq();
    uVar2 = param_1 + 1;
    machdep_WriteReg(1,'0');
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 & 0xfe);
    machdep_WriteReg(1,'1');
    machdep_WriteReg(2,(uchar)(param_1 >> 8));
    machdep_WriteReg(1,'2');
    machdep_WriteReg(2,(uchar)param_1);
    uVar3 = param_2 - param_1 & 3;
    machdep_WriteReg(1,'7');
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,'8');
    machdep_WriteReg(2,'\0');
    if (uVar2 <= param_2) {
      if (uVar3 == 0) goto LAB_000ddf00;
      if (uVar3 != 1) {
        if (uVar3 != 2) {
          machdep_WriteReg(1,'7');
          uVar2 = param_1 + 2;
          machdep_WriteReg(2,'\0');
          machdep_WriteReg(1,'8');
          machdep_WriteReg(2,'\0');
        }
        machdep_WriteReg(1,'7');
        uVar2 = uVar2 + 1;
        machdep_WriteReg(2,'\0');
        machdep_WriteReg(1,'8');
        machdep_WriteReg(2,'\0');
      }
      uVar2 = uVar2 + 1;
      machdep_WriteReg(1,'7');
      while( true ) {
        machdep_WriteReg(2,'\0');
        machdep_WriteReg(1,'8');
        machdep_WriteReg(2,'\0');
        if (param_2 < uVar2) break;
LAB_000ddf00:
        machdep_WriteReg(1,'7');
        uVar2 = uVar2 + 4;
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
        machdep_WriteReg(1,'7');
      }
    }
    MaDevDrv_EnableIrq();
    return 0;
  }
  return 0xfffffffe;
}

