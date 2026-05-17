/* Mapi_DeviceControlEx @ 0017fcc0 7184B */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* YAMAHA::Mapi_DeviceControlEx(unsigned int, unsigned int, void*) */

void YAMAHA::Mapi_DeviceControlEx(uint param_1,uint param_2,void *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  uint uVar36;
  uint uVar37;
  undefined8 *puVar38;
  int iVar39;
  int iVar40;
  ulong uVar41;
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
  uint local_a8;
  uint local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
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
  undefined4 local_18;
  long local_8;
  
  uVar41 = (ulong)param_2;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  local_a8 = 0;
  local_c1 = 0;
  local_a4 = 0;
  mapimachdep_LockApi();
  uVar35 = DAT_005789bc;
  uVar34 = DAT_005789b8;
  uVar33 = DAT_005789b4;
  uVar32 = DAT_005789b0;
  uVar31 = DAT_005789ac;
  uVar30 = DAT_005789a8;
  uVar29 = DAT_005789a4;
  uVar28 = DAT_005789a0;
  uVar27 = DAT_0057899c;
  uVar26 = DAT_00578998;
  uVar25 = DAT_00578994;
  uVar24 = DAT_00578990;
  uVar23 = DAT_0057898c;
  uVar22 = DAT_00578988;
  uVar21 = DAT_00578984;
  uVar20 = DAT_00578980;
  uVar19 = DAT_00578974;
  uVar18 = DAT_00578970;
  uVar17 = DAT_0057896c;
  uVar16 = DAT_00578968;
  uVar15 = DAT_00578964;
  uVar14 = DAT_00578960;
  uVar13 = DAT_0057895c;
  uVar12 = DAT_00578958;
  uVar11 = DAT_00578954;
  uVar10 = DAT_00578950;
  uVar9 = DAT_0057894c;
  uVar8 = DAT_00578948;
  uVar7 = DAT_00578944;
  uVar6 = DAT_00578940;
  uVar36 = DAT_0057893c;
  if (DAT_00577e10 == '\0') {
    mapimachdep_UnlockApi();
    uVar36 = 0xfffffff8;
    goto LAB_0018012c;
  }
  if (param_1 < 0x10002) {
    if ((param_1 < 0x10000) && (2 < param_1 - 5)) {
LAB_0017fddc:
      if (param_3 != (void *)0x0) goto LAB_0017fd58;
LAB_0017fde0:
      mapimachdep_UnlockApi();
      uVar36 = 0xfffffffe;
      goto LAB_0018012c;
    }
LAB_0017fd58:
    if (param_1 == 0x10018) {
      local_a8 = *(uint *)param_3;
      if (param_2 == 0) {
        uVar36 = MaSmw_DevCtrl(9,local_a8,0,(void *)0x0);
      }
      else {
        if (param_2 != 1) goto LAB_0017ff7c;
        uVar36 = MaSmw_DevCtrl(0xd,local_a8,0,(void *)0x0);
      }
      if (-1 < (int)uVar36) {
        (&DAT_00578930)[uVar41] = local_a8;
      }
    }
    else if (param_1 < 0x10019) {
      if (param_1 == 0x10002) {
        uVar36 = MaSmw_DevCtrl(3,0,0,param_3);
      }
      else if (param_1 < 0x10003) {
        if (param_1 == 5) {
          uVar36 = MaSmw_DevCtrl(0x27,param_2,0,(void *)0x0);
        }
        else if (param_1 < 6) {
          if (param_1 == 2) {
            uVar36 = MaSmw_DevCtrl(0x1f,0,0,param_3);
          }
          else if (param_1 < 3) {
            if (param_1 != 1) goto LAB_00180cf4;
            MaSmw_DevCtrl(5,0xfc,0,&local_c1);
            *(undefined1 *)param_3 = local_c1;
            MaSmw_DevCtrl(5,0xfd,0,&local_c1);
            *(undefined1 *)((long)param_3 + 1) = local_c1;
            MaSmw_DevCtrl(5,0x18,0,&local_c1);
            uVar36 = 0;
          }
          else if (param_1 == 3) {
            uVar36 = MaSmw_DevCtrl(0x61,0,0,param_3);
          }
          else {
            if (param_1 != 4) goto LAB_00180cf4;
            uVar36 = MaSmw_DevCtrl(0x26,param_2,0,param_3);
          }
        }
        else if (param_1 == 7) {
          uVar36 = MaSmw_DevCtrl(0x2c,param_2,0,param_3);
        }
        else if (param_1 < 7) {
          uVar37 = MaSmw_DevCtrl(0x28,0,0,&local_a4);
          uVar36 = local_a4;
          if ((int)uVar37 < 0) {
            uVar36 = uVar37;
          }
        }
        else if (param_1 == 0x10000) {
          uVar36 = MaSmw_DevCtrl(0,0,0,(void *)0x0);
          if (uVar36 == 0) {
            DAT_00578920 = 0;
            DAT_00578924 = 0;
            DAT_00578928 = 0;
            DAT_0057892c = 0;
            DAT_00578930 = 0;
            DAT_00578934 = 0;
            DAT_00578918 = 0;
            DAT_00578938 = 1;
            DAT_00578939 = 0;
            DAT_0057893a = 0;
            DAT_0057893b = 0;
            DAT_0057891c = 0;
            DAT_0057893c = 0;
            DAT_00578940 = 0x400;
            DAT_00578944 = 0;
            DAT_00578948 = 0;
            DAT_0057894c = 0;
            DAT_00578950 = 0;
            DAT_00578954 = 0x1000;
            DAT_00578958 = 0;
            DAT_0057895c = 0;
            DAT_00578960 = 0;
            DAT_00578964 = 0;
            DAT_00578968 = 0x4000;
            DAT_0057896c = 0;
            DAT_00578970 = 0;
            DAT_00578974 = 0;
            DAT_00578978 = 0;
            DAT_0057897c = 0;
            DAT_00578980 = 0x10000000;
            DAT_00578984 = 0;
            DAT_00578988 = 0;
            DAT_0057898c = 0;
            DAT_00578990 = 0;
            DAT_00578994 = 0x10000000;
            DAT_00578998 = 0;
            DAT_0057899c = 0;
            DAT_005789a0 = 0;
            DAT_005789a4 = 0;
            DAT_005789a8 = 0x10000000;
            DAT_005789ac = 0;
            DAT_005789b0 = 0;
            DAT_005789b4 = 0;
            DAT_005789b8 = 0;
            DAT_005789bc = 0x10000000;
            DAT_005789c0 = 0;
            DAT_005789c4 = 0;
            DAT_005789c8 = 0;
            DAT_005789cc = 0;
            DAT_005789d0 = 0x10000000;
            DAT_005789d4 = 0;
            DAT_005789d8 = 0;
            DAT_005789dc = 0;
            DAT_005789e0 = 0;
            DAT_005789e4 = 0x10000000;
            DAT_005789e8 = 0;
            DAT_005789ec = 0;
            DAT_005789f0 = 0;
            DAT_005789f4 = 0;
            DAT_005789f8 = 0x10000000;
            DAT_005789fc = 0;
            DAT_00578a00 = 0;
            DAT_00578a04 = 0;
            DAT_00578a08 = 0;
            DAT_00578a0c = 0;
            DAT_00578a0d = 0;
            DAT_00578a0e = 0;
            DAT_00578a0f = 0;
            DAT_00578a10 = 0;
            DAT_00578a14 = 48000;
            DAT_00578a18 = 0;
            DAT_00578a19 = 0;
          }
        }
        else {
          if (param_1 != 0x10001) goto LAB_00180cf4;
          uVar37 = MaSmw_DevCtrl(7,0,0,&local_a8);
          uVar36 = local_a8;
          if ((int)uVar37 < 0) {
            uVar36 = uVar37;
          }
        }
      }
      else if (param_1 == 0x10013) {
        *(undefined4 *)param_3 = DAT_00578918;
        uVar36 = 0;
      }
      else if (param_1 < 0x10014) {
        if (param_1 == 0x10010) {
          uVar37 = (int)*(char *)param_3 + 0x60;
          if ((0x74 < (uVar37 & 0xff)) ||
             (uVar1 = (int)*(char *)((long)param_3 + 1) + 0x60, 0x74 < (uVar1 & 0xff)))
          goto LAB_0017fde0;
          local_a8 = uVar37;
          uVar36 = 0xfffffffe;
          switch(param_2) {
          case 0:
            uVar36 = MaSmw_DevCtrl(200,uVar37,0,(void *)0x0);
            break;
          case 1:
            uVar36 = MaSmw_DevCtrl(0xc9,uVar37,0,(void *)0x0);
            break;
          case 2:
            uVar36 = MaSmw_DevCtrl(0xca,uVar37,uVar1,(void *)0x0);
            break;
          case 3:
            uVar36 = MaSmw_DevCtrl(0xcb,uVar37,0,(void *)0x0);
            break;
          case 4:
            uVar36 = MaSmw_DevCtrl(0xcc,uVar37,0,(void *)0x0);
            break;
          case 5:
            uVar36 = MaSmw_DevCtrl(0xcd,uVar37,0,(void *)0x0);
            break;
          case 6:
            uVar36 = MaSmw_DevCtrl(0xce,uVar37,0,(void *)0x0);
            break;
          case 7:
            uVar36 = MaSmw_DevCtrl(0xcf,uVar37,uVar1,(void *)0x0);
            break;
          case 8:
            uVar36 = MaSmw_DevCtrl(0xd0,uVar37,0,(void *)0x0);
            break;
          case 9:
            uVar36 = MaSmw_DevCtrl(0xd1,uVar37,uVar1,(void *)0x0);
            break;
          case 10:
            uVar36 = MaSmw_DevCtrl(0xd2,uVar37,0,(void *)0x0);
            break;
          case 0xb:
            uVar36 = MaSmw_DevCtrl(0xd3,uVar37,0,(void *)0x0);
            break;
          case 0xc:
            uVar36 = MaSmw_DevCtrl(0xd4,uVar37,0,(void *)0x0);
            break;
          case 0xd:
            uVar36 = MaSmw_DevCtrl(0xd5,uVar37,uVar1,(void *)0x0);
            break;
          case 0xe:
            uVar36 = MaSmw_DevCtrl(0xd6,uVar37,uVar1,(void *)0x0);
            break;
          case 0xf:
            uVar36 = MaSmw_DevCtrl(0xd7,uVar37,0,(void *)0x0);
          }
        }
        else if (param_1 < 0x10011) {
          if (param_1 != 0x10003) goto LAB_00180cf4;
          uVar36 = MaSmw_DevCtrl(0x2a,0,0,param_3);
        }
        else if (param_1 == 0x10011) {
          uVar36 = MaSmw_DevCtrl(0xf0,param_2,0,&local_c0);
          if (-1 < (int)uVar36) {
            *(char *)param_3 = local_c0 + -0x60;
            *(char *)((long)param_3 + 1) = local_bf + -0x60;
          }
        }
        else {
          if (param_1 != 0x10012) goto LAB_00180cf4;
          switch(*(uint *)param_3) {
          case 0:
          case 3:
            local_a8 = 0;
            uVar36 = 0;
            break;
          default:
            local_a8 = *(uint *)param_3;
            uVar36 = 0xfffffffe;
            goto switchD_00180a30_default;
          case 6:
            uVar36 = 1;
            local_a8 = 1;
            break;
          case 9:
            uVar36 = 2;
            local_a8 = 2;
            break;
          case 0xc:
            uVar36 = 3;
            local_a8 = 3;
          }
          uVar36 = MaSmw_DevCtrl(0x16,uVar36,0,(void *)0x0);
          if (uVar36 == 0) {
            DAT_00578918 = *(undefined4 *)param_3;
          }
        }
      }
      else if (param_1 == 0x10015) {
        uVar36 = MaSmw_DevCtrl(0xf1,param_2,0,param_3);
      }
      else if (param_1 < 0x10015) {
        local_a8 = *(uint *)param_3;
        uVar36 = 0xfffffffe;
        switch(param_2) {
        case 1:
          uVar36 = MaSmw_DevCtrl(0xdc,local_a8,0,(void *)0x0);
          break;
        case 2:
          uVar36 = MaSmw_DevCtrl(0xdd,local_a8,0,(void *)0x0);
          break;
        case 3:
          uVar36 = MaSmw_DevCtrl(0xde,local_a8,0,(void *)0x0);
          break;
        case 4:
          uVar36 = MaSmw_DevCtrl(0xdf,local_a8,0,(void *)0x0);
          break;
        case 5:
          uVar36 = MaSmw_DevCtrl(0xe0,local_a8,0,(void *)0x0);
          break;
        case 6:
          uVar36 = MaSmw_DevCtrl(0xe1,local_a8,0,(void *)0x0);
          break;
        case 7:
          uVar36 = MaSmw_DevCtrl(0xe2,local_a8,0,(void *)0x0);
          break;
        case 8:
          uVar36 = MaSmw_DevCtrl(0xe3,local_a8,0,(void *)0x0);
        }
      }
      else if (param_1 == 0x10016) {
        uVar36 = MaSmw_DevCtrl(0xe6,param_2,*(uint *)param_3,(void *)0x0);
      }
      else {
        if (param_1 != 0x10017) goto LAB_00180cf4;
        uVar36 = MaSmw_DevCtrl(0xf2,param_2,0,param_3);
      }
    }
    else if (param_1 == 0x10032) {
      *(undefined1 *)param_3 = DAT_00578938;
      *(undefined1 *)((long)param_3 + 1) = DAT_00578939;
      *(undefined1 *)((long)param_3 + 2) = DAT_0057893a;
      *(undefined1 *)((long)param_3 + 3) = DAT_0057893b;
      uVar36 = 0;
    }
    else if (param_1 < 0x10033) {
      if (param_1 == 0x1001d) {
        if (1 < param_2) goto LAB_0017ff7c;
        *(undefined4 *)param_3 = (&DAT_00578928)[uVar41];
        uVar36 = 0;
      }
      else if (param_1 < 0x1001e) {
        if (param_1 == 0x1001a) {
          local_a8 = *(uint *)param_3;
          if (param_2 == 0) {
            switch(local_a8) {
            case 0:
              break;
            default:
              uVar36 = 0xfffffffe;
              goto switchD_00180a30_default;
            case 4:
              local_a8 = 5;
              break;
            case 8:
              local_a8 = 4;
              break;
            case 0xc:
              local_a8 = 3;
              break;
            case 0x10:
              local_a8 = 2;
              break;
            case 0x12:
              local_a8 = 1;
            }
            uVar36 = MaSmw_DevCtrl(10,local_a8,0,(void *)0x0);
          }
          else {
            if (param_2 != 1) goto LAB_0017ff7c;
            switch(local_a8) {
            case 0:
            case 4:
              break;
            default:
              uVar36 = 0xfffffffe;
              goto switchD_00180a30_default;
            case 2:
              local_a8 = 5;
              break;
            case 6:
              local_a8 = 3;
              break;
            case 8:
              local_a8 = 2;
              break;
            case 9:
              local_a8 = 1;
            }
            uVar36 = MaSmw_DevCtrl(0xe,local_a8,0,(void *)0x0);
          }
          if (-1 < (int)uVar36) {
            (&DAT_00578920)[param_2] = *(undefined4 *)param_3;
          }
        }
        else if (param_1 < 0x1001a) {
          if (param_2 < 2) {
            *(undefined4 *)param_3 = (&DAT_00578930)[param_2];
            uVar36 = 0;
          }
          else {
LAB_0017ff7c:
            uVar36 = 0xfffffffe;
          }
        }
        else if (param_1 == 0x1001b) {
          if (1 < param_2) goto LAB_0017ff7c;
          *(undefined4 *)param_3 = (&DAT_00578920)[uVar41];
          uVar36 = 0;
        }
        else {
          if (param_1 != 0x1001c) goto LAB_00180cf4;
          local_a8 = *(uint *)param_3;
          if (param_2 == 0) {
            uVar36 = MaSmw_DevCtrl(0xb,local_a8,0,(void *)0x0);
          }
          else {
            if (param_2 != 1) goto LAB_0017ff7c;
            uVar36 = MaSmw_DevCtrl(0xf,local_a8,0,(void *)0x0);
          }
          if (-1 < (int)uVar36) {
            (&DAT_00578928)[param_2] = local_a8;
          }
        }
      }
      else if (param_1 == 0x10029) {
        switch(uVar41) {
        case 0:
          local_a8 = *(uint *)param_3;
          uVar36 = MaSmw_DevCtrl(0x48,local_a8,0,(void *)0x0);
          if (-1 < (int)uVar36) {
            uVar36 = MaSmw_DevCtrl(0x58,0,0,(void *)0x0);
          }
          break;
        case 1:
          uVar36 = MaSmw_DevCtrl(0x49,0,0,param_3);
          break;
        case 2:
          local_a8 = *(uint *)param_3 & 0xff;
          uVar36 = MaSmw_DevCtrl(0x1d,local_a8,*(uint *)param_3 >> 8 & 0xff,(void *)0x0);
          if (uVar36 == 0) {
            DAT_0057891c = *(undefined4 *)param_3;
          }
          break;
        case 3:
          *(undefined4 *)param_3 = DAT_0057891c;
          uVar36 = 0;
          break;
        case 4:
          uVar37 = *(uint *)param_3;
          if (uVar37 == 0) {
            local_a0 = 0x400;
            local_98 = 0;
            local_90 = 0x100000000000;
            uStack_88 = 0;
            local_80 = 0;
            uStack_78 = 0x4000;
            local_70 = 0;
            auStack_68 = (undefined1  [8])((ulong)(uint)auStack_68._4_4_ << 0x20);
          }
          else if (uVar37 == 2) {
            puVar38 = &local_a0;
            do {
              *(undefined4 *)puVar38 = 0x10000000;
              puVar2 = (undefined8 *)((long)puVar38 + 0x14);
              *(undefined4 *)((long)puVar38 + 4) = 0;
              *(undefined4 *)(puVar38 + 1) = 0;
              *(undefined4 *)((long)puVar38 + 0xc) = 0;
              *(undefined4 *)(puVar38 + 2) = 0;
              puVar38 = puVar2;
            } while (puVar2 != (undefined8 *)(auStack_68 + 4));
          }
          else {
            uVar36 = 0xfffffffe;
            if ((uVar37 & 0xfffffffd) != 1) break;
            local_a0 = *(undefined8 *)((long)param_3 + 4);
            local_98 = *(undefined8 *)((long)param_3 + 0xc);
            local_90 = *(undefined8 *)((long)param_3 + 0x14);
            uStack_88 = *(undefined8 *)((long)param_3 + 0x1c);
            local_80 = *(undefined8 *)((long)param_3 + 0x24);
            uStack_78 = *(undefined8 *)((long)param_3 + 0x2c);
            local_70 = *(undefined8 *)((long)param_3 + 0x34);
            auStack_68._0_4_ = *(undefined4 *)((long)param_3 + 0x3c);
          }
          local_a8 = uVar37 & 1;
          if (DAT_0057897c != 0) {
            local_a8 = 2;
          }
          MaSmw_DevCtrl(0x2b,local_a8,0,(void *)0x0);
          uVar37 = 3;
          if ((*(uint *)param_3 & 2) == 0) {
            uVar37 = 0;
          }
          uVar36 = MaSmw_DevCtrl(0x1e,0,uVar37,&local_a0);
          if (((-1 < (int)uVar36) &&
              (uVar36 = MaSmw_DevCtrl(0x1e,0,uVar37 + 1,(void *)((long)&local_90 + 4)),
              -1 < (int)uVar36)) &&
             (uVar36 = MaSmw_DevCtrl(0x1e,0,uVar37 + 2,&uStack_78), -1 < (int)uVar36)) {
            DAT_0057893c = *(uint *)param_3;
            DAT_00578940 = *(undefined4 *)((long)param_3 + 4);
            DAT_00578944 = *(undefined4 *)((long)param_3 + 8);
            DAT_00578948 = *(undefined4 *)((long)param_3 + 0xc);
            DAT_0057894c = *(undefined4 *)((long)param_3 + 0x10);
            DAT_00578950 = *(undefined4 *)((long)param_3 + 0x14);
            DAT_00578954 = *(undefined4 *)((long)param_3 + 0x18);
            DAT_00578958 = *(undefined4 *)((long)param_3 + 0x1c);
            DAT_0057895c = *(undefined4 *)((long)param_3 + 0x20);
            DAT_00578960 = *(undefined4 *)((long)param_3 + 0x24);
            DAT_00578964 = *(undefined4 *)((long)param_3 + 0x28);
            DAT_00578968 = *(undefined4 *)((long)param_3 + 0x2c);
            DAT_0057896c = *(undefined4 *)((long)param_3 + 0x30);
            DAT_00578970 = *(undefined4 *)((long)param_3 + 0x34);
            DAT_00578974 = *(undefined4 *)((long)param_3 + 0x38);
            DAT_00578978 = *(undefined4 *)((long)param_3 + 0x3c);
          }
          break;
        case 5:
          *(undefined4 *)((long)param_3 + 0x3c) = DAT_00578978;
          *(uint *)param_3 = uVar36;
          *(undefined4 *)((long)param_3 + 4) = uVar6;
          *(undefined4 *)((long)param_3 + 8) = uVar7;
          *(undefined4 *)((long)param_3 + 0xc) = uVar8;
          *(undefined4 *)((long)param_3 + 0x10) = uVar9;
          *(undefined4 *)((long)param_3 + 0x14) = uVar10;
          *(undefined4 *)((long)param_3 + 0x18) = uVar11;
          *(undefined4 *)((long)param_3 + 0x1c) = uVar12;
          *(undefined4 *)((long)param_3 + 0x20) = uVar13;
          *(undefined4 *)((long)param_3 + 0x24) = uVar14;
          *(undefined4 *)((long)param_3 + 0x28) = uVar15;
          *(undefined4 *)((long)param_3 + 0x2c) = uVar16;
          *(undefined4 *)((long)param_3 + 0x30) = uVar17;
          *(undefined4 *)((long)param_3 + 0x34) = uVar18;
          *(undefined4 *)((long)param_3 + 0x38) = uVar19;
          uVar36 = 0;
          break;
        case 6:
          local_a8 = *(uint *)param_3;
          uVar36 = MaSmw_DevCtrl(0x46,local_a8,0,(void *)0x0);
          if (-1 < (int)uVar36) {
            uVar36 = MaSmw_DevCtrl(0x58,0,0,(void *)0x0);
          }
          break;
        case 7:
          uVar36 = MaSmw_DevCtrl(0x47,0,0,param_3);
          break;
        case 8:
          uVar36 = MaSmw_DevCtrl(0x21,0,0,param_3);
          break;
        case 9:
          uVar36 = MaSmw_DevCtrl(0x22,0,0,param_3);
          break;
        case 10:
          cVar4 = *(char *)param_3;
          cVar5 = *(char *)((long)param_3 + 1);
          if ((0x74 < (byte)(cVar4 + 0x60U)) || (0x74 < (byte)(cVar5 + 0x60U))) goto LAB_0017fde0;
          iVar39 = (int)cVar4;
          if (cVar4 < '\x12') {
            if (cVar4 < '\f') {
              if (iVar39 < 6) {
                local_b7 = 0;
              }
              else {
                local_b7 = 1;
              }
            }
            else {
              local_b7 = 2;
            }
          }
          else {
            local_b7 = 3;
          }
          iVar40 = (int)cVar5;
          if (cVar5 < '\x12') {
            if (cVar5 < '\f') {
              if (iVar40 < 6) {
                local_b5 = 0;
              }
              else {
                local_b5 = 1;
              }
            }
            else {
              local_b5 = 2;
            }
          }
          else {
            local_b5 = 3;
          }
          if (0 < iVar39) {
            iVar39 = 0;
          }
          if (0 < iVar40) {
            iVar40 = 0;
          }
          local_b8 = (undefined1)
                     *(undefined4 *)(&DAT_0048a190 + (long)(int)(iVar39 + 0x60U & 0xff) * 4);
          local_b6 = (undefined1)
                     *(undefined4 *)(&DAT_0048a190 + (long)(int)(iVar40 + 0x60U & 0xff) * 4);
          uVar36 = MaSmw_DevCtrl(0x24,0,0,&local_b8);
          if (-1 < (int)uVar36) {
            DAT_00578a18 = *(undefined1 *)param_3;
            DAT_00578a19 = *(undefined1 *)((long)param_3 + 1);
          }
          break;
        case 0xb:
          *(undefined1 *)param_3 = DAT_00578a18;
          *(undefined1 *)((long)param_3 + 1) = DAT_00578a19;
          uVar36 = 0;
          break;
        case 0xc:
          if (*(int *)param_3 == 0) {
            local_98 = _UNK_001818d8;
            local_a0 = _DAT_001818d0;
            uStack_78 = _UNK_001818f8;
            local_80 = _DAT_001818f0;
            uStack_58 = 0;
            local_60 = 0;
            auStack_68 = (undefined1  [8])_UNK_00181908;
            local_70 = _DAT_00181900;
            uStack_88 = _UNK_001818e8;
            local_90 = _DAT_001818e0;
            local_50 = 0x10000000;
            local_a8 = (uint)((DAT_0057893c & 0xfffffffd) != 0);
            local_3c = 0x10000000;
            local_28 = 0x10000000;
            local_4c = 0;
            local_48 = 0;
            local_44 = 0;
            local_40 = 0;
            local_38 = 0;
            local_34 = 0;
            local_30 = 0;
            local_2c = 0;
            local_24 = 0;
            local_20 = 0;
            local_1c = 0;
            local_18 = 0;
          }
          else {
            uVar36 = 0xfffffffe;
            if (*(int *)param_3 != 1) break;
            local_a0 = *(undefined8 *)((long)param_3 + 4);
            local_98 = *(undefined8 *)((long)param_3 + 0xc);
            local_90 = *(undefined8 *)((long)param_3 + 0x14);
            uStack_88 = *(undefined8 *)((long)param_3 + 0x1c);
            local_80 = *(undefined8 *)((long)param_3 + 0x24);
            uStack_78 = *(undefined8 *)((long)param_3 + 0x2c);
            local_70 = *(undefined8 *)((long)param_3 + 0x34);
            auStack_68 = *(undefined1 (*) [8])((long)param_3 + 0x3c);
            local_a8 = 2;
            local_60 = *(undefined8 *)((long)param_3 + 0x44);
            uStack_58 = *(undefined8 *)((long)param_3 + 0x4c);
            local_50 = *(undefined4 *)((long)param_3 + 0x54);
            local_4c = *(undefined4 *)((long)param_3 + 0x58);
            local_48 = *(undefined4 *)((long)param_3 + 0x5c);
            local_44 = *(undefined4 *)((long)param_3 + 0x60);
            local_40 = *(undefined4 *)((long)param_3 + 100);
            local_3c = *(undefined4 *)((long)param_3 + 0x68);
            local_38 = *(undefined4 *)((long)param_3 + 0x6c);
            local_34 = *(undefined4 *)((long)param_3 + 0x70);
            local_30 = *(undefined4 *)((long)param_3 + 0x74);
            local_2c = *(undefined4 *)((long)param_3 + 0x78);
            local_28 = *(undefined4 *)((long)param_3 + 0x7c);
            local_24 = *(undefined4 *)((long)param_3 + 0x80);
            local_20 = *(undefined4 *)((long)param_3 + 0x84);
            local_1c = *(undefined4 *)((long)param_3 + 0x88);
            local_18 = *(undefined4 *)((long)param_3 + 0x8c);
          }
          uVar36 = MaSmw_DevCtrl(0x2b,local_a8,0,(void *)0x0);
          if (((int)uVar36 < 0) || (iVar39 = *(int *)param_3, iVar39 == 1)) {
            uVar36 = MaSmw_DevCtrl(0x1e,0,6,&local_a0);
            if (-1 < (int)uVar36) {
              uVar36 = MaSmw_DevCtrl(0x1e,0,7,(void *)((long)&local_90 + 4));
              if (-1 < (int)uVar36) {
                uVar36 = MaSmw_DevCtrl(0x1e,0,8,&uStack_78);
                if (-1 < (int)uVar36) {
                  uVar36 = MaSmw_DevCtrl(0x1e,0,9,auStack_68 + 4);
                  if (-1 < (int)uVar36) {
                    uVar36 = MaSmw_DevCtrl(0x1e,0,10,&local_50);
                    if (-1 < (int)uVar36) {
                      uVar36 = MaSmw_DevCtrl(0x1e,0,0xb,&local_3c);
                      if ((-1 < (int)uVar36) &&
                         (uVar36 = MaSmw_DevCtrl(0x1e,0,0xc,&local_28), -1 < (int)uVar36)) {
                        iVar39 = *(int *)param_3;
                        goto LAB_00180ed0;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
LAB_00180ed0:
            DAT_00578980 = *(undefined4 *)((long)param_3 + 4);
            DAT_00578984 = *(undefined4 *)((long)param_3 + 8);
            DAT_00578988 = *(undefined4 *)((long)param_3 + 0xc);
            DAT_0057898c = *(undefined4 *)((long)param_3 + 0x10);
            DAT_00578990 = *(undefined4 *)((long)param_3 + 0x14);
            DAT_00578994 = *(undefined4 *)((long)param_3 + 0x18);
            DAT_00578998 = *(undefined4 *)((long)param_3 + 0x1c);
            DAT_0057899c = *(undefined4 *)((long)param_3 + 0x20);
            DAT_005789a0 = *(undefined4 *)((long)param_3 + 0x24);
            DAT_005789a4 = *(undefined4 *)((long)param_3 + 0x28);
            DAT_005789a8 = *(undefined4 *)((long)param_3 + 0x2c);
            DAT_005789ac = *(undefined4 *)((long)param_3 + 0x30);
            DAT_005789b0 = *(undefined4 *)((long)param_3 + 0x34);
            DAT_005789b4 = *(undefined4 *)((long)param_3 + 0x38);
            DAT_005789b8 = *(undefined4 *)((long)param_3 + 0x3c);
            DAT_005789bc = *(undefined4 *)((long)param_3 + 0x40);
            DAT_005789c0 = *(undefined4 *)((long)param_3 + 0x44);
            DAT_005789c4 = *(undefined4 *)((long)param_3 + 0x48);
            DAT_005789c8 = *(undefined4 *)((long)param_3 + 0x4c);
            DAT_005789cc = *(undefined4 *)((long)param_3 + 0x50);
            DAT_005789d0 = *(undefined4 *)((long)param_3 + 0x54);
            DAT_005789d4 = *(undefined4 *)((long)param_3 + 0x58);
            DAT_005789d8 = *(undefined4 *)((long)param_3 + 0x5c);
            DAT_005789dc = *(undefined4 *)((long)param_3 + 0x60);
            DAT_005789e0 = *(undefined4 *)((long)param_3 + 100);
            DAT_005789e4 = *(undefined4 *)((long)param_3 + 0x68);
            DAT_005789e8 = *(undefined4 *)((long)param_3 + 0x6c);
            DAT_005789ec = *(undefined4 *)((long)param_3 + 0x70);
            DAT_005789f0 = *(undefined4 *)((long)param_3 + 0x74);
            DAT_005789f4 = *(undefined4 *)((long)param_3 + 0x78);
            DAT_005789f8 = *(undefined4 *)((long)param_3 + 0x7c);
            DAT_005789fc = *(undefined4 *)((long)param_3 + 0x80);
            DAT_00578a00 = *(undefined4 *)((long)param_3 + 0x84);
            DAT_00578a04 = *(undefined4 *)((long)param_3 + 0x88);
            DAT_00578a08 = *(undefined4 *)((long)param_3 + 0x8c);
            DAT_0057897c = iVar39;
          }
          break;
        case 0xd:
          *(int *)param_3 = DAT_0057897c;
          *(undefined4 *)((long)param_3 + 4) = uVar20;
          *(undefined4 *)((long)param_3 + 8) = uVar21;
          *(undefined4 *)((long)param_3 + 0xc) = uVar22;
          *(undefined4 *)((long)param_3 + 0x10) = uVar23;
          *(undefined4 *)((long)param_3 + 0x14) = uVar24;
          *(undefined4 *)((long)param_3 + 0x18) = uVar25;
          *(undefined4 *)((long)param_3 + 0x1c) = uVar26;
          *(undefined4 *)((long)param_3 + 0x20) = uVar27;
          *(undefined4 *)((long)param_3 + 0x24) = uVar28;
          *(undefined4 *)((long)param_3 + 0x28) = uVar29;
          *(undefined4 *)((long)param_3 + 0x2c) = uVar30;
          *(undefined4 *)((long)param_3 + 0x30) = uVar31;
          *(undefined4 *)((long)param_3 + 0x34) = uVar32;
          *(undefined4 *)((long)param_3 + 0x38) = uVar33;
          *(undefined4 *)((long)param_3 + 0x3c) = uVar34;
          *(undefined4 *)((long)param_3 + 0x40) = uVar35;
          uVar21 = DAT_00578a00;
          uVar20 = DAT_005789fc;
          uVar19 = DAT_005789f8;
          uVar18 = DAT_005789f4;
          uVar17 = DAT_005789f0;
          uVar16 = DAT_005789ec;
          uVar15 = DAT_005789e8;
          uVar14 = DAT_005789e4;
          uVar13 = DAT_005789e0;
          uVar12 = DAT_005789dc;
          uVar11 = DAT_005789d8;
          uVar10 = DAT_005789d4;
          uVar9 = DAT_005789d0;
          uVar8 = DAT_005789cc;
          uVar7 = DAT_005789c8;
          uVar6 = DAT_005789c4;
          *(undefined4 *)((long)param_3 + 0x44) = DAT_005789c0;
          *(undefined4 *)((long)param_3 + 0x48) = uVar6;
          *(undefined4 *)((long)param_3 + 0x4c) = uVar7;
          *(undefined4 *)((long)param_3 + 0x50) = uVar8;
          *(undefined4 *)((long)param_3 + 0x54) = uVar9;
          *(undefined4 *)((long)param_3 + 0x58) = uVar10;
          *(undefined4 *)((long)param_3 + 0x5c) = uVar11;
          *(undefined4 *)((long)param_3 + 0x60) = uVar12;
          *(undefined4 *)((long)param_3 + 100) = uVar13;
          *(undefined4 *)((long)param_3 + 0x68) = uVar14;
          *(undefined4 *)((long)param_3 + 0x6c) = uVar15;
          *(undefined4 *)((long)param_3 + 0x70) = uVar16;
          *(undefined4 *)((long)param_3 + 0x74) = uVar17;
          *(undefined4 *)((long)param_3 + 0x78) = uVar18;
          *(undefined4 *)((long)param_3 + 0x7c) = uVar19;
          *(undefined4 *)((long)param_3 + 0x80) = uVar20;
          *(undefined4 *)((long)param_3 + 0x84) = uVar21;
          uVar6 = DAT_00578a04;
          *(undefined4 *)((long)param_3 + 0x8c) = DAT_00578a08;
          *(undefined4 *)((long)param_3 + 0x88) = uVar6;
          uVar36 = 0;
          break;
        default:
          uVar36 = 0xfffffffe;
        }
      }
      else {
        if (param_1 < 0x1002a) {
          if (param_1 == 0x1001e) {
            local_af = *(undefined1 *)((long)param_3 + 1);
            local_ae = *(undefined1 *)((long)param_3 + 2);
            local_ad = *(undefined1 *)((long)param_3 + 3);
            bVar3 = *(byte *)param_3;
            if (bVar3 == 0) {
LAB_0018153c:
              uVar36 = 0xfffffffe;
            }
            else {
              if (bVar3 < 8) {
                local_b0 = (undefined1)(1 << (ulong)(bVar3 - 1 & 0x1f));
              }
              else {
                if (bVar3 != 8) goto LAB_0018153c;
                local_b0 = 0;
              }
              uVar36 = MaSmw_DevCtrl(8,param_2,0,&local_b0);
              if (-1 < (int)uVar36) {
                DAT_00578938 = *(undefined1 *)param_3;
                DAT_00578939 = *(undefined1 *)((long)param_3 + 1);
                DAT_0057893a = *(undefined1 *)((long)param_3 + 2);
                DAT_0057893b = *(undefined1 *)((long)param_3 + 3);
              }
            }
            goto switchD_00180a30_default;
          }
        }
        else {
          if (param_1 == 0x10030) {
            if (param_2 == 0) {
              local_a8 = *(uint *)param_3;
              uVar36 = MaSmw_DevCtrl(0x5f,local_a8,0,(void *)0x0);
            }
            else if (param_2 == 1) {
              uVar36 = MaSmw_DevCtrl(0x60,0,0,param_3);
            }
            else {
              uVar36 = 0xfffffffe;
            }
            goto switchD_00180a30_default;
          }
          if (param_1 == 0x10031) goto LAB_0018031c;
        }
LAB_00180cf4:
        uVar36 = 0xffffffff;
      }
    }
    else if (param_1 == 0x10037) {
      local_a8 = *(uint *)param_3;
      uVar36 = MaSmw_DevCtrl(0xf5,local_a8,0,(void *)0x0);
    }
    else if (param_1 < 0x10038) {
      if (param_1 == 0x10034) {
        *(undefined1 *)param_3 = DAT_00578a0c;
        *(undefined1 *)((long)param_3 + 1) = DAT_00578a0d;
        *(undefined1 *)((long)param_3 + 2) = DAT_00578a0e;
        *(undefined1 *)((long)param_3 + 3) = DAT_00578a0f;
        *(undefined1 *)((long)param_3 + 4) = DAT_00578a10;
        *(undefined4 *)((long)param_3 + 8) = DAT_00578a14;
        uVar36 = 0;
      }
      else if (param_1 < 0x10034) {
        uVar36 = MaSmw_DevCtrl(0x23,param_2,0,param_3);
        if (-1 < (int)uVar36) {
          DAT_00578a0c = *(undefined1 *)param_3;
          DAT_00578a0d = *(undefined1 *)((long)param_3 + 1);
          DAT_00578a0e = *(undefined1 *)((long)param_3 + 2);
          DAT_00578a0f = *(undefined1 *)((long)param_3 + 3);
          DAT_00578a10 = *(undefined1 *)((long)param_3 + 4);
          DAT_00578a14 = *(undefined4 *)((long)param_3 + 8);
        }
      }
      else if (param_1 == 0x10035) {
        local_a8 = *(uint *)param_3;
        uVar36 = MaSmw_DevCtrl(0xf3,local_a8,0,(void *)0x0);
      }
      else {
        if (param_1 != 0x10036) goto LAB_00180cf4;
        uVar36 = MaSmw_DevCtrl(0xf4,0,0,param_3);
      }
    }
    else if (param_1 == 0x1003a) {
      uVar36 = MaSmw_DevCtrl(0xf8,0,0,param_3);
    }
    else if (param_1 < 0x1003b) {
      if (param_1 == 0x10038) {
        uVar36 = MaSmw_DevCtrl(0xf6,0,0,param_3);
      }
      else {
        if (param_1 != 0x10039) goto LAB_00180cf4;
        local_a8 = *(uint *)param_3;
        uVar36 = MaSmw_DevCtrl(0xf7,local_a8,0,(void *)0x0);
      }
    }
    else if (param_1 == 0x1003b) {
      uVar36 = MaSmw_DevCtrl(0xf9,0,0,param_3);
    }
    else {
      if (param_1 != 0x1003c) goto LAB_00180cf4;
      uVar36 = MaSmw_DevCtrl(0xfa,0,0,param_3);
    }
  }
  else {
    if (param_1 != 0x10031) goto LAB_0017fddc;
    if ((param_2 != 0) && (param_3 == (void *)0x0)) goto LAB_0017fde0;
LAB_0018031c:
    switch(uVar41) {
    case 0:
      uVar36 = MaSmw_DevCtrl(0x3c,0,0,(void *)0x0);
      if (-1 < (int)uVar36) {
        uVar36 = MaSmw_DevCtrl(0x58,0,0,(void *)0x0);
      }
      break;
    case 1:
      local_a8 = *(uint *)param_3;
      uVar36 = MaSmw_DevCtrl(0x42,local_a8,0,(void *)0x0);
      if (-1 < (int)uVar36) {
        uVar36 = MaSmw_DevCtrl(0x58,0,0,(void *)0x0);
      }
      break;
    case 2:
      uVar36 = MaSmw_DevCtrl(0x43,0,0,param_3);
      break;
    case 3:
      uVar36 = MaSmw_DevCtrl(0x44,0,0,param_3);
      break;
    case 4:
      uVar36 = MaSmw_DevCtrl(0x25,0,0,param_3);
      break;
    case 5:
      local_a8 = *(uint *)param_3;
      uVar36 = MaSmw_DevCtrl(0x4a,local_a8,0,(void *)0x0);
      if (-1 < (int)uVar36) {
        uVar36 = MaSmw_DevCtrl(0x58,0,0,(void *)0x0);
      }
      break;
    case 6:
      uVar36 = MaSmw_DevCtrl(0x4b,0,0,param_3);
      break;
    case 7:
      uVar36 = MaSmw_DevCtrl(0x54,0,0,param_3);
      if (-1 < (int)uVar36) {
        uVar36 = MaSmw_DevCtrl(0x58,0,0,(void *)0x0);
      }
      break;
    case 8:
      uVar36 = MaSmw_DevCtrl(0x55,0,0,param_3);
      break;
    case 9:
      uVar36 = MaSmw_DevCtrl(0x56,0,0,param_3);
      if (-1 < (int)uVar36) {
        uVar36 = MaSmw_DevCtrl(0x58,0,0,(void *)0x0);
      }
      break;
    case 10:
      uVar36 = MaSmw_DevCtrl(0x57,0,0,param_3);
      break;
    default:
      uVar36 = 0xfffffffe;
      break;
    case 0xc:
      local_a8 = *(uint *)param_3;
      uVar36 = MaSmw_DevCtrl(0x59,local_a8,0,(void *)0x0);
      if (-1 < (int)uVar36) {
        uVar36 = MaSmw_DevCtrl(0x58,0,0,(void *)0x0);
      }
      break;
    case 0xd:
      uVar36 = MaSmw_DevCtrl(0x5a,0,0,param_3);
      break;
    case 0xe:
      local_a8 = *(uint *)param_3;
      uVar36 = MaSmw_DevCtrl(0x66,local_a8,0,(void *)0x0);
      break;
    case 0xf:
      uVar36 = MaSmw_DevCtrl(0x67,0,0,param_3);
    }
  }
switchD_00180a30_default:
  mapimachdep_UnlockApi();
LAB_0018012c:
  if (local_8 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar36);
  }
  return;
}

