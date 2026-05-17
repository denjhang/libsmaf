/* MaSmw_Close @ 0007fa50 1964B */


/* YAMAHA::MaSmw_Close(unsigned int, void*) */

int YAMAHA::MaSmw_Close(uint param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  _MASTMINFO *p_Var3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  _MACNV_SEQ_INFO *p_Var11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  bool bVar18;
  undefined4 local_2c [2];
  
  uVar12 = (param_1 & 0xffff) >> 8;
  uVar7 = param_1 & 0xff;
  machdep_EnterCriticalSection();
  bVar18 = 7 < uVar12;
  bVar17 = uVar12 == 8;
  if (uVar12 < 9) {
    bVar18 = 2 < uVar7;
    bVar17 = uVar7 == 3;
  }
  if ((bVar18 && !bVar17) || (uVar7 != 0 && uVar12 == 3)) {
LAB_000800a2:
    iVar8 = -2;
    goto LAB_0007feca;
  }
  iVar8 = uVar12 * 4;
  uVar13 = (uint)*(byte *)(DAT_0008020c + 0x7fa8a + iVar8 + uVar7);
  if (uVar13 == 0xff) goto LAB_000800a2;
  iVar16 = *(int *)(DAT_00080210 + 0x7faa8);
  iVar15 = uVar13 * 0x98;
  iVar9 = *(int *)(DAT_00080210 + 0x7faac);
  iVar10 = iVar16 + iVar15;
  iVar5 = iVar9 + uVar13 * 0x228;
  if (1 < *(int *)(iVar16 + iVar15) - 2U) {
    iVar8 = -1;
    goto LAB_0007feca;
  }
  switch(uVar12) {
  case 0:
    iVar2 = *(int *)(iVar5 + 0x24);
    if (iVar2 != 0) {
      if (*(byte *)(iVar2 + 0x18) < 4) {
        uVar6 = MaCmd_StreamOff(-1,(uint)*(byte *)(iVar2 + 0x18),*(uchar **)(iVar10 + 0x6c));
        iVar4 = MaDevDrv_SendDirectPacket(*(uchar **)(iVar10 + 0x6c),uVar6);
        if (iVar4 < 0) goto LAB_0007fef2;
      }
      if (*(byte *)(iVar2 + 0x2c) < 4) {
        uVar6 = MaCmd_StreamOff(-1,(uint)*(byte *)(iVar2 + 0x2c),*(uchar **)(iVar10 + 0x6c));
        iVar4 = MaDevDrv_SendDirectPacket(*(uchar **)(iVar10 + 0x6c),uVar6);
        if (iVar4 < 0) goto LAB_0007fef2;
      }
    }
  case 1:
    iVar4 = (**(code **)(DAT_00080214 + *(int *)(iVar10 + 4) * 0x28 + 0x7fb8c))
                      (DAT_00080218 + 0x7fb3a + uVar13 * 8);
    if (iVar4 < 0) goto LAB_0007fef2;
    uVar6 = 0;
    uVar14 = 0;
    do {
      iVar4 = MaCmd_AllMute(uVar7,-1,uVar6,(uchar *)(*(int *)(iVar10 + 0x6c) + uVar14));
      iVar2 = MaCmd_AllMute(uVar7,-1,uVar6 + 1,(uchar *)(*(int *)(iVar10 + 0x6c) + uVar14 + iVar4));
      iVar2 = uVar14 + iVar4 + iVar2;
      iVar4 = MaCmd_AllMute(uVar7,-1,uVar6 + 2,(uchar *)(*(int *)(iVar10 + 0x6c) + iVar2));
      iVar2 = iVar2 + iVar4;
      iVar4 = MaCmd_AllMute(uVar7,-1,uVar6 + 3,(uchar *)(*(int *)(iVar10 + 0x6c) + iVar2));
      iVar2 = iVar2 + iVar4;
      iVar4 = MaCmd_AllMute(uVar7,-1,uVar6 + 4,(uchar *)(*(int *)(iVar10 + 0x6c) + iVar2));
      iVar2 = iVar2 + iVar4;
      iVar4 = MaCmd_AllMute(uVar7,-1,uVar6 + 5,(uchar *)(*(int *)(iVar10 + 0x6c) + iVar2));
      iVar2 = iVar2 + iVar4;
      iVar4 = MaCmd_AllMute(uVar7,-1,uVar6 + 6,(uchar *)(*(int *)(iVar10 + 0x6c) + iVar2));
      uVar14 = uVar6 + 7;
      uVar6 = uVar6 + 8;
      iVar2 = iVar2 + iVar4;
      iVar4 = MaCmd_AllMute(uVar7,-1,uVar14,(uchar *)(*(int *)(iVar10 + 0x6c) + iVar2));
      uVar14 = iVar2 + iVar4;
    } while (uVar6 != 0x10);
    if (*(int *)(iVar5 + 0x10) != 0) {
      MaResMgr_FreeFmExtWave(0);
      iVar4 = MaCmd_SetFmExtWave(-1,0,0,(uchar *)(*(int *)(iVar10 + 0x6c) + uVar14));
      uVar14 = uVar14 + iVar4;
    }
    if (*(int *)(iVar5 + 0x14) != 0) {
      MaResMgr_FreeFmExtWave(1);
      iVar4 = MaCmd_SetFmExtWave(-1,1,0,(uchar *)(*(int *)(iVar10 + 0x6c) + uVar14));
      uVar14 = uVar14 + iVar4;
    }
    if (*(int *)(iVar5 + 0x18) != 0) {
      MaResMgr_FreeFmExtWave(2);
      iVar4 = MaCmd_SetFmExtWave(-1,2,0,(uchar *)(*(int *)(iVar10 + 0x6c) + uVar14));
      uVar14 = uVar14 + iVar4;
    }
    iVar4 = MaDevDrv_SendDirectPacket(*(uchar **)(iVar10 + 0x6c),uVar14);
    if (iVar4 < 0) goto LAB_0007fef2;
    uVar6 = 0;
    do {
      MaSrm_DelStream(uVar7,uVar6);
      MaSrm_DelStream(uVar7,uVar6 + 1);
      MaSrm_DelStream(uVar7,uVar6 + 2);
      MaSrm_DelStream(uVar7,uVar6 + 3);
      MaSrm_DelStream(uVar7,uVar6 + 4);
      MaSrm_DelStream(uVar7,uVar6 + 5);
      MaSrm_DelStream(uVar7,uVar6 + 6);
      MaSrm_DelStream(uVar7,uVar6 + 7);
      MaSrm_DelStream(uVar7,uVar6 + 8);
      MaSrm_DelStream(uVar7,uVar6 + 9);
      MaSrm_DelStream(uVar7,uVar6 + 10);
      MaSrm_DelStream(uVar7,uVar6 + 0xb);
      MaSrm_DelStream(uVar7,uVar6 + 0xc);
      MaSrm_DelStream(uVar7,uVar6 + 0xd);
      MaSrm_DelStream(uVar7,uVar6 + 0xe);
      uVar14 = uVar6 + 0xf;
      uVar6 = uVar6 + 0x10;
      MaSrm_DelStream(uVar7,uVar14);
    } while (uVar6 != 0x40);
    if (*(byte *)(iVar5 + 0x1d) != 0xff) {
      iVar4 = *(int *)(DAT_0008021c + 0x7fcd4);
      iVar2 = *(int *)(DAT_0008021c + 0x7fcd8);
      (**(code **)(DAT_00080220 + (uint)*(byte *)(iVar5 + 0x1d) * 0x14 + 0x7fce6))();
      MaResMgr_FreeBuf((uint)*(byte *)(iVar4 + 0xb24));
      *(undefined4 *)(iVar4 + 0xab0) = 0;
      *(undefined1 *)(iVar2 + 0x26ed) = 0xff;
    }
    if (uVar12 == 0) {
      MaDva_Initialize(4);
      break;
    }
    uVar6 = (uint)*(byte *)(iVar10 + 0x27);
    if ((int)(uVar6 << 0x18) < 0) {
      bVar1 = (byte)(1 << uVar7);
      iVar8 = *(int *)(DAT_00080270 + 0x801d0) +
              (uint)*(byte *)(DAT_0008026c + 0x801c6 + iVar8 + (uVar6 & 3)) * 0x98;
      *(byte *)(iVar8 + 0x27) = *(byte *)(iVar8 + 0x27) & ~bVar1;
    }
    else {
      iVar4 = *(int *)(DAT_00080224 + 0x7fd12);
      if (uVar7 == 0) {
LAB_0007fd42:
        if ((int)(uVar6 << 0x1e) < 0) {
          *(undefined1 *)(iVar4 + (uint)*(byte *)(DAT_0008022c + iVar8 + 0x7fd57) * 0x98 + 0x27) = 2
          ;
          uVar6 = (uint)*(byte *)(iVar10 + 0x27);
        }
        if (uVar7 != 2) goto LAB_0007fd72;
LAB_0007fda2:
        if ((int)(uVar6 << 0x1c) < 0) {
          *(undefined1 *)(iVar4 + (uint)*(byte *)(DAT_00080234 + iVar8 + 0x7fdb9) * 0x98 + 0x27) = 8
          ;
        }
      }
      else {
        if ((int)(uVar6 << 0x1f) < 0) {
          *(undefined1 *)
           (iVar4 + (uint)*(byte *)(DAT_00080228 + 0x7fd28 + uVar12 * 4) * 0x98 + 0x27) = 1;
          uVar6 = (uint)*(byte *)(iVar10 + 0x27);
        }
        if (uVar7 != 1) goto LAB_0007fd42;
LAB_0007fd72:
        if ((int)(uVar6 << 0x1d) < 0) {
          *(undefined1 *)(iVar4 + (uint)*(byte *)(DAT_00080230 + iVar8 + 0x7fd88) * 0x98 + 0x27) = 4
          ;
        }
        if (uVar7 != 3) {
          uVar6 = (uint)*(byte *)(iVar10 + 0x27);
          goto LAB_0007fda2;
        }
      }
      bVar1 = (byte)(1 << uVar7);
    }
    *(byte *)(iVar10 + 0x27) = bVar1;
    break;
  case 2:
    p_Var11 = (_MACNV_SEQ_INFO *)(DAT_00080250 + 0x8005c + uVar13 * 8);
    iVar4 = (**(code **)(DAT_00080254 + *(int *)(iVar10 + 4) * 0x28 + 0x800b6))(p_Var11);
    if (iVar4 < 0) goto LAB_0007fef2;
    goto LAB_0007fee4;
  case 3:
    iVar8 = DAT_00080258 + 0x80078;
    bVar1 = *(byte *)(iVar5 + 0x1d);
    iVar4 = (**(code **)(iVar8 + *(int *)(iVar10 + 4) * 0x28 + 0x60))
                      (DAT_0008025c + 0x80086 + uVar13 * 8);
    if (iVar4 < 0) goto LAB_0007fef2;
    (**(code **)(iVar8 + (uint)bVar1 * 0x14 + 0x10))();
    break;
  case 4:
    if (uVar7 == 0) {
      bVar1 = MaDevDrv_ReadIntermediateReg(0x65);
      MaDevDrv_WriteIntermediateReg(0x65,bVar1 | 1);
    }
    break;
  case 5:
    MaDevDrv_WriteIntermediateReg(0x55,'\0');
    iVar4 = MaResMgr_FreeDtmf();
    goto joined_r0x00080038;
  case 6:
    p_Var11 = (_MACNV_SEQ_INFO *)(DAT_00080238 + 0x7feea + uVar13 * 8);
LAB_0007fee4:
    iVar4 = MaSndDrv_DelStream(p_Var11,0);
joined_r0x00080038:
    if (iVar4 < 0) goto LAB_0007fef2;
  }
  if (*(byte *)(iVar10 + 0x38) - 1 < 2) {
    MaDsp_SfxCtrl(0,0x2011e,3,(void *)(DAT_00080268 + 0x8032c));
  }
  if (*(byte *)(iVar10 + 0x39) - 1 < 2) {
    MaDsp_SfxCtrl(0,0x2013e,3,(void *)(DAT_00080264 + 0x80300));
  }
  if (((*(char *)(iVar10 + 0x34) < '\0') && (*(byte *)(iVar10 + 0x38) - 1 < 2)) &&
     (*(byte *)(iVar10 + 0x39) - 1 < 2)) {
    MaDsp_SfxCtrl(0,0x20180,0,(void *)0x1);
  }
  MaResMgr_FreeSequence(uVar13);
  if (*(int *)(iVar9 + uVar13 * 0x228) == 0) {
    iVar8 = *(int *)(iVar10 + 0x6c);
  }
  else {
    MaResMgr_FreeRam((uint)*(byte *)(iVar5 + 0x1c),0x4000);
    iVar8 = *(int *)(iVar10 + 0x6c);
  }
  if (iVar8 != 0) {
    MaResMgr_FreeBuf((uint)*(byte *)(iVar10 + 0x74));
  }
  if (*(int *)(iVar10 + 0x78) != 0) {
    MaResMgr_FreeBuf((uint)*(byte *)(iVar10 + 0x80));
  }
  if (*(byte *)(iVar10 + 0x34) == 0) {
    uVar13 = (uint)*(byte *)(iVar10 + 0x35);
    if (uVar13 != 0) goto LAB_0007ff50;
LAB_0007fe38:
    uVar6 = (uint)*(byte *)(iVar10 + 0x36);
    if (uVar6 != 0) goto LAB_0007ff76;
LAB_0007fe42:
    uVar13 = (uint)*(byte *)(iVar10 + 0x37);
    if (uVar13 != 0) goto LAB_0007ff9e;
LAB_0007fe4c:
    p_Var3 = *(_MASTMINFO **)(iVar5 + 0x24);
  }
  else {
    uVar6 = *(byte *)(iVar10 + 0x34) & 3;
    MaResMgr_Free3D(uVar6);
    uVar13 = (uint)*(byte *)(iVar10 + 0x35);
    iVar8 = DAT_0008023c + 0x7ff40 + uVar6 * 8;
    *(undefined4 *)(iVar8 + 0xba4) = 0;
    *(undefined1 *)(iVar8 + 0xba8) = 0;
    if (uVar13 == 0) goto LAB_0007fe38;
LAB_0007ff50:
    MaResMgr_Free3D(uVar13 & 3);
    uVar6 = (uint)*(byte *)(iVar10 + 0x36);
    iVar8 = DAT_00080240 + 0x7ff66 + (uVar13 & 3) * 8;
    *(undefined4 *)(iVar8 + 0xba4) = 0;
    *(undefined1 *)(iVar8 + 0xba8) = 0;
    if (uVar6 == 0) goto LAB_0007fe42;
LAB_0007ff76:
    MaResMgr_Free3D(uVar6 & 3);
    uVar13 = (uint)*(byte *)(iVar10 + 0x37);
    iVar8 = DAT_00080244 + 0x7ff8e + (uVar6 & 3) * 8;
    *(undefined4 *)(iVar8 + 0xba4) = 0;
    *(undefined1 *)(iVar8 + 0xba8) = 0;
    if (uVar13 == 0) goto LAB_0007fe4c;
LAB_0007ff9e:
    MaResMgr_Free3D(uVar13 & 3);
    iVar8 = DAT_00080248 + 0x7ffb2 + (uVar13 & 3) * 8;
    p_Var3 = *(_MASTMINFO **)(iVar5 + 0x24);
    *(undefined4 *)(iVar8 + 0xba4) = 0;
    *(undefined1 *)(iVar8 + 0xba8) = 0;
  }
  if (p_Var3 != (_MASTMINFO *)0x0) {
    MaResMgr_FreeStream(p_Var3);
  }
  if (*(byte *)(iVar10 + 0x38) - 1 < 2) {
    MaResMgr_FreeSfx(0);
  }
  *(undefined1 *)(iVar10 + 0x38) = 0;
  if (*(byte *)(iVar10 + 0x39) - 1 < 2) {
    MaResMgr_FreeSfx(1);
  }
  *(undefined1 *)(iVar10 + 0x39) = 0;
  if (*(char *)(iVar5 + 0x1d) != -1) {
    MaResMgr_FreeHv();
    *(undefined1 *)(iVar5 + 0x1d) = 0xff;
  }
  uVar13 = (uint)*(byte *)(iVar10 + 0x2c);
  if ((int)(uVar13 << 0x1f) < 0) {
    MaResMgr_FreeLed();
    uVar13 = (uint)*(byte *)(iVar10 + 0x2c);
  }
  if ((int)(uVar13 << 0x1e) < 0) {
    MaResMgr_FreeMotor();
  }
  if (*(char *)(iVar10 + 0x2a) == '\x05') {
    MaDevDrv_WriteIntermediateReg(1,0xe0);
    MaDevDrv_WriteIntermediateReg(1,'\0');
    MaDevDrv_WriteIntermediateReg(2,'\0');
    MaDevDrv_WriteIntermediateReg(0,' ');
    MaDevDrv_WriteIntermediateReg(0,'\0');
    iVar4 = MaDevDrv_WaitBusy();
    if (iVar4 < 0) {
LAB_0007fef2:
      machdep_LeaveCriticalSection();
      return iVar4;
    }
  }
  if ((int)((uint)*(byte *)(iVar10 + 0x34) << 0x18) < 0) {
    local_2c[0] = 0xff;
    MaDsp_3DCtrl(1,0xb3,*(byte *)(iVar10 + 0x34) & 3,local_2c);
  }
  if (uVar12 == 8) {
    iVar8 = MaDevDrv_AutoPowerManagement(0);
    if (-1 < iVar8) {
      *(uint *)(*(int *)(DAT_00080260 + 0x800fe) + 0x68) =
           *(uint *)(*(int *)(DAT_00080260 + 0x800fe) + 0x68) & 0xfffffffd;
    }
  }
  else if ((uVar12 == 4 && uVar7 == 1) && (iVar8 = MaDevDrv_AutoPowerManagement(2), -1 < iVar8)) {
    *(uint *)(*(int *)(DAT_0008024c + 0x8000e) + 0x68) =
         *(uint *)(*(int *)(DAT_0008024c + 0x8000e) + 0x68) & 0xfffffffe;
  }
  iVar8 = 0;
  *(undefined4 *)(iVar16 + iVar15) = 1;
LAB_0007feca:
  machdep_LeaveCriticalSection();
  return iVar8;
}

