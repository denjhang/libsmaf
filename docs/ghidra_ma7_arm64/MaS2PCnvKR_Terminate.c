/* MaS2PCnvKR_Terminate @ 0021572c 44B */


/* YAMAHA::MaS2PCnvKR_Terminate() */

undefined8 YAMAHA::MaS2PCnvKR_Terminate(void)

{
  if (DAT_0057de20 == 1) {
    DAT_0057de3c = 0;
    DAT_0057de20 = 0;
    return 0;
  }
  return 0xffffffff;
}

