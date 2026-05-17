/* Mapi_Stm_Stop @ 001885f4 200B */


/* YAMAHA::Mapi_Stm_Stop(int) */

undefined8 YAMAHA::Mapi_Stm_Stop(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar4 = -(ulong)((uint)param_1 >> 0x1f) & 0xffffffc000000000 | (ulong)(uint)param_1 << 6;
  uVar1 = *(uint *)((long)&DAT_005783e8 + uVar4);
  uVar2 = *(uint *)((long)&DAT_005783ec + uVar4);
  mapimachdep_LockApi();
  if (DAT_00577e10 != '\0') {
    if (param_1 - 1U < 5) {
      if (*(int *)((long)&DAT_005783f0 + uVar4) != 4) goto LAB_00188694;
      uVar3 = MaSmw_Stop(*(uint *)(&DAT_00489fd0 + ((ulong)uVar1 * 5 + (ulong)uVar2) * 4),
                         (void *)0x0);
      if (-1 < (int)uVar3) {
        *(undefined4 *)((long)&DAT_005783f0 + uVar4) = 3;
      }
      mapimachdep_UnlockApi();
    }
    else {
      mapimachdep_UnlockApi();
      uVar3 = 0xfffffffe;
    }
    return uVar3;
  }
LAB_00188694:
  mapimachdep_UnlockApi();
  return 0xfffffff8;
}

