/* machdep_WaitStreamFifoEmpty @ 00066b84 48B */


/* YAMAHA::machdep_WaitStreamFifoEmpty(unsigned int) */

undefined4 YAMAHA::machdep_WaitStreamFifoEmpty(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  switch(param_1) {
  case 0:
    uVar2 = 6;
    break;
  case 1:
    uVar2 = 7;
    break;
  case 2:
    uVar2 = 8;
    break;
  case 3:
    uVar2 = 9;
    break;
  default:
    return 0xfffffffe;
  }
  uVar2 = machdep_ReadReg(uVar2);
  if ((uVar2 & 0x80) == 0) {
    uVar1 = 0xfffffffb;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

