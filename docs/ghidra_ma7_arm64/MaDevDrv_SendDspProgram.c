/* MaDevDrv_SendDspProgram @ 0021fa08 404B */


/* YAMAHA::MaDevDrv_SendDspProgram(unsigned int, unsigned char const*, unsigned int) */

undefined8 YAMAHA::MaDevDrv_SendDspProgram(uint param_1,uchar *param_2,uint param_3)

{
  uchar *puVar1;
  byte bVar2;
  uchar *puVar3;
  int iVar4;
  
  if ((((param_2 != (uchar *)0x0) && (param_3 != 0)) && (param_3 == (param_3 / 6) * 6)) &&
     ((ulong)param_3 / 6 + (ulong)param_1 < 0x301)) {
    MaDevDrv_DisableIrq();
    machdep_WriteReg(1,'0');
    bVar2 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar2 | 1);
    machdep_WriteReg(1,'1');
    machdep_WriteReg(2,(byte)(param_1 >> 8) & 3);
    machdep_WriteReg(1,'2');
    machdep_WriteReg(2,(uchar)param_1);
    iVar4 = (int)((ulong)param_3 / 6);
    if (iVar4 != 0) {
      puVar3 = param_2;
      do {
        puVar1 = puVar3 + 6;
        machdep_WriteReg(1,'3');
        machdep_WriteReg(2,*puVar3);
        machdep_WriteReg(1,'4');
        machdep_WriteReg(2,puVar3[1]);
        machdep_WriteReg(1,'5');
        machdep_WriteReg(2,puVar3[2]);
        machdep_WriteReg(1,'6');
        machdep_WriteReg(2,puVar3[3]);
        machdep_WriteReg(1,'7');
        machdep_WriteReg(2,puVar3[4]);
        machdep_WriteReg(1,'8');
        machdep_WriteReg(2,puVar3[5]);
        puVar3 = puVar1;
      } while (puVar1 != param_2 + ((ulong)(iVar4 - 1) + 1) * 6);
    }
    MaDevDrv_EnableIrq();
    return 0;
  }
  return 0xfffffffe;
}

