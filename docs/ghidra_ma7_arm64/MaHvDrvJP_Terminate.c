/* MaHvDrvJP_Terminate @ 002230d0 36B */


/* YAMAHA::MaHvDrvJP_Terminate() */

undefined8 YAMAHA::MaHvDrvJP_Terminate(void)

{
  if (DAT_0057e810 == 1) {
    DAT_0057e810 = 0;
    return 0;
  }
  return 0xffffffff;
}

