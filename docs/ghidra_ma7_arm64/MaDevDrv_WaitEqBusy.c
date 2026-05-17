/* MaDevDrv_WaitEqBusy @ 00220580 20B */


/* YAMAHA::MaDevDrv_WaitEqBusy() */

void YAMAHA::MaDevDrv_WaitEqBusy(void)

{
  machdep_WaitDspBusy((uint)*(byte *)(DAT_00748ef8 + 8),'\x01');
  return;
}

