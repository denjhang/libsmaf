/* machdep_WaitDspWriteBusy @ 00178d1c 64B */


/* YAMAHA::machdep_WaitDspWriteBusy() */

undefined4 YAMAHA::machdep_WaitDspWriteBusy(void)

{
  char cVar1;
  undefined4 uVar2;
  
  machdep_WriteReg(1,'<');
  machdep_ReadReg(2);
  cVar1 = machdep_ReadReg(2);
  uVar2 = 0xfffffffb;
  if (-1 < cVar1) {
    uVar2 = 0;
  }
  return uVar2;
}

