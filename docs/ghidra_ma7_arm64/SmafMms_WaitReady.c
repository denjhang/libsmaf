/* SmafMms_WaitReady @ 001b10dc 32B */


/* YAMAHA::SmafMms_WaitReady(int, int) */

int YAMAHA::SmafMms_WaitReady(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = PreMms_WaitReady(param_1,param_2);
  if (iVar1 == -0x65) {
    iVar1 = 0;
  }
  return iVar1;
}

