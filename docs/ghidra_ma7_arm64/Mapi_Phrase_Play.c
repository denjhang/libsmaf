/* Mapi_Phrase_Play @ 00185064 564B */


/* YAMAHA::Mapi_Phrase_Play(int, int) */

void YAMAHA::Mapi_Phrase_Play(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_18 [2];
  undefined8 local_10;
  long local_8;
  
  iVar3 = param_1 + 1;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  mapimachdep_LockApi();
  if ((((DAT_00577e10 != '\0') && (DAT_00577e14 == 2)) && ((uint)param_1 < 4)) &&
     (lVar5 = (long)iVar3, (&DAT_00578258)[lVar5 * 10] == 2)) {
    uVar4 = 1L << ((ulong)(uint)param_1 & 0x3f);
    if (iVar3 == 1) {
LAB_00185100:
      if ((uVar4 & (long)DAT_005782c0) == 0) {
        if (iVar3 != 3) goto LAB_00185118;
LAB_00185130:
        if ((uVar4 & (long)DAT_00578310) == 0) {
LAB_00185140:
          local_18[0] = 0;
          uVar2 = *(uint *)(&DAT_00489fd0 + (lVar5 + 10) * 4);
          (&DAT_00578258)[lVar5 * 10] = 3;
          local_10 = 0;
          MaSmw_Seek(uVar2,(&DAT_00578274)[lVar5 * 10],(_MASMW_SEEK_PARAM *)local_18);
          uVar1 = (&DAT_00578270)[lVar5 * 10];
          if ((uVar1 & 1) != 0) {
            DAT_00578280 = 3;
          }
          if ((uVar1 >> 1 & 1) != 0) {
            DAT_005782a8 = 3;
          }
          if ((uVar1 >> 2 & 1) != 0) {
            DAT_005782d0 = 3;
          }
          if ((uVar1 >> 3 & 1) != 0) {
            DAT_005782f8 = 3;
          }
          MaSmw_Ctrl(uVar2,0x34,param_2,(void *)0x0);
          iVar3 = MaSmw_Start(uVar2,(void *)0x0);
          if (iVar3 < 0) {
            uVar1 = (&DAT_00578270)[lVar5 * 10];
            (&DAT_00578258)[lVar5 * 10] = 2;
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
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = 0;
            (&DAT_00578274)[lVar5 * 10] = 0;
          }
          mapimachdep_UnlockApi();
          goto LAB_001851f0;
        }
      }
    }
    else if ((uVar4 & (long)DAT_00578298) == 0) {
      if (iVar3 != 2) goto LAB_00185100;
LAB_00185118:
      if ((uVar4 & (long)DAT_005782e8) == 0) {
        if (iVar3 != 4) goto LAB_00185130;
        goto LAB_00185140;
      }
    }
  }
  mapimachdep_UnlockApi();
  uVar6 = 0xffffffff;
LAB_001851f0:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

