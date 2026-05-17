/* Mapi_Melody_Control @ 0006ed6c 3018B */


/* YAMAHA::Mapi_Melody_Control(int, unsigned int, void*) */

uint YAMAHA::Mapi_Melody_Control(int param_1,uint param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  iVar2 = DAT_0006fa44;
  mapimachdep_LockApi();
  iVar1 = DAT_0006fa68;
  iVar9 = DAT_0006fa58;
  pcVar6 = (char *)(iVar2 + 0x6ed82);
  if (*pcVar6 == '\0') goto switchD_0006f5d8_caseD_11110034;
  if (*(int *)(iVar2 + 0x6ed86) != 1) {
    mapimachdep_UnlockApi();
    return 0xffffffff;
  }
  if (8 < param_1 - 1U) goto LAB_0006f0fc;
  uVar7 = *(uint *)(pcVar6 + param_1 * 0x34 + 0x10c);
  iVar2 = *(int *)(pcVar6 + param_1 * 0x34 + 0x110);
  uVar8 = *(uint *)(pcVar6 + param_1 * 0x34 + 0x114);
  if (param_2 == 0x111100ff) goto LAB_0006ee8a;
  if (uVar8 == 0) goto switchD_0006f5d8_caseD_11110034;
  if (uVar8 == 1) {
    if (param_2 != 0x10100005) {
      if (param_2 < 0x10100006) {
        if (param_2 != 0x100006) {
          if (param_2 < 0x100007) {
            if (1 < param_2 - 0x1000a) goto switchD_0006f5d8_caseD_11110034;
          }
          else if (param_2 != 0x100100) goto switchD_0006f5d8_caseD_11110034;
        }
      }
      else if (param_2 != 0x10100700) {
        if (param_2 < 0x10100701) {
          if (param_2 != 0x10100600) goto switchD_0006f5d8_caseD_11110034;
        }
        else if ((param_2 != 0x10100800) && (param_2 != 0x11110070))
        goto switchD_0006f5d8_caseD_11110034;
      }
    }
  }
  else if (uVar8 == 2) {
    if (param_2 < 0x11110038) {
      if (0x11110035 < param_2) goto switchD_0006f5d8_caseD_11110034;
LAB_0006f3d2:
      if (param_2 == 0x10100500) {
switchD_0006f5d8_caseD_11110034:
        mapimachdep_UnlockApi();
        return 0xfffffff8;
      }
    }
    else if ((param_2 == 0x11110070) || ((0x1111006f < param_2 && (param_2 + 0xeeeeff89 < 2))))
    goto switchD_0006f5d8_caseD_11110034;
  }
  else if (uVar8 == 3) {
    if (param_2 == 0x11110070) goto switchD_0006f5d8_caseD_11110034;
    if (param_2 < 0x11110071) {
      if (param_2 == 0x11110035) goto switchD_0006f5d8_caseD_11110034;
LAB_0006f384:
      if (param_2 == 0x11110068) goto switchD_0006f5d8_caseD_11110034;
    }
    else if (param_2 + 0xeeeeff8c < 5) goto switchD_0006f5d8_caseD_11110034;
  }
  else {
    if (uVar8 != 4) {
      if (uVar8 != 6) goto switchD_0006f5d8_caseD_11110034;
      if (0x11110038 < param_2) goto LAB_0006f384;
      if (0x11110033 < param_2) goto switchD_0006f5d8_caseD_11110034;
      goto LAB_0006f3d2;
    }
    switch(param_2) {
    case 0x11110034:
    case 0x11110035:
    case 0x11110038:
    case 0x11110068:
    case 0x11110070:
    case 0x11110074:
    case 0x11110075:
    case 0x11110076:
      goto switchD_0006f5d8_caseD_11110034;
    }
  }
  if (uVar7 - 0x13 < 2) {
LAB_0006f1de:
    if ((uVar7 & 0xfffffffb) == 0x11) {
      if (param_2 < 0x1111006a) {
        if (((param_2 < 0x11110060) && (param_2 != 0x100006)) &&
           ((param_2 < 0x100006 || (8 < param_2 + 0xeeeeffd9)))) goto LAB_0006f0fc;
      }
      else if (4 < param_2 + 0xeeeeff90) goto LAB_0006f0fc;
    }
    else if (uVar7 == 0x12) {
      if (param_2 < 0x11110030) {
LAB_0006f6e8:
        if (param_2 < 0x1111002c) goto LAB_0006f0ee;
      }
      else if ((param_2 < 0x11110060) || ((0x11110067 < param_2 && (param_2 != 0x11110075))))
      goto LAB_0006f0fc;
    }
    else if (uVar7 == 0x13) {
      if (param_2 < 0x11110030) goto LAB_0006f6e8;
      if (2 < param_2 + 0xeeeeff8a) goto LAB_0006f0fc;
    }
    else if (uVar7 == 0x14) {
      if (param_2 != 0x11110070) {
        if (param_2 < 0x11110071) {
          if ((param_2 != 0x100006) && (param_2 != 0x1111002b)) goto LAB_0006f0fc;
        }
        else {
          uVar5 = param_2 + 0xeeeeff8d;
joined_r0x0006f84a:
          if (1 < uVar5) goto LAB_0006f0fc;
        }
      }
    }
    else if (uVar7 == 0x10) {
      if (param_2 != 0x10100500) {
        if (param_2 < 0x10100501) {
          if (param_2 != 0x10100005) {
            if (param_2 < 0x10100006) {
              if ((param_2 != 0x100006) && (param_2 != 0x100100)) goto LAB_0006f0fc;
            }
            else if ((param_2 != 0x10100300) && ((param_2 != 0x10100400 && (param_2 != 0x10100200)))
                    ) goto LAB_0006f0fc;
          }
        }
        else {
          if (0x1111002b < param_2) {
            uVar5 = param_2 + 0xeeeeffcc;
            goto joined_r0x0006f84a;
          }
          if ((((param_2 < 0x11110029) && (param_2 != 0x10100700)) && (param_2 != 0x10100800)) &&
             (param_2 != 0x10100600)) goto LAB_0006f0fc;
        }
      }
    }
    else {
      if (param_2 < 0x1111002c) {
        if (param_2 < 0x11110027) {
          if (param_2 != 0x10100400) {
            if (param_2 < 0x10100401) {
              if (param_2 != 0x100100) {
                if (param_2 < 0x100101) {
                  if (param_2 != 0x1000b) {
                    if (param_2 != 0x100006) {
                      if (param_2 != 0x1000a) goto LAB_0006f0fc;
                      goto LAB_0006f8e4;
                    }
                    goto LAB_0006ee54;
                  }
                }
                else if ((param_2 != 0x10100200) && (param_2 != 0x10100300)) {
                  if (param_2 != 0x10100005) goto LAB_0006f0fc;
                  goto LAB_0006f996;
                }
              }
            }
            else if (param_2 != 0x10100800) {
              if (0x10100800 < param_2) {
                if (param_2 < 0x11110021) goto LAB_0006f0fc;
                if (param_2 < 0x11110025) {
                  if (uVar7 != 0xf && uVar7 != 1) {
                    if (uVar7 - 0xd < 2) {
                      iVar4 = 0;
                    }
                    else {
                      iVar4 = -1;
                    }
                    goto joined_r0x0006ee50;
                  }
                }
                else if (((uVar7 != 1) && (2 < uVar7 - 0xd)) &&
                        ((1 < uVar7 - 4 && (uVar7 != 7 && uVar7 != 0xc)))) goto LAB_0006f0fc;
                goto LAB_0006ee54;
              }
              if (((param_2 != 0x10100600) && (param_2 != 0x10100700)) && (param_2 != 0x10100500))
              goto LAB_0006f0fc;
            }
          }
          if (uVar7 != 1 && uVar7 != 0xf) goto LAB_0006f0fc;
          goto LAB_0006ee54;
        }
LAB_0006f996:
        if (uVar7 == 7) {
          iVar4 = -1;
        }
        else {
          iVar4 = 0;
        }
      }
      else if (param_2 == 0x11110035) {
LAB_0006f8e4:
        if (uVar7 - 7 < 2) {
          iVar4 = -1;
        }
        else {
          iVar4 = 0;
        }
      }
      else {
        if (param_2 < 0x11110036) {
          if (param_2 < 0x11110032) {
            if (0x1111002f < param_2) {
              if (uVar7 == 6 || uVar7 == 10) goto LAB_0006f0fc;
              if (uVar7 == 0xb) {
                iVar4 = -1;
              }
              else {
                iVar4 = 0;
              }
              goto joined_r0x0006ee50;
            }
          }
          else if (param_2 == 0x11110033) {
LAB_0006f9aa:
            bVar10 = 0xb < uVar7;
            if (uVar7 != 0xc) {
              bVar10 = uVar7 != 4;
            }
            if (bVar10 && (uVar7 != 0xc && uVar7 != 5)) goto LAB_0006f82e;
          }
          else {
            if (0x11110033 < param_2) goto LAB_0006f996;
            bVar10 = 3 < uVar7;
            if (uVar7 != 4) {
              bVar10 = uVar7 != 0xd;
            }
            if (!bVar10 || (uVar7 == 4 || uVar7 == 0xe)) goto LAB_0006ee8a;
            if (uVar7 != 0xc && uVar7 != 5) goto LAB_0006f0fc;
          }
          goto LAB_0006ee54;
        }
        if (param_2 < 0x11110068) {
          if (0x1111005f < param_2) goto LAB_0006ee54;
          if (param_2 < 0x11110038) goto LAB_0006f9aa;
          if (param_2 != 0x11110038) goto LAB_0006f0fc;
LAB_0006f82e:
          iVar4 = 0;
          if (uVar7 != 7) {
            iVar4 = -1;
          }
        }
        else {
          if (0x11110069 < param_2) goto LAB_0006f0fc;
          iVar4 = 0;
          if (uVar7 != 0xb) {
            iVar4 = -1;
          }
        }
      }
joined_r0x0006ee50:
      if (iVar4 != 0) goto LAB_0006f0fc;
    }
  }
  else if (((0x24 < param_2 - 0x80) && (param_2 != 0xb0)) && (param_2 != 0xb2)) {
    if (uVar7 != 9) goto LAB_0006f1de;
    if (param_2 < 0x11110030) {
      if ((param_2 < 0x1111002b) && (param_2 != 0x1000a)) {
LAB_0006f0ee:
        if (param_2 != 0x100006) goto LAB_0006f0fc;
      }
    }
    else if (param_2 != 0x11110050) {
      if (param_2 < 0x11110051) {
        if (param_2 != 0x11110034) goto LAB_0006f0fc;
      }
      else if (7 < param_2 + 0xeeeeffa0) goto LAB_0006f0fc;
    }
  }
LAB_0006ee54:
  if (param_2 != 0x10100005) {
    if (param_2 < 0x10100006) {
      if (param_2 != 0xa4) {
        if (param_2 < 0xa5) {
          if (param_2 != 0x80) goto LAB_0006ee8a;
        }
        else if ((param_2 != 0x100006) && (param_2 != 0x100100)) goto LAB_0006ee8a;
      }
    }
    else if (param_2 != 0x1111002b) {
      if (param_2 < 0x1111002c) {
        if ((param_2 != 0x10100500) && (param_2 != 0x10100800)) {
LAB_0006ee8a:
          if (param_3 == (void *)0x0) goto LAB_0006f0fc;
        }
      }
      else if ((param_2 != 0x11110050) && (param_2 != 0x11110078)) goto LAB_0006ee8a;
    }
  }
  if (uVar7 != 0x10 && uVar7 != 1) {
    if ((uVar7 - 4 < 0xc) && ((1 << (uVar7 - 4 & 0xff) & 0xf1fU) != 0)) goto LAB_0006efaa;
LAB_0006effe:
    uVar8 = 0xfffffffe;
    goto LAB_0006f002;
  }
  uVar5 = param_2;
  pvVar3 = param_3;
  if (param_2 == 0x10100600) {
LAB_0006ef80:
    uVar8 = SmafMms_Control(*(int *)(DAT_0006fa50 + 0x6ef90),uVar5,pvVar3);
LAB_0006ef0e:
    if ((int)uVar8 < 0) goto LAB_0006f002;
  }
  else {
    if (0x10100600 < param_2) {
      if (param_2 == 0x1111002b) {
        uVar5 = 0x10100004;
      }
      else if (param_2 < 0x1111002c) {
        if (param_2 != 0x10100800) {
          if (param_2 < 0x10100801) {
            if (param_2 != 0x10100700) goto LAB_0006efaa;
            uVar8 = SmafMms_Control(*(int *)(DAT_0006fa70 + 0x6f44c),0x10100700,param_3);
          }
          else {
            if (param_2 == 0x11110021) {
              if (param_3 != (void *)0x0) {
                pvVar3 = *(void **)param_3;
              }
              uVar5 = 0x1001001f;
              goto LAB_0006ef80;
            }
            if (param_2 != 0x11110029) goto LAB_0006efaa;
            if (param_3 == (void *)0x0) {
              pvVar3 = (void *)0x0;
            }
            else {
              pvVar3 = *(void **)param_3;
            }
            uVar8 = SmafMms_Control(*(int *)(DAT_0006fa58 + 0x6f068),0x10110001,pvVar3);
            if ((int)uVar8 < 0) goto LAB_0006f002;
            *(void **)(iVar9 + 0x6f078) = pvVar3;
          }
          goto LAB_0006ef0e;
        }
      }
      else if (param_2 == 0x11110030) {
        if (param_3 != (void *)0x0) {
          pvVar3 = *(void **)param_3;
        }
        uVar5 = 0x10010002;
      }
      else if (param_2 < 0x11110031) {
        if (param_2 != 0x1111002c) goto LAB_0006efaa;
        if (param_3 != (void *)0x0) {
          pvVar3 = *(void **)param_3;
        }
        uVar5 = 0x10010000;
      }
      else if (param_2 == 0x11110034) {
        if (((param_3 == (void *)0x0) || (pvVar3 = *(void **)param_3, pvVar3 == (void *)0x0)) ||
           (0x100 < (int)pvVar3 + 1U)) {
LAB_0006f0fc:
          mapimachdep_UnlockApi();
          return 0xfffffffe;
        }
        if (uVar8 == 2) {
          *(void **)(DAT_0006fa7c + 0x6f77a) = pvVar3;
          mapimachdep_UnlockApi();
          return 0;
        }
        uVar5 = 0x1011001b;
      }
      else {
        if (param_2 != 0x11110035) goto LAB_0006efaa;
        if ((param_3 == (void *)0x0) || (pvVar3 = *(void **)param_3, pvVar3 == (void *)0x0)) {
          pvVar3 = (void *)SmafMms_Control(*(int *)(DAT_0006fa80 + 0x6f8a6),0x10100005,(void *)0x0);
        }
        uVar5 = 0x1011000d;
      }
      goto LAB_0006ef80;
    }
    if (param_2 == 0x10100005) goto LAB_0006ef80;
    if (0x10100005 < param_2) {
      if (param_2 != 0x10100300) {
        if (param_2 < 0x10100301) {
          if (param_2 != 0x10100200) goto LAB_0006efaa;
        }
        else if (param_2 == 0x10100400) {
          if (param_3 != (void *)0x0) {
            pvVar3 = *(void **)param_3;
          }
          uVar5 = 0x10100400;
        }
        else if (param_2 != 0x10100500) goto LAB_0006efaa;
      }
      goto LAB_0006ef80;
    }
    if (param_2 == 0x1000b) goto LAB_0006ef80;
    if (param_2 < 0x1000c) {
      if (param_2 == 0x1000a) goto LAB_0006ef80;
    }
    else {
      if (param_2 == 0x100006) goto LAB_0006ef80;
      if (param_2 == 0x100100) {
        uVar8 = SmafMms_Control(*(int *)(DAT_0006fa48 + 0x6eefe),0x100100,param_3);
        if ((int)uVar8 < 0) goto LAB_0006f002;
        uVar8 = uVar8 | *(uint *)(DAT_0006fa4c + 0x6ef1c) & 0x2000000;
        goto LAB_0006ef0e;
      }
    }
LAB_0006efaa:
    if (param_2 < 0x11110025) {
      if (param_2 < 0x11110023) {
        if (param_2 == 0xa4) {
          uVar8 = FUN_0006a064(uVar7,iVar2,0xa4,param_3);
          iVar2 = param_1 * 0x34 + iVar1 + 0x6f3b8;
          *(undefined4 *)(iVar2 + 0x134) = *(undefined4 *)(iVar2 + 0x138);
        }
        else if (param_2 < 0xa5) {
          if (param_2 == 0x81) {
            *(uint *)(param_1 * 0x34 + DAT_0006fa64 + 0x6f46a) = *(uint *)param_3 >> 0x1f;
            uVar8 = FUN_0006a064(uVar7,iVar2,0x81,param_3);
          }
          else {
LAB_0006f16e:
            uVar8 = FUN_0006a064(uVar7,iVar2,param_2,param_3);
          }
        }
        else if (param_2 != 0x100006) {
          if (param_2 != 0x100100) goto LAB_0006f16e;
          if (iVar2 != 1 || uVar7 != 0xf) {
            uVar8 = 0xffffffff;
            goto LAB_0006f002;
          }
          uVar8 = *(uint *)(DAT_0006fa54 + 0x6f010);
        }
      }
      else {
        uVar8 = FUN_0006a064(uVar7,iVar2,param_2,param_3);
        if (((uVar7 == 1) || (uVar7 == 0xf)) && (iVar2 = Mas_Control(param_2,param_3), -1 < iVar2))
        {
          uVar8 = 0;
          goto LAB_0006ef12;
        }
      }
      goto LAB_0006ef0e;
    }
    if (param_2 == 0x11110034) {
      iVar9 = *(int *)param_3;
      if ((iVar9 == 0) || (0x8000 < iVar9 + 1U)) goto LAB_0006effe;
      if (iVar9 == -1) {
        iVar9 = 0;
      }
      uVar8 = FUN_0006a064(uVar7,iVar2,0x11110034,param_3);
      if ((int)uVar8 < 0) goto LAB_0006f002;
      *(int *)((int)&UINT_0006f63c + param_1 * 0x34 + DAT_0006fa74) = iVar9;
    }
    else if (param_2 == 0x111100ff) {
      uVar8 = 0;
      *(void **)((int)&UINT_0006f664 + param_1 * 0x34 + DAT_0006fa78) = param_3;
    }
    else {
      if ((param_2 != 0x1111002a) || (iVar2 != 1 || uVar7 != 0x10)) goto LAB_0006f16e;
      uVar8 = 0;
      *(undefined4 *)param_3 = *(undefined4 *)(DAT_0006fa6c + 0x6f414);
    }
  }
LAB_0006ef12:
  if (param_2 == 0x1000a) {
    if ((*(short *)((int)param_3 + 2) == 0x5648) && (**(char **)((int)param_3 + 4) == '\x10')) {
      uVar8 = 0xffffffeb;
      **(char **)((int)param_3 + 4) = '\0';
    }
  }
  else if (param_2 == 0x11110035) {
    if (*(int *)param_3 == 0) {
      iVar2 = param_1 * 0x34 + DAT_0006fa5c + 0x6f11a;
      *(undefined4 *)(iVar2 + 0x130) = *(undefined4 *)(iVar2 + 300);
    }
    else {
      *(int *)(param_1 * 0x34 + DAT_0006fa60 + 0x6f444) = *(int *)param_3;
    }
  }
  else if (param_2 + 0xeeeeffdd < 2) goto LAB_0006f002;
  if ((uVar7 == 1) || (uVar7 == 0xf)) {
    Mas_Control(param_2,param_3);
    mapimachdep_UnlockApi();
    return uVar8;
  }
LAB_0006f002:
  mapimachdep_UnlockApi();
  return uVar8;
}

