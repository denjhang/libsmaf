/* Mapi_Melody_OpenArgInit @ 0006e330 32B */


/* YAMAHA::Mapi_Melody_OpenArgInit(MAPI_MELODY_OPENARG*) */

void YAMAHA::Mapi_Melody_OpenArgInit(MAPI_MELODY_OPENARG *param_1)

{
  mapimachdep_LockApi();
  if ((*(char *)(DAT_0006e350 + 0x6e33e) != '\0') && (param_1 != (MAPI_MELODY_OPENARG *)0x0)) {
    SmafMms_OpenArgInit((SMMS_OPENARG *)param_1);
  }
  mapimachdep_UnlockApi();
  return;
}

