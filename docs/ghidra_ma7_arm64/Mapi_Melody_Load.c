/* Mapi_Melody_Load @ 00181910 720B */


/* WARNING: Type propagation algorithm not settling */
/* YAMAHA::Mapi_Melody_Load(unsigned char*, unsigned int, MAPI_DATATYPE, unsigned char) */

void YAMAHA::Mapi_Melody_Load(long param_1,undefined4 param_2,int param_3,byte param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int local_5c [3];
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  local_5c[0] = 0;
  local_5c[1] = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_40 = 0;
  mapimachdep_LockApi();
  if (DAT_00577e10 == '\0') {
    mapimachdep_UnlockApi();
    uVar2 = 0xfffffff8;
    goto LAB_00181b08;
  }
  if (DAT_00577e14 != 1) {
    mapimachdep_UnlockApi();
    uVar2 = 0xffffffff;
    goto LAB_00181b08;
  }
  if ((param_4 & 0xd2) != 0) {
LAB_001825b4:
    mapimachdep_UnlockApi();
    uVar2 = 0xfffffffe;
    goto LAB_00181b08;
  }
  if ((param_3 != 0) || (param_3 = FUN_0017c7ec(0,param_1,param_2,local_5c), param_3 != 0)) {
    if ((param_3 != 7) && (param_1 == 0)) goto LAB_001825b4;
    if (DAT_00577f88 == 0) {
      uVar1 = true;
      if (DAT_00577fd8 == 0) goto LAB_00181a64;
LAB_001819c0:
      if (DAT_00578028 == 0) goto LAB_001819d4;
LAB_00181a70:
      if (DAT_00578078 == 0) {
        if ((bool)uVar1) {
LAB_001819e0:
          uVar1 = true;
        }
        else {
          uVar1 = true;
        }
      }
    }
    else {
      uVar1 = false;
      if (DAT_00577fd8 != 0) goto LAB_001819c0;
LAB_00181a64:
      uVar1 = true;
      if (DAT_00578028 != 0) goto LAB_00181a70;
LAB_001819d4:
      uVar1 = true;
      if (DAT_00578078 == 0) goto LAB_001819e0;
    }
    if (DAT_005780c8 == 0) {
      uVar1 = true;
    }
    if (DAT_00578118 == 0) {
      uVar1 = true;
    }
    if (DAT_00578168 == 0) {
      uVar1 = true;
    }
    if (((DAT_005781b8 != 0) && (DAT_00578208 != 0)) && (!(bool)uVar1)) {
      mapimachdep_UnlockApi();
      uVar2 = 0xfffffffd;
      goto LAB_00181b08;
    }
    if (param_3 - 1U < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x00181a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)*(short *)(&DAT_00489b60 + (ulong)(param_3 - 1) * 2) * 4 + 0x181a4c))();
      return;
    }
  }
  uVar2 = 0xffffffee;
  if (local_5c[0] == 0) {
    uVar2 = 0xfffffff0;
  }
  mapimachdep_UnlockApi();
LAB_00181b08:
  if (local_8 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

