/* Mapi_Phrase_Kill @ 00185f2c 328B */


/* YAMAHA::Mapi_Phrase_Kill() */

undefined8 YAMAHA::Mapi_Phrase_Kill(void)

{
  uint uVar1;
  undefined8 uVar2;
  
  mapimachdep_LockApi();
  if ((DAT_00577e10 == '\0') || (DAT_00577e14 != 2)) {
    mapimachdep_UnlockApi();
    uVar2 = 0xffffffff;
  }
  else {
    MaSmw_Stop(0x100,(void *)0x0);
    MaSmw_Stop(0x101,(void *)0x0);
    MaSmw_Stop(0x102,(void *)0x0);
    MaSmw_Stop(0x103,(void *)0x0);
    uVar1 = DAT_00489ffc;
    MaSmw_Close(DAT_00489ffc,(void *)0x0);
    MaSmw_Unload(uVar1,(void *)0x0);
    uVar1 = DAT_0048a000;
    DAT_00578280 = 1;
    DAT_00577e68 = 0;
    MaSmw_Close(DAT_0048a000,(void *)0x0);
    MaSmw_Unload(uVar1,(void *)0x0);
    uVar1 = DAT_0048a004;
    DAT_005782a8 = 1;
    DAT_00577e6c = 0;
    MaSmw_Close(DAT_0048a004,(void *)0x0);
    MaSmw_Unload(uVar1,(void *)0x0);
    uVar1 = DAT_0048a008;
    DAT_005782d0 = 1;
    DAT_00577e70 = 0;
    MaSmw_Close(DAT_0048a008,(void *)0x0);
    MaSmw_Unload(uVar1,(void *)0x0);
    DAT_005782f8 = 1;
    DAT_00577e74 = 0;
    DAT_00577e32 = 0;
    DAT_00578298 = 0;
    DAT_005782c0 = 0;
    DAT_005782e8 = 0;
    DAT_00578310 = 0;
    mapimachdep_UnlockApi();
    uVar2 = 0;
  }
  return uVar2;
}

