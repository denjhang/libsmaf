/* Mapi_Melody_Close @ 00182db4 548B */


/* YAMAHA::Mapi_Melody_Close(int) */

void YAMAHA::Mapi_Melody_Close(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined4 local_c;
  long local_8;
  
  lVar6 = (long)param_1;
  local_c = 0;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  mapimachdep_LockApi();
  if (DAT_00577e10 == '\0') {
LAB_00182fbc:
    mapimachdep_UnlockApi();
    iVar4 = -8;
    goto LAB_00182e58;
  }
  if (DAT_00577e14 != 1) {
    mapimachdep_UnlockApi();
    iVar4 = -1;
    goto LAB_00182e58;
  }
  if (8 < param_1 - 1U) {
    mapimachdep_UnlockApi();
    iVar4 = -2;
    goto LAB_00182e58;
  }
  if ((int)(&DAT_00577f38)[lVar6 * 0x14] < 2) goto LAB_00182fbc;
  uVar1 = (&DAT_00577f30)[lVar6 * 0x14];
  uVar2 = (&DAT_00577f34)[lVar6 * 0x14];
  if ((uVar1 == 0x10) || (uVar1 == 1)) {
    iVar4 = SmafMms_Close(DAT_00577e18);
    if ((iVar4 != 0) || (uVar1 != 0x10)) goto LAB_00182f28;
    DAT_00577e2c = 100;
LAB_00182f2c:
    switch(uVar1) {
    case 1:
    case 0xf:
      iVar5 = Mas_Close();
      if (-1 < iVar5) goto switchD_00182f4c_caseD_a;
      break;
    case 10:
    case 0xb:
switchD_00182f4c_caseD_a:
      (&DAT_00577ef0)[uVar2] = 0;
      DAT_00577e38._1_1_ = DAT_00577e38._1_1_ + -1;
    }
    DAT_00577e20 = 0xffffffffffffffff;
    (&DAT_00577f38)[lVar6 * 0x14] = 1;
    (&DAT_00577f40)[lVar6 * 10] = 0;
    (&PTR_FUN_00577f48)[lVar6 * 10] = FUN_0017c7dc;
    (&DAT_00577f60)[lVar6 * 0x14] = 0;
    (&DAT_00577f68)[lVar6 * 0x14] = 0;
    (&DAT_00577f6c)[lVar6 * 0x14] = 0;
    (&DAT_00577f70)[lVar6 * 0x14] = 0;
  }
  else {
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
      uVar3 = *(uint *)(&DAT_00489fd0 + ((ulong)uVar1 * 5 + (ulong)uVar2) * 4);
      MaSmw_Stop(uVar3,(void *)0x0);
      MaSmw_Ctrl(uVar3,0x2b,0,&local_c);
      if ((undefined4 *)(&DAT_00577f40)[lVar6 * 10] != (undefined4 *)0x0) {
        *(undefined4 *)(&DAT_00577f40)[lVar6 * 10] = local_c;
      }
      iVar4 = MaSmw_Close(uVar3,(void *)0x0);
LAB_00182f28:
      if (-1 < iVar4) goto LAB_00182f2c;
      break;
    default:
      iVar4 = -2;
    }
  }
  mapimachdep_UnlockApi();
LAB_00182e58:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}

