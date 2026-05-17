/* Mapi_Melody_Start @ 0006ea70 210B */


/* YAMAHA::Mapi_Melody_Start(int) */

int YAMAHA::Mapi_Melody_Start(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  mapimachdep_LockApi();
  iVar4 = DAT_0006eb44;
  pcVar1 = (char *)(DAT_0006eb44 + 0x6ea7e);
  if (*pcVar1 == '\0') {
LAB_0006eb24:
    mapimachdep_UnlockApi();
    return -8;
  }
  if (*(int *)(DAT_0006eb44 + 0x6ea82) != 1) {
    mapimachdep_UnlockApi();
    return -1;
  }
  if (8 < param_1 - 1U) {
    mapimachdep_UnlockApi();
    return -2;
  }
  if (*(int *)(pcVar1 + param_1 * 0x34 + 0x114) != 3) goto LAB_0006eb24;
  iVar2 = *(int *)(pcVar1 + param_1 * 0x34 + 0x10c);
  iVar3 = *(int *)(pcVar1 + param_1 * 0x34 + 0x110);
  pcVar1 = pcVar1 + param_1 * 0x34 + 0x114;
  pcVar1[0] = '\x04';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  if (iVar2 == 1 || iVar2 == 0x10) {
    iVar4 = SmafMms_Start(*(int *)(iVar4 + 0x6ea86));
  }
  else {
    if ((0xb < iVar2 - 4U) || ((1 << (iVar2 - 4U & 0xff) & 0xf1fU) == 0)) {
      iVar4 = -2;
      goto LAB_0006eac2;
    }
    iVar4 = MaSmw_Start(*(uint *)(DAT_0006eb4c + 0x6eb00 + (iVar3 + iVar2 * 5) * 4),(void *)0x0);
  }
  if (-1 < iVar4) {
    mapimachdep_UnlockApi();
    return iVar4;
  }
LAB_0006eac2:
  *(undefined4 *)(param_1 * 0x34 + DAT_0006eb48 + 0x6ebe4) = 3;
  if ((iVar2 == 1) || (iVar2 == 0xf)) {
    Mas_Stop();
  }
  mapimachdep_UnlockApi();
  return iVar4;
}

