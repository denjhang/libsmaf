/* MaHvDrvKR_Terminate @ 0022de18 36B */


/* YAMAHA::MaHvDrvKR_Terminate() */

undefined8 YAMAHA::MaHvDrvKR_Terminate(void)

{
  if (DAT_005802a8 == 1) {
    DAT_005802a8 = 0;
    return 0;
  }
  return 0xffffffff;
}

