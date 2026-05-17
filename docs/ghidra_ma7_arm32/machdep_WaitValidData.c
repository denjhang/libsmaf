/* machdep_WaitValidData @ 00066bb8 32B */


/* YAMAHA::machdep_WaitValidData() */

undefined4 YAMAHA::machdep_WaitValidData(void)

{
  int iVar1;
  
  iVar1 = machdep_ReadReg(0);
  if (iVar1 << 0x1e < 0) {
    machdep_WriteReg(0,(byte)iVar1 & 0x82);
    return 0;
  }
  return 0xfffffffb;
}

