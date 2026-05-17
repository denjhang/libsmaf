/* MaS2PCnvCN_Terminate @ 00207054 44B */


/* YAMAHA::MaS2PCnvCN_Terminate() */

undefined8 YAMAHA::MaS2PCnvCN_Terminate(void)

{
  if (DAT_0057d2b8 == 1) {
    DAT_0057d2d4 = 0;
    DAT_0057d2b8 = 0;
    return 0;
  }
  return 0xffffffff;
}

