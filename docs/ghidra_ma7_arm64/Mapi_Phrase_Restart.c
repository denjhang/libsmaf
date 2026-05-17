/* Mapi_Phrase_Restart @ 00185580 476B */


/* YAMAHA::Mapi_Phrase_Restart(int) */

undefined8 YAMAHA::Mapi_Phrase_Restart(int param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  mapimachdep_LockApi();
  iVar2 = param_1 + 1;
  if ((((DAT_00577e10 == '\0') || (DAT_00577e14 != 2)) || (3 < (uint)param_1)) ||
     (lVar4 = (long)iVar2, (&DAT_00578258)[lVar4 * 10] != 5)) goto LAB_00185744;
  uVar3 = 1L << ((ulong)(uint)param_1 & 0x3f);
  if (iVar2 == 1) {
LAB_001855fc:
    if ((uVar3 & (long)DAT_005782c0) != 0) goto LAB_00185744;
    if (iVar2 != 3) goto LAB_00185614;
  }
  else {
    if ((uVar3 & (long)DAT_00578298) != 0) goto LAB_00185744;
    if (iVar2 != 2) goto LAB_001855fc;
LAB_00185614:
    if ((uVar3 & (long)DAT_005782e8) != 0) goto LAB_00185744;
    if (iVar2 == 4) goto LAB_0018563c;
  }
  if ((uVar3 & (long)DAT_00578310) == 0) {
LAB_0018563c:
    uVar1 = (&DAT_00578270)[lVar4 * 10];
    (&DAT_00578258)[lVar4 * 10] = 3;
    if ((uVar1 & 1) != 0) {
      DAT_00578280 = 3;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      DAT_005782a8 = 3;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      DAT_005782d0 = 3;
    }
    if ((uVar1 >> 3 & 1) == 0) {
      iVar2 = MaSmw_Start(*(uint *)(&DAT_00489fd0 + (lVar4 + 10) * 4),(void *)0x0);
    }
    else {
      DAT_005782f8 = 3;
      iVar2 = MaSmw_Start(*(uint *)(&DAT_00489fd0 + (lVar4 + 10) * 4),(void *)0x0);
    }
    uVar5 = 0;
    if (iVar2 < 0) {
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
      uVar5 = 0xffffffff;
    }
    mapimachdep_UnlockApi();
    return uVar5;
  }
LAB_00185744:
  mapimachdep_UnlockApi();
  return 0xffffffff;
}

