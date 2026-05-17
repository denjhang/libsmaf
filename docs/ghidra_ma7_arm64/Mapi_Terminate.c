/* Mapi_Terminate @ 0017ec80 812B */


/* YAMAHA::Mapi_Terminate() */

undefined8 YAMAHA::Mapi_Terminate(void)

{
  int iVar1;
  undefined8 uVar2;
  
  mapimachdep_LockApi();
  if (DAT_00577e10 == '\0') {
    mapimachdep_UnlockApi();
    uVar2 = 0xfffffff8;
  }
  else {
    Mas_Stop();
    Mas_Close();
    Mas_Unload();
    iVar1 = MaSmw_XMF_Terminate();
    if ((iVar1 == 0) && (iVar1 = SmafMms_Terminate(), iVar1 == 0)) {
      MaSmw_Stop(0,(void *)0x0);
      MaSmw_Stop(0x100,(void *)0x0);
      MaSmw_Stop(0x101,(void *)0x0);
      MaSmw_Stop(0x102,(void *)0x0);
      MaSmw_Stop(0x103,(void *)0x0);
      MaSmw_Stop(0x200,(void *)0x0);
      MaSmw_Stop(0x201,(void *)0x0);
      MaSmw_Stop(0x202,(void *)0x0);
      MaSmw_Stop(0x203,(void *)0x0);
      MaSmw_Stop(0x300,(void *)0x0);
      MaSmw_Stop(0x600,(void *)0x0);
      MaSmw_Stop(0x601,(void *)0x0);
      MaSmw_Stop(0x602,(void *)0x0);
      MaSmw_Stop(0x603,(void *)0x0);
      MaSmw_Stop(0x400,(void *)0x0);
      MaSmw_Stop(0x401,(void *)0x0);
      MaSmw_Stop(0x500,(void *)0x0);
      MaSmw_Stop(0x700,(void *)0x0);
      MaSmw_Stop(0x800,(void *)0x0);
      MaSmw_Close(0,(void *)0x0);
      MaSmw_Close(0x100,(void *)0x0);
      MaSmw_Close(0x101,(void *)0x0);
      MaSmw_Close(0x102,(void *)0x0);
      MaSmw_Close(0x103,(void *)0x0);
      MaSmw_Close(0x200,(void *)0x0);
      MaSmw_Close(0x201,(void *)0x0);
      MaSmw_Close(0x202,(void *)0x0);
      MaSmw_Close(0x203,(void *)0x0);
      MaSmw_Close(0x300,(void *)0x0);
      MaSmw_Close(0x600,(void *)0x0);
      MaSmw_Close(0x601,(void *)0x0);
      MaSmw_Close(0x602,(void *)0x0);
      MaSmw_Close(0x603,(void *)0x0);
      MaSmw_Close(0x400,(void *)0x0);
      MaSmw_Close(0x401,(void *)0x0);
      MaSmw_Close(0x500,(void *)0x0);
      MaSmw_Close(0x700,(void *)0x0);
      MaSmw_Close(0x800,(void *)0x0);
      MaSmw_Unload(0,(void *)0x0);
      MaSmw_Unload(0x100,(void *)0x0);
      MaSmw_Unload(0x101,(void *)0x0);
      MaSmw_Unload(0x102,(void *)0x0);
      MaSmw_Unload(0x103,(void *)0x0);
      MaSmw_Unload(0x200,(void *)0x0);
      MaSmw_Unload(0x201,(void *)0x0);
      MaSmw_Unload(0x202,(void *)0x0);
      MaSmw_Unload(0x203,(void *)0x0);
      MaSmw_Unload(0x300,(void *)0x0);
      MaSmw_Unload(0x600,(void *)0x0);
      MaSmw_Unload(0x601,(void *)0x0);
      MaSmw_Unload(0x602,(void *)0x0);
      MaSmw_Unload(0x603,(void *)0x0);
      MaSmw_Unload(0x400,(void *)0x0);
      MaSmw_Unload(0x401,(void *)0x0);
      MaSmw_Unload(0x500,(void *)0x0);
      MaSmw_Unload(0x700,(void *)0x0);
      MaSmw_Unload(0x800,(void *)0x0);
      uVar2 = MaSmw_Term();
      if ((int)uVar2 == 0) {
        DAT_00577e10 = (char)uVar2;
      }
      else {
        uVar2 = 0xffffffff;
      }
      mapimachdep_UnlockApi();
    }
    else {
      mapimachdep_UnlockApi();
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

