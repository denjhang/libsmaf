/* MaSmw_ReceiveMsg @ 0007a75c 2680B */


/* YAMAHA::MaSmw_ReceiveMsg(unsigned int, unsigned int, unsigned int, unsigned int) */

void YAMAHA::MaSmw_ReceiveMsg(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uchar uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  byte bVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  code *pcVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  void *local_48 [2];
  undefined4 local_40;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [20];
  
  iVar7 = DAT_0007b264;
  uVar10 = (uint)*(byte *)(DAT_0007b224 + 0x7a774 + param_2 + param_1 * 4);
  iVar13 = *(int *)(DAT_0007b228 + 0x7a778);
  iVar16 = uVar10 * 0x228 + *(int *)(DAT_0007b228 + 0x7a77c);
  local_48[0] = (void *)0x0;
  iVar14 = uVar10 * 0x98;
  iVar11 = iVar13 + iVar14;
  if (((param_1 & 0xfffffffb) == 2) || (param_1 == 8)) {
    if (param_3 == 6) {
      if (-1 < (int)((uint)*(byte *)(iVar11 + 0x28) << 0x1f)) {
        return;
      }
      uVar15 = 0x7b;
      *(byte *)(iVar11 + 0x28) = *(byte *)(iVar11 + 0x28) & 0xfe;
    }
    else if (param_3 == 7) {
      iVar7 = *(int *)(iVar16 + 0x24);
      if (iVar7 == 0) {
        return;
      }
      if ((*(int *)(iVar11 + 0x3c) == 0) ||
         ((*(int *)(iVar11 + 0x40) != 0 &&
          (iVar16 = *(int *)(iVar11 + 0x40) + -1, *(int *)(iVar11 + 0x40) = iVar16, iVar16 != 0))))
      {
        bVar8 = *(byte *)(iVar7 + 0x18);
        iVar7 = MaSrm_Seek((uint)bVar8,0);
        if (iVar7 < 0) {
          return;
        }
        iVar7 = MaSrm_Start((uint)bVar8);
        if (iVar7 < 0) {
          return;
        }
        uVar15 = 0x7e;
      }
      else {
        puVar9 = *(uint **)(DAT_0007b22c + 0x7a83e);
        *puVar9 = *puVar9 & ~(0x10 << *(sbyte *)(iVar7 + 0x18));
        *(undefined4 *)(iVar13 + iVar14) = 3;
        *(undefined4 *)(iVar11 + 0x40) = *(undefined4 *)(iVar11 + 0x3c);
        if (*(byte *)(iVar11 + 0x34) != 0) {
          uVar10 = *(byte *)(iVar11 + 0x34) & 3;
          *puVar9 = *puVar9 & ~(0x100 << uVar10);
          MaDsp_3DCtrl(1,0xa5,uVar10,(void *)0x0);
        }
        if (*(byte *)(iVar11 + 0x35) != 0) {
          uVar10 = *(byte *)(iVar11 + 0x35) & 3;
          **(uint **)(DAT_0007b270 + 0x7aef4) =
               **(uint **)(DAT_0007b270 + 0x7aef4) & ~(0x100 << uVar10);
          MaDsp_3DCtrl(1,0xa5,uVar10,(void *)0x0);
        }
        if (*(byte *)(iVar11 + 0x36) != 0) {
          uVar10 = *(byte *)(iVar11 + 0x36) & 3;
          **(uint **)(DAT_0007b26c + 0x7aec6) =
               **(uint **)(DAT_0007b26c + 0x7aec6) & ~(0x100 << uVar10);
          MaDsp_3DCtrl(1,0xa5,uVar10,(void *)0x0);
        }
        if (*(byte *)(iVar11 + 0x37) != 0) {
          uVar10 = *(byte *)(iVar11 + 0x37) & 3;
          **(uint **)(DAT_0007b268 + 0x7ae98) =
               **(uint **)(DAT_0007b268 + 0x7ae98) & ~(0x100 << uVar10);
          MaDsp_3DCtrl(1,0xa5,uVar10,(void *)0x0);
        }
        MaDevDrv_StopTimer();
        uVar15 = 0x7f;
      }
      if (*(char *)(iVar11 + 0x29) == '\0') {
        return;
      }
    }
    else {
      if (param_3 != 5) {
        return;
      }
      uVar15 = 0x7d;
    }
    goto LAB_0007a7ea;
  }
  bVar8 = (byte)param_4;
  switch(param_3) {
  case 0:
    iVar13 = *(int *)(iVar16 + 0x24);
    if (iVar13 != 0) {
      uVar15 = (param_4 & 0x3ff) >> 8;
      if ((param_4 & 0x400) == 0) {
        MaSrm_StreamOff(uVar15);
        uVar10 = **(uint **)(iVar7 + 0x7ae6e);
        if ((0x10000 << uVar15 & uVar10) != 0) {
          **(uint **)(iVar7 + 0x7ae6e) = uVar10 & ~(0x10000 << uVar15);
          MaDevDrv_StopTimer();
        }
      }
      else {
        bVar8 = *(byte *)(iVar13 + 0x18);
        if (bVar8 == uVar15) {
          bVar6 = *(byte *)(iVar13 + 0x19);
          bVar2 = *(byte *)(iVar13 + 0x15);
          bVar3 = *(byte *)(iVar13 + 0x29);
        }
        else {
          bVar6 = *(byte *)(iVar13 + 0x2d);
          bVar2 = *(byte *)(iVar13 + 0x29);
          bVar3 = *(byte *)(iVar13 + 0x15);
        }
        uVar5 = (uint)bVar6;
        if (*(char *)(iVar11 + 0x34) < '\0') {
          if (((bVar8 < 4) && (*(byte *)(iVar13 + 0x10) == uVar10)) &&
             (*(char *)(iVar13 + 0x1a) != '\x01')) {
            if (*(char *)(iVar11 + 0x2f) == '\x02') {
              bVar6 = 0x80;
            }
            else {
              bVar6 = *(byte *)(iVar11 + 0x34) & 3 | 0xc0;
            }
            local_40._0_2_ = (ushort)CONCAT31((uint3)(byte)(bVar8 + 4),0xf2) | 0x8000;
            local_40._0_3_ = CONCAT12(0xf9,(ushort)local_40);
            local_40 = CONCAT13(bVar6,(undefined3)local_40);
            MaDevDrv_SendDirectPacket((uchar *)&local_40,4);
          }
          if (((*(byte *)(iVar13 + 0x2c) < 4) && (*(byte *)(iVar13 + 0x24) == uVar10)) &&
             (*(char *)(iVar13 + 0x2e) != '\x01')) {
            if (*(char *)(iVar11 + 0x2f) == '\x02') {
              bVar8 = 0x80;
            }
            else {
              bVar8 = *(byte *)(iVar11 + 0x34) & 3 | 0xc0;
            }
            local_40._0_2_ =
                 (ushort)CONCAT31((uint3)(byte)(*(byte *)(iVar13 + 0x2c) + 4),0xf2) | 0x8000;
            local_40._0_3_ = CONCAT12(0xf9,(ushort)local_40);
            local_40 = CONCAT13(bVar8,(undefined3)local_40);
            MaDevDrv_SendDirectPacket((uchar *)&local_40,4);
          }
        }
        iVar7 = DAT_0007b254;
        if ((param_4 & 0x800) == 0) {
          MaSrm_StreamOn(uVar15,param_2,param_4 & 0x3f,uVar5,(uint)bVar2);
          **(uint **)(iVar7 + 0x7ad90) = **(uint **)(iVar7 + 0x7ad90) | 0x10000 << uVar15;
          MaDevDrv_StartTimer();
        }
        else {
          MaSrm_StreamSlave(uVar15,param_2,(uint)*(byte *)(iVar13 + 4),uVar5,(uint)bVar3);
          MaSrm_StreamMaster(uVar15,param_2,param_4 & 0x3f,uVar5,(uint)bVar2);
          *(undefined1 *)(iVar13 + 4) = 0x41;
          if (uVar15 < 2) {
            **(uint **)(DAT_0007b284 + 0x7b01a) = **(uint **)(DAT_0007b284 + 0x7b01a) | 0x30000;
          }
          else {
            **(uint **)(DAT_0007b230 + 0x7a972) = **(uint **)(DAT_0007b230 + 0x7a972) | 0xc0000;
          }
          MaDevDrv_StartTimer();
          MaDevDrv_StartTimer();
        }
      }
    }
    break;
  case 1:
    uVar15 = param_4 & 0x1f;
    goto LAB_0007a7ea;
  case 2:
    if ((param_4 & 0x100) == 0) {
      FUN_000745bc(uVar10,param_4);
    }
    else {
      if (*(int *)(iVar13 + 0xab0) == 4) {
        (**(code **)(DAT_0007b27c + (uint)*(byte *)(iVar16 + 0x1d) * 0x14 + 0x7aff6))(1,0,0);
        MaDevDrv_SendDirectPacket((uchar *)((int)&DAT_0007b248 + DAT_0007b280 + 2),2);
        *(undefined4 *)(iVar13 + 0xab0) = 3;
      }
      uVar10 = **(uint **)(DAT_0007b238 + 0x7aa5e);
      if ((int)(uVar10 << 0x13) < 0) {
        **(uint **)(DAT_0007b238 + 0x7aa5e) = uVar10 & 0xffffefff;
        MaDevDrv_StopTimer();
      }
    }
    break;
  case 3:
    uVar15 = param_4 & 0x7f | (param_4 & 0x700) >> 1;
    iVar7 = Ma7emu_GetMode();
    if (iVar7 != 0) {
      iVar7 = (**(code **)(DAT_0007b258 + *(int *)(iVar11 + 4) * 0x28 + 0x7ae22))
                        (DAT_0007b25c + 0x7addc + uVar10 * 8,0x100,uVar15,&local_40);
      if (iVar7 < 0) {
        return;
      }
      uVar10 = *(byte *)((local_40 & 3) + iVar11 + 0x34) & 3;
      iVar7 = MaDsp_3DCtrl(1,0x86,uVar10,auStack_38);
      if (iVar7 < 0) {
        return;
      }
      iVar7 = MaDsp_3DCtrl(1,0x81,uVar10,auStack_3c);
      if (iVar7 < 0) {
        return;
      }
      if (*(int *)(iVar13 + iVar14) != 4) {
        *(undefined1 *)(iVar11 + (local_40 & 3) + 0x30) = 1;
        return;
      }
      MaDsp_3DCtrl(1,0xa4,uVar10,(void *)0x0);
      return;
    }
    uVar15 = uVar15 | 0x10000;
    goto LAB_0007a7ea;
  case 4:
    if (*(int *)(iVar16 + 0x24) != 0) {
      *(byte *)(*(int *)(iVar16 + 0x24) + 4) = bVar8 & 0x3f;
    }
    break;
  case 5:
    uVar10 = (param_4 & 0xfff) >> 8;
    uVar15 = (param_4 & 0x7f) >> 5;
    if (0xf < uVar10) {
      return;
    }
    bVar6 = (byte)((param_4 << 0x19) >> 0x1e);
    switch(uVar10) {
    case 0:
      if ((int)((uint)*(byte *)(iVar11 + 0x38) << 0x1f) < 0) {
        MaDevDrv_WriteIntermediateReg(0xa0,bVar6);
        MaDevDrv_WriteIntermediateReg(0xa1,(byte)(param_4 << 2) & 0x7c);
      }
      break;
    case 1:
      if ((int)((uint)*(byte *)(iVar11 + 0x39) << 0x1f) < 0) {
        MaDevDrv_WriteIntermediateReg(0xa0,bVar6);
        MaDevDrv_WriteIntermediateReg(0xa2,(byte)(param_4 << 2) & 0x7c);
      }
      break;
    case 2:
      if (((int)((uint)*(byte *)(iVar11 + 0x38) << 0x1f) < 0) ||
         ((int)((uint)*(byte *)(iVar11 + 0x39) << 0x1f) < 0)) {
        MaDevDrv_WriteIntermediateReg(0xa0,bVar6);
        MaDevDrv_WriteIntermediateReg(0xa3,(byte)(param_4 << 2) & 0x7c);
      }
      break;
    case 3:
      iVar7 = *(int *)(iVar16 + 0x24);
      if (iVar7 != 0) {
        if (*(byte *)(iVar7 + 0x18) == uVar15) {
          *(byte *)(iVar7 + 0x19) = bVar8 & 0xf;
        }
        else {
          *(byte *)(iVar7 + 0x2d) = bVar8 & 0xf;
        }
      }
      break;
    case 4:
      iVar7 = *(int *)(iVar16 + 0x24);
      if (iVar7 != 0) {
        if (*(byte *)(iVar7 + 0x18) == uVar15) {
          *(byte *)(iVar7 + 0x15) = bVar8 & 0x1f;
        }
        else {
          *(byte *)(iVar7 + 0x29) = bVar8 & 0x1f;
        }
      }
      break;
    case 5:
      iVar7 = *(int *)(iVar16 + 0x24);
      if (iVar7 != 0) {
        if (*(byte *)(iVar7 + 0x18) == uVar15) {
          *(byte *)(iVar7 + 0x1a) = bVar8 & 0x1f;
        }
        else {
          *(byte *)(iVar7 + 0x2e) = bVar8 & 0x1f;
        }
      }
      break;
    case 0xe:
      puVar9 = (uint *)MaCmd_GetPacket(param_4 & 0x7f);
      if (puVar9 != (uint *)0x0) {
        MaDevDrv_SendDirectPacket((uchar *)((int)puVar9 + 0xf),*puVar9);
      }
      break;
    case 0xf:
      puVar9 = (uint *)MaCmd_GetPacket(param_4 & 0x7f);
      iVar7 = *(int *)(iVar16 + 0x24);
      if (iVar7 == 0 || puVar9 == (uint *)0x0) {
        return;
      }
      uVar1 = (uchar)puVar9[2];
      if (*(uchar *)(iVar7 + 0x18) == uVar1) {
        iVar7 = iVar7 + 8;
      }
      else {
        iVar7 = iVar7 + 0x1c;
      }
      if (puVar9[1] == 0) {
        if ((int)((uint)*(byte *)(iVar11 + 0x38) << 0x1f) < 0) {
          MaDevDrv_WriteIntermediateReg(0xa0,uVar1);
          MaDevDrv_WriteIntermediateReg(0xa1,*(byte *)((int)puVar9 + 10) & 0x7c);
        }
        if ((int)((uint)*(byte *)(iVar11 + 0x39) << 0x1f) < 0) {
          MaDevDrv_WriteIntermediateReg(0xa0,uVar1);
          MaDevDrv_WriteIntermediateReg(0xa2,*(byte *)((int)puVar9 + 0xb) & 0x7c);
        }
        if (((int)((uint)*(byte *)(iVar11 + 0x38) << 0x1f) < 0) ||
           ((int)((uint)*(byte *)(iVar11 + 0x39) << 0x1f) < 0)) {
          MaDevDrv_WriteIntermediateReg(0xa0,uVar1);
          MaDevDrv_WriteIntermediateReg(0xa3,*(byte *)((int)puVar9 + 9) & 0x7c);
        }
LAB_0007aad8:
        *(byte *)(iVar7 + 0x11) = (byte)puVar9[3] & 0xf;
      }
      else if (puVar9[1] != 2) goto LAB_0007aad8;
      *(byte *)(iVar7 + 0xd) = *(byte *)((int)puVar9 + 0xd) & 0x1f;
      *(byte *)(iVar7 + 0x12) = *(byte *)((int)puVar9 + 0xe) & 0x1f;
      MaDevDrv_SendDirectPacket((uchar *)((int)puVar9 + 0xf),*puVar9);
    }
    break;
  case 6:
    uVar15 = param_4 & 0xff;
    if (uVar15 == 0xff) {
      if ((param_4 & 0xffffff00) == 0) {
        MaDsp_SfxCtrl(0,0x2011e,3,(void *)(DAT_0007b260 + 0x7b038));
      }
      else {
        MaDsp_SfxCtrl(0,0x2013e,3,(void *)(DAT_0007b278 + 0x7b1b6));
      }
    }
    else if (uVar15 == 0xfe) {
      if ((param_4 & 0xffffff00) == 0) {
        MaDsp_SfxCtrl(0,0x2011e,3,(void *)(DAT_0007b234 + 0x7ac3a));
      }
      else {
        MaDsp_SfxCtrl(0,0x2013e,3,(void *)(DAT_0007b274 + 0x7b164));
      }
    }
    else {
      iVar7 = (**(code **)(DAT_0007b23c + *(int *)(iVar11 + 4) * 0x28 + 0x7accc))
                        (DAT_0007b240 + 0x7ac86 + uVar10 * 8,0x101,uVar15,local_48);
      if ((-1 < iVar7) && (local_48[0] != (void *)0x0)) {
        if (uVar15 < 0x20) {
          MaDsp_SfxCtrl(0,0x2011e,0x7fffffff,local_48[0]);
        }
        else if (uVar15 - 0x40 < 0x20) {
          MaDsp_SfxCtrl(0,0x2013e,0x7fffffff,local_48[0]);
        }
      }
    }
    break;
  case 7:
    if ((param_4 & 0x100) == 0) {
      if ((int)((uint)*(byte *)(iVar11 + 0x28) << 0x1f) < 0) {
        *(byte *)(iVar11 + 0x28) = *(byte *)(iVar11 + 0x28) & 0xfe;
        uVar15 = 0x7b;
      }
      else {
        uVar15 = 0x7e;
      }
      MaDevDrv_WriteIntermediateReg(0xc,'\0');
      MaDevDrv_WriteIntermediateReg(0xd,'\0');
      MaDevDrv_WriteIntermediateReg(0xe,'\0');
      MaDevDrv_WriteIntermediateReg(0xf,'\0');
    }
    else if ((*(int *)(iVar11 + 0x3c) == 0) ||
            ((*(int *)(iVar11 + 0x40) != 0 &&
             (iVar7 = *(int *)(iVar11 + 0x40) + -1, *(int *)(iVar11 + 0x40) = iVar7, iVar7 != 0))))
    {
      iVar7 = DAT_0007b244;
      FUN_00076038(DAT_0007b244 + 0x7bb10 + param_2 * 0x398,iVar11,1,param_1,param_2);
      uVar15 = (uint)*(byte *)(iVar11 + 0x25);
      if ((int)(uVar15 << 0x1f) < 0) {
        cVar4 = *(char *)(param_2 * 0x398 + iVar7 + 0x7bb16);
        if (cVar4 == -1) {
          local_48[0] = (void *)((int)&DAT_0007b28c + DAT_0007b29c);
LAB_0007ad0a:
          uVar15 = 3;
LAB_0007ad0c:
          if (local_48[0] != (void *)0x0) {
            MaDsp_SfxCtrl(0,0x2011e,uVar15,local_48[0]);
          }
        }
        else {
          if (cVar4 == -2) {
            local_48[0] = (void *)(DAT_0007b248 + 0x7af12);
            goto LAB_0007ad0a;
          }
          iVar7 = (**(code **)(DAT_0007b290 + *(int *)(iVar11 + 4) * 0x28 + 0x7b0c2))
                            (DAT_0007b294 + 0x7b07c + uVar10 * 8,0x101,cVar4,local_48);
          if (-1 < iVar7) {
            uVar15 = 0x7fffffff;
            goto LAB_0007ad0c;
          }
        }
        uVar15 = (uint)*(byte *)(iVar11 + 0x25);
      }
      if ((int)(uVar15 << 0x1e) < 0) {
        cVar4 = *(char *)(param_2 * 0x398 + DAT_0007b24c + 0x7bb69);
        if (cVar4 == -1) {
          local_48[0] = (void *)((int)&DAT_0007b280 + DAT_0007b298);
LAB_0007ad44:
          uVar10 = 3;
        }
        else {
          if (cVar4 == -2) {
            local_48[0] = (void *)(DAT_0007b250 + 0x7af6c);
            goto LAB_0007ad44;
          }
          iVar7 = (**(code **)(DAT_0007b288 + *(int *)(iVar11 + 4) * 0x28 + 0x7b08a))
                            (DAT_0007b28c + 0x7b044 + uVar10 * 8,0x101,cVar4,local_48);
          if (iVar7 < 0) goto LAB_0007ad4c;
          uVar10 = 0x7fffffff;
        }
        if (local_48[0] != (void *)0x0) {
          MaDsp_SfxCtrl(0,0x2013e,uVar10,local_48[0]);
        }
      }
LAB_0007ad4c:
      pcVar12 = *(code **)(iVar11 + 0x68);
      if (pcVar12 != (code *)0x0) {
        machdep_LeaveCriticalSection();
        (*pcVar12)(4,0);
        machdep_EnterCriticalSection();
      }
      MaDevDrv_WriteIntermediateReg(0xb,'\x10');
      uVar15 = 0x7e;
      MaDevDrv_WriteIntermediateReg(0xb,'\x01');
      *(undefined4 *)(iVar11 + 0x4c) = *(undefined4 *)(iVar11 + 0x50);
    }
    else {
      MaDevDrv_ResetIrqCtrl('\0','@');
      MaDevDrv_WriteIntermediateReg(0xb,'\0');
      MaDevDrv_ResetIrqCtrl('\0','@');
      pcVar12 = *(code **)(iVar11 + 0x68);
      if (pcVar12 != (code *)0x0) {
        machdep_LeaveCriticalSection();
        (*pcVar12)(2,0);
        machdep_EnterCriticalSection();
      }
      *(undefined4 *)(iVar13 + iVar14) = 3;
      *(undefined4 *)(iVar11 + 8) = 3;
      *(undefined4 *)(iVar11 + 0x40) = *(undefined4 *)(iVar11 + 0x3c);
      if (*(byte *)(iVar11 + 0x34) != 0) {
        uVar10 = *(byte *)(iVar11 + 0x34) & 3;
        **(uint **)(DAT_0007b2ac + 0x7b17e) =
             **(uint **)(DAT_0007b2ac + 0x7b17e) & ~(0x100 << uVar10);
        MaDsp_3DCtrl(1,0xa5,uVar10,(void *)0x0);
      }
      if (*(byte *)(iVar11 + 0x35) != 0) {
        uVar10 = *(byte *)(iVar11 + 0x35) & 3;
        **(uint **)(DAT_0007b2a8 + 0x7b150) =
             **(uint **)(DAT_0007b2a8 + 0x7b150) & ~(0x100 << uVar10);
        MaDsp_3DCtrl(1,0xa5,uVar10,(void *)0x0);
      }
      if (*(byte *)(iVar11 + 0x36) != 0) {
        uVar10 = *(byte *)(iVar11 + 0x36) & 3;
        **(uint **)(DAT_0007b2a4 + 0x7b122) =
             **(uint **)(DAT_0007b2a4 + 0x7b122) & ~(0x100 << uVar10);
        MaDsp_3DCtrl(1,0xa5,uVar10,(void *)0x0);
      }
      if (*(byte *)(iVar11 + 0x37) != 0) {
        uVar10 = *(byte *)(iVar11 + 0x37) & 3;
        **(uint **)(DAT_0007b2a0 + 0x7b0f6) =
             **(uint **)(DAT_0007b2a0 + 0x7b0f6) & ~(0x100 << uVar10);
        MaDsp_3DCtrl(1,0xa5,uVar10,(void *)0x0);
      }
      uVar15 = 0x7f;
      if (*(int *)(iVar11 + 0x34) != 0) {
        MaDevDrv_StopTimer();
        uVar15 = 0x7f;
      }
    }
    goto LAB_0007a7ea;
  default:
    uVar15 = param_4 | param_3 << 8;
LAB_0007a7ea:
    pcVar12 = *(code **)(iVar11 + 100);
    if (pcVar12 != (code *)0x0) {
      machdep_LeaveCriticalSection();
      (*pcVar12)(param_2 | param_1 << 8,uVar15);
      machdep_EnterCriticalSection();
      return;
    }
  }
  return;
}

