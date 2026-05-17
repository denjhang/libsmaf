/* machdep_WaitFifoEmpty @ 00066b4c 54B */


/* YAMAHA::machdep_WaitFifoEmpty(unsigned int) */

undefined4 YAMAHA::machdep_WaitFifoEmpty(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_1 == 1) {
    uVar3 = 2;
  }
  else if (param_1 == 0) {
    uVar3 = 1;
  }
  else {
    if (param_1 != 2) {
      return 0xfffffffe;
    }
    uVar3 = 4;
  }
  machdep_WriteReg(1,'\x03');
  uVar1 = machdep_ReadReg(2);
  if ((uVar1 & uVar3) == 0) {
    uVar2 = 0xfffffffb;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

