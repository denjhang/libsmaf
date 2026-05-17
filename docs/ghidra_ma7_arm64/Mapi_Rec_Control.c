/* Mapi_Rec_Control @ 00189d20 1000B */


/* YAMAHA::Mapi_Rec_Control(int, unsigned int, void*) */

int YAMAHA::Mapi_Rec_Control(int param_1,uint param_2,void *param_3)

{
  int iVar1;
  uint uVar2;
  
  mapimachdep_LockApi();
  if (DAT_00577e10 == '\0') goto switchD_0018a0dc_caseD_11110034;
  if (param_1 != 1) goto LAB_00189f9c;
  if (param_2 == 0x111100ff) {
LAB_00189e48:
    if (param_3 == (void *)0x0) {
LAB_00189f9c:
      mapimachdep_UnlockApi();
      return -2;
    }
  }
  else {
    if (DAT_005788e8 == 0) goto switchD_0018a0dc_caseD_11110034;
    if (DAT_005788e8 == 1) {
      if (param_2 != 0x10100005) {
        if (param_2 < 0x10100006) {
          if (param_2 != 0x100006) {
            if (param_2 < 0x100007) {
              if (1 < param_2 - 0x1000a) goto switchD_0018a0dc_caseD_11110034;
            }
            else if (param_2 != 0x100100) goto switchD_0018a0dc_caseD_11110034;
          }
        }
        else if (param_2 != 0x10100700) {
          if (param_2 < 0x10100701) {
            if (param_2 != 0x10100600) goto switchD_0018a0dc_caseD_11110034;
          }
          else if ((param_2 != 0x10100800) && (param_2 != 0x11110070))
          goto switchD_0018a0dc_caseD_11110034;
        }
      }
    }
    else if (DAT_005788e8 == 2) {
      if (param_2 < 0x11110038) {
        if (0x11110035 < param_2) goto switchD_0018a0dc_caseD_11110034;
LAB_0018a06c:
        if (param_2 == 0x10100500) {
switchD_0018a0dc_caseD_11110034:
          mapimachdep_UnlockApi();
          return -8;
        }
      }
      else if ((param_2 == 0x11110070) || ((0x1111006f < param_2 && (param_2 + 0xeeeeff89 < 2))))
      goto switchD_0018a0dc_caseD_11110034;
    }
    else if (DAT_005788e8 == 3) {
      if (param_2 == 0x11110070) goto switchD_0018a0dc_caseD_11110034;
      if (param_2 < 0x11110071) {
        if (param_2 == 0x11110035) goto switchD_0018a0dc_caseD_11110034;
LAB_0018a048:
        if (param_2 == 0x11110068) goto switchD_0018a0dc_caseD_11110034;
      }
      else if (param_2 + 0xeeeeff8c < 5) goto switchD_0018a0dc_caseD_11110034;
    }
    else {
      if (DAT_005788e8 != 4) {
        if (DAT_005788e8 != 6) goto switchD_0018a0dc_caseD_11110034;
        if (0x11110038 < param_2) goto LAB_0018a048;
        if (0x11110033 < param_2) goto switchD_0018a0dc_caseD_11110034;
        goto LAB_0018a06c;
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
        goto switchD_0018a0dc_caseD_11110034;
      }
    }
    if (param_2 != 0x11110070) {
      if (param_2 < 0x11110071) {
        if ((param_2 != 0x100006) && (param_2 != 0x1111002b)) goto LAB_00189f9c;
      }
      else if (1 < param_2 + 0xeeeeff8d) goto LAB_00189f9c;
    }
    if ((param_2 != 0x100006) && (param_2 != 0x1111002b)) goto LAB_00189e48;
  }
  if (param_2 == 0x11110070) {
    iVar1 = MaSmw_Ctrl(DAT_0048a164,0x70,DAT_00578900,param_3);
    if (-1 < iVar1) {
      DAT_00578908 = *(undefined4 *)param_3;
      DAT_0057890c = *(undefined4 *)((long)param_3 + 4);
      DAT_00578910 = *(undefined4 *)((long)param_3 + 8);
    }
    goto LAB_00189ea8;
  }
  if (param_2 < 0x11110071) {
    iVar1 = DAT_005788e8;
    if (param_2 == 0x100006) goto LAB_00189ea8;
LAB_00189edc:
    iVar1 = FUN_0017cf98(0x14,1,param_2,param_3);
  }
  else {
    if (param_2 == 0x11110073) {
      uVar2 = 0x73;
    }
    else {
      uVar2 = 0x74;
      if (param_2 != 0x11110074) goto LAB_00189edc;
    }
    iVar1 = MaSmw_Ctrl(DAT_0048a164,uVar2,0,param_3);
  }
LAB_00189ea8:
  mapimachdep_UnlockApi();
  return iVar1;
}

