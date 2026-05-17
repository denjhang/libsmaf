/* MaHvDrvCN_Terminate @ 000e3b48 20B */


/* YAMAHA::MaHvDrvCN_Terminate() */

void YAMAHA::MaHvDrvCN_Terminate(void)

{
  if (*(int *)(DAT_000e3b5c + 0xe3b4e) == 1) {
    *(int *)(DAT_000e3b5c + 0xe3b4e) = 0;
  }
  return;
}

