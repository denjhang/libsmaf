/* Mapi_Phrase_Pause @ 00185414 364B */


/* YAMAHA::Mapi_Phrase_Pause(int) */

undefined8 YAMAHA::Mapi_Phrase_Pause(int param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  mapimachdep_LockApi();
  iVar2 = param_1 + 1;
  if ((((DAT_00577e10 == '\0') || (DAT_00577e14 != 2)) || (3 < (uint)param_1)) ||
     (lVar4 = (long)iVar2, (&DAT_00578258)[lVar4 * 10] != 3)) goto LAB_00185560;
  uVar3 = 1L << ((ulong)(uint)param_1 & 0x3f);
  if (iVar2 == 1) {
LAB_00185490:
    if ((uVar3 & (long)DAT_005782c0) != 0) goto LAB_00185560;
    if (iVar2 != 3) goto LAB_001854a8;
  }
  else {
    if ((uVar3 & (long)DAT_00578298) != 0) goto LAB_00185560;
    if (iVar2 != 2) goto LAB_00185490;
LAB_001854a8:
    if ((uVar3 & (long)DAT_005782e8) != 0) goto LAB_00185560;
    if (iVar2 == 4) goto LAB_001854d0;
  }
  if ((uVar3 & (long)DAT_00578310) == 0) {
LAB_001854d0:
    iVar2 = MaSmw_Stop(*(uint *)(&DAT_00489fd0 + (lVar4 + 10) * 4),(void *)0x0);
    if (iVar2 < 0) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar1 = (&DAT_00578270)[lVar4 * 10];
      (&DAT_00578258)[lVar4 * 10] = 5;
      if ((uVar1 & 1) != 0) {
        DAT_00578280 = 5;
      }
      if ((uVar1 >> 1 & 1) != 0) {
        DAT_005782a8 = 5;
      }
      if ((uVar1 >> 2 & 1) != 0) {
        DAT_005782d0 = 5;
      }
      if ((uVar1 >> 3 & 1) != 0) {
        DAT_005782f8 = 5;
      }
      uVar5 = 0;
    }
    mapimachdep_UnlockApi();
    return uVar5;
  }
LAB_00185560:
  mapimachdep_UnlockApi();
  return 0xffffffff;
}

