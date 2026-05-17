/* Mapi_Dtmf_Control @ 001892f0 1304B */


/* YAMAHA::Mapi_Dtmf_Control(int, unsigned int, void*) */

void YAMAHA::Mapi_Dtmf_Control(int param_1,uint param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 local_20;
  undefined8 uStack_18;
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  uVar1 = *(uint *)(&DAT_0048a14c + (ulong)(param_1 + 1U) * 4);
  mapimachdep_LockApi();
  if (DAT_00577e10 == '\0') goto switchD_001897c0_caseD_11110034;
  if (param_1 + 1U != 1) goto LAB_00189528;
  if (param_2 == 0x111100ff) goto LAB_00189418;
  if (DAT_00578764 != 0) {
    if (DAT_00578764 == 1) {
      if (param_2 != 0x10100005) {
        if (param_2 < 0x10100006) {
          if (param_2 != 0x100006) {
            if (param_2 < 0x100007) {
              if (param_2 - 0x1000a < 2) goto switchD_001897c0_caseD_11110036;
            }
            else if (param_2 == 0x100100) goto switchD_001897c0_caseD_11110036;
            goto switchD_001897c0_caseD_11110034;
          }
        }
        else if (param_2 != 0x10100700) {
          if (param_2 < 0x10100701) {
            if (param_2 == 0x10100600) goto switchD_001897c0_caseD_11110036;
          }
          else if ((param_2 == 0x10100800) || (param_2 == 0x11110070))
          goto switchD_001897c0_caseD_11110036;
          goto switchD_001897c0_caseD_11110034;
        }
      }
switchD_001897c0_caseD_11110036:
      if (param_2 < 0x11110030) {
        if ((0x1111002b < param_2) || (param_2 == 0x100006)) {
LAB_00189684:
          if (param_2 != 0x10100500) {
            if (param_2 < 0x10100501) {
              if (((param_2 != 0x100100) && (param_2 != 0x10100005)) && (param_2 != 0x100006))
              goto LAB_00189418;
            }
            else if (param_2 != 0x1111002b) {
              if (param_2 < 0x1111002c) {
                if (param_2 != 0x10100800) goto LAB_00189418;
              }
              else if ((param_2 != 0x11110050) && (param_2 != 0x11110078)) {
LAB_00189418:
                if (param_3 == (void *)0x0) goto LAB_00189528;
              }
            }
          }
          if (param_2 == 0x11110076) {
            uVar1 = *(uint *)param_3;
            iVar5 = -2;
            if (((uVar1 < 0x10) && (iVar3 = *(int *)((long)param_3 + 4), iVar3 - 0x14U < 0x1375)) &&
               ((iVar4 = *(int *)((long)param_3 + 8), iVar4 - 0x14U < 0x1375 &&
                ((*(uint *)((long)param_3 + 0xc) < 0x80 && (*(uint *)((long)param_3 + 0x10) < 0x80))
                )))) {
              *(ulong *)(&DAT_00578774 + (ulong)uVar1 * 5) =
                   CONCAT44(*(uint *)((long)param_3 + 0x10),*(uint *)((long)param_3 + 0xc));
              *(ulong *)(&DAT_0057876c + (ulong)uVar1 * 5) = CONCAT44(iVar4,iVar3);
              mapimachdep_UnlockApi();
              iVar5 = 0;
              goto LAB_00189370;
            }
          }
          else if (param_2 < 0x11110077) {
            iVar5 = DAT_00578764;
            if (param_2 != 0x100006) {
LAB_00189490:
              iVar5 = FUN_0017cf98(0x13,1,param_2,param_3);
              mapimachdep_UnlockApi();
              goto LAB_00189370;
            }
          }
          else if (param_2 == 0x11110077) {
            uVar2 = *(uint *)param_3;
            iVar5 = -2;
            if (uVar2 < 0x10) {
              uStack_18 = *(undefined8 *)(&DAT_00578774 + (ulong)uVar2 * 5);
              local_20 = *(undefined8 *)(&DAT_0057876c + (ulong)uVar2 * 5);
              iVar5 = MaSmw_Ctrl(uVar1,0x77,0,&local_20);
            }
          }
          else {
            if (param_2 != 0x11110078) goto LAB_00189490;
            iVar5 = MaSmw_Ctrl(uVar1,0x78,0,(void *)0x0);
          }
          mapimachdep_UnlockApi();
          goto LAB_00189370;
        }
      }
      else if (param_2 + 0xeeeeff8a < 3) goto LAB_00189684;
LAB_00189528:
      mapimachdep_UnlockApi();
      iVar5 = -2;
      goto LAB_00189370;
    }
    if (DAT_00578764 == 2) {
      if (param_2 < 0x11110038) {
        if (param_2 < 0x11110036) {
LAB_00189750:
          if (param_2 != 0x10100500) goto switchD_001897c0_caseD_11110036;
        }
      }
      else if ((param_2 != 0x11110070) && ((param_2 < 0x11110070 || (1 < param_2 + 0xeeeeff89))))
      goto switchD_001897c0_caseD_11110036;
    }
    else if (DAT_00578764 == 3) {
      if (param_2 != 0x11110070) {
        if (param_2 < 0x11110071) {
          if (param_2 != 0x11110035) goto LAB_0018972c;
        }
        else if (4 < param_2 + 0xeeeeff8c) goto switchD_001897c0_caseD_11110036;
      }
    }
    else {
      if (DAT_00578764 == 4) {
        switch(param_2) {
        case 0x11110034:
        case 0x11110035:
        case 0x11110038:
        case 0x11110068:
        case 0x11110070:
        case 0x11110074:
        case 0x11110075:
        case 0x11110076:
          goto switchD_001897c0_caseD_11110034;
        default:
          goto switchD_001897c0_caseD_11110036;
        }
      }
      if (DAT_00578764 == 6) {
        if (param_2 < 0x11110039) {
          if (param_2 < 0x11110034) goto LAB_00189750;
        }
        else {
LAB_0018972c:
          if (param_2 != 0x11110068) goto switchD_001897c0_caseD_11110036;
        }
      }
    }
  }
switchD_001897c0_caseD_11110034:
  mapimachdep_UnlockApi();
  iVar5 = -8;
LAB_00189370:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar5);
}

