/* machdep_WaitBusy @ 00066bd8 22B */


/* YAMAHA::machdep_WaitBusy() */

undefined4 YAMAHA::machdep_WaitBusy(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = machdep_ReadReg(0);
  if ((uVar1 & 4) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffb;
  }
  return uVar2;
}

