/* Mapi_Melody_Stop @ 0006eb50 390B */


/* YAMAHA::Mapi_Melody_Stop(int) */

int YAMAHA::Mapi_Melody_Stop(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar2 = DAT_0006ecd8;
  local_2c = 0;
  pcVar5 = (char *)(DAT_0006ecd8 + 0x6eb62);
  mapimachdep_LockApi();
  if (*pcVar5 == '\0') {
LAB_0006eca6:
    mapimachdep_UnlockApi();
    return -8;
  }
  if (*(int *)(iVar2 + 0x6eb66) != 1) {
    mapimachdep_UnlockApi();
    return -1;
  }
  if (8 < param_1 - 1U) {
    mapimachdep_UnlockApi();
    return -2;
  }
  if (*(int *)(pcVar5 + param_1 * 0x34 + 0x114) != 4) goto LAB_0006eca6;
  iVar4 = *(int *)(pcVar5 + param_1 * 0x34 + 0x10c);
  local_28 = 0;
  local_24 = 0;
  iVar7 = *(int *)(pcVar5 + param_1 * 0x34 + 0x110);
  if (iVar4 == 1) {
    *(undefined1 *)(iVar2 + 0x6ec52) = 0;
    iVar6 = SmafMms_Stop(*(int *)(iVar2 + 0x6eb6a));
    *(undefined1 *)(iVar2 + 0x6ec52) = 1;
LAB_0006ec2e:
    uVar1 = Mas_Control(0x1111002b,(void *)0x0);
    if (-1 < (int)uVar1) {
      local_2c = uVar1;
      Mas_CBEnable(0);
      if (iVar4 == 1) {
        SmafMms_Seek(*(int *)(DAT_0006ecec + 0x6eccc),local_2c);
      }
      else {
        MaSmw_Seek(*(uint *)(DAT_0006ece4 + 0x6ec5a + (iVar7 + iVar4 * 5) * 4),local_2c,
                   (_MASMW_SEEK_PARAM *)&local_28);
      }
      Mas_CBEnable(1);
      goto LAB_0006ebb4;
    }
    bVar8 = iVar6 == 0;
    if (-1 < iVar6) {
      bVar8 = iVar4 == 1;
    }
    if (!bVar8) goto LAB_0006ebb4;
    iVar2 = *(int *)(DAT_0006ece8 + 0x6ec86);
    if (iVar2 != 0) {
      pcVar3 = *(code **)(iVar2 * 0x34 + DAT_0006ece8 + 0x6ed96);
      if ((pcVar3 != (code *)0x0) && (*(char *)((int)&DAT_0006ed68 + DAT_0006ece8 + 2) != '\0')) {
        (*pcVar3)(iVar2,0,0);
      }
    }
  }
  else {
    if (iVar4 == 0x10) {
      iVar6 = SmafMms_Stop(*(int *)(iVar2 + 0x6eb6a));
    }
    else {
      if ((iVar4 - 4U < 0xc) && ((1 << (iVar4 - 4U & 0xff) & 0xf1fU) != 0)) {
        uVar1 = *(uint *)(DAT_0006ece0 + 0x6ebf6 + (iVar4 * 5 + iVar7) * 4);
        iVar6 = MaSmw_Stop(uVar1,(void *)0x0);
        if (-1 < iVar6) {
          MaSmw_Ctrl(uVar1,0x2b,0,&local_2c);
          if (*(uint **)(pcVar5 + param_1 * 0x34 + 0x118) != (uint *)0x0) {
            **(uint **)(pcVar5 + param_1 * 0x34 + 0x118) = local_2c;
          }
        }
      }
      else {
        iVar6 = -2;
      }
      if ((iVar4 == 1) || (iVar4 == 0xf)) goto LAB_0006ec2e;
    }
LAB_0006ebb4:
    if (iVar6 < 0) goto LAB_0006ebca;
  }
  *(undefined4 *)((int)&DAT_0006ecd8 + param_1 * 0x34 + DAT_0006ecdc) = 3;
LAB_0006ebca:
  mapimachdep_UnlockApi();
  return iVar6;
}

