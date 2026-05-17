/* machdep_WaitBusy @ 00178c8c 44B */


/* YAMAHA::machdep_WaitBusy() */

undefined4 YAMAHA::machdep_WaitBusy(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = machdep_ReadReg(0);
  uVar2 = 0xfffffffb;
  if ((uVar1 & 4) == 0) {
    uVar2 = 0;
  }
  return uVar2;
}

