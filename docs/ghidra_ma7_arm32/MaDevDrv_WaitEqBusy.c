/* MaDevDrv_WaitEqBusy @ 000de0a8 14B */


/* YAMAHA::MaDevDrv_WaitEqBusy() */

void YAMAHA::MaDevDrv_WaitEqBusy(void)

{
  machdep_WaitDspBusy((uint)*(byte *)(*(int *)(DAT_000de0b8 + 0xde0b0) + 8),'\x01');
  return;
}

