/* MaHvDrvKR_Terminate @ 000e7650 20B */


/* YAMAHA::MaHvDrvKR_Terminate() */

void YAMAHA::MaHvDrvKR_Terminate(void)

{
  if (*(int *)(DAT_000e7664 + 0xe7656) == 1) {
    *(int *)(DAT_000e7664 + 0xe7656) = 0;
  }
  return;
}

