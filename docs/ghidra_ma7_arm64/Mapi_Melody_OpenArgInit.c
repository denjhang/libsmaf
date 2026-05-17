/* Mapi_Melody_OpenArgInit @ 00182974 52B */


/* YAMAHA::Mapi_Melody_OpenArgInit(MAPI_MELODY_OPENARG*) */

void YAMAHA::Mapi_Melody_OpenArgInit(MAPI_MELODY_OPENARG *param_1)

{
  mapimachdep_LockApi();
  if ((DAT_00577e10 != '\0') && (param_1 != (MAPI_MELODY_OPENARG *)0x0)) {
    SmafMms_OpenArgInit((SMMS_OPENARG *)param_1);
  }
  mapimachdep_UnlockApi();
  return;
}

