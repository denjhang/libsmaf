/* _Unwind_Find_FDE @ 0027b974 400B */


ulong _Unwind_Find_FDE(ulong param_1,ulong *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  ulong local_10;
  undefined4 local_8;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00765090);
  for (puVar8 = DAT_007650c0; puVar8 != (ulong *)0x0; puVar8 = (ulong *)puVar8[5]) {
    if (*puVar8 <= param_1) {
      uVar4 = FUN_0027b16c(puVar8,param_1);
      if (uVar4 != 0) goto LAB_0027ba34;
      break;
    }
  }
  do {
    puVar8 = DAT_007650b8;
    if (DAT_007650b8 == (ulong *)0x0) {
      uVar4 = 0;
      break;
    }
    DAT_007650b8 = (ulong *)DAT_007650b8[5];
    uVar4 = FUN_0027b16c(puVar8,param_1);
    puVar5 = (ulong *)&DAT_007650c0;
    for (puVar7 = DAT_007650c0; (puVar7 != (ulong *)0x0 && (*puVar8 <= *puVar7));
        puVar7 = (ulong *)puVar7[5]) {
      puVar5 = puVar7 + 5;
    }
    puVar8[5] = (ulong)puVar7;
    *puVar5 = (ulong)puVar8;
  } while (uVar4 == 0);
LAB_0027ba34:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00765090);
  local_10 = uVar4;
  if (uVar4 == 0) {
    local_8 = 1;
    local_30 = param_1;
    local_28 = uVar4;
    local_20 = uVar4;
    local_18 = uVar4;
    iVar3 = dl_iterate_phdr(FUN_0027aa28,&local_30);
    if (iVar3 < 0) {
      return 0;
    }
    if (local_10 == 0) {
      return 0;
    }
    *param_2 = local_28;
    param_2[1] = local_20;
    local_30 = local_18;
  }
  else {
    *param_2 = puVar8[1];
    uVar1 = puVar8[4];
    param_2[1] = puVar8[2];
    uVar2 = (undefined1)((ushort)puVar8[4] >> 3);
    if (((byte)uVar1 >> 2 & 1) != 0) {
      uVar2 = FUN_0027aa18(uVar4);
    }
    uVar6 = FUN_0027a57c(uVar2,puVar8);
    FUN_0027a63c(uVar2,uVar6,uVar4 + 8,&local_30);
  }
  param_2[2] = local_30;
  return local_10;
}

