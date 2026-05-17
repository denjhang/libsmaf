/* MaSmw_ReceiveMsg @ 00190210 4692B */


/* YAMAHA::MaSmw_ReceiveMsg(unsigned int, unsigned int, unsigned int, unsigned int) */

void YAMAHA::MaSmw_ReceiveMsg(uint param_1,uint param_2,uint param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  uint *puVar10;
  uchar uVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  code *pcVar17;
  ulong uVar18;
  uint uVar19;
  undefined *local_48;
  uint local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  uchar local_10;
  byte local_f;
  undefined1 local_e;
  byte local_d;
  long local_8;
  
  lVar2 = DAT_0059a420;
  uVar13 = (ulong)param_2;
  bVar6 = (&DAT_0048aa70)[uVar13 + (ulong)param_1 * 4];
  uVar18 = (ulong)bVar6;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  local_48 = (undefined *)0x0;
  lVar16 = uVar18 * 0xc0;
  lVar14 = DAT_0059a428 + (ulong)bVar6 * 0x430;
  lVar1 = DAT_0059a420 + lVar16;
  if (((param_1 & 0xfffffffb) == 2) || (param_1 == 8)) {
    if (param_3 == 6) {
      if ((*(byte *)(lVar1 + 0x28) & 1) == 0) goto switchD_00190468_caseD_6;
      uVar15 = param_2 | param_1 << 8;
      *(byte *)(lVar1 + 0x28) = *(byte *)(lVar1 + 0x28) & 0xfe;
      uVar19 = 0x7b;
    }
    else if (param_3 == 7) {
      lVar14 = *(long *)(lVar14 + 0x28);
      if (lVar14 == 0) goto switchD_00190468_caseD_6;
      iVar9 = *(int *)(lVar1 + 0x3c);
      if ((iVar9 == 0) ||
         ((*(int *)(lVar1 + 0x40) != 0 &&
          (iVar7 = *(int *)(lVar1 + 0x40) + -1, *(int *)(lVar1 + 0x40) = iVar7, iVar7 != 0)))) {
        bVar6 = *(byte *)(lVar14 + 0x18);
        iVar9 = MaSrm_Seek((uint)bVar6,0);
        if ((iVar9 < 0) || (iVar9 = MaSrm_Start((uint)bVar6), iVar9 < 0))
        goto switchD_00190468_caseD_6;
        uVar19 = 0x7e;
      }
      else {
        puVar10 = DAT_005a0050;
        *DAT_005a0050 =
             *DAT_005a0050 & (0x10 << (ulong)(*(byte *)(lVar14 + 0x18) & 0x1f) ^ 0xffffffffU);
        *(undefined4 *)(lVar2 + lVar16) = 3;
        *(int *)(lVar1 + 0x40) = iVar9;
        if (*(byte *)(lVar1 + 0x34) != 0) {
          uVar19 = *(byte *)(lVar1 + 0x34) & 3;
          *puVar10 = *puVar10 & (0x100 << (ulong)uVar19 ^ 0xffffffffU);
          MaDsp_3DCtrl(1,0xa5,uVar19,(void *)0x0);
        }
        if (*(byte *)(lVar1 + 0x35) != 0) {
          uVar19 = *(byte *)(lVar1 + 0x35) & 3;
          *DAT_005a0050 = *DAT_005a0050 & (0x100 << (ulong)uVar19 ^ 0xffffffffU);
          MaDsp_3DCtrl(1,0xa5,uVar19,(void *)0x0);
        }
        if (*(byte *)(lVar1 + 0x36) != 0) {
          uVar19 = *(byte *)(lVar1 + 0x36) & 3;
          *DAT_005a0050 = *DAT_005a0050 & (0x100 << (ulong)uVar19 ^ 0xffffffffU);
          MaDsp_3DCtrl(1,0xa5,uVar19,(void *)0x0);
        }
        if (*(byte *)(lVar1 + 0x37) != 0) {
          uVar19 = *(byte *)(lVar1 + 0x37) & 3;
          *DAT_005a0050 = *DAT_005a0050 & (0x100 << (ulong)uVar19 ^ 0xffffffffU);
          MaDsp_3DCtrl(1,0xa5,uVar19,(void *)0x0);
        }
        uVar19 = 0x7f;
        MaDevDrv_StopTimer();
      }
      if (*(char *)(lVar1 + 0x29) == '\0') goto switchD_00190468_caseD_6;
      uVar15 = param_2 | param_1 << 8;
    }
    else {
      if (param_3 != 5) goto switchD_00190468_caseD_6;
      uVar15 = param_2 | param_1 << 8;
      uVar19 = 0x7d;
    }
    goto LAB_00190334;
  }
  bVar3 = (byte)param_4;
  switch(param_3) {
  case 0:
    lVar14 = *(long *)(lVar14 + 0x28);
    if (lVar14 != 0) {
      uVar19 = param_4 >> 8;
      uVar15 = uVar19 & 3;
      if ((param_4 >> 10 & 1) == 0) {
        MaSrm_StreamOff(uVar15);
        uVar19 = 0x10000 << (ulong)(uVar19 & 3);
        if ((uVar19 & *DAT_005a0050) != 0) {
          *DAT_005a0050 = *DAT_005a0050 & (uVar19 ^ 0xffffffff);
          MaDevDrv_StopTimer();
        }
      }
      else {
        if (*(byte *)(lVar14 + 0x18) == uVar15) {
          bVar4 = *(byte *)(lVar14 + 0x19);
          bVar5 = *(byte *)(lVar14 + 0x15);
          bVar3 = *(byte *)(lVar14 + 0x29);
        }
        else {
          bVar3 = *(byte *)(lVar14 + 0x15);
          bVar4 = *(byte *)(lVar14 + 0x2d);
          bVar5 = *(byte *)(lVar14 + 0x29);
        }
        if (*(char *)(lVar1 + 0x34) < '\0') {
          if (((*(byte *)(lVar14 + 0x18) < 4) && (*(byte *)(lVar14 + 0x10) == bVar6)) &&
             (*(char *)(lVar14 + 0x1a) != '\x01')) {
            if (*(char *)(lVar1 + 0x2f) == '\x02') {
              local_d = 0x80;
            }
            else {
              local_d = *(byte *)(lVar1 + 0x34) & 3 | 0xc0;
            }
            local_f = *(byte *)(lVar14 + 0x18) + 4 | 0x80;
            local_10 = 0xf2;
            local_e = 0xf9;
            MaDevDrv_SendDirectPacket(&local_10,4);
          }
          if (((*(byte *)(lVar14 + 0x2c) < 4) && (*(byte *)(lVar14 + 0x24) == bVar6)) &&
             (*(char *)(lVar14 + 0x2e) != '\x01')) {
            if (*(char *)(lVar1 + 0x2f) == '\x02') {
              local_d = 0x80;
            }
            else {
              local_d = *(byte *)(lVar1 + 0x34) & 3 | 0xc0;
            }
            local_f = *(byte *)(lVar14 + 0x2c) + 4 | 0x80;
            local_10 = 0xf2;
            local_e = 0xf9;
            MaDevDrv_SendDirectPacket(&local_10,4);
          }
        }
        if ((param_4 >> 0xb & 1) == 0) {
          MaSrm_StreamOn(uVar15,param_2,param_4 & 0x3f,(uint)bVar4,(uint)bVar5);
          *DAT_005a0050 = *DAT_005a0050 | 0x10000 << (ulong)(uVar19 & 3);
          MaDevDrv_StartTimer();
        }
        else {
          MaSrm_StreamSlave(uVar15,param_2,(uint)*(byte *)(lVar14 + 4),(uint)bVar4,(uint)bVar3);
          MaSrm_StreamMaster(uVar15,param_2,param_4 & 0x3f,(uint)bVar4,(uint)bVar5);
          *(undefined1 *)(lVar14 + 4) = 0x41;
          if (uVar15 < 2) {
            *DAT_005a0050 = *DAT_005a0050 | 0x30000;
          }
          else {
            *DAT_005a0050 = *DAT_005a0050 | 0xc0000;
          }
          MaDevDrv_StartTimer();
          MaDevDrv_StartTimer();
        }
      }
    }
    break;
  case 1:
    uVar19 = param_4 & 0x1f;
    uVar15 = param_2 | param_1 << 8;
    goto LAB_00190334;
  case 2:
    if ((param_4 >> 8 & 1) != 0) {
      if (*(int *)(DAT_0059a420 + 0xd80) == 4) {
        (*(code *)(&PTR_MaHvDrvJP_SetCommand_00565960)[(ulong)*(byte *)(lVar14 + 0x1d) * 5])(1,0,0);
        MaDevDrv_SendDirectPacket(&DAT_0048acd0,2);
        *(undefined4 *)(lVar2 + 0xd80) = 3;
      }
      if ((*DAT_005a0050 >> 0xc & 1) != 0) {
        *DAT_005a0050 = *DAT_005a0050 & 0xffffefff;
        MaDevDrv_StopTimer();
      }
      break;
    }
    if ((*DAT_005a0050 >> 0xc & 1) != 0) {
      *DAT_005a0050 = *DAT_005a0050 & 0xffffefff;
      MaDevDrv_StopTimer();
    }
    uVar19 = *(uint *)(lVar2 + 0xd80);
    if (1 < uVar19) {
      if (3 < uVar19) {
        if (uVar19 != 4) goto LAB_00190aa4;
        (*(code *)(&PTR_MaHvDrvJP_SetCommand_00565960)[(ulong)*(byte *)(lVar14 + 0x1d) * 5])(1,0,0);
      }
      iVar9 = MaHvsCnv_Close((_MACNV_SEQ_INFO *)&DAT_005a0178);
      if (iVar9 < 0) break;
    }
LAB_00190aa4:
    *(undefined4 *)(lVar2 + 0xd80) = 0;
    lVar1 = lVar14 + ((ulong)param_4 & 0x3f) * 0x10;
    local_40 = 1;
    local_3c = 8;
    local_38 = *(undefined8 *)(lVar1 + 0x30);
    local_30 = *(undefined4 *)(lVar1 + 0x38);
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    iVar9 = MaHvsCnv_Open((_MACNV_SEQ_INFO *)&DAT_005a0178,(_MACNV_OPEN_PARAM *)&local_40);
    if (-1 < iVar9) {
      MaHvsCnv_SetTick((_MACNV_SEQ_INFO *)&DAT_005a0178,0x14);
      iVar9 = MaHvsCnv_Seek((_MACNV_SEQ_INFO *)&DAT_005a0178,0,(_MACNV_SEEK_INFO *)0x0);
      if ((((-1 < iVar9) &&
           (iVar9 = (*(code *)(&PTR_MaHvDrvJP_SetCommand_00565960)
                              [(ulong)*(byte *)(lVar14 + 0x1d) * 5])(3,0,0), -1 < iVar9)) &&
          (iVar9 = (*(code *)(&PTR_MaHvDrvJP_SetCommand_00565960)
                             [(ulong)*(byte *)(lVar14 + 0x1d) * 5])(6,0,0xc), -1 < iVar9)) &&
         (iVar9 = MaHvsCnv_Conv((_MACNV_SEQ_INFO *)&DAT_005a0178,(_MASND_CMD_PARAM *)(lVar2 + 0xe20)
                               ), -1 < iVar9)) {
        *DAT_005a0050 = *DAT_005a0050 | 0x1000;
        MaDevDrv_StartTimer();
        *(undefined4 *)(lVar2 + 0xdc4) = 0x14;
        *(undefined4 *)(lVar2 + 0xdbc) = 1;
        *(undefined4 *)(lVar2 + 0xd80) = 4;
        *(undefined4 *)(lVar2 + 0xdc0) = 1;
      }
    }
    break;
  case 3:
    uVar19 = param_4 & 0x7f | (param_4 & 0x700) >> 1;
    cVar8 = Ma7emu_GetMode();
    if (cVar8 != '\0') {
      iVar9 = (*(code *)(&PTR_MaDmyCnv_Ctrl_005659f8)[(long)*(int *)(lVar1 + 4) * 10])
                        (&DAT_005a0058 + uVar18 * 0x10,0x100,uVar19,&local_40);
      if (-1 < iVar9) {
        uVar19 = *(byte *)(lVar1 + ((ulong)local_40 & 3) + 0x34) & 3;
        iVar9 = MaDsp_3DCtrl(1,0x86,uVar19,&local_38);
        if ((-1 < iVar9) && (iVar9 = MaDsp_3DCtrl(1,0x81,uVar19,&local_3c), -1 < iVar9)) {
          if (*(int *)(lVar2 + lVar16) == 4) {
            MaDsp_3DCtrl(1,0xa4,uVar19,(void *)0x0);
          }
          else {
            *(undefined1 *)(lVar1 + ((ulong)local_40 & 3) + 0x30) = 1;
          }
        }
      }
      break;
    }
    uVar19 = uVar19 | 0x10000;
    uVar15 = param_2 | param_1 << 8;
    goto LAB_00190334;
  case 4:
    if (*(long *)(lVar14 + 0x28) != 0) {
      *(byte *)(*(long *)(lVar14 + 0x28) + 4) = bVar3 & 0x3f;
    }
    break;
  case 5:
    uVar19 = param_4 >> 5 & 3;
    uVar11 = (uchar)uVar19;
    switch(param_4 >> 8 & 0xf) {
    case 0:
      if ((*(byte *)(lVar1 + 0x38) & 1) != 0) {
        MaDevDrv_WriteIntermediateReg(0xa0,uVar11);
        MaDevDrv_WriteIntermediateReg(0xa1,(byte)(param_4 << 2) & 0x7c);
      }
      break;
    case 1:
      if ((*(byte *)(lVar1 + 0x39) & 1) != 0) {
        MaDevDrv_WriteIntermediateReg(0xa0,uVar11);
        MaDevDrv_WriteIntermediateReg(0xa2,(byte)(param_4 << 2) & 0x7c);
      }
      break;
    case 2:
      if (((*(byte *)(lVar1 + 0x38) & 1) != 0) || ((*(byte *)(lVar1 + 0x39) & 1) != 0)) {
        MaDevDrv_WriteIntermediateReg(0xa0,uVar11);
        MaDevDrv_WriteIntermediateReg(0xa3,(byte)(param_4 << 2) & 0x7c);
      }
      break;
    case 3:
      lVar14 = *(long *)(lVar14 + 0x28);
      if (lVar14 != 0) {
        if (*(byte *)(lVar14 + 0x18) == uVar19) {
          *(byte *)(lVar14 + 0x19) = bVar3 & 0xf;
        }
        else {
          *(byte *)(lVar14 + 0x2d) = bVar3 & 0xf;
        }
      }
      break;
    case 4:
      lVar14 = *(long *)(lVar14 + 0x28);
      if (lVar14 != 0) {
        if (*(byte *)(lVar14 + 0x18) == uVar19) {
          *(byte *)(lVar14 + 0x15) = bVar3 & 0x1f;
        }
        else {
          *(byte *)(lVar14 + 0x29) = bVar3 & 0x1f;
        }
      }
      break;
    case 5:
      lVar14 = *(long *)(lVar14 + 0x28);
      if (lVar14 != 0) {
        if (*(byte *)(lVar14 + 0x18) == uVar19) {
          *(byte *)(lVar14 + 0x1a) = bVar3 & 0x1f;
        }
        else {
          *(byte *)(lVar14 + 0x2e) = bVar3 & 0x1f;
        }
      }
      break;
    case 0xe:
      puVar10 = (uint *)MaCmd_GetPacket(param_4 & 0x7f);
      if (puVar10 != (uint *)0x0) {
        MaDevDrv_SendDirectPacket((uchar *)((long)puVar10 + 0xf),*puVar10);
      }
      break;
    case 0xf:
      puVar10 = (uint *)MaCmd_GetPacket(param_4 & 0x7f);
      lVar14 = *(long *)(lVar14 + 0x28);
      if ((puVar10 == (uint *)0x0) || (lVar14 == 0)) break;
      uVar11 = (uchar)puVar10[2];
      lVar2 = lVar14 + 0x1c;
      if (*(uchar *)(lVar14 + 0x18) == uVar11) {
        lVar2 = lVar14 + 8;
      }
      if (puVar10[1] == 0) {
        if ((*(byte *)(lVar1 + 0x38) & 1) == 0) {
          if ((*(byte *)(lVar1 + 0x39) & 1) == 0) goto LAB_001906a8;
LAB_00191344:
          MaDevDrv_WriteIntermediateReg(0xa0,uVar11);
          MaDevDrv_WriteIntermediateReg(0xa2,*(byte *)((long)puVar10 + 0xb) & 0x7c);
          if ((*(byte *)(lVar1 + 0x38) & 1) == 0) {
            bVar6 = *(byte *)(lVar1 + 0x39);
            goto joined_r0x001913b8;
          }
        }
        else {
          MaDevDrv_WriteIntermediateReg(0xa0,uVar11);
          MaDevDrv_WriteIntermediateReg(0xa1,*(byte *)((long)puVar10 + 10) & 0x7c);
          if ((*(byte *)(lVar1 + 0x39) & 1) != 0) goto LAB_00191344;
          bVar6 = *(byte *)(lVar1 + 0x38);
joined_r0x001913b8:
          if ((bVar6 & 1) == 0) goto LAB_001906a8;
        }
        MaDevDrv_WriteIntermediateReg(0xa0,uVar11);
        MaDevDrv_WriteIntermediateReg(0xa3,*(byte *)((long)puVar10 + 9) & 0x7c);
LAB_001906a8:
        *(byte *)(lVar2 + 0x11) = (byte)puVar10[3] & 0xf;
      }
      else if (puVar10[1] != 2) goto LAB_001906a8;
      *(byte *)(lVar2 + 0xd) = *(byte *)((long)puVar10 + 0xd) & 0x1f;
      *(byte *)(lVar2 + 0x12) = *(byte *)((long)puVar10 + 0xe) & 0x1f;
      MaDevDrv_SendDirectPacket((uchar *)((long)puVar10 + 0xf),*puVar10);
    }
    break;
  case 6:
    uVar19 = param_4 & 0xff;
    if (uVar19 == 0xff) {
      if ((param_4 & 0xffffff00) == 0) {
        MaDsp_SfxCtrl(0,0x2011e,3,&DAT_0048ac70);
      }
      else {
        MaDsp_SfxCtrl(0,0x2013e,3,&DAT_0048ac70);
      }
    }
    else if (uVar19 == 0xfe) {
      if ((param_4 & 0xffffff00) == 0) {
        MaDsp_SfxCtrl(0,0x2011e,3,&DAT_0048ac90);
      }
      else {
        MaDsp_SfxCtrl(0,0x2013e,3,&DAT_0048acb0);
      }
    }
    else {
      iVar9 = (*(code *)(&PTR_MaDmyCnv_Ctrl_005659f8)[(long)*(int *)(lVar1 + 4) * 10])
                        (&DAT_005a0058 + uVar18 * 0x10,0x101,uVar19,&local_48);
      if ((-1 < iVar9) && (local_48 != (undefined *)0x0)) {
        if (uVar19 < 0x20) {
          MaDsp_SfxCtrl(0,0x2011e,0x7fffffff,local_48);
        }
        else if (uVar19 - 0x40 < 0x20) {
          MaDsp_SfxCtrl(0,0x2013e,0x7fffffff,local_48);
        }
      }
    }
    break;
  case 7:
    if ((param_4 >> 8 & 1) == 0) {
      uVar19 = 0x7e;
      if ((*(byte *)(lVar1 + 0x28) & 1) != 0) {
        uVar19 = 0x7b;
        *(byte *)(lVar1 + 0x28) = *(byte *)(lVar1 + 0x28) & 0xfe;
      }
      uVar15 = param_2 | param_1 << 8;
      MaDevDrv_WriteIntermediateReg(0xc,'\0');
      MaDevDrv_WriteIntermediateReg(0xd,'\0');
      MaDevDrv_WriteIntermediateReg(0xe,'\0');
      MaDevDrv_WriteIntermediateReg(0xf,'\0');
    }
    else if ((*(int *)(lVar1 + 0x3c) == 0) ||
            ((*(int *)(lVar1 + 0x40) != 0 &&
             (iVar9 = *(int *)(lVar1 + 0x40) + -1, *(int *)(lVar1 + 0x40) = iVar9, iVar9 != 0)))) {
      uVar15 = param_2 | param_1 << 8;
      lVar14 = uVar13 * 0x398;
      bVar6 = *(byte *)(lVar1 + ((ulong)*(uint *)(&DAT_005a0500 + lVar14) & 3) + 0x34);
      local_40 = 0;
      if ((bVar6 >> 6 & 1) == 0) {
LAB_00190814:
        lVar14 = uVar13 * 0x398;
        bVar6 = *(byte *)(lVar1 + ((ulong)*(uint *)(&DAT_005a0514 + lVar14) & 3) + 0x34);
        local_40 = 0;
        if ((bVar6 >> 6 & 1) != 0) {
          cVar8 = Ma7emu_GetMode();
          if (cVar8 == '\0') {
            pcVar17 = *(code **)(lVar1 + 0x70);
            if (pcVar17 != (code *)0x0) {
              machdep_LeaveCriticalSection();
              (*pcVar17)(uVar15,0x10401);
              machdep_EnterCriticalSection();
            }
          }
          else {
            uVar19 = bVar6 & 3;
            iVar9 = MaDsp_3DCtrl(1,0x86,uVar19,(void *)(lVar14 + 0x5a051c));
            if (((iVar9 < 0) || (iVar9 = MaDsp_3DCtrl(1,0x81,uVar19,&local_40), iVar9 < 0)) ||
               (iVar9 = MaDsp_3DCtrl(1,0xa4,uVar19,(void *)0x0), iVar9 < 0)) goto LAB_001908a4;
            *(undefined1 *)(lVar1 + ((ulong)*(uint *)(&DAT_005a0514 + lVar14) & 3) + 0x30) = 0;
          }
        }
        lVar14 = uVar13 * 0x398;
        bVar6 = *(byte *)(lVar1 + ((ulong)*(uint *)(&DAT_005a0528 + lVar14) & 3) + 0x34);
        local_40 = 0;
        if ((bVar6 >> 6 & 1) != 0) {
          cVar8 = Ma7emu_GetMode();
          if (cVar8 == '\0') {
            pcVar17 = *(code **)(lVar1 + 0x70);
            if (pcVar17 != (code *)0x0) {
              machdep_LeaveCriticalSection();
              (*pcVar17)(uVar15,0x10402);
              machdep_EnterCriticalSection();
            }
          }
          else {
            uVar19 = bVar6 & 3;
            iVar9 = MaDsp_3DCtrl(1,0x86,uVar19,(void *)(lVar14 + 0x5a0530));
            if (((iVar9 < 0) || (iVar9 = MaDsp_3DCtrl(1,0x81,uVar19,&local_40), iVar9 < 0)) ||
               (iVar9 = MaDsp_3DCtrl(1,0xa4,uVar19,(void *)0x0), iVar9 < 0)) goto LAB_001908a4;
            *(undefined1 *)(lVar1 + ((ulong)*(uint *)(&DAT_005a0528 + lVar14) & 3) + 0x30) = 0;
          }
        }
        lVar14 = uVar13 * 0x398;
        bVar6 = *(byte *)(lVar1 + ((ulong)*(uint *)(&DAT_005a053c + lVar14) & 3) + 0x34);
        local_40 = 0;
        if ((bVar6 >> 6 & 1) != 0) {
          cVar8 = Ma7emu_GetMode();
          if (cVar8 == '\0') {
            pcVar17 = *(code **)(lVar1 + 0x70);
            if (pcVar17 != (code *)0x0) {
              machdep_LeaveCriticalSection();
              (*pcVar17)(uVar15,0x10403);
              machdep_EnterCriticalSection();
            }
          }
          else {
            uVar19 = bVar6 & 3;
            iVar9 = MaDsp_3DCtrl(1,0x86,uVar19,(void *)(lVar14 + 0x5a0544));
            if (((-1 < iVar9) && (iVar9 = MaDsp_3DCtrl(1,0x81,uVar19,&local_40), -1 < iVar9)) &&
               (iVar9 = MaDsp_3DCtrl(1,0xa4,uVar19,(void *)0x0), -1 < iVar9)) {
              *(undefined1 *)(lVar1 + ((ulong)*(uint *)(&DAT_005a053c + lVar14) & 3) + 0x30) = 0;
            }
          }
        }
      }
      else {
        cVar8 = Ma7emu_GetMode();
        if (cVar8 == '\0') {
          pcVar17 = *(code **)(lVar1 + 0x70);
          if (pcVar17 != (code *)0x0) {
            machdep_LeaveCriticalSection();
            (*pcVar17)(uVar15,0x10400);
            machdep_EnterCriticalSection();
          }
          goto LAB_00190814;
        }
        uVar19 = bVar6 & 3;
        iVar9 = MaDsp_3DCtrl(1,0x86,uVar19,&DAT_005a0508 + lVar14);
        if (((-1 < iVar9) && (iVar9 = MaDsp_3DCtrl(1,0x81,uVar19,&local_40), -1 < iVar9)) &&
           (iVar9 = MaDsp_3DCtrl(1,0xa4,uVar19,(void *)0x0), -1 < iVar9)) {
          *(undefined1 *)(lVar1 + ((ulong)*(uint *)(&DAT_005a0500 + lVar14) & 3) + 0x30) = 0;
          goto LAB_00190814;
        }
      }
LAB_001908a4:
      uVar19 = (uint)*(byte *)(lVar1 + 0x25);
      if ((*(byte *)(lVar1 + 0x25) & 1) != 0) {
        cVar8 = (&DAT_005a01be)[uVar13 * 0x398];
        if (cVar8 == -1) {
          puVar12 = &DAT_0048ac70;
          local_48 = &DAT_0048ac70;
LAB_001908dc:
          uVar19 = 3;
joined_r0x001908dc:
          if (puVar12 != (undefined *)0x0) {
            MaDsp_SfxCtrl(0,0x2011e,uVar19,puVar12);
            uVar19 = (uint)*(byte *)(lVar1 + 0x25);
            goto LAB_001908e4;
          }
        }
        else {
          if (cVar8 == -2) {
            puVar12 = &DAT_0048ac90;
            local_48 = &DAT_0048ac90;
            goto LAB_001908dc;
          }
          iVar9 = (*(code *)(&PTR_MaDmyCnv_Ctrl_005659f8)[(long)*(int *)(lVar1 + 4) * 10])
                            (&DAT_005a0058 + uVar18 * 0x10,0x101,cVar8,&local_48);
          if (-1 < iVar9) {
            uVar19 = 0x7fffffff;
            puVar12 = local_48;
            goto joined_r0x001908dc;
          }
        }
        uVar19 = (uint)*(byte *)(lVar1 + 0x25);
      }
LAB_001908e4:
      if ((uVar19 >> 1 & 1) != 0) {
        cVar8 = (&DAT_005a01bf)[uVar13 * 0x398];
        if (cVar8 == -1) {
          uVar19 = 3;
          local_48 = &DAT_0048ac70;
        }
        else if (cVar8 == -2) {
          uVar19 = 3;
          local_48 = &DAT_0048acb0;
        }
        else {
          iVar9 = (*(code *)(&PTR_MaDmyCnv_Ctrl_005659f8)[(long)*(int *)(lVar1 + 4) * 10])
                            (&DAT_005a0058 + uVar18 * 0x10,0x101,cVar8,&local_48);
          if (iVar9 < 0) goto LAB_0019091c;
          uVar19 = 0x7fffffff;
        }
        if (local_48 != (undefined *)0x0) {
          MaDsp_SfxCtrl(0,0x2013e,uVar19,local_48);
        }
      }
LAB_0019091c:
      pcVar17 = *(code **)(lVar1 + 0x78);
      if (pcVar17 != (code *)0x0) {
        machdep_LeaveCriticalSection();
        (*pcVar17)(4,0);
        machdep_EnterCriticalSection();
      }
      uVar19 = 0x7e;
      MaDevDrv_WriteIntermediateReg(0xb,'\x10');
      MaDevDrv_WriteIntermediateReg(0xb,'\x01');
      *(undefined4 *)(lVar1 + 0x4c) = *(undefined4 *)(lVar1 + 0x50);
    }
    else {
      MaDevDrv_ResetIrqCtrl('\0','@');
      MaDevDrv_WriteIntermediateReg(0xb,'\0');
      MaDevDrv_ResetIrqCtrl('\0','@');
      pcVar17 = *(code **)(lVar1 + 0x78);
      if (pcVar17 != (code *)0x0) {
        machdep_LeaveCriticalSection();
        (*pcVar17)(2,0);
        machdep_EnterCriticalSection();
      }
      *(undefined4 *)(lVar2 + lVar16) = 3;
      *(undefined4 *)(lVar1 + 8) = 3;
      *(undefined4 *)(lVar1 + 0x40) = *(undefined4 *)(lVar1 + 0x3c);
      if (*(byte *)(lVar1 + 0x34) != 0) {
        uVar19 = *(byte *)(lVar1 + 0x34) & 3;
        *DAT_005a0050 = *DAT_005a0050 & (0x100 << (ulong)uVar19 ^ 0xffffffffU);
        MaDsp_3DCtrl(1,0xa5,uVar19,(void *)0x0);
      }
      if (*(byte *)(lVar1 + 0x35) != 0) {
        uVar19 = *(byte *)(lVar1 + 0x35) & 3;
        *DAT_005a0050 = *DAT_005a0050 & (0x100 << (ulong)uVar19 ^ 0xffffffffU);
        MaDsp_3DCtrl(1,0xa5,uVar19,(void *)0x0);
      }
      if (*(byte *)(lVar1 + 0x36) != 0) {
        uVar19 = *(byte *)(lVar1 + 0x36) & 3;
        *DAT_005a0050 = *DAT_005a0050 & (0x100 << (ulong)uVar19 ^ 0xffffffffU);
        MaDsp_3DCtrl(1,0xa5,uVar19,(void *)0x0);
      }
      if (*(byte *)(lVar1 + 0x37) != 0) {
        uVar19 = *(byte *)(lVar1 + 0x37) & 3;
        *DAT_005a0050 = *DAT_005a0050 & (0x100 << (ulong)uVar19 ^ 0xffffffffU);
        MaDsp_3DCtrl(1,0xa5,uVar19,(void *)0x0);
      }
      if (*(int *)(lVar1 + 0x34) != 0) {
        MaDevDrv_StopTimer();
      }
      uVar15 = param_2 | param_1 << 8;
      uVar19 = 0x7f;
    }
    goto LAB_00190334;
  default:
    uVar19 = param_4 | param_3 << 8;
    uVar15 = param_2 | param_1 << 8;
LAB_00190334:
    pcVar17 = *(code **)(lVar1 + 0x70);
    if (pcVar17 != (code *)0x0) {
      machdep_LeaveCriticalSection();
      (*pcVar17)(uVar15,uVar19);
      machdep_EnterCriticalSection();
    }
  }
switchD_00190468_caseD_6:
  if (local_8 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

