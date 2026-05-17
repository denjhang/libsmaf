/* Mapi_Din_Start @ 00188ebc 192B */


/* YAMAHA::Mapi_Din_Start(int) */

undefined8 YAMAHA::Mapi_Din_Start(int param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  mapimachdep_LockApi();
  if (DAT_00577e10 != '\0') {
    if ((uint)param_1 < 2) {
      uVar2 = (ulong)(param_1 + 1);
      if ((&DAT_00578570)[uVar2 * 0xe] != 3) goto LAB_00188f58;
      (&DAT_00578570)[uVar2 * 0xe] = 4;
      uVar1 = MaSmw_Start(*(uint *)(&DAT_00489fd0 + (uVar2 + 0x5a) * 4),(void *)0x0);
      if ((int)uVar1 < 0) {
        (&DAT_00578570)[uVar2 * 0xe] = 3;
      }
      mapimachdep_UnlockApi();
    }
    else {
      mapimachdep_UnlockApi();
      uVar1 = 0xfffffffe;
    }
    return uVar1;
  }
LAB_00188f58:
  mapimachdep_UnlockApi();
  return 0xfffffff8;
}

