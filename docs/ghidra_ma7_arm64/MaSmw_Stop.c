/* MaSmw_Stop @ 001a076c 2692B */


/* YAMAHA::MaSmw_Stop(unsigned int, void*) */

void YAMAHA::MaSmw_Stop(uint param_1,void *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  uchar uVar5;
  long lVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  code *pcVar21;
  long lVar22;
  uchar *puVar23;
  uchar local_10;
  byte local_f;
  long local_8;
  
  uVar16 = (ulong)(param_1 >> 8) & 0xff;
  uVar10 = param_1 & 0xff;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  machdep_EnterCriticalSection();
  lVar6 = DAT_0059a420;
  if (((3 < uVar10) || (8 < (uint)uVar16)) || ((uVar16 == 3 && (uVar10 != 0)))) {
LAB_001a0f60:
    uVar16 = 0xfffffffe;
    goto LAB_001a084c;
  }
  bVar7 = (&DAT_0048aa70)[uVar16 * 4 + (ulong)(byte)param_1];
  if (bVar7 == 0xff) goto LAB_001a0f60;
  uVar18 = (ulong)(uint)bVar7;
  uVar20 = (ulong)bVar7;
  lVar17 = uVar18 * 0xc0;
  lVar11 = DAT_0059a420 + lVar17;
  if (1 < *(int *)(DAT_0059a420 + lVar17) - 3U) {
LAB_001a0f68:
    uVar16 = 0xffffffff;
    goto LAB_001a084c;
  }
  if (*(byte *)(lVar11 + 0x34) != 0) {
    uVar15 = *(byte *)(lVar11 + 0x34) & 3;
    *DAT_005a0050 = *DAT_005a0050 & (0x100 << (ulong)uVar15 ^ 0xffffffffU);
    MaDsp_3DCtrl(1,0xa5,uVar15,(void *)0x0);
  }
  if (*(byte *)(lVar11 + 0x35) != 0) {
    uVar15 = *(byte *)(lVar11 + 0x35) & 3;
    *DAT_005a0050 = *DAT_005a0050 & (0x100 << (ulong)uVar15 ^ 0xffffffffU);
    MaDsp_3DCtrl(1,0xa5,uVar15,(void *)0x0);
  }
  if (*(byte *)(lVar11 + 0x36) != 0) {
    uVar15 = *(byte *)(lVar11 + 0x36) & 3;
    *DAT_005a0050 = *DAT_005a0050 & (0x100 << (ulong)uVar15 ^ 0xffffffffU);
    MaDsp_3DCtrl(1,0xa5,uVar15,(void *)0x0);
  }
  if (*(byte *)(lVar11 + 0x37) != 0) {
    uVar15 = *(byte *)(lVar11 + 0x37) & 3;
    *DAT_005a0050 = *DAT_005a0050 & (0x100 << (ulong)uVar15 ^ 0xffffffffU);
    MaDsp_3DCtrl(1,0xa5,uVar15,(void *)0x0);
  }
  switch(uVar16) {
  case 0:
    MaDevDrv_WriteIntermediateReg(0xb,'\0');
    MaDevDrv_ResetIrqCtrl('\x10','@');
    MaDevDrv_WriteReg(0xc,'@');
    MaDevDrv_WriteReg(0xb,'\x10');
    uVar10 = MaDevDrv_ReceiveData(0);
    if ((int)uVar10 < 0) {
      uVar16 = (ulong)uVar10;
      goto LAB_001a084c;
    }
    pcVar21 = *(code **)(lVar11 + 0x78);
    if (pcVar21 != (code *)0x0) {
      machdep_LeaveCriticalSection();
      (*pcVar21)(2,0);
      machdep_EnterCriticalSection();
    }
    lVar22 = DAT_0059a428 + uVar20 * 0x430;
    lVar19 = *(long *)(lVar22 + 0x28);
    if (lVar19 != 0) {
      bVar7 = *(byte *)(lVar19 + 0x18);
      if (bVar7 < 4) {
        uVar15 = 0x10000 << (ulong)(bVar7 & 0x1f);
        if ((uVar15 & *DAT_005a0050) != 0) {
          MaSrm_StreamPause((uint)bVar7);
          puVar2 = DAT_005a0050;
          puVar1 = DAT_005a0050 + 1;
          *DAT_005a0050 = *DAT_005a0050 & (uVar15 ^ 0xffffffff);
          puVar2[1] = *puVar1 | uVar15;
          MaDevDrv_StopTimer();
          lVar19 = *(long *)(lVar22 + 0x28);
        }
      }
      bVar7 = *(byte *)(lVar19 + 0x2c);
      if (bVar7 < 4) {
        uVar15 = 0x10000 << (ulong)(bVar7 & 0x1f);
        if ((uVar15 & *DAT_005a0050) != 0) {
          MaSrm_StreamPause((uint)bVar7);
          puVar2 = DAT_005a0050;
          puVar1 = DAT_005a0050 + 1;
          *DAT_005a0050 = *DAT_005a0050 & (uVar15 ^ 0xffffffff);
          puVar2[1] = *puVar1 | uVar15;
          MaDevDrv_StopTimer();
        }
      }
    }
    if ((byte)(&DAT_0059a44d)[uVar18 * 0x430] != 0xff) {
      if (*(int *)(DAT_0059a420 + 0xd80) == 4) {
        (*(code *)(&PTR_MaHvDrvJP_SetCommand_00565960)
                  [(long)(int)(uint)(byte)(&DAT_0059a44d)[uVar18 * 0x430] * 5])(1,0,0);
      }
      puVar1 = DAT_005a0050;
      if ((*DAT_005a0050 >> 0xc & 1) != 0) {
        puVar2 = DAT_005a0050 + 1;
        *DAT_005a0050 = *DAT_005a0050 & 0xffffefff;
        puVar1[1] = *puVar2 | 0x1000;
        MaDevDrv_StopTimer();
      }
      uVar16 = MaDevDrv_SendDirectPacket(&DAT_0048bd30,2);
      if ((int)uVar16 < 0) goto LAB_001a084c;
    }
    if (*(char *)(lVar11 + 0x2a) == '\x05') {
      uVar16 = MaDevDrv_SendDirectPacket(&DAT_0048bd40,0x200);
    }
    else {
      uVar16 = MaDevDrv_SendDirectPacket(&DAT_0048bd40,0x100);
    }
    if ((int)uVar16 < 0) goto LAB_001a084c;
    local_f = (byte)uVar10 | 0x80;
    local_10 = 0x80;
    uVar10 = MaDevDrv_SendDirectPacket(&local_10,2);
    uVar16 = (ulong)uVar10;
    if ((int)uVar10 < 0) goto LAB_001a084c;
    if ((*(int *)(lVar6 + lVar17) == 4) && (*(int *)(lVar11 + 0x34) != 0)) {
      MaDevDrv_StopTimer();
    }
    goto LAB_001a0a38;
  case 1:
    if (*(char *)(lVar11 + 0x27) < '\0') goto LAB_001a0f68;
    lVar22 = 0;
    uVar16 = 0xffffffff;
    MaDevDrv_ResetIrqCtrl(' ','\0');
    puVar23 = &DAT_0048bf40;
    do {
      puVar1 = DAT_005a0050;
      uVar10 = (uint)lVar22;
      if (((int)(uint)*(byte *)(lVar11 + 0x27) >> (uVar10 & 0x1f) & 1U) != 0) {
        uVar14 = 1 << (ulong)(uVar10 & 0x1f);
        bVar7 = (&DAT_0048aa74)[lVar22];
        uVar15 = *DAT_005a0050;
        lVar19 = (ulong)bVar7 * 0xc0;
        *(undefined4 *)(DAT_0059a420 + lVar19) = 3;
        if ((uVar14 & uVar15) != 0) {
          *puVar1 = uVar15 & (uVar14 ^ 0xffffffff);
          MaDevDrv_StopTimer();
        }
        lVar12 = DAT_0059a428 + (ulong)bVar7 * 0x430;
        lVar13 = *(long *)(lVar12 + 0x28);
        if (lVar13 != 0) {
          bVar4 = *(byte *)(lVar13 + 0x18);
          if ((bVar4 < 4) && (bVar7 == *(byte *)(lVar13 + 0x10))) {
            uVar16 = MaDevDrv_SendDirectPacket(&UNK_0048c040 + (ulong)bVar4 * 4,4);
            if ((int)uVar16 < 0) goto LAB_001a084c;
            uVar5 = (uchar)(1 << (ulong)(bVar4 & 0x1f));
            MaDevDrv_ResetIrqCtrl(uVar5,'\0');
            MaDevDrv_WriteReg(0xb,uVar5);
            uVar15 = 0x10000 << (ulong)(bVar4 & 0x1f);
            if ((uVar15 & *DAT_005a0050) == 0) {
              lVar13 = *(long *)(lVar12 + 0x28);
            }
            else {
              *DAT_005a0050 = *DAT_005a0050 & (uVar15 ^ 0xffffffff);
              MaDevDrv_StopTimer();
              lVar13 = *(long *)(lVar12 + 0x28);
            }
          }
          bVar4 = *(byte *)(lVar13 + 0x2c);
          if ((bVar4 < 4) && (bVar7 == *(byte *)(lVar13 + 0x24))) {
            uVar16 = MaDevDrv_SendDirectPacket(&UNK_0048c040 + (ulong)bVar4 * 4,4);
            if ((int)uVar16 < 0) goto LAB_001a084c;
            uVar5 = (uchar)(1 << (ulong)(bVar4 & 0x1f));
            MaDevDrv_ResetIrqCtrl(uVar5,'\0');
            MaDevDrv_WriteReg(0xb,uVar5);
            uVar15 = 0x10000 << (ulong)(bVar4 & 0x1f);
            if ((uVar15 & *DAT_005a0050) != 0) {
              *DAT_005a0050 = *DAT_005a0050 & (uVar15 ^ 0xffffffff);
              MaDevDrv_StopTimer();
            }
          }
        }
        lVar12 = DAT_0059a420;
        if ((&DAT_0059a44d)[(ulong)bVar7 * 0x430] != -1) {
          if ((*DAT_005a0050 >> 0xc & 1) != 0) {
            *DAT_005a0050 = *DAT_005a0050 & 0xffffefff;
            MaDevDrv_StopTimer();
          }
          uVar15 = *(uint *)(lVar12 + 0xd80);
          if (1 < uVar15) {
            if (3 < uVar15) {
              if (uVar15 != 4) goto LAB_001a0c14;
              (*(code *)(&PTR_MaHvDrvJP_SetCommand_00565960)
                        [(ulong)(byte)(&DAT_0059a44d)[uVar18 * 0x430] * 5])(1,0,0);
            }
            MaHvsCnv_Close((_MACNV_SEQ_INFO *)&DAT_005a0178);
            *(undefined4 *)(lVar12 + 0xd80) = 0;
          }
LAB_001a0c14:
          uVar16 = MaDevDrv_SendDirectPacket(&DAT_0048bd30,2);
          if ((int)uVar16 < 0) goto LAB_001a084c;
        }
        lVar12 = DAT_0059a420 + lVar19;
        if (*(int *)(lVar12 + 4) == 6) {
          MaCmd_ChInit(uVar10);
          uVar16 = MaDevDrv_SendDirectPacket(puVar23,0x40);
          uVar16 = uVar16 & 0xffffffff;
        }
        else {
          uVar15 = 0;
          uVar14 = 0;
          while( true ) {
            iVar9 = MaCmd_AllMute(uVar10,-1,uVar15,
                                  (uchar *)(*(long *)(lVar12 + 0x80) + (ulong)uVar14));
            uVar14 = uVar14 + iVar9;
            if (uVar15 + 1 == 0x10) break;
            iVar9 = MaCmd_AllMute(uVar10,-1,uVar15 + 1,
                                  (uchar *)(*(long *)(DAT_0059a420 + lVar19 + 0x80) + (ulong)uVar14)
                                 );
            iVar8 = MaCmd_AllMute(uVar10,-1,uVar15 + 2,
                                  (uchar *)(*(long *)(DAT_0059a420 + lVar19 + 0x80) +
                                           (ulong)(uVar14 + iVar9)));
            uVar14 = uVar14 + iVar9 + iVar8;
            iVar9 = MaCmd_AllMute(uVar10,-1,uVar15 + 3,
                                  (uchar *)(*(long *)(DAT_0059a420 + lVar19 + 0x80) + (ulong)uVar14)
                                 );
            uVar14 = uVar14 + iVar9;
            uVar3 = uVar15 + 4;
            uVar15 = uVar15 + 5;
            iVar9 = MaCmd_AllMute(uVar10,-1,uVar3,
                                  (uchar *)(*(long *)(DAT_0059a420 + lVar19 + 0x80) + (ulong)uVar14)
                                 );
            uVar14 = uVar14 + iVar9;
            lVar12 = DAT_0059a420 + lVar19;
          }
          uVar16 = 0;
          if (uVar14 != 0) {
            uVar16 = MaDevDrv_SendDirectPacket(*(uchar **)(DAT_0059a420 + lVar19 + 0x80),uVar14);
            uVar16 = uVar16 & 0xffffffff;
          }
        }
      }
      lVar22 = lVar22 + 1;
      puVar23 = puVar23 + 0x40;
    } while (lVar22 != 4);
    if (*DAT_005a0050 != 0) {
      MaDevDrv_SetIrqCtrl(' ','\0');
    }
    goto LAB_001a0a38;
  case 2:
  case 6:
    lVar11 = *(long *)(DAT_0059a428 + uVar20 * 0x430 + 0x28);
    if (lVar11 == 0) {
      uVar16 = 0xffffffff;
      goto LAB_001a084c;
    }
    bVar7 = *(byte *)(lVar11 + 0x18);
    uVar16 = 0xffffffff;
    if (3 < bVar7) goto LAB_001a084c;
    uVar15 = (uint)bVar7;
    *DAT_005a0050 = *DAT_005a0050 & (0x10 << (ulong)(uVar15 & 0x1f) ^ 0xffffffffU);
    uVar10 = MaSrm_Stop(uVar15);
    uVar16 = (ulong)uVar10;
    if ((int)uVar10 < 0) goto LAB_001a084c;
    if (*(int *)(lVar6 + lVar17) == 4) {
      MaDevDrv_StopTimer();
      uVar5 = (uchar)(1 << (ulong)(uVar15 & 0x1f));
      MaDevDrv_ResetIrqCtrl(uVar5,'\0');
      MaDevDrv_WriteReg(0xb,uVar5);
    }
    goto LAB_001a0a38;
  case 3:
    if ((*DAT_005a0050 >> 0xc & 1) != 0) {
      *DAT_005a0050 = *DAT_005a0050 & 0xffffefff;
      MaDevDrv_StopTimer();
    }
    (*(code *)(&PTR_MaHvDrvJP_SetCommand_00565960)
              [(ulong)*(byte *)(DAT_0059a428 + uVar20 * 0x430 + 0x1d) * 5])(1,0,0);
    uVar16 = MaDevDrv_SendDirectPacket(&DAT_0048bd30,2);
    uVar16 = uVar16 & 0xffffffff;
LAB_001a0a38:
    if ((int)uVar16 != 0) goto LAB_001a084c;
    break;
  case 4:
    if (uVar10 == 0) {
      bVar7 = MaDevDrv_ReadIntermediateReg(0x5c);
      MaDevDrv_WriteIntermediateReg(0x5c,bVar7 & 0x7f);
    }
    else {
      bVar7 = MaDevDrv_ReadIntermediateReg(0xe6);
      MaDevDrv_WriteIntermediateReg(0xe6,bVar7 & 0xfe);
    }
    if ((*(int *)(lVar6 + lVar17) == 4) && (*(char *)(lVar11 + 0x34) != '\0')) {
      MaDevDrv_StopTimer();
    }
    break;
  case 5:
    MaDevDrv_WriteIntermediateReg(0x55,'\0');
    break;
  case 7:
    bVar7 = MaDevDrv_ReadIntermediateReg(0xf1);
    MaDevDrv_WriteIntermediateReg(0xf1,bVar7 & 0xfe);
    MaDevDrv_WriteReg(0xc,' ');
    if ((*DAT_005a0050 >> 0x14 & 1) != 0) {
      *DAT_005a0050 = *DAT_005a0050 & 0xffefffff;
      MaDevDrv_StopTimer();
    }
    MaDevDrv_ResetIrqCtrl('\0',' ');
  }
  uVar16 = 0;
  *(undefined4 *)(lVar6 + lVar17) = 3;
LAB_001a084c:
  machdep_LeaveCriticalSection();
  if (local_8 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar16);
  }
  return;
}

