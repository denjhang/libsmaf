/* MaS2PCnvJP_Terminate @ 00201ce0 44B */


/* YAMAHA::MaS2PCnvJP_Terminate() */

undefined8 YAMAHA::MaS2PCnvJP_Terminate(void)

{
  if (DAT_0057c580 == 1) {
    DAT_0057c59c = 0;
    DAT_0057c580 = 0;
    return 0;
  }
  return 0xffffffff;
}

