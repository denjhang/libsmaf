/* Mapi_Stm_Control @ 00187d5c 1600B */


/* YAMAHA::Mapi_Stm_Control(int, unsigned int, void*) */

void YAMAHA::Mapi_Stm_Control(int param_1,uint param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  int local_10 [2];
  long local_8;
  
  local_10[0] = 0;
  lVar7 = (long)param_1;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  uVar1 = (&DAT_005783e8)[lVar7 * 0x10];
  uVar2 = (&DAT_005783ec)[lVar7 * 0x10];
  mapimachdep_LockApi();
  if (DAT_00577e10 == '\0') goto switchD_0018836c_caseD_11110034;
  if (4 < param_1 - 1U) goto LAB_00188090;
  iVar5 = (&DAT_005783f0)[lVar7 * 0x10];
  if (param_2 == 0x111100ff) goto LAB_00187f4c;
  if (iVar5 != 0) {
    if (iVar5 == 1) {
      if (param_2 != 0x10100005) {
        if (param_2 < 0x10100006) {
          if (param_2 != 0x100006) {
            if (param_2 < 0x100007) {
              if (param_2 - 0x1000a < 2) goto switchD_0018836c_caseD_11110036;
            }
            else if (param_2 == 0x100100) goto switchD_0018836c_caseD_11110036;
            goto switchD_0018836c_caseD_11110034;
          }
        }
        else if (param_2 != 0x10100700) {
          if (param_2 < 0x10100701) {
            if (param_2 == 0x10100600) goto switchD_0018836c_caseD_11110036;
          }
          else if ((param_2 == 0x10100800) || (param_2 == 0x11110070))
          goto switchD_0018836c_caseD_11110036;
          goto switchD_0018836c_caseD_11110034;
        }
      }
switchD_0018836c_caseD_11110036:
      if (((param_2 - 0x80 < 0x25) || (param_2 == 0xb0)) || (param_2 == 0xb2)) {
LAB_00187ee4:
        if ((1 < param_2 + 0xeeeeff98) || (uVar1 == 0xb)) {
          if (param_2 != 0x10100005) {
            if (param_2 < 0x10100006) {
              if (param_2 != 0xa4) {
                if (param_2 < 0xa5) {
                  if (param_2 != 0x80) goto LAB_00187f4c;
                }
                else if ((param_2 != 0x100006) && (param_2 != 0x100100)) {
LAB_00187f4c:
                  if (param_3 == (void *)0x0) goto LAB_00188090;
                }
              }
            }
            else if (param_2 != 0x1111002b) {
              if (param_2 < 0x1111002c) {
                if ((param_2 != 0x10100500) && (param_2 != 0x10100800)) goto LAB_00187f4c;
              }
              else if ((param_2 != 0x11110050) && (param_2 != 0x11110078)) goto LAB_00187f4c;
            }
          }
          if (param_2 == 0x11110070) {
            iVar5 = MaSmw_Ctrl(0x600,0x70,(&DAT_00578408)[lVar7 * 0x10],param_3);
            if (-1 < iVar5) {
              uVar3 = *(undefined4 *)param_3;
              uVar4 = *(undefined4 *)((long)param_3 + 4);
              (&DAT_00578418)[lVar7 * 0x10] = *(undefined4 *)((long)param_3 + 8);
              (&DAT_00578410)[lVar7 * 0x10] = uVar3;
              (&DAT_00578414)[lVar7 * 0x10] = uVar4;
            }
          }
          else if (param_2 < 0x11110071) {
            if (param_2 == 0xa4) {
              iVar5 = FUN_0017cf98(uVar1,uVar2,0xa4,param_3);
              (&DAT_00577e1c)[(lVar7 + 0x18) * 0x10] =
                   *(undefined4 *)(&DAT_00577e20 + (lVar7 + 0x18) * 8);
              mapimachdep_UnlockApi();
              goto LAB_00187de4;
            }
            if (param_2 != 0x100006) {
              if (param_2 == 0x81) {
                (&DAT_00578420)[lVar7 * 0x10] = *(uint *)param_3 >> 0x1f;
                iVar5 = FUN_0017cf98(uVar1,uVar2,0x81,param_3);
                mapimachdep_UnlockApi();
                goto LAB_00187de4;
              }
LAB_00188008:
              iVar5 = FUN_0017cf98(uVar1,uVar2,param_2,param_3);
              mapimachdep_UnlockApi();
              goto LAB_00187de4;
            }
          }
          else {
            if (param_2 == 0x11110072) {
              uVar6 = 0x72;
            }
            else {
              if (param_2 < 0x11110072) {
                uVar1 = *(uint *)(&DAT_00489fd0 + ((ulong)uVar1 * 5 + (ulong)uVar2) * 4);
                iVar5 = MaSmw_Ctrl(uVar1,0x71,0,param_3);
                MaSmw_GetInfo(uVar1,6,(_MASMW_GETINFO_PARAM *)local_10);
                if (((-1 < iVar5) && ((&DAT_005783f0)[lVar7 * 0x10] == 4)) && (local_10[0] == 3)) {
                  MaSmw_Start(uVar1,(void *)0x0);
                }
                goto LAB_00187fdc;
              }
              if (param_2 == 0x11110073) {
                uVar6 = 0x73;
              }
              else {
                if (param_2 != 0x11110074) goto LAB_00188008;
                uVar6 = 0x74;
              }
            }
            iVar5 = MaSmw_Ctrl(*(uint *)(&DAT_00489fd0 + ((ulong)uVar1 * 5 + (ulong)uVar2) * 4),
                               uVar6,0,param_3);
          }
LAB_00187fdc:
          mapimachdep_UnlockApi();
          goto LAB_00187de4;
        }
      }
      else if (param_2 < 0x1111006a) {
        if (((0x1111005f < param_2) || (param_2 == 0x100006)) ||
           ((0x100005 < param_2 && (param_2 + 0xeeeeffd9 < 9)))) goto LAB_00187ee4;
      }
      else if (param_2 + 0xeeeeff90 < 5) goto LAB_00187ee4;
LAB_00188090:
      mapimachdep_UnlockApi();
      iVar5 = -2;
      goto LAB_00187de4;
    }
    if (iVar5 == 2) {
      if (param_2 < 0x11110038) {
        if (param_2 < 0x11110036) {
LAB_001882fc:
          if (param_2 != 0x10100500) goto switchD_0018836c_caseD_11110036;
        }
      }
      else if ((param_2 != 0x11110070) && ((param_2 < 0x11110070 || (1 < param_2 + 0xeeeeff89))))
      goto switchD_0018836c_caseD_11110036;
    }
    else if (iVar5 == 3) {
      if (param_2 != 0x11110070) {
        if (param_2 < 0x11110071) {
          if (param_2 != 0x11110035) goto LAB_00188068;
        }
        else if (4 < param_2 + 0xeeeeff8c) goto switchD_0018836c_caseD_11110036;
      }
    }
    else {
      if (iVar5 == 4) {
        switch(param_2) {
        case 0x11110034:
        case 0x11110035:
        case 0x11110038:
        case 0x11110068:
        case 0x11110070:
        case 0x11110074:
        case 0x11110075:
        case 0x11110076:
          goto switchD_0018836c_caseD_11110034;
        default:
          goto switchD_0018836c_caseD_11110036;
        }
      }
      if (iVar5 == 6) {
        if (param_2 < 0x11110039) {
          if (param_2 < 0x11110034) goto LAB_001882fc;
        }
        else {
LAB_00188068:
          if (param_2 != 0x11110068) goto switchD_0018836c_caseD_11110036;
        }
      }
    }
  }
switchD_0018836c_caseD_11110034:
  mapimachdep_UnlockApi();
  iVar5 = -8;
LAB_00187de4:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar5);
}

