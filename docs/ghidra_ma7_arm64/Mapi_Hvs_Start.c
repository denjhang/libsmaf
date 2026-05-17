/* Mapi_Hvs_Start @ 001876a4 156B */


/* YAMAHA::Mapi_Hvs_Start(int, unsigned short) */

undefined8 YAMAHA::Mapi_Hvs_Start(int param_1,ushort param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  mapimachdep_LockApi();
  iVar1 = DAT_005783b8;
  if (DAT_00577e10 != '\0') {
    if (param_1 == 1) {
      if (DAT_005783b8 != 3) goto LAB_0018771c;
      DAT_005783b8 = 4;
      uVar2 = MaSmw_Start(0x300,(void *)0x0);
      if ((int)uVar2 < 0) {
        DAT_005783b8 = iVar1;
      }
      mapimachdep_UnlockApi();
    }
    else {
      mapimachdep_UnlockApi();
      uVar2 = 0xfffffffe;
    }
    return uVar2;
  }
LAB_0018771c:
  mapimachdep_UnlockApi();
  return 0xfffffff8;
}

