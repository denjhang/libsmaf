/* MaDevDrv_SendDspCoef @ 000dda20 456B */


/* YAMAHA::MaDevDrv_SendDspCoef(unsigned int, unsigned char const*, unsigned int) */

undefined4 YAMAHA::MaDevDrv_SendDspCoef(uint param_1,uchar *param_2,uint param_3)

{
  uchar *puVar1;
  byte bVar2;
  uchar *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (((param_3 == 0 || param_2 == (uchar *)0x0) || ((int)(param_3 << 0x1f) < 0)) ||
     (uVar5 = param_3 >> 1, 0x300 < uVar5 + param_1)) {
    return 0xfffffffe;
  }
  MaDevDrv_DisableIrq();
  machdep_WriteReg(1,'0');
  bVar2 = machdep_ReadReg(2);
  machdep_WriteReg(2,bVar2 & 0xfe);
  machdep_WriteReg(1,'1');
  machdep_WriteReg(2,(byte)((param_1 << 0x16) >> 0x1e));
  machdep_WriteReg(1,'2');
  machdep_WriteReg(2,(uchar)param_1);
  if (uVar5 != 0) {
    uVar6 = 1;
    machdep_WriteReg(1,'7');
    uVar4 = uVar5 - 1 & 3;
    machdep_WriteReg(2,*param_2);
    machdep_WriteReg(1,'8');
    puVar3 = param_2 + 2;
    machdep_WriteReg(2,param_2[1]);
    if (uVar5 != 1) {
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 != 2) {
            machdep_WriteReg(1,'7');
            machdep_WriteReg(2,*puVar3);
            uVar6 = 2;
            machdep_WriteReg(1,'8');
            puVar3 = param_2 + 4;
            machdep_WriteReg(2,param_2[3]);
          }
          machdep_WriteReg(1,'7');
          uVar6 = uVar6 + 1;
          machdep_WriteReg(2,*puVar3);
          machdep_WriteReg(1,'8');
          puVar1 = puVar3 + 1;
          puVar3 = puVar3 + 2;
          machdep_WriteReg(2,*puVar1);
        }
        machdep_WriteReg(1,'7');
        uVar6 = uVar6 + 1;
        machdep_WriteReg(2,*puVar3);
        machdep_WriteReg(1,'8');
        machdep_WriteReg(2,puVar3[1]);
        puVar3 = puVar3 + 2;
        if (uVar6 == uVar5) goto LAB_000ddbd6;
      }
      do {
        machdep_WriteReg(1,'7');
        machdep_WriteReg(2,*puVar3);
        uVar6 = uVar6 + 4;
        machdep_WriteReg(1,'8');
        machdep_WriteReg(2,puVar3[1]);
        machdep_WriteReg(1,'7');
        machdep_WriteReg(2,puVar3[2]);
        machdep_WriteReg(1,'8');
        machdep_WriteReg(2,puVar3[3]);
        machdep_WriteReg(1,'7');
        machdep_WriteReg(2,puVar3[4]);
        machdep_WriteReg(1,'8');
        machdep_WriteReg(2,puVar3[5]);
        machdep_WriteReg(1,'7');
        machdep_WriteReg(2,puVar3[6]);
        machdep_WriteReg(1,'8');
        machdep_WriteReg(2,puVar3[7]);
        puVar3 = puVar3 + 8;
      } while (uVar6 != uVar5);
    }
  }
LAB_000ddbd6:
  MaDevDrv_EnableIrq();
  return 0;
}

