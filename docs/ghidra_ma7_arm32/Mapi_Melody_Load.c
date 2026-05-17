/* Mapi_Melody_Load @ 0006da08 1658B */


/* YAMAHA::Mapi_Melody_Load(unsigned char*, unsigned int, MAPI_DATATYPE, unsigned char) */

int YAMAHA::Mapi_Melody_Load(uchar *param_1,uint param_2,int param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  _tagmaXMF_Info *p_Var7;
  uint uVar8;
  int iVar9;
  int local_40;
  int local_3c;
  uint local_38 [2];
  uchar *local_30;
  uint local_2c;
  
  local_40 = 0;
  local_3c = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  local_30 = (uchar *)0x0;
  local_2c = 0;
  mapimachdep_LockApi();
  if (*(char *)(DAT_0006e0c4 + 0x6da30) == '\0') {
    mapimachdep_UnlockApi();
    return -8;
  }
  if (*(int *)(DAT_0006e0c4 + 0x6da34) != 1) goto LAB_0006dae0;
  if ((param_4 & 0xd2) != 0) {
LAB_0006dac4:
    mapimachdep_UnlockApi();
    return -2;
  }
  if ((param_3 == 0) && (param_3 = FUN_00069b88(0,param_1,param_2,&local_40), param_3 == 0))
  goto switchD_0006db7c_caseD_1;
  iVar5 = DAT_0006e12c;
  if (param_1 == (uchar *)0x0 && param_3 != 7) goto LAB_0006dac4;
  if (*(int *)((int)&UINT_0006dba8 + DAT_0006e0c8 + 2) == 0) {
    if (*(int *)(DAT_0006e0c8 + 0x6dbde) == 0) {
      iVar4 = 1;
      goto LAB_0006db00;
    }
    if (*(int *)(DAT_0006e0c8 + 0x6dc12) != 0) {
      iVar2 = 1;
      goto LAB_0006da7e;
    }
    iVar4 = 1;
LAB_0006db10:
    if (*(int *)(DAT_0006e0d4 + 0x6dcfc) == 0) {
LAB_0006db20:
      if (*(int *)(DAT_0006e0d8 + 0x6dd40) == 0) goto LAB_0006db30;
      if (*(int *)(DAT_0006e0d8 + 0x6dd74) == 0) goto LAB_0006db40;
      iVar2 = 1;
LAB_0006e088:
      if (*(int *)((int)&DAT_0006e310 + DAT_0006e144) != 0) goto LAB_0006e0a8;
      if (iVar2 == 0) {
        iVar4 = 7;
      }
      goto LAB_0006db6a;
    }
    if (*(int *)(DAT_0006e0d4 + 0x6dd30) == 0) goto LAB_0006db30;
    iVar2 = 1;
LAB_0006e068:
    if (*(int *)(DAT_0006e140 + 0x6e2bc) != 0) goto LAB_0006e088;
    if (iVar2 == 0) {
      iVar4 = 6;
    }
LAB_0006db40:
    if ((*(int *)(DAT_0006e0e0 + 0x6ddc8) != 0) && (*(int *)(DAT_0006e0e0 + 0x6ddfc) != 0)) {
      iVar2 = 1;
LAB_0006db54:
      if (*(int *)(DAT_0006e0e4 + 0x6de44) == 0) {
        if (iVar2 == 0) {
          iVar4 = 9;
        }
      }
      else if (iVar2 == 0) goto LAB_0006df72;
    }
  }
  else {
    if (*(int *)(DAT_0006e0c8 + 0x6dbde) == 0) {
      iVar4 = 2;
LAB_0006db00:
      if (*(int *)(DAT_0006e0d0 + 0x6dcb8) == 0) goto LAB_0006db10;
      if (*(int *)(DAT_0006e0d0 + 0x6dcec) != 0) {
        iVar2 = 1;
        goto LAB_0006e048;
      }
      goto LAB_0006db20;
    }
    iVar2 = 0;
    if (*(int *)(DAT_0006e0c8 + 0x6dc12) == 0) {
      iVar4 = 3;
      goto LAB_0006db10;
    }
LAB_0006da7e:
    iVar4 = iVar2;
    if (*(int *)(DAT_0006e0cc + 0x6dc6c) == 0) {
      if (iVar2 == 0) {
        iVar4 = 4;
      }
      goto LAB_0006db20;
    }
LAB_0006e048:
    if (*(int *)(DAT_0006e13c + 0x6e268) != 0) goto LAB_0006e068;
    if (iVar2 == 0) {
      iVar4 = 5;
    }
LAB_0006db30:
    if (*(int *)(DAT_0006e0dc + 0x6dd84) == 0) goto LAB_0006db40;
    if (*(int *)(DAT_0006e0dc + 0x6ddb8) != 0) {
      iVar2 = 1;
LAB_0006e0a8:
      if (*(int *)(DAT_0006e148 + 0x6e364) == 0) {
        if (iVar2 == 0) {
          iVar4 = 8;
        }
        goto LAB_0006db6a;
      }
      goto LAB_0006db54;
    }
  }
LAB_0006db6a:
  uVar8 = param_3 - 1;
  switch(uVar8) {
  case 0:
    if ((*(char *)(DAT_0006e12c + 0x6df59) != '\0') ||
       ((*(uint *)(DAT_0006e12c + 0x6df58) & 0xff00ff) != 0)) goto LAB_0006df72;
    iVar2 = SmafMms_Load(param_1,param_2,(uchar)param_4);
    if (iVar2 < 0) {
LAB_0006e024:
      iVar6 = 1;
    }
    else {
      *(int *)(iVar5 + 0x6df44) = iVar2;
      *(int *)(iVar5 + 0x6df48) = iVar4;
      iVar6 = 1;
      local_38[1] = 5;
    }
    break;
  default:
switchD_0006db7c_caseD_1:
    if (local_40 == 0) {
      iVar5 = -0x10;
    }
    else {
      iVar5 = -0x12;
    }
    mapimachdep_UnlockApi();
    return iVar5;
  case 3:
    if ((*(char *)(DAT_0006e128 + 0x6df39) != '\0') ||
       ((*(uint *)(DAT_0006e128 + 0x6df38) & 0xff00ff) != 0)) goto LAB_0006df72;
    iVar6 = 1;
    local_38[1] = 4;
    iVar2 = 0;
    break;
  case 4:
    if (((*(char *)(DAT_0006e124 + 0x6df11) != '\0') || (3 < *(byte *)(DAT_0006e124 + 0x6df12))) ||
       (*(char *)(DAT_0006e124 + 0x6df10) != '\0')) goto LAB_0006df72;
    iVar6 = 2;
    local_38[1] = 4;
    iVar2 = 0;
    break;
  case 5:
    if (3 < *(byte *)(DAT_0006e120 + 0x6def7)) goto LAB_0006df72;
    iVar6 = 3;
    local_38[1] = 1;
    iVar2 = 0;
    break;
  case 6:
    if (((*(char *)(DAT_0006e11c + 0x6decd) != '\0') || (3 < *(byte *)(DAT_0006e11c + 0x6dece))) ||
       (*(char *)(DAT_0006e11c + 0x6decc) != '\0')) goto LAB_0006df72;
    local_38[1] = 2;
    iVar6 = 2;
    iVar2 = 0;
    break;
  case 7:
    if (((*(char *)(DAT_0006e118 + 0x6dea3) != '\0') || (3 < *(byte *)(DAT_0006e118 + 0x6dea4))) ||
       (*(char *)(DAT_0006e118 + 0x6dea2) != '\0')) goto LAB_0006df72;
    iVar6 = 2;
    local_38[1] = 3;
    iVar2 = 0;
    break;
  case 0xb:
    if ((*(char *)(DAT_0006e114 + 0x6de43) != '\0') ||
       ((*(uint *)(DAT_0006e114 + 0x6de42) & 0xff00ff) != 0)) goto LAB_0006df72;
    p_Var7 = (_tagmaXMF_Info *)(DAT_0006e114 + 0x6e7d6);
    local_38[1] = 4;
    iVar2 = MaSmw_XMF_Open(p_Var7,param_1,param_2);
    if (iVar2 < 0) goto LAB_0006e024;
    iVar5 = MaSmw_XMF_GetInfo(p_Var7,3,0,(void *)0x0);
    iVar6 = 1;
    param_1 = param_1 + iVar5;
    param_2 = MaSmw_XMF_GetInfo(p_Var7,4,0,(void *)0x0);
    break;
  case 0xc:
    if ((*(char *)(DAT_0006e110 + 0x6de1b) != '\0') ||
       ((*(uint *)(DAT_0006e110 + 0x6de1a) & 0xff00ff) != 0)) goto LAB_0006df72;
    iVar6 = 1;
    local_38[1] = 9;
    iVar2 = 0;
    break;
  case 0xd:
    if (((*(char *)(DAT_0006e10c + 0x6ddeb) != '\0') || (3 < *(byte *)(DAT_0006e10c + 0x6ddec))) ||
       (*(char *)(DAT_0006e10c + 0x6ddea) != '\0')) goto LAB_0006df72;
    iVar6 = 2;
    local_38[1] = 9;
    iVar2 = 0;
    break;
  case 0xe:
    if ((*(char *)(DAT_0006e108 + 0x6ddc5) != '\0') || (*(char *)(DAT_0006e108 + 0x6ddc6) != '\0'))
    goto LAB_0006df72;
    iVar6 = 1;
    local_38[1] = 5;
    iVar2 = 0;
    break;
  case 0xf:
    if (((*(uint *)(DAT_0006e0e8 + 0x6dbe4) & 0xff00ff) != 0) ||
       ((*(char *)(DAT_0006e0e8 + 0x6dbe5) != '\0' && (*(int *)(DAT_0006e0e8 + 0x6dc08) != 0xf))))
    goto LAB_0006df72;
    param_4 = param_4 | 0x80;
    iVar2 = SmafMms_Load(param_1,param_2,(uchar)param_4);
    iVar5 = DAT_0006e0ec;
    if (iVar2 < 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = 0;
      local_38[1] = 5;
      *(int *)(DAT_0006e0ec + 0x6dc14) = iVar2;
      *(int *)(iVar5 + 0x6dc18) = iVar4;
    }
  }
  iVar9 = DAT_0006e0f0 + 0x6dc22 + iVar6 * 0x14;
  iVar5 = 1 - *(uint *)(iVar9 + 0x2c);
  if (1 < *(uint *)(iVar9 + 0x2c)) {
    iVar5 = 0;
  }
  iVar3 = iVar5;
  if (iVar5 == 0 && *(int *)(iVar9 + 0x30) == 0) {
    iVar5 = 2;
    iVar3 = 1;
  }
  if (iVar3 == 0 && *(int *)(iVar9 + 0x34) == 0) {
    iVar3 = 1;
    iVar5 = 3;
  }
  if (iVar3 == 0 && *(int *)(iVar9 + 0x38) == 0) {
    iVar3 = 1;
    iVar5 = 4;
  }
  if (iVar3 == 0) {
LAB_0006df72:
    mapimachdep_UnlockApi();
    return -3;
  }
  if (-1 < iVar2) {
    if ((0xf < uVar8) || ((iVar3 << (uVar8 & 0xff) & 0x8601U) == 0)) {
      if ((param_4 & 1) == 0) {
        local_38[0] = 2;
      }
      else {
        local_38[0] = 0;
      }
      local_38[0] = local_38[0] | ((param_4 & 0xf) >> 2) << 4;
      local_30 = param_1;
      local_2c = param_2;
      iVar2 = MaSmw_Check(*(uint *)(DAT_0006e0f4 + 0x6dca4 + (param_3 * 5 + iVar5) * 4),
                          (_MASMW_CHECK_PARAM *)local_38);
      if (iVar2 < 0) goto LAB_0006dd94;
    }
    iVar9 = DAT_0006e130;
    if (param_3 == 0xf) {
      iVar2 = FUN_0006a70c(0xf,*(undefined4 *)(DAT_0006e138 + 0x6e014 + (iVar5 + 0x4b) * 4));
      if (iVar2 < 0) goto LAB_0006dd94;
    }
    else if (((param_3 == 0x10) || (param_3 == 1)) &&
            (iVar2 = FUN_0006a70c(param_3,*(undefined4 *)(DAT_0006e130 + 0x6dfa4)), iVar2 < 0)) {
      SmafMms_Unload(*(int *)(iVar9 + 0x6dfa4));
      *(undefined4 *)(iVar9 + 0x6dfa4) = 0;
      *(undefined4 *)(iVar9 + 0x6dfa8) = 0;
      goto LAB_0006dd94;
    }
    iVar2 = DAT_0006e0f8;
    if (param_3 != 7) {
      if (param_3 == 1 || param_3 == 0x10) {
        iVar9 = SmafMms_Control(*(int *)(DAT_0006e0f8 + 0x6dd0c),0x10100005,(void *)0x0);
        if (iVar9 < 1) {
          SmafMms_Unload(*(int *)(iVar2 + 0x6dd0c));
          *(undefined4 *)(iVar2 + 0x6dd0c) = 0;
          *(undefined4 *)(iVar2 + 0x6dd10) = 0;
LAB_0006dae0:
          mapimachdep_UnlockApi();
          return -1;
        }
      }
      else {
        iVar9 = FUN_0006a064(param_3,iVar5,0x10100005,0);
        if (iVar9 < 1) goto LAB_0006dae0;
      }
    }
    else {
      iVar9 = 0;
    }
    if (param_3 == 1) {
      local_3c = FUN_0006b07c(param_1,param_2,1,iVar5);
      iVar2 = DAT_0006e134;
      Mas_Load(param_1,param_2,0,*(int *)(DAT_0006e134 + 0x6dfea),&local_3c);
      *(int *)(iVar2 + 0x6dff6) = local_3c;
    }
    else if (param_3 == 0xf) {
      local_3c = FUN_0006b07c(param_1,param_2,0xf,iVar5);
      Mas_Load(param_1,param_2,1,*(int *)(DAT_0006e0fc + 0x6dd36 + (iVar5 + 0x4b) * 4),&local_3c);
      *(int *)(DAT_0006e100 + 0x6dd66) = local_3c;
    }
    iVar2 = DAT_0006e104 + 0x6dd60;
    iVar3 = iVar4 * 0x34 + iVar2;
    cVar1 = *(char *)(iVar6 + iVar2 + 0x1c);
    *(int *)(iVar2 + (iVar6 * 5 + iVar5 + 10) * 4) = param_3;
    *(char *)(iVar6 + iVar2 + 0x1c) = cVar1 + '\x01';
    *(uchar **)(iVar3 + 0x120) = param_1;
    *(uint *)(iVar3 + 0x124) = param_2;
    *(int *)(iVar3 + 300) = iVar9;
    *(int *)(iVar3 + 0x10c) = param_3;
    *(int *)(iVar3 + 0x110) = iVar5;
    *(undefined4 *)(iVar3 + 0x114) = 1;
    iVar2 = iVar4;
  }
LAB_0006dd94:
  mapimachdep_UnlockApi();
  return iVar2;
}

