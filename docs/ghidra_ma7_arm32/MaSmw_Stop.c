/* MaSmw_Stop @ 00084ad8 1928B */


/* YAMAHA::MaSmw_Stop(unsigned int, void*) */

uint YAMAHA::MaSmw_Stop(uint param_1,void *param_2)

{
  byte bVar1;
  uchar uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uchar *puVar8;
  uint uVar9;
  uchar *puVar10;
  int iVar11;
  int iVar12;
  code *pcVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  uint uVar20;
  bool bVar21;
  bool bVar22;
  uchar local_30;
  byte local_2f;
  
  uVar7 = (param_1 & 0xffff) >> 8;
  uVar15 = param_1 & 0xff;
  machdep_EnterCriticalSection();
  bVar22 = 7 < uVar7;
  bVar21 = uVar7 == 8;
  if (uVar7 < 9) {
    bVar22 = 2 < uVar15;
    bVar21 = uVar15 == 3;
  }
  if (((bVar22 && !bVar21) || (uVar15 != 0 && uVar7 == 3)) ||
     (uVar9 = (uint)*(byte *)(DAT_00085270 + 0x84b16 + uVar15 + uVar7 * 4), uVar9 == 0xff)) {
    uVar7 = 0xfffffffe;
    goto LAB_00084baa;
  }
  iVar14 = *(int *)(DAT_00085274 + 0x84b28);
  iVar17 = uVar9 * 0x98;
  iVar12 = iVar14 + iVar17;
  if (1 < *(int *)(iVar14 + iVar17) - 3U) {
LAB_000850aa:
    uVar7 = 0xffffffff;
    goto LAB_00084baa;
  }
  if (*(byte *)(iVar12 + 0x34) != 0) {
    uVar4 = *(byte *)(iVar12 + 0x34) & 3;
    **(uint **)(DAT_00085274 + 0x84b30) = **(uint **)(DAT_00085274 + 0x84b30) & ~(0x100 << uVar4);
    MaDsp_3DCtrl(1,0xa5,uVar4,(void *)0x0);
  }
  if (*(byte *)(iVar12 + 0x35) != 0) {
    uVar4 = *(byte *)(iVar12 + 0x35) & 3;
    **(uint **)(DAT_00085280 + 0x84c2c) = **(uint **)(DAT_00085280 + 0x84c2c) & ~(0x100 << uVar4);
    MaDsp_3DCtrl(1,0xa5,uVar4,(void *)0x0);
  }
  if (*(byte *)(iVar12 + 0x36) != 0) {
    uVar4 = *(byte *)(iVar12 + 0x36) & 3;
    **(uint **)(DAT_0008527c + 0x84bfe) = **(uint **)(DAT_0008527c + 0x84bfe) & ~(0x100 << uVar4);
    MaDsp_3DCtrl(1,0xa5,uVar4,(void *)0x0);
  }
  if (*(byte *)(iVar12 + 0x37) != 0) {
    uVar4 = *(byte *)(iVar12 + 0x37) & 3;
    **(uint **)(DAT_00085278 + 0x84bd0) = **(uint **)(DAT_00085278 + 0x84bd0) & ~(0x100 << uVar4);
    MaDsp_3DCtrl(1,0xa5,uVar4,(void *)0x0);
  }
  iVar6 = DAT_0008529c;
  iVar16 = DAT_00085284;
  switch(uVar7) {
  case 0:
    MaDevDrv_WriteIntermediateReg(0xb,'\0');
    MaDevDrv_ResetIrqCtrl('\x10','@');
    MaDevDrv_WriteReg(0xc,'@');
    MaDevDrv_WriteReg(0xb,'\x10');
    uVar15 = MaDevDrv_ReceiveData(0);
    uVar7 = uVar15;
    if ((int)uVar15 < 0) goto LAB_00084baa;
    pcVar13 = *(code **)(iVar12 + 0x68);
    if (pcVar13 != (code *)0x0) {
      machdep_LeaveCriticalSection();
      (*pcVar13)(2,0);
      machdep_EnterCriticalSection();
    }
    iVar16 = DAT_00085288;
    iVar11 = uVar9 * 0x228 + *(int *)(DAT_00085288 + 0x84ce6);
    iVar6 = *(int *)(iVar11 + 0x24);
    if (iVar6 != 0) {
      uVar7 = (uint)*(byte *)(iVar6 + 0x18);
      if ((uVar7 < 4) &&
         (uVar4 = 0x10000 << uVar7, (uVar4 & **(uint **)(DAT_00085288 + 0x84cea)) != 0)) {
        MaSrm_StreamPause(uVar7);
        puVar3 = *(uint **)(iVar16 + 0x84cea);
        puVar3[1] = puVar3[1] | uVar4;
        *puVar3 = *puVar3 & ~uVar4;
        MaDevDrv_StopTimer();
        iVar6 = *(int *)(iVar11 + 0x24);
      }
      iVar16 = DAT_0008528c;
      uVar7 = (uint)*(byte *)(iVar6 + 0x2c);
      if ((uVar7 < 4) &&
         (uVar4 = 0x10000 << uVar7, (uVar4 & **(uint **)(DAT_0008528c + 0x84d44)) != 0)) {
        MaSrm_StreamPause(uVar7);
        puVar3 = *(uint **)(iVar16 + 0x84d44);
        *puVar3 = *puVar3 & ~uVar4;
        puVar3[1] = puVar3[1] | uVar4;
        MaDevDrv_StopTimer();
      }
    }
    uVar7 = (uint)*(byte *)(DAT_00085290 + 0x84d6e + uVar9 * 0x228 + 0xd9);
    if (uVar7 != 0xff) {
      if (*(int *)(*(int *)(DAT_00085290 + 0x84d6e) + 0xab0) == 4) {
        (**(code **)(DAT_000852f8 + uVar7 * 0x14 + 0x85260))(1,0,0);
      }
      puVar3 = *(uint **)(DAT_00085294 + 0x84d98);
      if ((int)(*puVar3 << 0x13) < 0) {
        *puVar3 = *puVar3 & 0xffffefff;
        puVar3[1] = puVar3[1] | 0x1000;
        MaDevDrv_StopTimer();
      }
      uVar7 = MaDevDrv_SendDirectPacket((uchar *)(DAT_00085298 + 0x84f22),2);
      if ((int)uVar7 < 0) goto LAB_00084baa;
    }
    if (*(char *)(iVar12 + 0x2a) == '\x05') {
      uVar7 = MaDevDrv_SendDirectPacket((uchar *)((int)&DAT_00085270 + DAT_000852e4 + 2),0x200);
    }
    else {
      uVar7 = MaDevDrv_SendDirectPacket((uchar *)(DAT_000852e0 + 0x851f0),0x100);
    }
    if ((int)uVar7 < 0) goto LAB_00084baa;
    local_2f = (byte)uVar15 | 0x80;
    local_30 = 0x80;
    uVar7 = MaDevDrv_SendDirectPacket(&local_30,2);
    if ((int)uVar7 < 0) goto LAB_00084fea;
    if ((*(int *)(iVar14 + iVar17) == 4) && (*(int *)(iVar12 + 0x34) != 0)) {
      MaDevDrv_StopTimer();
    }
    goto joined_r0x00085054;
  case 1:
    if (*(char *)(iVar12 + 0x27) < '\0') goto LAB_000850aa;
    MaDevDrv_ResetIrqCtrl(' ','\0');
    puVar10 = (uchar *)(DAT_000852a0 + 0x85162);
    puVar8 = (uchar *)(DAT_000852a4 + 0x84f6e);
    uVar15 = 0;
    uVar7 = 0xffffffff;
    do {
      if (((int)(uint)*(byte *)(iVar12 + 0x27) >> (uVar15 & 0xff)) << 0x1f < 0) {
        uVar20 = 1 << (uVar15 & 0xff);
        uVar4 = (uint)*(byte *)(DAT_000852a8 + uVar15 + 0x84e24);
        puVar3 = *(uint **)(DAT_000852ac + 0x84e2e);
        *(undefined4 *)(*(int *)(DAT_000852ac + 0x84e26) + uVar4 * 0x98) = 3;
        iVar16 = uVar4 * 0x98;
        uVar7 = *puVar3;
        if ((uVar20 & uVar7) != 0) {
          *puVar3 = uVar7 & ~uVar20;
          MaDevDrv_StopTimer();
        }
        iVar11 = DAT_000852b0;
        iVar18 = uVar4 * 0x228 + *(int *)(DAT_000852b0 + 0x84e5a);
        iVar5 = *(int *)(iVar18 + 0x24);
        if (iVar5 != 0) {
          uVar20 = (uint)*(byte *)(iVar5 + 0x18);
          if ((uVar20 < 4) && (uVar4 == *(byte *)(iVar5 + 0x10))) {
            uVar7 = MaDevDrv_SendDirectPacket((uchar *)(DAT_000852f4 + 0x8568a + uVar20 * 4),4);
            if ((int)uVar7 < 0) goto LAB_00084baa;
            uVar2 = (uchar)(1 << uVar20);
            MaDevDrv_ResetIrqCtrl(uVar2,'\0');
            MaDevDrv_WriteReg(0xb,uVar2);
            uVar7 = **(uint **)(iVar11 + 0x84e5e);
            if ((0x10000 << uVar20 & uVar7) != 0) {
              **(uint **)(iVar11 + 0x84e5e) = uVar7 & ~(0x10000 << uVar20);
              MaDevDrv_StopTimer();
            }
            iVar5 = *(int *)(iVar18 + 0x24);
          }
          uVar20 = (uint)*(byte *)(iVar5 + 0x2c);
          if ((uVar20 < 4) && (uVar4 == *(byte *)(iVar5 + 0x24))) {
            uVar7 = MaDevDrv_SendDirectPacket((uchar *)(DAT_000852ec + 0x85630 + uVar20 * 4),4);
            if ((int)uVar7 < 0) goto LAB_00084baa;
            uVar2 = (uchar)(1 << uVar20);
            MaDevDrv_ResetIrqCtrl(uVar2,'\0');
            MaDevDrv_WriteReg(0xb,uVar2);
            uVar7 = **(uint **)(DAT_000852f0 + 0x851ea);
            if ((0x10000 << uVar20 & uVar7) != 0) {
              **(uint **)(DAT_000852f0 + 0x851ea) = uVar7 & ~(0x10000 << uVar20);
              MaDevDrv_StopTimer();
            }
          }
        }
        if (*(char *)(DAT_000852b4 + 0x84e8e + uVar4 * 0x228 + 0xd9) != -1) {
          iVar11 = *(int *)(DAT_000852b4 + 0x84e8e);
          uVar7 = **(uint **)(DAT_000852b4 + 0x84e96);
          if ((int)(uVar7 << 0x13) < 0) {
            **(uint **)(DAT_000852b4 + 0x84e96) = uVar7 & 0xffffefff;
            MaDevDrv_StopTimer();
          }
          iVar5 = *(int *)(iVar11 + 0xab0);
          if (1 < iVar5) {
            if (3 < iVar5) {
              if (iVar5 != 4) goto LAB_00084ee8;
              (**(code **)(DAT_000852b8 + (uint)*(byte *)(uVar9 * 0x228 + iVar6 + 0x84ea5) * 0x14 +
                          0x84ed4))(1,0,0);
            }
            MaHvsCnv_Close((_MACNV_SEQ_INFO *)(DAT_000852bc + 0x84f7a));
            *(undefined4 *)(iVar11 + 0xab0) = 0;
          }
LAB_00084ee8:
          uVar7 = MaDevDrv_SendDirectPacket(puVar8,2);
          if ((int)uVar7 < 0) goto LAB_00084baa;
        }
        iVar11 = *(int *)(DAT_000852c0 + 0x84efc);
        if (*(int *)(iVar11 + iVar16 + 4) == 6) {
          MaCmd_ChInit(uVar15);
          uVar7 = MaDevDrv_SendDirectPacket(puVar10,0x40);
        }
        else {
          uVar4 = 0;
          iVar5 = 0;
          piVar19 = (int *)(DAT_000852c4 + 0x84f14);
          while( true ) {
            iVar11 = MaCmd_AllMute(uVar15,-1,uVar4,
                                   (uchar *)(*(int *)(iVar11 + iVar16 + 0x6c) + iVar5));
            uVar7 = iVar5 + iVar11;
            if (uVar4 + 1 == 0x10) break;
            iVar11 = MaCmd_AllMute(uVar15,-1,uVar4 + 1,
                                   (uchar *)(*(int *)(*piVar19 + iVar16 + 0x6c) + uVar7));
            iVar5 = MaCmd_AllMute(uVar15,-1,uVar4 + 2,
                                  (uchar *)(*(int *)(*piVar19 + iVar16 + 0x6c) + uVar7 + iVar11));
            iVar5 = uVar7 + iVar11 + iVar5;
            iVar11 = MaCmd_AllMute(uVar15,-1,uVar4 + 3,
                                   (uchar *)(*(int *)(*piVar19 + iVar16 + 0x6c) + iVar5));
            uVar7 = uVar4 + 4;
            uVar4 = uVar4 + 5;
            iVar5 = iVar5 + iVar11;
            iVar18 = MaCmd_AllMute(uVar15,-1,uVar7,
                                   (uchar *)(*(int *)(*piVar19 + iVar16 + 0x6c) + iVar5));
            iVar11 = *piVar19;
            iVar5 = iVar5 + iVar18;
          }
          if (uVar7 != 0) {
            uVar7 = MaDevDrv_SendDirectPacket
                              (*(uchar **)(iVar16 + *(int *)(DAT_000852e8 + 0x85100) + 0x6c),uVar7);
          }
        }
      }
      uVar15 = uVar15 + 1;
      puVar10 = puVar10 + 0x40;
    } while (uVar15 != 4);
    if (**(int **)(DAT_000852c8 + 0x84fc0) != 0) {
      MaDevDrv_SetIrqCtrl(' ','\0');
    }
    goto joined_r0x00085054;
  case 2:
  case 6:
    iVar12 = *(int *)(uVar9 * 0x228 + *(int *)(DAT_000852cc + 0x84fd8) + 0x24);
    if ((iVar12 == 0) || (uVar15 = (uint)*(byte *)(iVar12 + 0x18), 3 < uVar15)) {
      uVar7 = 0xffffffff;
      goto LAB_00084fea;
    }
    **(uint **)(DAT_000852cc + 0x84fdc) = **(uint **)(DAT_000852cc + 0x84fdc) & ~(0x10 << uVar15);
    uVar7 = MaSrm_Stop(uVar15);
    if ((int)uVar7 < 0) goto LAB_00084fea;
    if (*(int *)(iVar14 + iVar17) == 4) {
      MaDevDrv_StopTimer();
      uVar2 = (uchar)(1 << uVar15);
      MaDevDrv_ResetIrqCtrl(uVar2,'\0');
      MaDevDrv_WriteReg(0xb,uVar2);
    }
    goto joined_r0x00085054;
  case 3:
    uVar7 = **(uint **)(DAT_000852d0 + 0x85012);
    if ((int)(uVar7 << 0x13) < 0) {
      **(uint **)(DAT_000852d0 + 0x85012) = uVar7 & 0xffffefff;
      MaDevDrv_StopTimer();
    }
    (**(code **)(DAT_000852d8 +
                 (uint)*(byte *)(uVar9 * 0x228 + *(int *)(DAT_000852d4 + 0x8502a) + 0x1d) * 0x14 +
                0x85032))(1,0,0);
    uVar7 = MaDevDrv_SendDirectPacket((uchar *)(DAT_000852dc + 0x851ca),2);
joined_r0x00085054:
    if (uVar7 != 0) {
LAB_00084fea:
      machdep_LeaveCriticalSection();
      return uVar7;
    }
    break;
  case 4:
    if (uVar15 == 0) {
      bVar1 = MaDevDrv_ReadIntermediateReg(0x5c);
      MaDevDrv_WriteIntermediateReg(0x5c,bVar1 & 0x7f);
    }
    else {
      bVar1 = MaDevDrv_ReadIntermediateReg(0xe6);
      MaDevDrv_WriteIntermediateReg(0xe6,bVar1 & 0xfe);
    }
    if ((*(int *)(iVar14 + iVar17) == 4) && (*(char *)(iVar12 + 0x34) != '\0')) {
      MaDevDrv_StopTimer();
    }
    break;
  case 5:
    MaDevDrv_WriteIntermediateReg(0x55,'\0');
    break;
  case 7:
    bVar1 = MaDevDrv_ReadIntermediateReg(0xf1);
    MaDevDrv_WriteIntermediateReg(0xf1,bVar1 & 0xfe);
    MaDevDrv_WriteReg(0xc,' ');
    uVar7 = **(uint **)(iVar16 + 0x84c7c);
    if ((int)(uVar7 << 0xb) < 0) {
      **(uint **)(iVar16 + 0x84c7c) = uVar7 & 0xffefffff;
      MaDevDrv_StopTimer();
    }
    MaDevDrv_ResetIrqCtrl('\0',' ');
  }
  *(undefined4 *)(iVar14 + iVar17) = 3;
  uVar7 = 0;
LAB_00084baa:
  machdep_LeaveCriticalSection();
  return uVar7;
}

