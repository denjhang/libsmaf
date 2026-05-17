/* MaDevDrv_SendDspCoef @ 0021fb9c 676B */


/* YAMAHA::MaDevDrv_SendDspCoef(unsigned int, unsigned char const*, unsigned int) */

undefined8 YAMAHA::MaDevDrv_SendDspCoef(uint param_1,uchar *param_2,uint param_3)

{
  uchar *puVar1;
  uint uVar2;
  byte bVar3;
  uchar *puVar4;
  uchar *puVar5;
  ulong uVar6;
  
  if ((((param_2 == (uchar *)0x0) || (param_3 == 0)) || ((param_3 & 1) != 0)) ||
     (uVar2 = param_3 >> 1, 0x300 < (ulong)uVar2 + (ulong)param_1)) {
    return 0xfffffffe;
  }
  MaDevDrv_DisableIrq();
  machdep_WriteReg(1,'0');
  bVar3 = machdep_ReadReg(2);
  machdep_WriteReg(2,bVar3 & 0xfe);
  machdep_WriteReg(1,'1');
  machdep_WriteReg(2,(byte)(param_1 >> 8) & 3);
  machdep_WriteReg(1,'2');
  machdep_WriteReg(2,(uchar)param_1);
  if (uVar2 != 0) {
    puVar5 = param_2 + 2;
    puVar1 = param_2 + ((ulong)(uVar2 - 1) + 1) * 2;
    uVar6 = (ulong)(puVar1 + (-2 - (long)param_2)) >> 1 & 3;
    machdep_WriteReg(1,'7');
    machdep_WriteReg(2,*param_2);
    machdep_WriteReg(1,'8');
    machdep_WriteReg(2,param_2[1]);
    if (puVar5 != puVar1) {
      puVar4 = puVar5;
      if (uVar6 != 0) {
        if (uVar6 != 1) {
          if (uVar6 != 2) {
            puVar4 = param_2 + 4;
            machdep_WriteReg(1,'7');
            machdep_WriteReg(2,*puVar5);
            machdep_WriteReg(1,'8');
            machdep_WriteReg(2,param_2[3]);
          }
          puVar5 = puVar4 + 2;
          machdep_WriteReg(1,'7');
          machdep_WriteReg(2,*puVar4);
          machdep_WriteReg(1,'8');
          machdep_WriteReg(2,puVar4[1]);
        }
        machdep_WriteReg(1,'7');
        machdep_WriteReg(2,*puVar5);
        machdep_WriteReg(1,'8');
        machdep_WriteReg(2,puVar5[1]);
        puVar4 = puVar5 + 2;
        if (puVar5 + 2 == puVar1) goto LAB_0021fe0c;
      }
      do {
        machdep_WriteReg(1,'7');
        puVar5 = puVar4 + 8;
        machdep_WriteReg(2,*puVar4);
        machdep_WriteReg(1,'8');
        machdep_WriteReg(2,puVar4[1]);
        machdep_WriteReg(1,'7');
        machdep_WriteReg(2,puVar4[2]);
        machdep_WriteReg(1,'8');
        machdep_WriteReg(2,puVar4[3]);
        machdep_WriteReg(1,'7');
        machdep_WriteReg(2,puVar4[4]);
        machdep_WriteReg(1,'8');
        machdep_WriteReg(2,puVar4[5]);
        machdep_WriteReg(1,'7');
        machdep_WriteReg(2,puVar4[6]);
        machdep_WriteReg(1,'8');
        machdep_WriteReg(2,puVar4[7]);
        puVar4 = puVar5;
      } while (puVar5 != puVar1);
    }
  }
LAB_0021fe0c:
  MaDevDrv_EnableIrq();
  return 0;
}

