/* _MaDevDrv_SendDspProgram @ 000db9a4 4B */


/* YAMAHA::_MaDevDrv_SendDspProgram(unsigned int, unsigned char const*, unsigned int) */

undefined4 YAMAHA::_MaDevDrv_SendDspProgram(uint param_1,uchar *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (((param_3 != 0 && param_2 != (uchar *)0x0) && (uVar3 = param_3 / 6, param_3 % 6 == 0)) &&
     (uVar3 + param_1 < 0x301)) {
    MaDevDrv_DisableIrq();
    machdep_WriteReg(1,'0');
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 | 1);
    machdep_WriteReg(1,'1');
    machdep_WriteReg(2,(byte)((param_1 << 0x16) >> 0x1e));
    machdep_WriteReg(1,'2');
    machdep_WriteReg(2,(uchar)param_1);
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        machdep_WriteReg(1,'3');
        uVar2 = uVar2 + 1;
        machdep_WriteReg(2,*param_2);
        machdep_WriteReg(1,'4');
        machdep_WriteReg(2,param_2[1]);
        machdep_WriteReg(1,'5');
        machdep_WriteReg(2,param_2[2]);
        machdep_WriteReg(1,'6');
        machdep_WriteReg(2,param_2[3]);
        machdep_WriteReg(1,'7');
        machdep_WriteReg(2,param_2[4]);
        machdep_WriteReg(1,'8');
        machdep_WriteReg(2,param_2[5]);
        param_2 = param_2 + 6;
      } while (uVar2 != uVar3);
    }
    MaDevDrv_EnableIrq();
    return 0;
  }
  return 0xfffffffe;
}

