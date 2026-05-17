/* machdep_WaitDspWriteBusy @ 00066c24 36B */


/* YAMAHA::machdep_WaitDspWriteBusy() */

undefined4 YAMAHA::machdep_WaitDspWriteBusy(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  machdep_WriteReg(1,'<');
  machdep_ReadReg(2);
  uVar1 = machdep_ReadReg(2);
  if ((uVar1 & 0x80) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffb;
  }
  return uVar2;
}

