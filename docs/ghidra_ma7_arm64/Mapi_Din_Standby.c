/* Mapi_Din_Standby @ 00188e14 168B */


/* YAMAHA::Mapi_Din_Standby(int) */

undefined8 YAMAHA::Mapi_Din_Standby(int param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  mapimachdep_LockApi();
  if (DAT_00577e10 != '\0') {
    if ((uint)param_1 < 2) {
      uVar2 = (ulong)(param_1 + 1);
      if ((&DAT_00578570)[uVar2 * 0xe] != 2) goto LAB_00188e9c;
      MaSmw_Seek(*(uint *)(&DAT_00489fd0 + (uVar2 + 0x5a) * 4),0,(_MASMW_SEEK_PARAM *)0x0);
      (&DAT_00578570)[uVar2 * 0xe] = 3;
      mapimachdep_UnlockApi();
      uVar1 = 0;
    }
    else {
      mapimachdep_UnlockApi();
      uVar1 = 0xfffffffe;
    }
    return uVar1;
  }
LAB_00188e9c:
  mapimachdep_UnlockApi();
  return 0xfffffff8;
}

