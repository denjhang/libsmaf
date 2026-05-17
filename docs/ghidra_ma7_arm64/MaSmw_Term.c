/* MaSmw_Term @ 001a5048 352B */


/* YAMAHA::MaSmw_Term() */

int YAMAHA::MaSmw_Term(void)

{
  int iVar1;
  
  machdep_EnterCriticalSection();
  if (((((((*DAT_0059a420 < 2) && (DAT_0059a420[0x30] < 2)) && (DAT_0059a420[0x60] < 2)) &&
        (((DAT_0059a420[0x90] < 2 && (DAT_0059a420[0xc0] < 2)) &&
         ((DAT_0059a420[0xf0] < 2 && ((DAT_0059a420[0x120] < 2 && (DAT_0059a420[0x150] < 2))))))))
       && ((DAT_0059a420[0x180] < 2 &&
           (((DAT_0059a420[0x1b0] < 2 && (DAT_0059a420[0x1e0] < 2)) && (DAT_0059a420[0x210] < 2)))))
       ) && (((DAT_0059a420[0x240] < 2 && (DAT_0059a420[0x270] < 2)) &&
             (((DAT_0059a420[0x2a0] < 2 && ((DAT_0059a420[0x2d0] < 2 && (DAT_0059a420[0x300] < 2))))
              && (DAT_0059a420[0x330] < 2)))))) &&
     ((((DAT_0059a420[0x360] < 2 && (DAT_0059a420[0x390] < 2)) && (DAT_0059a420[0x3c0] < 2)) &&
      (DAT_0059a420[0x3f0] < 2)))) {
    MaDva_End();
    iVar1 = MaDevDrv_Terminate();
    if (0 < iVar1) {
      iVar1 = 0;
    }
    machdep_LeaveCriticalSection();
    return iVar1;
  }
  machdep_LeaveCriticalSection();
  return -1;
}

