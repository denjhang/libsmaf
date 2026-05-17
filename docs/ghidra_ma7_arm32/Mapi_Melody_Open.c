/* Mapi_Melody_Open @ 0006e354 658B */


/* YAMAHA::Mapi_Melody_Open(int, MAPI_MELODY_OPENARG const*) */

int YAMAHA::Mapi_Melody_Open(int param_1,MAPI_MELODY_OPENARG *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int local_7c;
  void *local_70;
  int local_6c;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 auStack_64 [4];
  int local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined2 local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  mapimachdep_LockApi();
  iVar9 = DAT_0006e608;
  pcVar1 = (char *)(DAT_0006e600 + 0x6e368);
  if (*pcVar1 != '\0') {
    if (*(int *)(DAT_0006e600 + 0x6e36c) != 1) {
      mapimachdep_UnlockApi();
      return -1;
    }
    if ((param_2 == (MAPI_MELODY_OPENARG *)0x0) || (8 < param_1 - 1U)) {
      mapimachdep_UnlockApi();
      return -2;
    }
    if (*(int *)(pcVar1 + param_1 * 0x34 + 0x114) == 1) {
      iVar5 = *(int *)(pcVar1 + param_1 * 0x34 + 0x10c);
      iVar8 = *(int *)(pcVar1 + param_1 * 0x34 + 0x110);
      if (iVar5 == 1 || iVar5 == 0x10) {
        local_5c = *(undefined4 *)param_2;
        local_54 = *(undefined4 *)(param_2 + 8);
        local_50 = *(undefined4 *)(param_2 + 0xc);
        local_48 = *(undefined4 *)(param_2 + 0x14);
        local_58 = DAT_0006e604 + 0x6e3ea;
        local_4c = (undefined2)*(undefined4 *)(param_2 + 0x10);
        local_7c = SmafMms_Open(*(int *)(DAT_0006e600 + 0x6e370),(SMMS_OPENARG *)&local_5c);
        if (local_7c != -0x1a) {
joined_r0x0006e408:
          if (-1 < local_7c) {
LAB_0006e54c:
            if (iVar5 == 0xf || iVar5 == 1) {
              iVar9 = Mas_Open(*(uint *)(param_2 + 0x10));
              if (-1 < iVar9) {
                iVar9 = DAT_0006e624 + 0x6e5ae;
                *(char *)(DAT_0006e624 + 0x6e5d3) = *(char *)(DAT_0006e624 + 0x6e5d3) + '\x01';
                *(undefined4 *)(iVar9 + (iVar8 + 0x37) * 4) = 0xb;
              }
            }
            else if (iVar5 - 10U < 2) {
              iVar9 = DAT_0006e628 + 0x6e5c8;
              *(char *)(DAT_0006e628 + 0x6e5ed) = *(char *)(DAT_0006e628 + 0x6e5ed) + '\x01';
              *(int *)(iVar9 + (iVar8 + 0x37) * 4) = iVar5;
            }
            iVar9 = param_1 * 0x34 + DAT_0006e620 + 0x6e56a;
            *(undefined4 *)(iVar9 + 0x114) = 2;
            *(undefined4 *)(iVar9 + 0x118) = *(undefined4 *)(param_2 + 8);
            uVar3 = *(undefined4 *)(param_2 + 4);
            *(undefined4 *)(iVar9 + 0x130) = *(undefined4 *)(iVar9 + 300);
            *(undefined4 *)(iVar9 + 0x11c) = uVar3;
          }
        }
LAB_0006e40c:
        mapimachdep_UnlockApi();
        return local_7c;
      }
      switch(iVar5) {
      case 4:
      case 5:
      case 0xc:
        local_40 = 4;
        break;
      case 6:
        local_40 = 1;
        break;
      case 7:
        local_40 = 2;
        break;
      case 8:
        local_40 = 3;
        break;
      default:
        local_7c = -2;
        goto LAB_0006e40c;
      case 0xd:
      case 0xe:
        local_40 = 9;
        break;
      case 0xf:
        local_40 = 5;
      }
      iVar6 = DAT_0006e608 + 0x6e42c;
      iVar4 = param_1 * 0x34 + iVar6;
      local_44 = *(uint *)(param_2 + 0x10) & 0xfff00;
      local_34 = DAT_0006e610 + 0x6e452;
      local_3c = *(undefined4 *)(iVar4 + 0x120);
      local_38 = *(undefined4 *)(iVar4 + 0x124);
      local_30 = 0;
      local_2c = 0;
      local_7c = MaSmw_Open(*(uint *)(DAT_0006e60c + 0x6e43e + (iVar5 * 5 + iVar8) * 4),
                            (_MASMW_OPEN_PARAM *)&local_44);
      bVar11 = local_7c == 0;
      if (-1 < local_7c) {
        bVar11 = iVar5 == 0xc;
      }
      if (bVar11) {
        iVar4 = DAT_0006e614 + 0x6e484;
        *(undefined4 *)(iVar9 + 0x6edec) = 0;
LAB_0006e490:
        iVar2 = MaSmw_XMF_GetInfo((_tagmaXMF_Info *)(iVar9 + 0x6eddc),8,0,auStack_64);
        iVar10 = DAT_0006e618;
        if (-1 < iVar2) {
          if (iVar2 != 0x7fffffff) goto code_r0x0006e4b2;
          *(undefined4 *)(iVar9 + 0x6ee2c) = 0;
          *(undefined4 *)(iVar9 + 0x6ee30) = 0;
          iVar4 = DAT_0006e61c + 0x6e51c;
          while( true ) {
            iVar6 = MaSmw_XMF_GetInfo((_tagmaXMF_Info *)(iVar9 + 0x6eddc),9,0,
                                      (void *)(iVar10 + 0x6e516));
            if ((iVar6 < 0) || (iVar6 == 0x7fffffff)) break;
            local_70 = (void *)(iVar10 + 0x6e516);
            local_6c = iVar6;
            MaSmw_Ctrl(*(uint *)(iVar4 + (iVar8 + 0x3c) * 4),0x41,0,&local_70);
          }
        }
        goto LAB_0006e54c;
      }
      goto joined_r0x0006e408;
    }
  }
  mapimachdep_UnlockApi();
  return -8;
code_r0x0006e4b2:
  iVar10 = iVar6 + (*(int *)(iVar9 + 0x6ee34) + -1) * 0x14;
  puVar7 = *(undefined1 **)(iVar10 + 0xa18);
  if (puVar7 != (undefined1 *)0x0) {
    local_68 = (undefined1)*(undefined4 *)(iVar10 + 0xa28);
    local_67 = *puVar7;
    local_60 = iVar2;
    MaSmw_Ctrl(*(uint *)(iVar4 + (iVar8 + 0x3c) * 4),0x40,0,&local_68);
  }
  goto LAB_0006e490;
}

