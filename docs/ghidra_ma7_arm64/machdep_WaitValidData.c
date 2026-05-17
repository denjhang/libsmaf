/* machdep_WaitValidData @ 00178c4c 64B */


/* YAMAHA::machdep_WaitValidData() */

undefined8 YAMAHA::machdep_WaitValidData(void)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = machdep_ReadReg(0);
  if (((uVar1 & 0xff) >> 1 & 1) == 0) {
    uVar2 = 0xfffffffb;
  }
  else {
    machdep_WriteReg(0,(byte)uVar1 & 0x82);
    uVar2 = 0;
  }
  return uVar2;
}

