/* Mapi_DeviceControlEx @ 0006c5b8 4926B */


/* YAMAHA::Mapi_DeviceControlEx(unsigned int, unsigned int, void*) */

uint YAMAHA::Mapi_DeviceControlEx(uint param_1,uint param_2,void *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined1 local_c1;
  char local_c0;
  char local_bf;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined1 local_b0;
  undefined1 local_af;
  undefined1 local_ae;
  undefined1 local_ad;
  uint local_ac;
  uint local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_ac = 0;
  local_c1 = 0;
  local_a8 = 0;
  mapimachdep_LockApi();
  iVar5 = DAT_0006da00;
  iVar4 = DAT_0006d288;
  iVar3 = DAT_0006d274;
  iVar2 = DAT_0006d268;
  iVar7 = DAT_0006d25c;
  if (*(char *)(DAT_0006d248 + 0x6c5da) == '\0') {
    mapimachdep_UnlockApi();
    return 0xfffffff8;
  }
  if (param_1 < 0x10002) {
    if ((param_1 < 0x10000) && (2 < param_1 - 5)) goto LAB_0006c678;
LAB_0006c62a:
    if (param_1 == 0x10018) {
      local_ac = *(uint *)param_3;
      if (param_2 == 0) {
        uVar6 = MaSmw_DevCtrl(9,local_ac,0,(void *)0x0);
      }
      else {
        if (param_2 != 1) goto LAB_0006c7dc;
        uVar6 = MaSmw_DevCtrl(0xd,local_ac,0,(void *)0x0);
      }
      if (-1 < (int)uVar6) {
        *(uint *)(DAT_0006d9fc + param_2 * 4 + 0x6ddea) = local_ac;
      }
      goto LAB_0006c612;
    }
    if (param_1 < 0x10019) {
      if (param_1 == 0x10002) {
        uVar6 = MaSmw_DevCtrl(3,0,0,param_3);
        goto LAB_0006c612;
      }
      if (param_1 < 0x10003) {
        if (param_1 == 5) {
          uVar6 = MaSmw_DevCtrl(0x27,param_2,0,(void *)0x0);
          goto LAB_0006c612;
        }
        if (param_1 < 6) {
          if (param_1 == 2) {
            uVar6 = MaSmw_DevCtrl(0x1f,0,0,param_3);
            goto LAB_0006c612;
          }
          if (param_1 < 3) {
            if (param_1 == 1) {
              MaSmw_DevCtrl(5,0xfc,0,&local_c1);
              *(undefined1 *)param_3 = local_c1;
              MaSmw_DevCtrl(5,0xfd,0,&local_c1);
              *(undefined1 *)((int)param_3 + 1) = local_c1;
              MaSmw_DevCtrl(5,0x18,0,&local_c1);
              uVar6 = 0;
              goto LAB_0006c612;
            }
          }
          else {
            if (param_1 == 3) {
              uVar6 = MaSmw_DevCtrl(0x61,0,0,param_3);
              goto LAB_0006c612;
            }
            if (param_1 == 4) {
              uVar6 = MaSmw_DevCtrl(0x26,param_2,0,param_3);
              goto LAB_0006c612;
            }
          }
        }
        else {
          if (param_1 == 7) {
            uVar6 = MaSmw_DevCtrl(0x2c,param_2,0,param_3);
            goto LAB_0006c612;
          }
          if (param_1 < 7) {
            uVar6 = MaSmw_DevCtrl(0x28,0,0,&local_a8);
            if (-1 < (int)uVar6) {
              uVar6 = local_a8;
            }
            goto LAB_0006c612;
          }
          if (param_1 == 0x10000) {
            uVar6 = MaSmw_DevCtrl(0,0,0,(void *)0x0);
            iVar7 = DAT_0006d28c;
            if (uVar6 == 0) {
              *(undefined1 *)(DAT_0006d28c + 0x6d974) = 1;
              *(undefined4 *)(iVar7 + 0x6d97c) = 0x400;
              *(undefined4 *)(iVar7 + 0x6d990) = 0x1000;
              *(undefined4 *)(iVar7 + 0x6d9a4) = 0x4000;
              *(undefined4 *)(iVar7 + 0x6d95c) = 0;
              *(undefined4 *)(iVar7 + 0x6d960) = 0;
              *(undefined4 *)(iVar7 + 0x6d964) = 0;
              *(undefined4 *)(iVar7 + 0x6d968) = 0;
              *(undefined4 *)(iVar7 + 0x6d96c) = 0;
              *(undefined4 *)(iVar7 + 0x6d970) = 0;
              *(undefined4 *)(iVar7 + 0x6d954) = 0;
              *(undefined1 *)(iVar7 + 0x6d975) = 0;
              *(undefined1 *)(iVar7 + 0x6d976) = 0;
              *(undefined1 *)(iVar7 + 0x6d977) = 0;
              *(undefined4 *)(iVar7 + 0x6d958) = 0;
              *(undefined4 *)(iVar7 + 0x6d978) = 0;
              *(undefined4 *)(iVar7 + 0x6d980) = 0;
              *(undefined4 *)(iVar7 + 0x6d984) = 0;
              *(undefined4 *)(iVar7 + 0x6d988) = 0;
              *(undefined4 *)(iVar7 + 0x6d98c) = 0;
              *(undefined4 *)(iVar7 + 0x6d994) = 0;
              *(undefined4 *)(iVar7 + 0x6d998) = 0;
              *(undefined4 *)(iVar7 + 0x6d99c) = 0;
              *(undefined4 *)(iVar7 + 0x6d9a0) = 0;
              *(undefined4 *)(iVar7 + 0x6d9a8) = 0;
              *(undefined4 *)(iVar7 + 0x6d9ac) = 0;
              *(undefined4 *)(iVar7 + 0x6d9b0) = 0;
              *(undefined4 *)(iVar7 + 0x6d9b4) = 0;
              *(undefined4 *)(iVar7 + 0x6d9b8) = 0;
              *(undefined4 *)(iVar7 + 0x6d9c0) = 0;
              *(undefined4 *)(iVar7 + 0x6d9c4) = 0;
              *(undefined4 *)(iVar7 + 0x6d9c8) = 0;
              *(undefined4 *)(iVar7 + 0x6d9bc) = 0x10000000;
              *(undefined4 *)(iVar7 + 0x6d9cc) = 0;
              *(undefined4 *)(iVar7 + 0x6d9d0) = 0x10000000;
              *(undefined4 *)(iVar7 + 0x6d9d4) = 0;
              *(undefined4 *)(iVar7 + 0x6d9d8) = 0;
              *(undefined4 *)(iVar7 + 0x6d9dc) = 0;
              *(undefined4 *)(iVar7 + 0x6d9e0) = 0;
              *(undefined4 *)(iVar7 + 0x6d9e4) = 0x10000000;
              *(undefined4 *)(iVar7 + 0x6d9e8) = 0;
              *(undefined4 *)(iVar7 + 0x6d9ec) = 0;
              *(undefined4 *)((int)&DAT_0006d9f0 + iVar7) = 0;
              *(undefined4 *)((int)&DAT_0006d9f4 + iVar7) = 0;
              *(undefined4 *)((int)&DAT_0006d9f8 + iVar7) = 0x10000000;
              *(undefined4 *)((int)&DAT_0006d9fc + iVar7) = 0;
              *(undefined4 *)((int)&DAT_0006da00 + iVar7) = 0;
              *(undefined4 *)((int)&DAT_0006da04 + iVar7) = 0;
              *(undefined4 *)(Mapi_Melody_Load + iVar7) = 0;
              *(undefined4 *)(iVar7 + 0x6da0c) = 0x10000000;
              *(undefined4 *)(iVar7 + 0x6da10) = 0;
              *(undefined4 *)(iVar7 + 0x6da14) = 0;
              *(undefined4 *)(iVar7 + 0x6da18) = 0;
              *(undefined4 *)(iVar7 + 0x6da1c) = 0;
              *(undefined4 *)(iVar7 + 0x6da20) = 0x10000000;
              *(undefined4 *)(iVar7 + 0x6da24) = 0;
              *(undefined4 *)(iVar7 + 0x6da28) = 0;
              *(undefined4 *)(iVar7 + 0x6da2c) = 0;
              *(undefined4 *)(iVar7 + 0x6da30) = 0;
              *(undefined4 *)(iVar7 + 0x6da34) = 0x10000000;
              *(undefined4 *)(iVar7 + 0x6da38) = 0;
              *(undefined4 *)(iVar7 + 0x6da3c) = 0;
              *(undefined4 *)(iVar7 + 0x6da40) = 0;
              *(undefined4 *)(iVar7 + 0x6da44) = 0;
              *(undefined1 *)(iVar7 + 0x6da48) = 0;
              *(undefined1 *)(iVar7 + 0x6da49) = 0;
              *(undefined1 *)(iVar7 + 0x6da4a) = 0;
              *(undefined1 *)(iVar7 + 0x6da4b) = 0;
              *(undefined1 *)(iVar7 + 0x6da4c) = 0;
              *(undefined1 *)(iVar7 + 0x6da54) = 0;
              *(undefined1 *)(iVar7 + 0x6da55) = 0;
              *(undefined4 *)(iVar7 + 0x6da50) = 48000;
            }
            goto LAB_0006c612;
          }
          if (param_1 == 0x10001) {
            uVar6 = MaSmw_DevCtrl(7,0,0,&local_ac);
            if (-1 < (int)uVar6) {
              uVar6 = local_ac;
            }
            goto LAB_0006c612;
          }
        }
      }
      else {
        if (param_1 == 0x10013) {
          uVar6 = 0;
          *(undefined4 *)param_3 = *(undefined4 *)(DAT_0006d9f8 + 0x6dd2e);
          goto LAB_0006c612;
        }
        if (param_1 < 0x10014) {
          if (param_1 == 0x10010) {
            if ((0x74 < (byte)(*(char *)param_3 + 0x60U)) ||
               (0x74 < (byte)(*(char *)((int)param_3 + 1) + 0x60U))) {
LAB_0006c67c:
              mapimachdep_UnlockApi();
              return 0xfffffffe;
            }
            local_ac = (int)*(char *)param_3 + 0x60;
            uVar6 = (int)*(char *)((int)param_3 + 1) + 0x60;
            switch(param_2) {
            case 0:
              uVar6 = MaSmw_DevCtrl(200,local_ac,0,(void *)0x0);
              break;
            case 1:
              uVar6 = MaSmw_DevCtrl(0xc9,local_ac,0,(void *)0x0);
              break;
            case 2:
              uVar6 = MaSmw_DevCtrl(0xca,local_ac,uVar6,(void *)0x0);
              break;
            case 3:
              uVar6 = MaSmw_DevCtrl(0xcb,local_ac,0,(void *)0x0);
              break;
            case 4:
              uVar6 = MaSmw_DevCtrl(0xcc,local_ac,0,(void *)0x0);
              break;
            case 5:
              uVar6 = MaSmw_DevCtrl(0xcd,local_ac,0,(void *)0x0);
              break;
            case 6:
              uVar6 = MaSmw_DevCtrl(0xce,local_ac,0,(void *)0x0);
              break;
            case 7:
              uVar6 = MaSmw_DevCtrl(0xcf,local_ac,uVar6,(void *)0x0);
              break;
            case 8:
              uVar6 = MaSmw_DevCtrl(0xd0,local_ac,0,(void *)0x0);
              break;
            case 9:
              uVar6 = MaSmw_DevCtrl(0xd1,local_ac,uVar6,(void *)0x0);
              break;
            case 10:
              uVar6 = MaSmw_DevCtrl(0xd2,local_ac,0,(void *)0x0);
              break;
            case 0xb:
              uVar6 = MaSmw_DevCtrl(0xd3,local_ac,0,(void *)0x0);
              break;
            case 0xc:
              uVar6 = MaSmw_DevCtrl(0xd4,local_ac,0,(void *)0x0);
              break;
            case 0xd:
              uVar6 = MaSmw_DevCtrl(0xd5,local_ac,uVar6,(void *)0x0);
              break;
            case 0xe:
              uVar6 = MaSmw_DevCtrl(0xd6,local_ac,uVar6,(void *)0x0);
              break;
            case 0xf:
              uVar6 = MaSmw_DevCtrl(0xd7,local_ac,0,(void *)0x0);
              break;
            default:
              uVar6 = 0xfffffffe;
            }
            goto LAB_0006c612;
          }
          if (param_1 < 0x10011) {
            if (param_1 == 0x10003) {
              uVar6 = MaSmw_DevCtrl(0x2a,0,0,param_3);
              goto LAB_0006c612;
            }
          }
          else {
            if (param_1 == 0x10011) {
              uVar6 = MaSmw_DevCtrl(0xf0,param_2,0,&local_c0);
              if (-1 < (int)uVar6) {
                *(char *)param_3 = local_c0 + -0x60;
                *(char *)((int)param_3 + 1) = local_bf + -0x60;
              }
              goto LAB_0006c612;
            }
            if (param_1 == 0x10012) {
              local_ac = *(uint *)param_3;
              switch(local_ac) {
              case 0:
              case 3:
                uVar6 = 0;
                local_ac = 0;
                break;
              default:
                uVar6 = 0xfffffffe;
                goto LAB_0006c612;
              case 6:
                uVar6 = 1;
                local_ac = 1;
                break;
              case 9:
                uVar6 = 2;
                local_ac = 2;
                break;
              case 0xc:
                uVar6 = 3;
                local_ac = 3;
              }
              uVar6 = MaSmw_DevCtrl(0x16,uVar6,0,(void *)0x0);
              if (uVar6 == 0) {
                *(undefined4 *)(DAT_0006d258 + 0x6d300) = *(undefined4 *)param_3;
              }
              goto LAB_0006c612;
            }
          }
        }
        else {
          if (param_1 == 0x10015) {
            uVar6 = MaSmw_DevCtrl(0xf1,param_2,0,param_3);
            goto LAB_0006c612;
          }
          if (param_1 < 0x10015) {
            local_ac = *(uint *)param_3;
            switch(param_2) {
            case 1:
              uVar6 = MaSmw_DevCtrl(0xdc,local_ac,0,(void *)0x0);
              break;
            case 2:
              uVar6 = MaSmw_DevCtrl(0xdd,local_ac,0,(void *)0x0);
              break;
            case 3:
              uVar6 = MaSmw_DevCtrl(0xde,local_ac,0,(void *)0x0);
              break;
            case 4:
              uVar6 = MaSmw_DevCtrl(0xdf,local_ac,0,(void *)0x0);
              break;
            case 5:
              uVar6 = MaSmw_DevCtrl(0xe0,local_ac,0,(void *)0x0);
              break;
            case 6:
              uVar6 = MaSmw_DevCtrl(0xe1,local_ac,0,(void *)0x0);
              break;
            case 7:
              uVar6 = MaSmw_DevCtrl(0xe2,local_ac,0,(void *)0x0);
              break;
            case 8:
              uVar6 = MaSmw_DevCtrl(0xe3,local_ac,0,(void *)0x0);
              break;
            default:
              uVar6 = 0xfffffffe;
            }
            goto LAB_0006c612;
          }
          if (param_1 == 0x10016) {
            uVar6 = MaSmw_DevCtrl(0xe6,param_2,*(uint *)param_3,(void *)0x0);
            goto LAB_0006c612;
          }
          if (param_1 == 0x10017) {
            uVar6 = MaSmw_DevCtrl(0xf2,param_2,0,param_3);
            goto LAB_0006c612;
          }
        }
      }
    }
    else {
      if (param_1 == 0x10032) {
        uVar6 = 0;
        *(undefined1 *)param_3 = *(undefined1 *)(DAT_0006da00 + 0x6de2a);
        *(undefined1 *)((int)param_3 + 1) = *(undefined1 *)(iVar5 + 0x6de2b);
        *(undefined1 *)((int)param_3 + 2) = *(undefined1 *)(iVar5 + 0x6de2c);
        *(undefined1 *)((int)param_3 + 3) = *(undefined1 *)(iVar5 + 0x6de2d);
        goto LAB_0006c612;
      }
      if (param_1 < 0x10033) {
        if (param_1 == 0x1001d) {
          if (param_2 < 2) {
            uVar6 = 0;
            *(undefined4 *)param_3 = *(undefined4 *)(DAT_0006d9f4 + param_2 * 4 + 0x6dbe6);
            goto LAB_0006c612;
          }
        }
        else {
          if (0x1001d < param_1) {
            if (param_1 == 0x10029) {
              switch(param_2) {
              case 0:
                local_ac = *(uint *)param_3;
                uVar6 = MaSmw_DevCtrl(0x48,local_ac,0,(void *)0x0);
                if (-1 < (int)uVar6) {
                  uVar6 = MaSmw_DevCtrl(0x58,0,0,(void *)0x0);
                }
                break;
              case 1:
                uVar6 = MaSmw_DevCtrl(0x49,0,0,param_3);
                break;
              case 2:
                local_ac = *(uint *)param_3 & 0xff;
                uVar6 = MaSmw_DevCtrl(0x1d,local_ac,(*(uint *)param_3 & 0xffff) >> 8,(void *)0x0);
                if (uVar6 == 0) {
                  *(undefined4 *)(DAT_0006d284 + 0x6d8b0) = *(undefined4 *)param_3;
                }
                break;
              case 3:
                uVar6 = 0;
                *(undefined4 *)param_3 = *(undefined4 *)(DAT_0006d280 + 0x6d884);
                break;
              case 4:
                uVar6 = *(uint *)param_3;
                if (uVar6 == 0) {
                  local_a4 = 0x400;
                  local_90 = 0x1000;
                  local_7c = 0x4000;
                  local_a0 = 0;
                  local_9c = 0;
                  local_98 = 0;
                  local_94 = 0;
                  local_8c = 0;
                  local_88 = 0;
                  local_84 = 0;
                  local_80 = 0;
                  local_78 = 0;
                  local_74 = 0;
                  local_70 = 0;
                  local_6c = 0;
                }
                else if (uVar6 == 2) {
                  puVar9 = &local_94;
                  do {
                    puVar9[-4] = 0x10000000;
                    puVar9[-3] = 0;
                    puVar9[-2] = 0;
                    puVar9[-1] = 0;
                    puVar10 = puVar9 + 5;
                    *puVar9 = 0;
                    puVar9 = puVar10;
                  } while (puVar10 != &local_58);
                }
                else {
                  if ((uVar6 & 0xfffffffd) != 1) {
                    uVar6 = 0xfffffffe;
                    break;
                  }
                  local_a4 = *(undefined4 *)((int)param_3 + 4);
                  local_a0 = *(undefined4 *)((int)param_3 + 8);
                  local_94 = *(undefined4 *)((int)param_3 + 0x14);
                  local_90 = *(undefined4 *)((int)param_3 + 0x18);
                  local_8c = *(undefined4 *)((int)param_3 + 0x1c);
                  local_9c = *(undefined4 *)((int)param_3 + 0xc);
                  local_98 = *(undefined4 *)((int)param_3 + 0x10);
                  local_84 = *(undefined4 *)((int)param_3 + 0x24);
                  local_88 = *(undefined4 *)((int)param_3 + 0x20);
                  local_70 = *(undefined4 *)((int)param_3 + 0x38);
                  local_6c = *(undefined4 *)((int)param_3 + 0x3c);
                  local_80 = *(undefined4 *)((int)param_3 + 0x28);
                  local_7c = *(undefined4 *)((int)param_3 + 0x2c);
                  local_78 = *(undefined4 *)((int)param_3 + 0x30);
                  local_74 = *(undefined4 *)((int)param_3 + 0x34);
                }
                local_ac = uVar6 & 1;
                if (*(int *)(DAT_0006d278 + 0x6d814) != 0) {
                  local_ac = 2;
                }
                MaSmw_DevCtrl(0x2b,local_ac,0,(void *)0x0);
                if ((*(byte *)param_3 & 2) == 0) {
                  uVar8 = 0;
                }
                else {
                  uVar8 = 3;
                }
                uVar6 = MaSmw_DevCtrl(0x1e,0,uVar8,&local_a4);
                if (((-1 < (int)uVar6) &&
                    (uVar6 = MaSmw_DevCtrl(0x1e,0,uVar8 + 1,&local_90), -1 < (int)uVar6)) &&
                   (uVar6 = MaSmw_DevCtrl(0x1e,0,uVar8 + 2,&local_7c), iVar7 = DAT_0006d27c,
                   -1 < (int)uVar6)) {
                  *(undefined4 *)(DAT_0006d27c + 0x6d83a) = *(undefined4 *)param_3;
                  *(undefined4 *)(iVar7 + 0x6d83e) = *(undefined4 *)((int)param_3 + 4);
                  *(undefined4 *)(iVar7 + 0x6d842) = *(undefined4 *)((int)param_3 + 8);
                  *(undefined4 *)(iVar7 + 0x6d846) = *(undefined4 *)((int)param_3 + 0xc);
                  *(undefined4 *)(iVar7 + 0x6d84a) = *(undefined4 *)((int)param_3 + 0x10);
                  *(undefined4 *)(iVar7 + 0x6d84e) = *(undefined4 *)((int)param_3 + 0x14);
                  *(undefined4 *)(iVar7 + 0x6d852) = *(undefined4 *)((int)param_3 + 0x18);
                  *(undefined4 *)(iVar7 + 0x6d856) = *(undefined4 *)((int)param_3 + 0x1c);
                  *(undefined4 *)(iVar7 + 0x6d85a) = *(undefined4 *)((int)param_3 + 0x20);
                  *(undefined4 *)(iVar7 + 0x6d85e) = *(undefined4 *)((int)param_3 + 0x24);
                  *(undefined4 *)(iVar7 + 0x6d862) = *(undefined4 *)((int)param_3 + 0x28);
                  *(undefined4 *)(iVar7 + 0x6d866) = *(undefined4 *)((int)param_3 + 0x2c);
                  *(undefined4 *)(iVar7 + 0x6d86a) = *(undefined4 *)((int)param_3 + 0x30);
                  *(undefined4 *)(iVar7 + 0x6d86e) = *(undefined4 *)((int)param_3 + 0x34);
                  *(undefined4 *)(iVar7 + 0x6d872) = *(undefined4 *)((int)param_3 + 0x38);
                  *(undefined4 *)(iVar7 + 0x6d876) = *(undefined4 *)((int)param_3 + 0x3c);
                }
                break;
              case 5:
                uVar6 = 0;
                *(undefined4 *)param_3 = *(undefined4 *)(DAT_0006d274 + 0x6d730);
                *(undefined4 *)((int)param_3 + 4) = *(undefined4 *)(iVar3 + 0x6d734);
                *(undefined4 *)((int)param_3 + 8) = *(undefined4 *)(iVar3 + 0x6d738);
                *(undefined4 *)((int)param_3 + 0xc) = *(undefined4 *)(iVar3 + 0x6d73c);
                *(undefined4 *)((int)param_3 + 0x10) = *(undefined4 *)(iVar3 + 0x6d740);
                *(undefined4 *)((int)param_3 + 0x14) = *(undefined4 *)(iVar3 + 0x6d744);
                *(undefined4 *)((int)param_3 + 0x18) = *(undefined4 *)(iVar3 + 0x6d748);
                *(undefined4 *)((int)param_3 + 0x1c) = *(undefined4 *)(iVar3 + 0x6d74c);
                *(undefined4 *)((int)param_3 + 0x20) = *(undefined4 *)(iVar3 + 0x6d750);
                *(undefined4 *)((int)param_3 + 0x24) = *(undefined4 *)(iVar3 + 0x6d754);
                *(undefined4 *)((int)param_3 + 0x28) = *(undefined4 *)(iVar3 + 0x6d758);
                *(undefined4 *)((int)param_3 + 0x2c) = *(undefined4 *)(iVar3 + 0x6d75c);
                *(undefined4 *)((int)param_3 + 0x30) = *(undefined4 *)(iVar3 + 0x6d760);
                *(undefined4 *)((int)param_3 + 0x34) = *(undefined4 *)(iVar3 + 0x6d764);
                *(undefined4 *)((int)param_3 + 0x38) = *(undefined4 *)(iVar3 + 0x6d768);
                *(undefined4 *)((int)param_3 + 0x3c) = *(undefined4 *)(iVar3 + 0x6d76c);
                break;
              case 6:
                local_ac = *(uint *)param_3;
                uVar6 = MaSmw_DevCtrl(0x46,local_ac,0,(void *)0x0);
                if (-1 < (int)uVar6) {
                  uVar6 = MaSmw_DevCtrl(0x58,0,0,(void *)0x0);
                }
                break;
              case 7:
                uVar6 = MaSmw_DevCtrl(0x47,0,0,param_3);
                break;
              case 8:
                uVar6 = MaSmw_DevCtrl(0x21,0,0,param_3);
                break;
              case 9:
                uVar6 = MaSmw_DevCtrl(0x22,0,0,param_3);
                break;
              case 10:
                if ((0x74 < (byte)(*(char *)param_3 + 0x60U)) ||
                   (0x74 < (byte)(*(char *)((int)param_3 + 1) + 0x60U))) goto LAB_0006c67c;
                uVar6 = (uint)*(char *)param_3;
                if ((int)uVar6 < 0x12) {
                  if ((int)uVar6 < 0xc) {
                    local_b7 = 5 < (int)uVar6;
                  }
                  else {
                    local_b7 = 2;
                  }
                }
                else {
                  local_b7 = 3;
                }
                uVar8 = (uint)*(char *)((int)param_3 + 1);
                if ((int)uVar8 < 0x12) {
                  if ((int)uVar8 < 0xc) {
                    local_b5 = 5 < (int)uVar8;
                  }
                  else {
                    local_b5 = 2;
                  }
                }
                else {
                  local_b5 = 3;
                }
                local_b6 = (undefined1)
                           *(undefined4 *)
                            (DAT_0006d26c + 0x6cdc0 +
                             ((uVar8 & (int)uVar8 >> 0x1f) + 0x60 & 0xff) * 4 + 0x1b8);
                local_b8 = (undefined1)
                           *(undefined4 *)
                            (DAT_0006d26c + 0x6cdc0 +
                             ((uVar6 & (int)uVar6 >> 0x1f) + 0x60 & 0xff) * 4 + 0x1b8);
                uVar6 = MaSmw_DevCtrl(0x24,0,0,&local_b8);
                iVar7 = DAT_0006d270;
                if (-1 < (int)uVar6) {
                  *(undefined1 *)(DAT_0006d270 + 0x6d79c) = *(undefined1 *)param_3;
                  *(undefined1 *)(iVar7 + 0x6d79d) = *(undefined1 *)((int)param_3 + 1);
                }
                break;
              case 0xb:
                uVar6 = 0;
                *(undefined1 *)param_3 = *(undefined1 *)(DAT_0006d268 + 0x6d6ea);
                *(undefined1 *)((int)param_3 + 1) = *(undefined1 *)(iVar2 + 0x6d6eb);
                break;
              case 0xc:
                if (*(int *)param_3 == 0) {
                  local_ac = (uint)((*(uint *)(DAT_0006d260 + 0x6d4b2) & 0xfffffffd) != 0);
                  local_a4 = 0x10000000;
                  local_90 = 0x10000000;
                  local_7c = 0x10000000;
                  local_68 = 0x10000000;
                  local_54 = 0x10000000;
                  local_40 = 0x10000000;
                  local_2c = 0x10000000;
                  local_a0 = 0;
                  local_9c = 0;
                  local_98 = 0;
                  local_94 = 0;
                  local_8c = 0;
                  local_88 = 0;
                  local_84 = 0;
                  local_80 = 0;
                  local_78 = 0;
                  local_74 = 0;
                  local_70 = 0;
                  local_6c = 0;
                  local_64 = 0;
                  local_60 = 0;
                  local_5c = 0;
                  local_58 = 0;
                  local_50 = 0;
                  local_4c = 0;
                  local_48 = 0;
                  local_44 = 0;
                  local_3c = 0;
                  local_38 = 0;
                  local_34 = 0;
                  local_30 = 0;
                  local_28 = 0;
                  local_24 = 0;
                  local_20 = 0;
                  local_1c = 0;
                }
                else {
                  if (*(int *)param_3 != 1) {
                    uVar6 = 0xfffffffe;
                    break;
                  }
                  local_a4 = *(undefined4 *)((int)param_3 + 4);
                  local_94 = *(undefined4 *)((int)param_3 + 0x14);
                  local_a0 = *(undefined4 *)((int)param_3 + 8);
                  local_90 = *(undefined4 *)((int)param_3 + 0x18);
                  local_8c = *(undefined4 *)((int)param_3 + 0x1c);
                  local_9c = *(undefined4 *)((int)param_3 + 0xc);
                  local_88 = *(undefined4 *)((int)param_3 + 0x20);
                  local_84 = *(undefined4 *)((int)param_3 + 0x24);
                  local_98 = *(undefined4 *)((int)param_3 + 0x10);
                  local_80 = *(undefined4 *)((int)param_3 + 0x28);
                  local_7c = *(undefined4 *)((int)param_3 + 0x2c);
                  local_70 = *(undefined4 *)((int)param_3 + 0x38);
                  local_6c = *(undefined4 *)((int)param_3 + 0x3c);
                  local_68 = *(undefined4 *)((int)param_3 + 0x40);
                  local_64 = *(undefined4 *)((int)param_3 + 0x44);
                  local_78 = *(undefined4 *)((int)param_3 + 0x30);
                  local_74 = *(undefined4 *)((int)param_3 + 0x34);
                  local_ac = 2;
                  local_54 = *(undefined4 *)((int)param_3 + 0x54);
                  local_50 = *(undefined4 *)((int)param_3 + 0x58);
                  local_4c = *(undefined4 *)((int)param_3 + 0x5c);
                  local_60 = *(undefined4 *)((int)param_3 + 0x48);
                  local_5c = *(undefined4 *)((int)param_3 + 0x4c);
                  local_58 = *(undefined4 *)((int)param_3 + 0x50);
                  local_3c = *(undefined4 *)((int)param_3 + 0x6c);
                  local_48 = *(undefined4 *)((int)param_3 + 0x60);
                  local_40 = *(undefined4 *)((int)param_3 + 0x68);
                  local_44 = *(undefined4 *)((int)param_3 + 100);
                  local_28 = *(undefined4 *)((int)param_3 + 0x80);
                  local_30 = *(undefined4 *)((int)param_3 + 0x78);
                  local_38 = *(undefined4 *)((int)param_3 + 0x70);
                  local_34 = *(undefined4 *)((int)param_3 + 0x74);
                  local_2c = *(undefined4 *)((int)param_3 + 0x7c);
                  local_24 = *(undefined4 *)((int)param_3 + 0x84);
                  local_20 = *(undefined4 *)((int)param_3 + 0x88);
                  local_1c = *(undefined4 *)((int)param_3 + 0x8c);
                }
                uVar6 = MaSmw_DevCtrl(0x2b,local_ac,0,(void *)0x0);
                iVar7 = *(int *)param_3;
                if ((iVar7 == 1) || ((int)uVar6 < 0)) {
                  uVar6 = MaSmw_DevCtrl(0x1e,0,6,&local_a4);
                  if ((int)uVar6 < 0) break;
                  uVar6 = MaSmw_DevCtrl(0x1e,0,7,&local_90);
                  if ((int)uVar6 < 0) break;
                  uVar6 = MaSmw_DevCtrl(0x1e,0,8,&local_7c);
                  if ((int)uVar6 < 0) break;
                  uVar6 = MaSmw_DevCtrl(0x1e,0,9,&local_68);
                  if ((int)uVar6 < 0) break;
                  uVar6 = MaSmw_DevCtrl(0x1e,0,10,&local_54);
                  if ((int)uVar6 < 0) break;
                  uVar6 = MaSmw_DevCtrl(0x1e,0,0xb,&local_40);
                  if (((int)uVar6 < 0) ||
                     (uVar6 = MaSmw_DevCtrl(0x1e,0,0xc,&local_2c), (int)uVar6 < 0)) break;
                  iVar7 = *(int *)param_3;
                }
                iVar2 = DAT_0006d264;
                *(int *)(DAT_0006d264 + 0x6d566) = iVar7;
                *(undefined4 *)(iVar2 + 0x6d56a) = *(undefined4 *)((int)param_3 + 4);
                *(undefined4 *)(iVar2 + 0x6d56e) = *(undefined4 *)((int)param_3 + 8);
                *(undefined4 *)(iVar2 + 0x6d572) = *(undefined4 *)((int)param_3 + 0xc);
                *(undefined4 *)(iVar2 + 0x6d576) = *(undefined4 *)((int)param_3 + 0x10);
                *(undefined4 *)(iVar2 + 0x6d57a) = *(undefined4 *)((int)param_3 + 0x14);
                *(undefined4 *)(iVar2 + 0x6d57e) = *(undefined4 *)((int)param_3 + 0x18);
                *(undefined4 *)(iVar2 + 0x6d582) = *(undefined4 *)((int)param_3 + 0x1c);
                *(undefined4 *)(iVar2 + 0x6d586) = *(undefined4 *)((int)param_3 + 0x20);
                *(undefined4 *)(iVar2 + 0x6d58a) = *(undefined4 *)((int)param_3 + 0x24);
                *(undefined4 *)(iVar2 + 0x6d58e) = *(undefined4 *)((int)param_3 + 0x28);
                *(undefined4 *)(iVar2 + 0x6d592) = *(undefined4 *)((int)param_3 + 0x2c);
                *(undefined4 *)(iVar2 + 0x6d596) = *(undefined4 *)((int)param_3 + 0x30);
                *(undefined4 *)(iVar2 + 0x6d59a) = *(undefined4 *)((int)param_3 + 0x34);
                *(undefined4 *)(iVar2 + 0x6d59e) = *(undefined4 *)((int)param_3 + 0x38);
                *(undefined4 *)(iVar2 + 0x6d5a2) = *(undefined4 *)((int)param_3 + 0x3c);
                *(undefined4 *)(iVar2 + 0x6d5a6) = *(undefined4 *)((int)param_3 + 0x40);
                *(undefined4 *)(iVar2 + 0x6d5aa) = *(undefined4 *)((int)param_3 + 0x44);
                *(undefined4 *)(iVar2 + 0x6d5ae) = *(undefined4 *)((int)param_3 + 0x48);
                *(undefined4 *)(iVar2 + 0x6d5b2) = *(undefined4 *)((int)param_3 + 0x4c);
                *(undefined4 *)(iVar2 + 0x6d5b6) = *(undefined4 *)((int)param_3 + 0x50);
                *(undefined4 *)(iVar2 + 0x6d5ba) = *(undefined4 *)((int)param_3 + 0x54);
                *(undefined4 *)(iVar2 + 0x6d5be) = *(undefined4 *)((int)param_3 + 0x58);
                *(undefined4 *)(iVar2 + 0x6d5c2) = *(undefined4 *)((int)param_3 + 0x5c);
                *(undefined4 *)(iVar2 + 0x6d5c6) = *(undefined4 *)((int)param_3 + 0x60);
                *(undefined4 *)(iVar2 + 0x6d5ca) = *(undefined4 *)((int)param_3 + 100);
                *(undefined4 *)(&BYTE_0006d5ce + iVar2) = *(undefined4 *)((int)param_3 + 0x68);
                *(undefined4 *)(&BYTE_0006d5d2 + iVar2) = *(undefined4 *)((int)param_3 + 0x6c);
                *(undefined4 *)(iVar2 + 0x6d5d6) = *(undefined4 *)((int)param_3 + 0x70);
                *(undefined4 *)(iVar2 + 0x6d5da) = *(undefined4 *)((int)param_3 + 0x74);
                *(undefined4 *)(iVar2 + 0x6d5de) = *(undefined4 *)((int)param_3 + 0x78);
                *(undefined4 *)(iVar2 + 0x6d5e2) = *(undefined4 *)((int)param_3 + 0x7c);
                *(undefined4 *)(iVar2 + 0x6d5e6) = *(undefined4 *)((int)param_3 + 0x80);
                *(undefined4 *)(iVar2 + 0x6d5ea) = *(undefined4 *)((int)param_3 + 0x84);
                *(undefined4 *)(iVar2 + 0x6d5ee) = *(undefined4 *)((int)param_3 + 0x88);
                *(undefined4 *)(iVar2 + 0x6d5f2) = *(undefined4 *)((int)param_3 + 0x8c);
                break;
              case 0xd:
                uVar6 = 0;
                *(undefined4 *)param_3 = *(undefined4 *)(DAT_0006d25c + 0x6d3fc);
                *(undefined4 *)((int)param_3 + 4) = *(undefined4 *)(iVar7 + 0x6d400);
                *(undefined4 *)((int)param_3 + 8) = *(undefined4 *)(iVar7 + 0x6d404);
                *(undefined4 *)((int)param_3 + 0xc) = *(undefined4 *)(iVar7 + 0x6d408);
                *(undefined4 *)((int)param_3 + 0x10) = *(undefined4 *)(iVar7 + 0x6d40c);
                *(undefined4 *)((int)param_3 + 0x14) = *(undefined4 *)(iVar7 + 0x6d410);
                *(undefined4 *)((int)param_3 + 0x18) = *(undefined4 *)(iVar7 + 0x6d414);
                *(undefined4 *)((int)param_3 + 0x1c) = *(undefined4 *)(iVar7 + 0x6d418);
                *(undefined4 *)((int)param_3 + 0x20) = *(undefined4 *)(iVar7 + 0x6d41c);
                *(undefined4 *)((int)param_3 + 0x24) = *(undefined4 *)(iVar7 + 0x6d420);
                *(undefined4 *)((int)param_3 + 0x28) = *(undefined4 *)(iVar7 + 0x6d424);
                *(undefined4 *)((int)param_3 + 0x2c) = *(undefined4 *)(iVar7 + 0x6d428);
                *(undefined4 *)((int)param_3 + 0x30) = *(undefined4 *)(iVar7 + 0x6d42c);
                *(undefined4 *)((int)param_3 + 0x34) = *(undefined4 *)(iVar7 + 0x6d430);
                *(undefined4 *)((int)param_3 + 0x38) = *(undefined4 *)(iVar7 + 0x6d434);
                *(undefined4 *)((int)param_3 + 0x3c) = *(undefined4 *)(iVar7 + 0x6d438);
                *(undefined4 *)((int)param_3 + 0x40) = *(undefined4 *)(iVar7 + 0x6d43c);
                *(undefined4 *)((int)param_3 + 0x44) = *(undefined4 *)(iVar7 + 0x6d440);
                *(undefined4 *)((int)param_3 + 0x48) = *(undefined4 *)(iVar7 + 0x6d444);
                *(undefined4 *)((int)param_3 + 0x4c) = *(undefined4 *)(iVar7 + 0x6d448);
                *(undefined4 *)((int)param_3 + 0x50) = *(undefined4 *)(iVar7 + 0x6d44c);
                *(undefined4 *)((int)param_3 + 0x54) = *(undefined4 *)(iVar7 + 0x6d450);
                *(undefined4 *)((int)param_3 + 0x58) = *(undefined4 *)(iVar7 + 0x6d454);
                *(undefined4 *)((int)param_3 + 0x5c) = *(undefined4 *)(iVar7 + 0x6d458);
                *(undefined4 *)((int)param_3 + 0x60) = *(undefined4 *)(iVar7 + 0x6d45c);
                *(undefined4 *)((int)param_3 + 100) = *(undefined4 *)(iVar7 + 0x6d460);
                *(undefined4 *)((int)param_3 + 0x68) = *(undefined4 *)(iVar7 + 0x6d464);
                *(undefined4 *)((int)param_3 + 0x6c) = *(undefined4 *)(iVar7 + 0x6d468);
                *(undefined4 *)((int)param_3 + 0x70) = *(undefined4 *)(iVar7 + 0x6d46c);
                *(undefined4 *)((int)param_3 + 0x74) = *(undefined4 *)(iVar7 + 0x6d470);
                *(undefined4 *)((int)param_3 + 0x78) = *(undefined4 *)(iVar7 + 0x6d474);
                *(undefined4 *)((int)param_3 + 0x7c) = *(undefined4 *)(iVar7 + 0x6d478);
                *(undefined4 *)((int)param_3 + 0x80) = *(undefined4 *)(iVar7 + 0x6d47c);
                *(undefined4 *)((int)param_3 + 0x84) = *(undefined4 *)(iVar7 + 0x6d480);
                *(undefined4 *)((int)param_3 + 0x88) = *(undefined4 *)(iVar7 + 0x6d484);
                *(undefined4 *)((int)param_3 + 0x8c) = *(undefined4 *)(iVar7 + 0x6d488);
                break;
              default:
                uVar6 = 0xfffffffe;
              }
              goto LAB_0006c612;
            }
            if (param_1 < 0x1002a) {
              if (param_1 == 0x1001e) {
                local_af = *(undefined1 *)((int)param_3 + 1);
                local_ae = *(undefined1 *)((int)param_3 + 2);
                local_ad = *(undefined1 *)((int)param_3 + 3);
                bVar1 = *(byte *)param_3;
                if (bVar1 == 0) {
LAB_0006d618:
                  uVar6 = 0xfffffffe;
                }
                else {
                  if (bVar1 < 8) {
                    local_b0 = (undefined1)(1 << (uint)(byte)(bVar1 - 1));
                  }
                  else {
                    if (bVar1 != 8) goto LAB_0006d618;
                    local_b0 = 0;
                  }
                  uVar6 = MaSmw_DevCtrl(8,param_2,0,&local_b0);
                  iVar7 = DAT_0006d24c;
                  if (-1 < (int)uVar6) {
                    *(undefined1 *)(DAT_0006d24c + 0x6d1b8) = *(undefined1 *)param_3;
                    *(undefined1 *)(iVar7 + 0x6d1b9) = *(undefined1 *)((int)param_3 + 1);
                    *(undefined1 *)(iVar7 + 0x6d1ba) = *(undefined1 *)((int)param_3 + 2);
                    *(undefined1 *)(iVar7 + 0x6d1bb) = *(undefined1 *)((int)param_3 + 3);
                  }
                }
                goto LAB_0006c612;
              }
            }
            else {
              if (param_1 == 0x10030) {
                if (param_2 == 0) {
                  local_ac = *(uint *)param_3;
                  uVar6 = MaSmw_DevCtrl(0x5f,local_ac,0,(void *)0x0);
                }
                else if (param_2 == 1) {
                  uVar6 = MaSmw_DevCtrl(0x60,0,0,param_3);
                }
                else {
                  uVar6 = 0xfffffffe;
                }
                goto LAB_0006c612;
              }
              if (param_1 == 0x10031) goto code_r0x0006c6ea;
            }
            goto LAB_0006d5b6;
          }
          if (param_1 == 0x1001a) {
            local_ac = *(uint *)param_3;
            if (param_2 == 0) {
              switch(local_ac) {
              case 0:
                uVar6 = 0;
                break;
              default:
                uVar6 = 0xfffffffe;
                goto LAB_0006c612;
              case 4:
                uVar6 = 5;
                local_ac = 5;
                break;
              case 8:
                uVar6 = 4;
                local_ac = 4;
                break;
              case 0xc:
                uVar6 = 3;
                local_ac = 3;
                break;
              case 0x10:
                uVar6 = 2;
                local_ac = 2;
                break;
              case 0x12:
                uVar6 = 1;
                local_ac = 1;
              }
              uVar6 = MaSmw_DevCtrl(10,uVar6,0,(void *)0x0);
            }
            else {
              if (param_2 != 1) goto LAB_0006c7dc;
              switch(local_ac) {
              case 0:
              case 4:
                break;
              default:
                uVar6 = 0xfffffffe;
                goto LAB_0006c612;
              case 2:
                local_ac = 5;
                break;
              case 6:
                local_ac = 3;
                break;
              case 8:
                local_ac = 2;
                break;
              case 9:
                local_ac = 1;
              }
              uVar6 = MaSmw_DevCtrl(0xe,local_ac,0,(void *)0x0);
            }
            if (-1 < (int)uVar6) {
              *(undefined4 *)((int)&UINT_0006db9c + DAT_0006d9f0 + param_2 * 4 + 2) =
                   *(undefined4 *)param_3;
            }
            goto LAB_0006c612;
          }
          if (param_1 < 0x1001a) {
            if (param_2 < 2) {
              uVar6 = 0;
              *(undefined4 *)param_3 = *(undefined4 *)(DAT_0006d254 + param_2 * 4 + 0x6d2d6);
              goto LAB_0006c612;
            }
          }
          else {
            if (param_1 != 0x1001b) {
              if (param_1 != 0x1001c) goto LAB_0006d5b6;
              local_ac = *(uint *)param_3;
              if (param_2 == 0) {
                uVar6 = MaSmw_DevCtrl(0xb,local_ac,0,(void *)0x0);
              }
              else {
                if (param_2 != 1) goto LAB_0006c7dc;
                uVar6 = MaSmw_DevCtrl(0xf,local_ac,0,(void *)0x0);
              }
              if (-1 < (int)uVar6) {
                *(uint *)(DAT_0006da04 + param_2 * 4 + 0x6df14) = local_ac;
              }
              goto LAB_0006c612;
            }
            if (param_2 < 2) {
              uVar6 = 0;
              *(undefined4 *)param_3 = *(undefined4 *)(DAT_0006d290 + param_2 * 4 + 0x6dada);
              goto LAB_0006c612;
            }
          }
        }
LAB_0006c7dc:
        uVar6 = 0xfffffffe;
        goto LAB_0006c612;
      }
      if (param_1 == 0x10037) {
        local_ac = *(uint *)param_3;
        uVar6 = MaSmw_DevCtrl(0xf5,local_ac,0,(void *)0x0);
        goto LAB_0006c612;
      }
      if (param_1 < 0x10038) {
        if ((Elf32_Phdr *)param_1 == Elf32_Phdr_ARRAY_00010034) {
          uVar6 = 0;
          *(undefined1 *)param_3 = *(undefined1 *)((int)&DAT_0006d9fc + DAT_0006d288);
          *(undefined1 *)((int)param_3 + 1) = *(undefined1 *)((int)&DAT_0006d9fc + iVar4 + 1);
          *(undefined1 *)((int)param_3 + 2) = *(undefined1 *)((int)&DAT_0006d9fc + iVar4 + 2);
          *(undefined1 *)((int)param_3 + 3) = *(undefined1 *)((int)&DAT_0006d9fc + iVar4 + 3);
          *(undefined1 *)((int)param_3 + 4) = *(undefined1 *)((int)&DAT_0006da00 + iVar4);
          *(undefined4 *)((int)param_3 + 8) = *(undefined4 *)((int)&DAT_0006da04 + iVar4);
          goto LAB_0006c612;
        }
        if (param_1 < Elf32_Phdr_ARRAY_00010034) {
          uVar6 = MaSmw_DevCtrl(0x23,param_2,0,param_3);
          iVar7 = DAT_0006d250;
          if (-1 < (int)uVar6) {
            *(undefined1 *)(DAT_0006d250 + 0x6d368) = *(undefined1 *)param_3;
            *(undefined1 *)(iVar7 + 0x6d369) = *(undefined1 *)((int)param_3 + 1);
            *(undefined1 *)(iVar7 + 0x6d36a) = *(undefined1 *)((int)param_3 + 2);
            *(undefined1 *)(iVar7 + 0x6d36b) = *(undefined1 *)((int)param_3 + 3);
            *(undefined1 *)(iVar7 + 0x6d36c) = *(undefined1 *)((int)param_3 + 4);
            *(undefined4 *)(iVar7 + 0x6d370) = *(undefined4 *)((int)param_3 + 8);
          }
          goto LAB_0006c612;
        }
        if (param_1 == 0x10035) {
          local_ac = *(uint *)param_3;
          uVar6 = MaSmw_DevCtrl(0xf3,local_ac,0,(void *)0x0);
          goto LAB_0006c612;
        }
        if (param_1 == 0x10036) {
          uVar6 = MaSmw_DevCtrl(0xf4,0,0,param_3);
          goto LAB_0006c612;
        }
      }
      else {
        if (param_1 == 0x1003a) {
          uVar6 = MaSmw_DevCtrl(0xf8,0,0,param_3);
          goto LAB_0006c612;
        }
        if (param_1 < 0x1003b) {
          if (param_1 == 0x10038) {
            uVar6 = MaSmw_DevCtrl(0xf6,0,0,param_3);
            goto LAB_0006c612;
          }
          if (param_1 == 0x10039) {
            local_ac = *(uint *)param_3;
            uVar6 = MaSmw_DevCtrl(0xf7,local_ac,0,(void *)0x0);
            goto LAB_0006c612;
          }
        }
        else {
          if (param_1 == 0x1003b) {
            uVar6 = MaSmw_DevCtrl(0xf9,0,0,param_3);
            goto LAB_0006c612;
          }
          if (param_1 == 0x1003c) {
            uVar6 = MaSmw_DevCtrl(0xfa,0,0,param_3);
            goto LAB_0006c612;
          }
        }
      }
    }
LAB_0006d5b6:
    uVar6 = 0xffffffff;
    goto LAB_0006c612;
  }
  if (param_1 != 0x10031) {
LAB_0006c678:
    if (param_3 == (void *)0x0) goto LAB_0006c67c;
    goto LAB_0006c62a;
  }
  if (param_2 == 0) {
switchD_0006c6f2_caseD_0:
    uVar6 = MaSmw_DevCtrl(0x3c,0,0,(void *)0x0);
    if (-1 < (int)uVar6) {
      uVar6 = MaSmw_DevCtrl(0x58,0,0,(void *)0x0);
    }
  }
  else {
    if (param_3 == (void *)0x0) goto LAB_0006c67c;
code_r0x0006c6ea:
    switch(param_2) {
    case 0:
      goto switchD_0006c6f2_caseD_0;
    case 1:
      local_ac = *(uint *)param_3;
      uVar6 = MaSmw_DevCtrl(0x42,local_ac,0,(void *)0x0);
      if (-1 < (int)uVar6) {
        uVar6 = MaSmw_DevCtrl(0x58,0,0,(void *)0x0);
      }
      break;
    case 2:
      uVar6 = MaSmw_DevCtrl(0x43,0,0,param_3);
      break;
    case 3:
      uVar6 = MaSmw_DevCtrl(0x44,0,0,param_3);
      break;
    case 4:
      uVar6 = MaSmw_DevCtrl(0x25,0,0,param_3);
      break;
    case 5:
      local_ac = *(uint *)param_3;
      uVar6 = MaSmw_DevCtrl(0x4a,local_ac,0,(void *)0x0);
      if (-1 < (int)uVar6) {
        uVar6 = MaSmw_DevCtrl(0x58,0,0,(void *)0x0);
      }
      break;
    case 6:
      uVar6 = MaSmw_DevCtrl(0x4b,0,0,param_3);
      break;
    case 7:
      uVar6 = MaSmw_DevCtrl(0x54,0,0,param_3);
      if (-1 < (int)uVar6) {
        uVar6 = MaSmw_DevCtrl(0x58,0,0,(void *)0x0);
      }
      break;
    case 8:
      uVar6 = MaSmw_DevCtrl(0x55,0,0,param_3);
      break;
    case 9:
      uVar6 = MaSmw_DevCtrl(0x56,0,0,param_3);
      if (-1 < (int)uVar6) {
        uVar6 = MaSmw_DevCtrl(0x58,0,0,(void *)0x0);
      }
      break;
    case 10:
      uVar6 = MaSmw_DevCtrl(0x57,0,0,param_3);
      break;
    default:
      uVar6 = 0xfffffffe;
      break;
    case 0xc:
      local_ac = *(uint *)param_3;
      uVar6 = MaSmw_DevCtrl(0x59,local_ac,0,(void *)0x0);
      if (-1 < (int)uVar6) {
        uVar6 = MaSmw_DevCtrl(0x58,0,0,(void *)0x0);
      }
      break;
    case 0xd:
      uVar6 = MaSmw_DevCtrl(0x5a,0,0,param_3);
      break;
    case 0xe:
      local_ac = *(uint *)param_3;
      uVar6 = MaSmw_DevCtrl(0x66,local_ac,0,(void *)0x0);
      break;
    case 0xf:
      uVar6 = MaSmw_DevCtrl(0x67,0,0,param_3);
    }
  }
LAB_0006c612:
  mapimachdep_UnlockApi();
  return uVar6;
}

