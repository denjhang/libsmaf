/* machdep_WaitStreamFifoEmpty @ 00178be0 108B */


/* YAMAHA::machdep_WaitStreamFifoEmpty(unsigned int) */

undefined4 YAMAHA::machdep_WaitStreamFifoEmpty(uint param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0xfffffffe;
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
    goto switchD_00178c0c_default;
  }
  cVar1 = machdep_ReadReg(uVar2);
  uVar3 = 0xfffffffb;
  if (cVar1 < '\0') {
    uVar3 = 0;
  }
switchD_00178c0c_default:
  return uVar3;
}

