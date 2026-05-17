/* Mapi_Din_Control @ 00188900 1300B */


/* YAMAHA::Mapi_Din_Control(int, unsigned int, void*) */

int YAMAHA::Mapi_Din_Control(int param_1,uint param_2,void *param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  mapimachdep_LockApi();
  uVar2 = (ulong)(param_1 + 1);
  if (DAT_00577e10 == '\0') goto switchD_00188dd0_caseD_11110034;
  if (1 < (uint)param_1) goto LAB_00188c00;
  iVar1 = (&DAT_00578570)[uVar2 * 0xe];
  if (param_2 == 0x111100ff) {
LAB_00188a5c:
    if (param_3 == (void *)0x0) {
LAB_00188c00:
      mapimachdep_UnlockApi();
      return -2;
    }
  }
  else {
    if (iVar1 == 0) goto switchD_00188dd0_caseD_11110034;
    if (iVar1 == 1) {
      if (param_2 != 0x10100005) {
        if (param_2 < 0x10100006) {
          if (param_2 != 0x100006) {
            if (param_2 < 0x100007) {
              if (1 < param_2 - 0x1000a) goto switchD_00188dd0_caseD_11110034;
            }
            else if (param_2 != 0x100100) goto switchD_00188dd0_caseD_11110034;
          }
        }
        else if (param_2 != 0x10100700) {
          if (param_2 < 0x10100701) {
            if (param_2 != 0x10100600) goto switchD_00188dd0_caseD_11110034;
          }
          else if ((param_2 != 0x10100800) && (param_2 != 0x11110070))
          goto switchD_00188dd0_caseD_11110034;
        }
      }
    }
    else if (iVar1 == 2) {
      if (param_2 < 0x11110038) {
        if (0x11110035 < param_2) goto switchD_00188dd0_caseD_11110034;
LAB_00188d60:
        if (param_2 == 0x10100500) {
switchD_00188dd0_caseD_11110034:
          mapimachdep_UnlockApi();
          return -8;
        }
      }
      else if ((param_2 == 0x11110070) || ((0x1111006f < param_2 && (param_2 + 0xeeeeff89 < 2))))
      goto switchD_00188dd0_caseD_11110034;
    }
    else if (iVar1 == 3) {
      if (param_2 == 0x11110070) goto switchD_00188dd0_caseD_11110034;
      if (param_2 < 0x11110071) {
        if (param_2 == 0x11110035) goto switchD_00188dd0_caseD_11110034;
LAB_00188d3c:
        if (param_2 == 0x11110068) goto switchD_00188dd0_caseD_11110034;
      }
      else if (param_2 + 0xeeeeff8c < 5) goto switchD_00188dd0_caseD_11110034;
    }
    else {
      if (iVar1 != 4) {
        if (iVar1 != 6) goto switchD_00188dd0_caseD_11110034;
        if (0x11110038 < param_2) goto LAB_00188d3c;
        if (0x11110033 < param_2) goto switchD_00188dd0_caseD_11110034;
        goto LAB_00188d60;
      }
      switch(param_2) {
      case 0x11110034:
      case 0x11110035:
      case 0x11110038:
      case 0x11110068:
      case 0x11110070:
      case 0x11110074:
      case 0x11110075:
      case 0x11110076:
        goto switchD_00188dd0_caseD_11110034;
      }
    }
    if (((0x24 < param_2 - 0x80) && (param_2 != 0xb0)) && (param_2 != 0xb2)) {
      if (param_2 < 0x11110030) {
        if ((param_2 < 0x1111002c) && (param_2 != 0x100006)) goto LAB_00188c00;
      }
      else if ((param_2 < 0x11110060) || ((0x11110067 < param_2 && (param_2 != 0x11110075))))
      goto LAB_00188c00;
    }
    if (param_2 != 0x10100005) {
      if (param_2 < 0x10100006) {
        if (param_2 == 0xa4) goto LAB_00188c1c;
        if (param_2 < 0xa5) {
          if (param_2 == 0x80) goto LAB_00188b50;
        }
        else if ((param_2 == 0x100006) || (param_2 == 0x100100)) goto LAB_00188a60;
        goto LAB_00188a5c;
      }
      if (param_2 != 0x1111002b) {
        if (param_2 < 0x1111002c) {
          if ((param_2 != 0x10100500) && (param_2 != 0x10100800)) goto LAB_00188a5c;
        }
        else if ((param_2 != 0x11110050) && (param_2 != 0x11110078)) goto LAB_00188a5c;
      }
    }
  }
LAB_00188a60:
  if (param_2 == 0xa4) {
LAB_00188c1c:
    iVar1 = FUN_0017cf98(0x12,uVar2,0xa4,param_3);
    (&DAT_00578598)[uVar2 * 0xe] = (&DAT_0057859c)[uVar2 * 0xe];
    mapimachdep_UnlockApi();
    return iVar1;
  }
  if (0xa4 < param_2) {
    if (param_2 != 0x100006) {
      if (param_2 != 0x11110075) goto LAB_00188b50;
      uVar3 = *(undefined8 *)((long)param_3 + 0x10);
      uVar4 = *(undefined8 *)((long)param_3 + 8);
      *(undefined8 *)(&DAT_00578580 + uVar2 * 0xe) = *(undefined8 *)param_3;
      *(undefined8 *)(&DAT_00578588 + uVar2 * 0xe) = uVar4;
      *(undefined8 *)(&DAT_00578590 + uVar2 * 0x38) = uVar3;
      iVar1 = MaSmw_Ctrl(*(uint *)(&DAT_00489fd0 + (uVar2 + 0x5a) * 4),0x75,0,
                         &DAT_00578580 + uVar2 * 0xe);
    }
    mapimachdep_UnlockApi();
    return iVar1;
  }
  if (param_2 == 0x81) {
    (&DAT_0057859c)[uVar2 * 0xe] = *(uint *)param_3 >> 0x1f;
    iVar1 = FUN_0017cf98(0x12,uVar2,0x81,param_3);
    mapimachdep_UnlockApi();
    return iVar1;
  }
LAB_00188b50:
  iVar1 = FUN_0017cf98(0x12,uVar2,param_2,param_3);
  mapimachdep_UnlockApi();
  return iVar1;
}

