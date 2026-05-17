/* MaDevDrv_WaitBusy @ 0022057c 4B */


/* YAMAHA::MaDevDrv_WaitBusy() */

undefined4 YAMAHA::MaDevDrv_WaitBusy(void)

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

