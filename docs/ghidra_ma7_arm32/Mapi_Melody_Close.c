/* Mapi_Melody_Close @ 0006e62c 370B */


/* YAMAHA::Mapi_Melody_Close(int) */

int YAMAHA::Mapi_Melody_Close(int param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_24;
  
  iVar5 = DAT_0006e7b0;
  iVar6 = 0;
  local_24 = 0;
  pcVar2 = (char *)(DAT_0006e7b0 + 0x6e642);
  mapimachdep_LockApi();
  if (*pcVar2 == '\0') {
LAB_0006e79a:
    mapimachdep_UnlockApi();
    return -8;
  }
  if (*(int *)(iVar5 + 0x6e646) != 1) {
    mapimachdep_UnlockApi();
    return -1;
  }
  if (8 < param_1 - 1U) {
    mapimachdep_UnlockApi();
    return -2;
  }
  if (*(int *)(pcVar2 + param_1 * 0x34 + 0x114) < 2) goto LAB_0006e79a;
  iVar4 = *(int *)(pcVar2 + param_1 * 0x34 + 0x10c);
  iVar7 = *(int *)(pcVar2 + param_1 * 0x34 + 0x110);
  if (iVar4 == 1 || iVar4 == 0x10) {
    iVar1 = SmafMms_Close(*(int *)(iVar5 + 0x6e64a));
    if (iVar1 != 0 || iVar4 != 0x10) goto LAB_0006e6ec;
    *(undefined4 *)(iVar5 + 0x6e65a) = 100;
  }
  else {
    if ((0xb < iVar4 - 4U) || ((1 << (iVar4 - 4U & 0xff) & 0xf1fU) == 0)) {
      iVar6 = -2;
      goto LAB_0006e696;
    }
    uVar3 = *(uint *)(DAT_0006e7b4 + 0x6e6c2 + (iVar4 * 5 + iVar7) * 4);
    MaSmw_Stop(uVar3,(void *)0x0);
    MaSmw_Ctrl(uVar3,0x2b,0,&local_24);
    if (*(undefined4 **)(pcVar2 + param_1 * 0x34 + 0x118) != (undefined4 *)0x0) {
      **(undefined4 **)(pcVar2 + param_1 * 0x34 + 0x118) = local_24;
    }
    iVar1 = MaSmw_Close(uVar3,(void *)0x0);
LAB_0006e6ec:
    iVar6 = iVar1;
    if (iVar6 < 0) goto LAB_0006e696;
  }
  switch(iVar4) {
  case 1:
  case 0xf:
    iVar5 = Mas_Close();
    if (-1 < iVar5) {
      iVar5 = DAT_0006e7c4 + 0x6e790;
      goto LAB_0006e72e;
    }
    break;
  case 10:
  case 0xb:
    iVar5 = DAT_0006e7b8 + 0x6e730;
LAB_0006e72e:
    *(char *)(iVar5 + 0x25) = *(char *)(iVar5 + 0x25) + -1;
    *(undefined4 *)(iVar5 + (iVar7 + 0x37) * 4) = 0;
  }
  iVar4 = DAT_0006e7c0 + 0x6e758;
  iVar5 = param_1 * 0x34 + DAT_0006e7bc + 0x6e754;
  *(undefined4 *)(DAT_0006e7bc + 0x6e764) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0x114) = 1;
  *(int *)(iVar5 + 0x11c) = iVar4;
  *(undefined4 *)(iVar5 + 0x118) = 0;
  *(undefined4 *)(iVar5 + 0x128) = 0;
  *(undefined4 *)(iVar5 + 0x130) = 0;
  *(undefined4 *)(iVar5 + 0x134) = 0;
  *(undefined4 *)(iVar5 + 0x138) = 0;
LAB_0006e696:
  mapimachdep_UnlockApi();
  return iVar6;
}

