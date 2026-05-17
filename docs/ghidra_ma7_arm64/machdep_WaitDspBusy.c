/* machdep_WaitDspBusy @ 00178cb8 100B */


/* YAMAHA::machdep_WaitDspBusy(unsigned int, unsigned char) */

undefined4 YAMAHA::machdep_WaitDspBusy(uint param_1,uchar param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uchar uVar3;
  
  if (param_1 == 0x20) {
    uVar3 = '?';
  }
  else {
    if ((param_1 < 0x20) || (0x24 < param_1)) {
      return 0xffffffff;
    }
    uVar3 = 0xdc;
  }
  machdep_WriteReg(1,uVar3);
  bVar1 = machdep_ReadReg(2);
  uVar2 = 0xfffffffb;
  if ((bVar1 & param_2) == 0) {
    uVar2 = 0;
  }
  return uVar2;
}

