/* Mapi_Melody_Standby @ 0006e7c8 322B */


/* YAMAHA::Mapi_Melody_Standby(int, unsigned int, unsigned int) */

int YAMAHA::Mapi_Melody_Standby(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  uint local_28;
  uint local_24;
  
  mapimachdep_LockApi();
  pcVar4 = (char *)(DAT_0006e90c + 0x6e7de);
  if (*pcVar4 == '\0') {
LAB_0006e8ec:
    mapimachdep_UnlockApi();
    return -8;
  }
  if (*(int *)(DAT_0006e90c + 0x6e7e2) != 1) {
    mapimachdep_UnlockApi();
    return -1;
  }
  if (8 < param_1 - 1U) {
    mapimachdep_UnlockApi();
    return -2;
  }
  if (*(int *)(pcVar4 + param_1 * 0x34 + 0x114) != 2) goto LAB_0006e8ec;
  uVar3 = *(uint *)(pcVar4 + param_1 * 0x34 + 0x130);
  uVar5 = *(uint *)(pcVar4 + param_1 * 0x34 + 0x10c);
  iVar6 = *(int *)(pcVar4 + param_1 * 0x34 + 0x110);
  if ((uVar3 <= param_3) && (param_3 = uVar3 - 1, uVar3 == 0)) {
    param_3 = 0;
  }
  uVar3 = (uint)(uVar5 == 1);
  cVar7 = uVar5 != 0;
  if (uVar5 != 1) {
    cVar7 = 0xe < uVar5;
  }
  if (uVar5 == 1 || uVar5 == 0xf) {
    uVar2 = Mas_Standby(param_3,1);
    param_3 = param_3 & (int)uVar2 >> 0x20;
    if (cVar7 == '\0') {
      param_3 = uVar2;
    }
  }
  iVar1 = DAT_0006e918;
  if (uVar5 == 0x10) {
    uVar3 = 1;
  }
  if (uVar3 == 0) {
    if ((0xb < uVar5 - 4) || ((1 << (uVar5 - 4 & 0xff) & 0xf1fU) == 0)) {
      iVar6 = -2;
      goto LAB_0006e838;
    }
    uVar5 = *(uint *)(DAT_0006e910 + 0x6e870 + (iVar6 + uVar5 * 5) * 4);
    local_28 = uVar3;
    local_24 = uVar3;
    iVar6 = MaSmw_Seek(uVar5,param_3,(_MASMW_SEEK_PARAM *)&local_28);
    if (iVar6 < 0) goto LAB_0006e838;
    MaSmw_Ctrl(uVar5,0x34,*(uint *)(param_1 * 0x34 + DAT_0006e914 + 0x6e9ba),(void *)0x0);
  }
  else {
    iVar6 = SmafMms_Standby(*(int *)(DAT_0006e918 + 0x6e8b4),param_2,param_3);
    if (iVar6 < 0) goto LAB_0006e838;
    SmafMms_Control(*(int *)(iVar1 + 0x6e8b4),0x1011001b,*(void **)(iVar1 + 0x6e8bc));
  }
  *(undefined4 *)(param_1 * 0x34 + DAT_0006e91c + 0x6e9e6) = 3;
LAB_0006e838:
  mapimachdep_UnlockApi();
  return iVar6;
}

