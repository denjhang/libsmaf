/* MaSmw_Start @ 000843f8 1644B */


/* YAMAHA::MaSmw_Start(unsigned int, void*) */

uint YAMAHA::MaSmw_Start(uint param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uchar uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uchar uVar10;
  code *pcVar11;
  int iVar12;
  int iVar13;
  uchar uVar14;
  uint uVar15;
  uchar uVar16;
  uint uVar17;
  int *piVar18;
  bool bVar19;
  bool bVar20;
  uchar local_30;
  byte local_2f;
  
  uVar5 = (param_1 & 0xffff) >> 8;
  uVar15 = param_1 & 0xff;
  machdep_EnterCriticalSection();
  bVar20 = 7 < uVar5;
  bVar19 = uVar5 == 8;
  if (uVar5 < 9) {
    bVar20 = 2 < uVar15;
    bVar19 = uVar15 == 3;
  }
  if (((bVar20 && !bVar19) || (uVar15 != 0 && uVar5 == 3)) ||
     (uVar8 = (uint)*(byte *)(DAT_00084a74 + 0x84438 + uVar15 + uVar5 * 4), uVar8 == 0xff)) {
    uVar5 = 0xfffffffe;
    goto LAB_0008451c;
  }
  iVar13 = *(int *)(DAT_00084a78 + 0x8444a);
  iVar12 = uVar8 * 0x98;
  iVar7 = iVar13 + iVar12;
  if ((*(int *)(iVar13 + iVar12) != 3) || ((uVar5 == 1 && (*(char *)(iVar7 + 0x27) < '\0')))) {
    uVar5 = 0xffffffff;
    goto LAB_0008451c;
  }
  if (*(byte *)(iVar7 + 0x34) != 0) {
    uVar17 = *(byte *)(iVar7 + 0x34) & 3;
    **(uint **)(DAT_00084a90 + 0x8463c) = **(uint **)(DAT_00084a90 + 0x8463c) | 0x100 << uVar17;
    MaDsp_3DCtrl(1,0xa6,uVar17,(void *)0x0);
    if (*(char *)(iVar7 + 0x30) == '\x01') {
      FUN_00075e28(uVar5,uVar15);
      MaDsp_3DCtrl(1,0xa4,uVar17,(void *)0x0);
      *(undefined1 *)(iVar7 + 0x30) = 0;
    }
  }
  if (*(byte *)(iVar7 + 0x35) != 0) {
    uVar17 = *(byte *)(iVar7 + 0x35) & 3;
    **(uint **)(DAT_00084a8c + 0x845e8) = **(uint **)(DAT_00084a8c + 0x845e8) | 0x100 << uVar17;
    MaDsp_3DCtrl(1,0xa6,uVar17,(void *)0x0);
    if (*(char *)(iVar7 + 0x31) == '\x01') {
      FUN_00075e28(uVar5,uVar15);
      MaDsp_3DCtrl(1,0xa4,uVar17,(void *)0x0);
      *(undefined1 *)(iVar7 + 0x31) = 0;
    }
  }
  if (*(byte *)(iVar7 + 0x36) != 0) {
    uVar17 = *(byte *)(iVar7 + 0x36) & 3;
    **(uint **)(DAT_00084a88 + 0x84594) = **(uint **)(DAT_00084a88 + 0x84594) | 0x100 << uVar17;
    MaDsp_3DCtrl(1,0xa6,uVar17,(void *)0x0);
    if (*(char *)(iVar7 + 0x32) == '\x01') {
      FUN_00075e28(uVar5,uVar15);
      MaDsp_3DCtrl(1,0xa4,uVar17,(void *)0x0);
      *(undefined1 *)(iVar7 + 0x32) = 0;
    }
  }
  if (*(byte *)(iVar7 + 0x37) != 0) {
    uVar17 = *(byte *)(iVar7 + 0x37) & 3;
    **(uint **)(DAT_00084a84 + 0x84542) = **(uint **)(DAT_00084a84 + 0x84542) | 0x100 << uVar17;
    MaDsp_3DCtrl(1,0xa6,uVar17,(void *)0x0);
    if (*(char *)(iVar7 + 0x33) == '\x01') {
      FUN_00075e28(uVar5,uVar15);
      MaDsp_3DCtrl(1,0xa4,uVar17,(void *)0x0);
      *(undefined1 *)(iVar7 + 0x33) = 0;
    }
  }
  *(undefined4 *)(iVar13 + iVar12) = 4;
  iVar9 = DAT_00084ab8;
  iVar6 = DAT_00084a94;
  switch(uVar5) {
  case 0:
    uVar15 = MaDevDrv_ReceiveData(0);
    uVar5 = uVar15;
    if ((int)uVar15 < 0) goto LAB_0008451c;
    if (*(int *)(iVar7 + 8) == 3) {
      MaDevDrv_WriteIntermediateReg(1,'@');
      MaDevDrv_WriteIntermediateReg(1,'\0');
      *(undefined4 *)(iVar7 + 0x7c) = 0;
      *(undefined4 *)(iVar7 + 8) = 1;
      FUN_0007a1f8();
    }
    if ((int)((uint)*(byte *)(iVar7 + 0x28) << 0x1e) < 0) {
      *(undefined1 *)(iVar7 + 0x28) = 3;
      MaDevDrv_WriteIntermediateReg(0x14,'\x01');
      if (*(uint *)(iVar7 + 0x4c) < *(uint *)(iVar7 + 0x54)) {
        uVar2 = __udivsi3(*(uint *)(iVar7 + 0x54) - *(uint *)(iVar7 + 0x4c),
                          *(undefined4 *)(iVar7 + 0x44));
        uVar3 = (uchar)((uint)uVar2 >> 0x18);
        uVar16 = (uchar)((uint)uVar2 >> 0x10);
        uVar14 = (uchar)uVar2;
        uVar10 = (uchar)((uint)uVar2 >> 8);
      }
      else {
        uVar16 = '\0';
        uVar3 = '\0';
        uVar14 = '\x01';
        uVar10 = uVar16;
      }
      MaDevDrv_WriteIntermediateReg(0xc,uVar3);
      MaDevDrv_WriteIntermediateReg(0xd,uVar16);
      MaDevDrv_WriteIntermediateReg(0xe,uVar10);
      MaDevDrv_WriteIntermediateReg(0xf,uVar14);
    }
    if (*(char *)(iVar7 + 0x2a) == '\x05') {
      uVar5 = MaDevDrv_SendDirectPacket((uchar *)(DAT_00084abc + 0x8490e),0x200);
    }
    else {
      uVar5 = MaDevDrv_SendDirectPacket((uchar *)(DAT_00084a98 + 0x84676),0x100);
    }
    if ((int)uVar5 < 0) goto LAB_0008451c;
    local_2f = (byte)uVar15 | 0x80;
    local_30 = 0x80;
    uVar5 = MaDevDrv_SendDirectPacket(&local_30,2);
    if ((int)uVar5 < 0) goto LAB_0008451c;
    uVar5 = MaDevDrv_SendDirectPacket((uchar *)(DAT_00084a9c + 0x848a6),2);
    pcVar11 = *(code **)(iVar7 + 0x68);
    if (pcVar11 != (code *)0x0) {
      machdep_LeaveCriticalSection();
      (*pcVar11)(1,0);
      machdep_EnterCriticalSection();
    }
    MaDevDrv_WriteIntermediateReg(0xb,'\x01');
    MaDevDrv_SetIrqCtrl('\x10','@');
    if (*(int *)(iVar7 + 0x34) != 0) {
      MaDevDrv_StartTimer();
    }
    iVar7 = DAT_00084aa0;
    puVar4 = *(uint **)(DAT_00084aa0 + 0x8476c);
    uVar15 = puVar4[1];
    if (uVar15 != 0) {
      iVar9 = uVar8 * 0x228 + *(int *)(DAT_00084aa0 + 0x84768);
      iVar6 = *(int *)(iVar9 + 0x24);
      if (iVar6 != 0) {
        uVar8 = (uint)*(byte *)(iVar6 + 0x18);
        if ((uVar8 < 4) && ((uVar15 & 0x10000 << uVar8) != 0)) {
          MaSrm_StreamRestart(uVar8);
          puVar4 = *(uint **)(iVar7 + 0x8476c);
          *puVar4 = *puVar4 | 0x10000 << uVar8;
          MaDevDrv_StartTimer();
          puVar4 = *(uint **)(iVar7 + 0x8476c);
          iVar6 = *(int *)(iVar9 + 0x24);
          uVar15 = puVar4[1];
        }
        iVar7 = DAT_00084ad4;
        uVar8 = (uint)*(byte *)(iVar6 + 0x2c);
        if ((uVar8 < 4) && ((uVar15 & 0x10000 << uVar8) != 0)) {
          MaSrm_StreamRestart(uVar8);
          puVar4 = *(uint **)(iVar7 + 0x84a48);
          *puVar4 = *puVar4 | 0x10000 << uVar8;
          MaDevDrv_StartTimer();
          puVar4 = *(uint **)(iVar7 + 0x84a48);
          uVar15 = puVar4[1];
        }
      }
      if ((int)(uVar15 << 0x13) < 0) {
        *puVar4 = *puVar4 | 0x1000;
        MaDevDrv_StartTimer();
        puVar4 = *(uint **)(DAT_00084ad0 + 0x84a38);
      }
      puVar4[1] = 0;
    }
    goto LAB_000848a0;
  case 1:
    piVar18 = (int *)(DAT_00084aa4 + 0x847c4);
    **(uint **)(DAT_00084aa4 + 0x847cc) = **(uint **)(DAT_00084aa4 + 0x847cc) | 1 << uVar15;
    MaDevDrv_StartTimer();
    MaDevDrv_ResetIrqCtrl(' ','\0');
    uVar15 = (uint)*(byte *)(iVar7 + 0x27);
    uVar5 = uVar15 & 1;
    if ((*(byte *)(iVar7 + 0x27) & 1) != 0) {
      iVar6 = *piVar18;
      *(undefined4 *)(iVar6 + 0x98) = 4;
      if ((int)((uint)*(byte *)(iVar6 + 0xc0) << 0x1e) < 0) {
        *(undefined1 *)(iVar6 + 0xc0) = 3;
      }
      if (*(int *)(iVar6 + 0x9c) == 6) {
        uVar5 = MaDevDrv_SendDirectPacket((uchar *)(DAT_00084acc + 0x84cee),0x40);
        uVar15 = (uint)*(byte *)(iVar7 + 0x27);
      }
      else {
        uVar15 = (uint)*(byte *)(iVar7 + 0x27);
        uVar5 = 0;
      }
    }
    if ((int)(uVar15 << 0x1e) < 0) {
      iVar6 = *(int *)(DAT_00084aa8 + 0x8481a);
      *(undefined4 *)(iVar6 + 0x130) = 4;
      if ((int)((uint)*(byte *)(iVar6 + 0x158) << 0x1e) < 0) {
        *(undefined1 *)(iVar6 + 0x158) = 3;
      }
      if (*(int *)(iVar6 + 0x134) == 6) {
        uVar5 = MaDevDrv_SendDirectPacket((uchar *)(DAT_00084ac8 + 0x84d1a),0x40);
      }
      uVar15 = (uint)*(byte *)(iVar7 + 0x27);
    }
    if ((int)(uVar15 << 0x1d) < 0) {
      iVar6 = *(int *)(DAT_00084aac + 0x8484c);
      *(undefined4 *)(iVar6 + 0x1c8) = 4;
      if ((int)((uint)*(byte *)(iVar6 + 0x1f0) << 0x1e) < 0) {
        *(undefined1 *)(iVar6 + 0x1f0) = 3;
      }
      if (*(int *)(iVar6 + 0x1cc) == 6) {
        uVar5 = MaDevDrv_SendDirectPacket((uchar *)(DAT_00084ac4 + 0x84d46),0x40);
      }
      uVar15 = (uint)*(byte *)(iVar7 + 0x27);
    }
    if ((int)(uVar15 << 0x1c) < 0) {
      iVar7 = *(int *)(DAT_00084ab0 + 0x84878);
      *(undefined4 *)(iVar7 + 0x260) = 4;
      if ((int)((uint)*(byte *)(iVar7 + 0x288) << 0x1e) < 0) {
        *(undefined1 *)(iVar7 + 0x288) = 3;
      }
      if (*(int *)(iVar7 + 0x264) == 6) {
        uVar5 = MaDevDrv_SendDirectPacket((uchar *)(DAT_00084ac0 + 0x84d74),0x40);
      }
    }
    MaDevDrv_SetIrqCtrl(' ','\0');
LAB_000848a0:
    if ((int)uVar5 < 0) {
      *(undefined4 *)(iVar13 + iVar12) = 3;
      machdep_LeaveCriticalSection();
      return uVar5;
    }
    goto LAB_0008451c;
  case 2:
  case 6:
    iVar6 = *(int *)(uVar8 * 0x228 + *(int *)(DAT_00084a7c + 0x844ba) + 0x24);
    if ((iVar6 != 0) && (uVar15 = (uint)*(byte *)(iVar6 + 0x18), uVar15 < 4)) {
      if ((int)((uint)*(byte *)(iVar7 + 0x28) << 0x1e) < 0) {
        *(undefined1 *)(iVar7 + 0x28) = 3;
        MaSrm_SetStopTime(uVar15,*(uint *)(iVar7 + 0x54));
      }
      uVar5 = MaSrm_Start(uVar15);
      if (uVar5 != 0) goto LAB_000848a0;
      **(uint **)(DAT_00084a80 + 0x84508) = **(uint **)(DAT_00084a80 + 0x84508) | 0x10 << uVar15;
      MaDevDrv_SetIrqCtrl((uchar)(1 << uVar15),'\0');
      MaDevDrv_StartTimer();
    }
    break;
  case 3:
    **(uint **)(DAT_00084ab4 + 0x848c8) = **(uint **)(DAT_00084ab4 + 0x848c8) | 0x1000;
    MaDevDrv_StartTimer();
    break;
  case 4:
    if (uVar15 == 0) {
      bVar1 = MaDevDrv_ReadIntermediateReg(0x5c);
      MaDevDrv_WriteIntermediateReg(0x5c,bVar1 | 0x80);
    }
    else {
      bVar1 = MaDevDrv_ReadIntermediateReg(0xe6);
      MaDevDrv_WriteIntermediateReg(0xe6,bVar1 | 1);
      if (*(int *)(*(int *)(iVar9 + 0x84918) + 8) - 0x23U < 2) {
        bVar1 = MaDevDrv_ReadIntermediateReg(0xe7);
        MaDevDrv_WriteIntermediateReg(0xe7,bVar1 & 0xfb);
      }
    }
    if (*(char *)(iVar7 + 0x34) != '\0') {
      MaDevDrv_StartTimer();
    }
    break;
  case 7:
    MaDevDrv_WriteIntermediateReg(0xf2,'\x01');
    MaDevDrv_WriteIntermediateReg(0xf2,'\0');
    MaDevDrv_SetIrqCtrl('\0',' ');
    **(uint **)(iVar6 + 0x8469e) = **(uint **)(iVar6 + 0x8469e) | 0x100000;
    MaDevDrv_StartTimer();
    bVar1 = MaDevDrv_ReadIntermediateReg(0xf1);
    MaDevDrv_WriteIntermediateReg(0xf1,bVar1 | 1);
  }
  uVar5 = 0;
LAB_0008451c:
  machdep_LeaveCriticalSection();
  return uVar5;
}

