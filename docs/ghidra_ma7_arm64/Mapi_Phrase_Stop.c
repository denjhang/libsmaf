/* Mapi_Phrase_Stop @ 00185298 380B */


/* YAMAHA::Mapi_Phrase_Stop(int) */

undefined8 YAMAHA::Mapi_Phrase_Stop(int param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  mapimachdep_LockApi();
  iVar2 = param_1 + 1;
  if (((DAT_00577e10 == '\0') || (DAT_00577e14 != 2)) || (3 < (uint)param_1)) goto LAB_001853f4;
  lVar4 = (long)iVar2;
  if ((0x7ffffffc < (&DAT_00578258)[lVar4 * 10] - 3) || ((&DAT_00578258)[lVar4 * 10] == 4))
  goto LAB_001853f4;
  uVar3 = 1L << ((ulong)(uint)param_1 & 0x3f);
  if (iVar2 == 1) {
LAB_00185324:
    if ((uVar3 & (long)DAT_005782c0) != 0) goto LAB_001853f4;
    if (iVar2 != 3) goto LAB_0018533c;
  }
  else {
    if ((uVar3 & (long)DAT_00578298) != 0) goto LAB_001853f4;
    if (iVar2 != 2) goto LAB_00185324;
LAB_0018533c:
    if ((uVar3 & (long)DAT_005782e8) != 0) goto LAB_001853f4;
    if (iVar2 == 4) goto LAB_00185364;
  }
  if ((uVar3 & (long)DAT_00578310) == 0) {
LAB_00185364:
    iVar2 = MaSmw_Stop(*(uint *)(&DAT_00489fd0 + (lVar4 + 10) * 4),(void *)0x0);
    if (iVar2 < 0) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar1 = (&DAT_00578270)[lVar4 * 10];
      (&DAT_00578258)[lVar4 * 10] = 2;
      if ((uVar1 & 1) != 0) {
        DAT_00578280 = 2;
      }
      if ((uVar1 >> 1 & 1) != 0) {
        DAT_005782a8 = 2;
      }
      if ((uVar1 >> 2 & 1) != 0) {
        DAT_005782d0 = 2;
      }
      if ((uVar1 >> 3 & 1) != 0) {
        DAT_005782f8 = 2;
      }
      uVar5 = 0;
    }
    mapimachdep_UnlockApi();
    return uVar5;
  }
LAB_001853f4:
  mapimachdep_UnlockApi();
  return 0xffffffff;
}

