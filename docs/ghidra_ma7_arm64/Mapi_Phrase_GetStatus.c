/* Mapi_Phrase_GetStatus @ 00185ca4 240B */


/* YAMAHA::Mapi_Phrase_GetStatus(int) */

uint YAMAHA::Mapi_Phrase_GetStatus(int param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  mapimachdep_LockApi();
  iVar1 = param_1 + 1;
  if (((DAT_00577e10 == '\0') || (DAT_00577e14 != 2)) || (3 < (uint)param_1)) {
    mapimachdep_UnlockApi();
    return 0xffffffff;
  }
  uVar3 = 1L << ((ulong)(uint)param_1 & 0x3f);
  if (iVar1 == 1) {
    uVar4 = 0;
LAB_00185d08:
    if ((uVar3 & (long)DAT_005782c0) != 0) {
      uVar4 = 0x10;
    }
    if (iVar1 != 3) goto LAB_00185d24;
  }
  else {
    uVar4 = 0x10;
    if ((uVar3 & (long)DAT_00578298) == 0) {
      uVar4 = 0;
    }
    if (iVar1 != 2) goto LAB_00185d08;
LAB_00185d24:
    if ((uVar3 & (long)DAT_005782e8) != 0) {
      uVar4 = 0x10;
    }
    if (iVar1 == 4) goto LAB_00185d54;
  }
  if ((uVar3 & (long)DAT_00578310) != 0) {
    uVar4 = 0x10;
  }
LAB_00185d54:
  uVar2 = (&DAT_00578258)[(long)iVar1 * 10];
  mapimachdep_UnlockApi();
  return uVar4 | uVar2;
}

