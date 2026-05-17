/* Mapi_Melody_WaitReady @ 0006ecf0 120B */


/* YAMAHA::Mapi_Melody_WaitReady(int, int) */

undefined4 YAMAHA::Mapi_Melody_WaitReady(int param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  mapimachdep_LockApi();
  pcVar2 = (char *)(DAT_0006ed68 + 0x6ed00);
  if (*pcVar2 != '\0') {
    if (*(int *)(DAT_0006ed68 + 0x6ed04) != 1) {
      mapimachdep_UnlockApi();
      return 0xffffffff;
    }
    if (8 < param_1 - 1U) {
      mapimachdep_UnlockApi();
      return 0xfffffffe;
    }
    if (1 < *(int *)(pcVar2 + param_1 * 0x34 + 0x114)) {
      if (*(int *)(pcVar2 + param_1 * 0x34 + 0x10c) == 1 ||
          *(int *)(pcVar2 + param_1 * 0x34 + 0x10c) == 0x10) {
        uVar1 = SmafMms_WaitReady(*(int *)(DAT_0006ed68 + 0x6ed08),param_2);
        mapimachdep_UnlockApi();
        return uVar1;
      }
      mapimachdep_UnlockApi();
      return 0;
    }
  }
  mapimachdep_UnlockApi();
  return 0xfffffff8;
}

