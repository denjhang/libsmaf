/* MaHvDrvCN_Terminate @ 00228554 36B */


/* YAMAHA::MaHvDrvCN_Terminate() */

undefined8 YAMAHA::MaHvDrvCN_Terminate(void)

{
  if (DAT_0057f558 == 1) {
    DAT_0057f558 = 0;
    return 0;
  }
  return 0xffffffff;
}

