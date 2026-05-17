/* Mapi_Melody_Standby @ 00182fd8 524B */


/* YAMAHA::Mapi_Melody_Standby(int, unsigned int, unsigned int) */

void YAMAHA::Mapi_Melody_Standby(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined4 local_18 [2];
  undefined8 local_10;
  long local_8;
  
  lVar5 = (long)param_1;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  mapimachdep_LockApi();
  if (DAT_00577e10 == '\0') {
LAB_001831bc:
    mapimachdep_UnlockApi();
    iVar4 = -8;
    goto LAB_00183098;
  }
  if (DAT_00577e14 != 1) {
    mapimachdep_UnlockApi();
    iVar4 = -1;
    goto LAB_00183098;
  }
  if (8 < param_1 - 1U) {
    mapimachdep_UnlockApi();
    iVar4 = -2;
    goto LAB_00183098;
  }
  if ((&DAT_00577f38)[lVar5 * 0x14] != 2) goto LAB_001831bc;
  uVar3 = (&DAT_00577f68)[lVar5 * 0x14];
  uVar1 = (&DAT_00577f30)[lVar5 * 0x14];
  uVar2 = (&DAT_00577f34)[lVar5 * 0x14];
  if (param_3 < uVar3) {
    if (uVar1 == 0xf) goto LAB_001830e0;
LAB_00183070:
    if (uVar1 == 1) goto LAB_001830e0;
    if (uVar1 != 0x10) goto LAB_0018307c;
LAB_00183104:
    iVar4 = SmafMms_Standby(DAT_00577e18,param_2,param_3);
    if (-1 < iVar4) {
      SmafMms_Control(DAT_00577e18,0x1011001b,DAT_00577e20);
LAB_001831a4:
      (&DAT_00577f38)[lVar5 * 0x14] = 3;
    }
  }
  else {
    param_3 = uVar3 - 1;
    if (uVar3 == 0) {
      param_3 = 0;
    }
    if (uVar1 != 0xf) goto LAB_00183070;
LAB_001830e0:
    uVar3 = Mas_Standby(param_3,1);
    if (-1 < (int)uVar3) {
      param_3 = uVar3;
    }
    if (uVar1 == 0x10) goto LAB_00183104;
LAB_0018307c:
    if (uVar1 == 1) goto LAB_00183104;
    switch(uVar1) {
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
      local_18[0] = 0;
      uVar3 = *(uint *)(&DAT_00489fd0 + ((ulong)uVar1 * 5 + (ulong)uVar2) * 4);
      local_10 = 0;
      iVar4 = MaSmw_Seek(uVar3,param_3,(_MASMW_SEEK_PARAM *)local_18);
      if (iVar4 < 0) break;
      MaSmw_Ctrl(uVar3,0x34,(&DAT_00577f60)[lVar5 * 0x14],(void *)0x0);
      goto LAB_001831a4;
    default:
      iVar4 = -2;
    }
  }
  mapimachdep_UnlockApi();
LAB_00183098:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}

