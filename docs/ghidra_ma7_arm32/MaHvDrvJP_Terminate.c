/* MaHvDrvJP_Terminate @ 000e0048 20B */


/* YAMAHA::MaHvDrvJP_Terminate() */

void YAMAHA::MaHvDrvJP_Terminate(void)

{
  if (*(int *)(DAT_000e005c + 0xe004e) == 1) {
    *(int *)(DAT_000e005c + 0xe004e) = 0;
  }
  return;
}

