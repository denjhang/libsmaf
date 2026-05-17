/* Mapi_Phrase_SetEvHandler @ 00185d94 96B */


/* YAMAHA::Mapi_Phrase_SetEvHandler(void (*)(MAPI_PHRASEEVENT*)) */

undefined8 YAMAHA::Mapi_Phrase_SetEvHandler(_func_void_MAPI_PHRASEEVENT_ptr *param_1)

{
  undefined8 uVar1;
  
  mapimachdep_LockApi();
  if ((DAT_00577e10 == '\0') || (DAT_00577e14 != 2)) {
    mapimachdep_UnlockApi();
    uVar1 = 0xffffffff;
  }
  else {
    PTR_FUN_00578288 = param_1;
    PTR_FUN_005782b0 = param_1;
    PTR_FUN_005782d8 = param_1;
    PTR_FUN_00578300 = param_1;
    mapimachdep_UnlockApi();
    uVar1 = 0;
  }
  return uVar1;
}

