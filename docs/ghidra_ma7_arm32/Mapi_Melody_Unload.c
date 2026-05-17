/* Mapi_Melody_Unload @ 0006e14c 418B */


/* YAMAHA::Mapi_Melody_Unload(int) */

int YAMAHA::Mapi_Melody_Unload(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  mapimachdep_LockApi();
  iVar5 = DAT_0006e310;
  iVar3 = DAT_0006e304;
  pcVar2 = (char *)(DAT_0006e300 + 0x6e15c);
  if (*pcVar2 == '\0') {
LAB_0006e2da:
    mapimachdep_UnlockApi();
    return -8;
  }
  if (*(int *)(DAT_0006e300 + 0x6e160) != 1) {
    mapimachdep_UnlockApi();
    return -1;
  }
  if (8 < param_1 - 1U) {
    mapimachdep_UnlockApi();
    return -2;
  }
  if (*(int *)(pcVar2 + param_1 * 0x34 + 0x114) != 1) goto LAB_0006e2da;
  iVar4 = *(int *)(pcVar2 + param_1 * 0x34 + 0x10c);
  iVar8 = *(int *)(pcVar2 + param_1 * 0x34 + 0x110);
  switch(iVar4) {
  case 1:
    iVar7 = SmafMms_Unload(*(int *)(DAT_0006e310 + 0x6e228));
    if (iVar7 < 0) goto LAB_0006e20e;
    iVar6 = 1;
    *(undefined4 *)(iVar5 + 0x6e228) = 0;
    *(undefined4 *)(iVar5 + 0x6e22c) = 0;
    break;
  default:
    iVar7 = -2;
    goto LAB_0006e20e;
  case 4:
  case 0xd:
    iVar3 = iVar4 * 5;
    iVar5 = DAT_0006e314 + 0x6e244;
    goto LAB_0006e242;
  case 5:
  case 7:
  case 8:
  case 0xe:
    iVar6 = 2;
    iVar7 = MaSmw_Unload(*(uint *)(DAT_0006e318 + 0x6e266 + (iVar4 * 5 + iVar8) * 4),(void *)0x0);
    goto LAB_0006e250;
  case 6:
    iVar6 = 3;
    iVar7 = MaSmw_Unload(*(uint *)(DAT_0006e31c + 0x6e282 + (iVar8 + 0x1e) * 4),(void *)0x0);
    goto LAB_0006e250;
  case 0xc:
    iVar7 = MaSmw_XMF_Close((_tagmaXMF_Info *)(DAT_0006e320 + 0x6ec42));
    if (iVar7 < 0) goto LAB_0006e20e;
    iVar3 = 0x3c;
    iVar5 = DAT_0006e324 + 0x6e2a6;
LAB_0006e242:
    iVar7 = MaSmw_Unload(*(uint *)(iVar5 + (iVar3 + iVar8) * 4),(void *)0x0);
    iVar6 = 1;
LAB_0006e250:
    if (iVar7 < 0) goto LAB_0006e20e;
    break;
  case 0xf:
    iVar7 = MaSmw_Unload(*(uint *)(DAT_0006e328 + 0x6e2b4 + (iVar8 + 0x4b) * 4),(void *)0x0);
    if (iVar7 < 0) goto LAB_0006e20e;
    iVar6 = 1;
    *(undefined4 *)(DAT_0006e32c + 0x6e2de) = 0;
    break;
  case 0x10:
    iVar7 = SmafMms_Unload(*(int *)(DAT_0006e304 + 0x6e1b6));
    if (iVar7 < 0) goto LAB_0006e20e;
    iVar6 = 0;
    *(undefined4 *)(iVar3 + 0x6e1b6) = 0;
    *(undefined4 *)(iVar3 + 0x6e1ba) = 0;
  }
  if ((iVar4 == 1) || (iVar4 == 0xf)) {
    Mas_Unload();
  }
  iVar5 = DAT_0006e308 + 0x6e1de;
  iVar3 = param_1 * 0x34 + iVar5;
  cVar1 = *(char *)(iVar6 + iVar5 + 0x1c);
  iVar4 = DAT_0006e30c + 0x6e1f0;
  *(undefined4 *)(iVar5 + (iVar8 + iVar6 * 5 + 10) * 4) = 0;
  *(char *)(iVar6 + iVar5 + 0x1c) = cVar1 + -1;
  *(int *)(iVar3 + 0x13c) = iVar4;
  *(undefined4 *)(iVar3 + 0x120) = 0;
  *(undefined4 *)(iVar3 + 0x124) = 0;
  *(undefined4 *)(iVar3 + 0x114) = 0;
  *(undefined4 *)(iVar3 + 0x10c) = 0;
  *(undefined4 *)(iVar3 + 0x110) = 0;
LAB_0006e20e:
  mapimachdep_UnlockApi();
  return iVar7;
}

