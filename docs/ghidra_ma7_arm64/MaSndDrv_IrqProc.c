/* MaSndDrv_IrqProc @ 00192ea0 7104B */


/* WARNING: Type propagation algorithm not settling */
/* YAMAHA::MaSndDrv_IrqProc() */

void YAMAHA::MaSndDrv_IrqProc(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined *puVar13;
  int iVar14;
  undefined1 *puVar15;
  bool bVar16;
  undefined1 uVar17;
  char cVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  _MACNV_SEEK_INFO *p_Var26;
  byte bVar27;
  _MACNV_SEEK_INFO _Var28;
  long lVar29;
  byte bVar30;
  undefined4 *puVar31;
  long lVar32;
  _MACNV_SEEK_INFO *p_Var33;
  code *pcVar34;
  undefined8 uVar35;
  uchar *puVar36;
  undefined4 local_14;
  undefined *local_10;
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  machdep_EnterCriticalSection();
  uVar19 = MaDevDrv_ReadReg(0xb);
  uVar20 = MaDevDrv_ReadReg(0xc);
  MaDevDrv_WriteReg(0xb,(byte)uVar19 & 0x60);
  MaDevDrv_WriteReg(0xc,(byte)uVar20 & 0x80);
  uVar22 = uVar19 & 0xff;
  uVar21 = uVar19 & 0xff;
  if ((uVar19 & 1) != 0) {
    MaSrm_DataProc(0);
  }
  if ((uVar22 >> 1 & 1) != 0) {
    MaSrm_DataProc(1);
  }
  if ((uVar22 >> 2 & 1) != 0) {
    MaSrm_DataProc(2);
  }
  if ((uVar21 >> 3 & 1) != 0) {
    MaSrm_DataProc(3);
  }
  if ((uVar22 >> 5 & 1) != 0) {
    uVar24 = *DAT_005a0050;
    if ((uVar24 >> 4 & 1) != 0) {
      MaSrm_CtrlProc(0);
      uVar24 = *DAT_005a0050;
    }
    if ((uVar24 >> 5 & 1) != 0) {
      MaSrm_CtrlProc(1);
      uVar24 = *DAT_005a0050;
    }
    if ((uVar24 >> 6 & 1) != 0) {
      MaSrm_CtrlProc(2);
      uVar24 = *DAT_005a0050;
    }
    if ((uVar24 >> 7 & 1) != 0) {
      MaSrm_CtrlProc(3);
      uVar24 = *DAT_005a0050;
    }
    if ((uVar24 >> 0x10 & 1) != 0) {
      iVar23 = MaSrm_CtrlProc2(0);
      if (iVar23 == 0) {
        uVar24 = *DAT_005a0050;
      }
      else {
        *DAT_005a0050 = *DAT_005a0050 & 0xfffeffff;
        MaDevDrv_StopTimer();
        uVar24 = *DAT_005a0050;
      }
    }
    if ((uVar24 >> 0x11 & 1) != 0) {
      iVar23 = MaSrm_CtrlProc2(1);
      if (iVar23 == 0) {
        uVar24 = *DAT_005a0050;
      }
      else {
        *DAT_005a0050 = *DAT_005a0050 & 0xfffdffff;
        MaDevDrv_StopTimer();
        uVar24 = *DAT_005a0050;
      }
    }
    if ((uVar24 >> 0x12 & 1) != 0) {
      iVar23 = MaSrm_CtrlProc2(2);
      if (iVar23 == 0) {
        uVar24 = *DAT_005a0050;
      }
      else {
        *DAT_005a0050 = *DAT_005a0050 & 0xfffbffff;
        MaDevDrv_StopTimer();
        uVar24 = *DAT_005a0050;
      }
    }
    if ((uVar24 >> 0x13 & 1) != 0) {
      iVar23 = MaSrm_CtrlProc2(3);
      if (iVar23 == 0) {
        uVar24 = *DAT_005a0050;
      }
      else {
        *DAT_005a0050 = *DAT_005a0050 & 0xfff7ffff;
        MaDevDrv_StopTimer();
        uVar24 = *DAT_005a0050;
      }
    }
    if ((uVar24 & 0xf00) != 0) {
      uVar25 = MaDsp_3DPosProc();
      uVar24 = DAT_005a1020;
      if (((DAT_005a1024 == '\x01') && ((uVar25 & 1) != 0)) &&
         (pcVar34 = *(code **)(DAT_0059a420 +
                               (ulong)(byte)(&DAT_0048aa70)
                                            [((ulong)(DAT_005a1020 >> 8) & 0xff) * 4 +
                                             (ulong)(byte)DAT_005a1020] * 0xc0 + 0x70),
         pcVar34 != (code *)0x0)) {
        machdep_LeaveCriticalSection();
        (*pcVar34)(uVar24,0x7c);
        machdep_EnterCriticalSection();
      }
      uVar24 = DAT_005a1028;
      if (((DAT_005a102c == '\x01') && ((uVar25 >> 1 & 1) != 0)) &&
         (pcVar34 = *(code **)(DAT_0059a420 +
                               (ulong)(byte)(&DAT_0048aa70)
                                            [((ulong)(DAT_005a1028 >> 8) & 0xff) * 4 +
                                             (ulong)(byte)DAT_005a1028] * 0xc0 + 0x70),
         pcVar34 != (code *)0x0)) {
        machdep_LeaveCriticalSection();
        (*pcVar34)(uVar24,0x7c);
        machdep_EnterCriticalSection();
      }
      uVar24 = DAT_005a1030;
      if (((DAT_005a1034 == '\x01') && ((uVar25 >> 2 & 1) != 0)) &&
         (pcVar34 = *(code **)(DAT_0059a420 +
                               (ulong)(byte)(&DAT_0048aa70)
                                            [((ulong)(DAT_005a1030 >> 8) & 0xff) * 4 +
                                             (ulong)(byte)DAT_005a1030] * 0xc0 + 0x70),
         pcVar34 != (code *)0x0)) {
        machdep_LeaveCriticalSection();
        (*pcVar34)(uVar24,0x7c);
        machdep_EnterCriticalSection();
      }
      uVar24 = DAT_005a1038;
      if (((DAT_005a103c == '\x01') && ((uVar25 >> 3 & 1) != 0)) &&
         (pcVar34 = *(code **)(DAT_0059a420 +
                               (ulong)(byte)(&DAT_0048aa70)
                                            [((ulong)(DAT_005a1038 >> 8) & 0xff) * 4 +
                                             (ulong)(byte)DAT_005a1038] * 0xc0 + 0x70),
         pcVar34 != (code *)0x0)) {
        machdep_LeaveCriticalSection();
        (*pcVar34)(uVar24,0x7c);
        machdep_EnterCriticalSection();
      }
      uVar24 = *DAT_005a0050;
    }
    if ((uVar24 & 0xf) != 0) {
      puVar36 = &DAT_0048ad70;
      p_Var33 = (_MACNV_SEEK_INFO *)&DAT_005a01b8;
      local_10 = (undefined *)0x0;
      lVar32 = 0;
      do {
        lVar7 = DAT_0059a420;
        uVar24 = (uint)lVar32;
        bVar27 = (&DAT_0048aa74)[lVar32];
        lVar29 = (ulong)bVar27 * 0xc0;
        lVar6 = DAT_0059a420 + lVar29;
        if (*(int *)(lVar6 + 4) == 2) {
          if (*(int *)(DAT_0059a420 + lVar29) == 4) {
            iVar23 = 2;
            if (*(char *)(lVar6 + 0xc) == '\x14') {
              pcVar34 = *(code **)(lVar6 + 0x70);
              if (pcVar34 != (code *)0x0) {
                machdep_LeaveCriticalSection();
                (*pcVar34)(uVar24 | 0x100,0x7a);
                machdep_EnterCriticalSection();
                goto LAB_00193920;
              }
            }
            goto LAB_00193a48;
          }
        }
        else {
LAB_00193920:
          if (*(int *)(lVar7 + lVar29) == 4) {
            iVar23 = *(int *)(lVar6 + 4);
LAB_00193a48:
            if ((&PTR_MaDmyCnv_Conv_00565a08)[(long)iVar23 * 10] != (undefined *)0x0) {
              puVar31 = (undefined4 *)(lVar6 + 0xa0);
              iVar23 = *(int *)(lVar6 + 0xa4);
              if (iVar23 != 0) {
                iVar23 = iVar23 + -1;
                *(int *)(lVar6 + 0xa4) = iVar23;
              }
              bVar30 = *(byte *)(lVar6 + 0x28);
              uVar25 = *(int *)(lVar6 + 0x44) + *(int *)(lVar6 + 0x4c);
              *(uint *)(lVar6 + 0x4c) = uVar25;
              if (((bVar30 & 1) != 0) && (*(uint *)(lVar6 + 0x54) <= uVar25)) {
                pcVar34 = *(code **)(lVar6 + 0x70);
                if (pcVar34 != (code *)0x0) {
                  machdep_LeaveCriticalSection();
                  (*pcVar34)(uVar24 | 0x100,0x7b);
                  machdep_EnterCriticalSection();
                  iVar23 = *(int *)(lVar6 + 0xa4);
                  bVar30 = *(byte *)(lVar6 + 0x28);
                }
                *(byte *)(lVar6 + 0x28) = bVar30 & 0xfe;
              }
              puVar13 = &DAT_005a0058 + (ulong)bVar27 * 0x10;
              while (iVar23 == 0) {
                uVar25 = uVar24 | 0x100;
                iVar23 = FUN_0018b840(uVar25,*puVar31,0xffffffff,*(undefined4 *)(lVar6 + 0xa8),
                                      *(undefined8 *)(lVar6 + 0xb0),*(undefined4 *)(lVar6 + 0xb8));
                if (iVar23 < 0) {
                  *(undefined4 *)(lVar6 + 0xa4) = 0;
                  *puVar31 = 0x1b;
                  *(undefined8 *)(lVar6 + 0xb0) = 0;
                  goto LAB_00193950;
                }
                iVar23 = (*(code *)(&PTR_MaDmyCnv_Conv_00565a08)[(long)*(int *)(lVar6 + 4) * 10])
                                   (puVar13,puVar31);
                if (iVar23 < 0) break;
                if (iVar23 == 0) {
                  iVar23 = *(int *)(lVar6 + 0x3c);
                  if ((iVar23 != 0) &&
                     ((*(int *)(lVar6 + 0x40) == 0 ||
                      (iVar14 = *(int *)(lVar6 + 0x40) + -1, *(int *)(lVar6 + 0x40) = iVar14,
                      iVar14 == 0)))) {
                    *(undefined4 *)(lVar7 + lVar29) = 3;
                    *(int *)(lVar6 + 0x40) = iVar23;
                    *(undefined4 *)(lVar6 + 0xa4) = 0;
                    *(undefined4 *)(lVar6 + 0xa0) = 0x1b;
                    *(undefined8 *)(lVar6 + 0xb0) = 0;
                    if (*(byte *)(lVar6 + 0x34) != 0) {
                      uVar1 = *(byte *)(lVar6 + 0x34) & 3;
                      *DAT_005a0050 = *DAT_005a0050 & (0x100 << (ulong)uVar1 ^ 0xffffffffU);
                      MaDsp_3DCtrl(1,0xa5,uVar1,(void *)0x0);
                    }
                    if (*(byte *)(lVar6 + 0x35) != 0) {
                      uVar1 = *(byte *)(lVar6 + 0x35) & 3;
                      *DAT_005a0050 = *DAT_005a0050 & (0x100 << (ulong)uVar1 ^ 0xffffffffU);
                      MaDsp_3DCtrl(1,0xa5,uVar1,(void *)0x0);
                    }
                    if (*(byte *)(lVar6 + 0x36) != 0) {
                      uVar1 = *(byte *)(lVar6 + 0x36) & 3;
                      *DAT_005a0050 = *DAT_005a0050 & (0x100 << (ulong)uVar1 ^ 0xffffffffU);
                      MaDsp_3DCtrl(1,0xa5,uVar1,(void *)0x0);
                    }
                    if (*(byte *)(lVar6 + 0x37) != 0) {
                      uVar1 = *(byte *)(lVar6 + 0x37) & 3;
                      *DAT_005a0050 = *DAT_005a0050 & (0x100 << (ulong)uVar1 ^ 0xffffffffU);
                      MaDsp_3DCtrl(1,0xa5,uVar1,(void *)0x0);
                    }
                    uVar24 = 1 << (ulong)(uVar24 & 0x1f);
                    if ((uVar24 & *DAT_005a0050) != 0) {
                      *DAT_005a0050 = *DAT_005a0050 & (uVar24 ^ 0xffffffff);
                      MaDevDrv_StopTimer();
                    }
                    FUN_0018b7f4(*(undefined8 *)(lVar6 + 0x70),uVar25,0x7f);
                    break;
                  }
                  pcVar34 = *(code **)(lVar6 + 0x70);
                  if (pcVar34 != (code *)0x0) {
                    machdep_LeaveCriticalSection();
                    (*pcVar34)(uVar25,0x7e);
                    machdep_EnterCriticalSection();
                  }
                  MaCmd_SeekInfoInit(p_Var33);
                  iVar23 = (*(code *)(&PTR_MaDmyCnv_Seek_00565a00)[(long)*(int *)(lVar6 + 4) * 10])
                                     (puVar13,0,p_Var33);
                  if (iVar23 < 0) break;
                  bVar30 = *(byte *)(lVar6 + 0x2c);
                  _Var28 = (_MACNV_SEEK_INFO)(bVar30 & 1);
                  if ((bVar30 & 1) == 0) {
                    p_Var33[8] = _Var28;
                    p_Var33[0x22] = _Var28;
                    p_Var33[0x3c] = _Var28;
                    p_Var33[0x56] = _Var28;
                    p_Var33[0x70] = _Var28;
                    p_Var33[0x8a] = _Var28;
                    p_Var33[0xa4] = _Var28;
                    p_Var33[0xbe] = _Var28;
                    p_Var33[0xd8] = _Var28;
                    p_Var33[0xf2] = _Var28;
                    p_Var33[0x10c] = _Var28;
                    p_Var33[0x126] = _Var28;
                    p_Var33[0x140] = _Var28;
                    p_Var33[0x15a] = _Var28;
                    p_Var33[0x174] = _Var28;
                    p_Var33[0x18e] = _Var28;
                    p_Var33[0x1a8] = _Var28;
                    p_Var33[0x1c2] = _Var28;
                    p_Var33[0x1dc] = _Var28;
                    p_Var33[0x1f6] = _Var28;
                    p_Var33[0x210] = _Var28;
                    p_Var33[0x22a] = _Var28;
                    p_Var33[0x244] = _Var28;
                    p_Var33[0x25e] = _Var28;
                    p_Var33[0x278] = _Var28;
                    p_Var33[0x292] = _Var28;
                    p_Var33[0x2ac] = _Var28;
                    p_Var33[0x2c6] = _Var28;
                    p_Var33[0x2e0] = _Var28;
                    p_Var33[0x2fa] = _Var28;
                    p_Var33[0x314] = _Var28;
                    p_Var33[0x32e] = _Var28;
                    bVar30 = *(byte *)(lVar6 + 0x2c);
                  }
                  if ((bVar30 & 2) == 0) {
                    p_Var33[9] = (_MACNV_SEEK_INFO)0x0;
                    p_Var33[0x23] = (_MACNV_SEEK_INFO)0x0;
                    p_Var33[0x3d] = (_MACNV_SEEK_INFO)0x0;
                    p_Var33[0x57] = (_MACNV_SEEK_INFO)0x0;
                    p_Var33[0x71] = (_MACNV_SEEK_INFO)0x0;
                    p_Var33[0x8b] = (_MACNV_SEEK_INFO)0x0;
                    p_Var33[0xa5] = (_MACNV_SEEK_INFO)0x0;
                    p_Var33[0xbf] = (_MACNV_SEEK_INFO)0x0;
                    p_Var33[0xd9] = (_MACNV_SEEK_INFO)0x0;
                    p_Var33[0xf3] = (_MACNV_SEEK_INFO)0x0;
                    p_Var33[0x10d] = (_MACNV_SEEK_INFO)0x0;
                    p_Var33[0x127] = (_MACNV_SEEK_INFO)0x0;
                    p_Var33[0x141] = (_MACNV_SEEK_INFO)0x0;
                    p_Var33[0x15b] = (_MACNV_SEEK_INFO)0x0;
                    p_Var33[0x175] = (_MACNV_SEEK_INFO)0x0;
                    p_Var33[399] = (_MACNV_SEEK_INFO)0x0;
                    p_Var33[0x1a9] = (_MACNV_SEEK_INFO)0x0;
                    p_Var33[0x1c3] = (_MACNV_SEEK_INFO)0x0;
                    p_Var33[0x1dd] = (_MACNV_SEEK_INFO)0x0;
                    p_Var33[0x1f7] = (_MACNV_SEEK_INFO)0x0;
                    p_Var33[0x211] = (_MACNV_SEEK_INFO)0x0;
                    p_Var33[0x22b] = (_MACNV_SEEK_INFO)0x0;
                    p_Var33[0x245] = (_MACNV_SEEK_INFO)0x0;
                    p_Var33[0x25f] = (_MACNV_SEEK_INFO)0x0;
                    p_Var33[0x279] = (_MACNV_SEEK_INFO)0x0;
                    p_Var33[0x293] = (_MACNV_SEEK_INFO)0x0;
                    p_Var33[0x2ad] = (_MACNV_SEEK_INFO)0x0;
                    p_Var33[0x2c7] = (_MACNV_SEEK_INFO)0x0;
                    p_Var33[0x2e1] = (_MACNV_SEEK_INFO)0x0;
                    p_Var33[0x2fb] = (_MACNV_SEEK_INFO)0x0;
                    p_Var33[0x315] = (_MACNV_SEEK_INFO)0x0;
                    p_Var33[0x32f] = (_MACNV_SEEK_INFO)0x0;
                  }
                  local_14 = 0;
                  bVar30 = *(byte *)(lVar6 + ((ulong)*(uint *)(p_Var33 + 0x348) & 3) + 0x34);
                  if ((bVar30 >> 6 & 1) != 0) {
                    cVar18 = Ma7emu_GetMode();
                    if (cVar18 == '\0') {
                      pcVar34 = *(code **)(lVar6 + 0x70);
                      if (pcVar34 != (code *)0x0) {
                        machdep_LeaveCriticalSection();
                        (*pcVar34)(uVar25,0x10400);
                        machdep_EnterCriticalSection();
                      }
                    }
                    else {
                      uVar1 = bVar30 & 3;
                      iVar23 = MaDsp_3DCtrl(1,0x86,uVar1,p_Var33 + 0x350);
                      if (((iVar23 < 0) ||
                          (iVar23 = MaDsp_3DCtrl(1,0x81,uVar1,&local_14), iVar23 < 0)) ||
                         (iVar23 = MaDsp_3DCtrl(1,0xa4,uVar1,(void *)0x0), iVar23 < 0))
                      goto LAB_00193950;
                      *(undefined1 *)(lVar6 + ((ulong)*(uint *)(p_Var33 + 0x348) & 3) + 0x30) = 0;
                    }
                  }
                  local_14 = 0;
                  bVar30 = *(byte *)(lVar6 + ((ulong)*(uint *)(p_Var33 + 0x35c) & 3) + 0x34);
                  if ((bVar30 >> 6 & 1) != 0) {
                    cVar18 = Ma7emu_GetMode();
                    if (cVar18 == '\0') {
                      pcVar34 = *(code **)(lVar6 + 0x70);
                      if (pcVar34 != (code *)0x0) {
                        machdep_LeaveCriticalSection();
                        (*pcVar34)(uVar25,0x10401);
                        machdep_EnterCriticalSection();
                      }
                    }
                    else {
                      uVar1 = bVar30 & 3;
                      iVar23 = MaDsp_3DCtrl(1,0x86,uVar1,p_Var33 + 0x364);
                      if (((iVar23 < 0) ||
                          (iVar23 = MaDsp_3DCtrl(1,0x81,uVar1,&local_14), iVar23 < 0)) ||
                         (iVar23 = MaDsp_3DCtrl(1,0xa4,uVar1,(void *)0x0), iVar23 < 0))
                      goto LAB_00193950;
                      *(undefined1 *)(lVar6 + ((ulong)*(uint *)(p_Var33 + 0x35c) & 3) + 0x30) = 0;
                    }
                  }
                  local_14 = 0;
                  bVar30 = *(byte *)(lVar6 + ((ulong)*(uint *)(p_Var33 + 0x370) & 3) + 0x34);
                  if ((bVar30 >> 6 & 1) != 0) {
                    cVar18 = Ma7emu_GetMode();
                    if (cVar18 == '\0') {
                      pcVar34 = *(code **)(lVar6 + 0x70);
                      if (pcVar34 != (code *)0x0) {
                        machdep_LeaveCriticalSection();
                        (*pcVar34)(uVar25,0x10402);
                        machdep_EnterCriticalSection();
                      }
                    }
                    else {
                      uVar1 = bVar30 & 3;
                      iVar23 = MaDsp_3DCtrl(1,0x86,uVar1,p_Var33 + 0x378);
                      if (((iVar23 < 0) ||
                          (iVar23 = MaDsp_3DCtrl(1,0x81,uVar1,&local_14), iVar23 < 0)) ||
                         (iVar23 = MaDsp_3DCtrl(1,0xa4,uVar1,(void *)0x0), iVar23 < 0))
                      goto LAB_00193950;
                      *(undefined1 *)(lVar6 + ((ulong)*(uint *)(p_Var33 + 0x370) & 3) + 0x30) = 0;
                    }
                  }
                  local_14 = 0;
                  bVar30 = *(byte *)(lVar6 + ((ulong)*(uint *)(p_Var33 + 900) & 3) + 0x34);
                  if ((bVar30 >> 6 & 1) != 0) {
                    cVar18 = Ma7emu_GetMode();
                    if (cVar18 == '\0') {
                      pcVar34 = *(code **)(lVar6 + 0x70);
                      if (pcVar34 != (code *)0x0) {
                        machdep_LeaveCriticalSection();
                        (*pcVar34)(uVar25,0x10403);
                        machdep_EnterCriticalSection();
                      }
                    }
                    else {
                      uVar25 = bVar30 & 3;
                      iVar23 = MaDsp_3DCtrl(1,0x86,uVar25,p_Var33 + 0x38c);
                      if (((iVar23 < 0) ||
                          (iVar23 = MaDsp_3DCtrl(1,0x81,uVar25,&local_14), iVar23 < 0)) ||
                         (iVar23 = MaDsp_3DCtrl(1,0xa4,uVar25,(void *)0x0), iVar23 < 0))
                      goto LAB_00193950;
                      *(undefined1 *)(lVar6 + ((ulong)*(uint *)(p_Var33 + 900) & 3) + 0x30) = 0;
                    }
                  }
                  if (*(char *)(lVar6 + 0x38) == '\x01') {
                    _Var28 = p_Var33[6];
                    lVar8 = DAT_0059a428 + (ulong)bVar27 * 0x430;
                    if (*(_MACNV_SEEK_INFO *)(lVar8 + 0x20) != _Var28) {
                      *(_MACNV_SEEK_INFO *)(lVar8 + 0x20) = _Var28;
                      if (_Var28 == (_MACNV_SEEK_INFO)0xff) {
                        uVar25 = 3;
                        local_10 = &DAT_0048ac70;
                      }
                      else if (_Var28 == (_MACNV_SEEK_INFO)0xfe) {
                        uVar25 = 3;
                        local_10 = &DAT_0048ac90;
                      }
                      else {
                        iVar23 = (*(code *)(&PTR_MaDmyCnv_Ctrl_005659f8)
                                           [(long)*(int *)(lVar6 + 4) * 10])
                                           (puVar13,0x101,p_Var33[6],&local_10);
                        if (iVar23 < 0) goto LAB_00194214;
                        uVar25 = 0x7fffffff;
                      }
                      if (local_10 != (undefined *)0x0) {
                        MaDsp_SfxCtrl(0,0x2011e,uVar25,local_10);
                      }
                    }
                  }
LAB_00194214:
                  if (*(char *)(lVar6 + 0x39) == '\x01') {
                    _Var28 = p_Var33[7];
                    lVar8 = DAT_0059a428 + (ulong)bVar27 * 0x430;
                    if (*(_MACNV_SEEK_INFO *)(lVar8 + 0x21) != _Var28) {
                      *(_MACNV_SEEK_INFO *)(lVar8 + 0x21) = _Var28;
                      if (_Var28 == (_MACNV_SEEK_INFO)0xff) {
                        uVar25 = 3;
                        local_10 = &DAT_0048ac70;
                      }
                      else if (_Var28 == (_MACNV_SEEK_INFO)0xfe) {
                        uVar25 = 3;
                        local_10 = &DAT_0048acb0;
                      }
                      else {
                        iVar23 = (*(code *)(&PTR_MaDmyCnv_Ctrl_005659f8)
                                           [(long)*(int *)(lVar6 + 4) * 10])
                                           (puVar13,0x101,p_Var33[7],&local_10);
                        if (iVar23 < 0) goto LAB_00194220;
                        uVar25 = 0x7fffffff;
                      }
                      if (local_10 != (undefined *)0x0) {
                        MaDsp_SfxCtrl(0,0x2013e,uVar25,local_10);
                      }
                    }
                  }
LAB_00194220:
                  if ((char)*(byte *)(lVar6 + 0x34) < '\0') {
                    if (*(char *)(lVar6 + 0x2f) == '\x02') {
                      _Var28 = (_MACNV_SEEK_INFO)0x0;
                    }
                    else {
                      _Var28 = (_MACNV_SEEK_INFO)((*(byte *)(lVar6 + 0x34) & 3) + 2);
                    }
                    p_Var33[0x1b] = _Var28;
                    p_Var33[0x35] = _Var28;
                    p_Var33[0x4f] = _Var28;
                    p_Var33[0x69] = _Var28;
                    p_Var33[0x83] = _Var28;
                    p_Var33[0x9d] = _Var28;
                    p_Var33[0xb7] = _Var28;
                    p_Var33[0xd1] = _Var28;
                    p_Var33[0xeb] = _Var28;
                    p_Var33[0x105] = _Var28;
                    p_Var33[0x11f] = _Var28;
                    p_Var33[0x139] = _Var28;
                    p_Var33[0x153] = _Var28;
                    p_Var33[0x16d] = _Var28;
                    p_Var33[0x187] = _Var28;
                    p_Var33[0x1a1] = _Var28;
                    p_Var33[0x1bb] = _Var28;
                    p_Var33[0x1d5] = _Var28;
                    p_Var33[0x1ef] = _Var28;
                    p_Var33[0x209] = _Var28;
                    p_Var33[0x223] = _Var28;
                    p_Var33[0x23d] = _Var28;
                    p_Var33[599] = _Var28;
                    p_Var33[0x271] = _Var28;
                    p_Var33[0x28b] = _Var28;
                    p_Var33[0x2a5] = _Var28;
                    p_Var33[0x2bf] = _Var28;
                    p_Var33[0x2d9] = _Var28;
                    p_Var33[0x2f3] = _Var28;
                    p_Var33[0x30d] = _Var28;
                    p_Var33[0x327] = _Var28;
                    p_Var33[0x341] = _Var28;
                  }
                  else {
                    p_Var26 = p_Var33 + 0x1b;
                    do {
                      if (((byte)*p_Var26 - 2 & 0xff) < 4) {
                        bVar30 = *(byte *)(lVar6 + (ulong)((byte)*p_Var26 - 2) + 0x34);
                        if ((bVar30 & 0x40) == 0) {
                          *p_Var26 = (_MACNV_SEEK_INFO)0x0;
                        }
                        else {
                          *p_Var26 = (_MACNV_SEEK_INFO)((bVar30 & 3) + 2);
                        }
                      }
                      if (((byte)p_Var26[0x1a] - 2 & 0xff) < 4) {
                        bVar30 = *(byte *)(lVar6 + (ulong)((byte)p_Var26[0x1a] - 2) + 0x34);
                        if ((bVar30 & 0x40) == 0) {
                          p_Var26[0x1a] = (_MACNV_SEEK_INFO)0x0;
                        }
                        else {
                          p_Var26[0x1a] = (_MACNV_SEEK_INFO)((bVar30 & 3) + 2);
                        }
                      }
                      if (((byte)p_Var26[0x34] - 2 & 0xff) < 4) {
                        bVar30 = *(byte *)(lVar6 + (ulong)((byte)p_Var26[0x34] - 2) + 0x34);
                        if ((bVar30 & 0x40) == 0) {
                          p_Var26[0x34] = (_MACNV_SEEK_INFO)0x0;
                        }
                        else {
                          p_Var26[0x34] = (_MACNV_SEEK_INFO)((bVar30 & 3) + 2);
                        }
                      }
                      if (((byte)p_Var26[0x4e] - 2 & 0xff) < 4) {
                        bVar30 = *(byte *)(lVar6 + (ulong)((byte)p_Var26[0x4e] - 2) + 0x34);
                        if ((bVar30 & 0x40) == 0) {
                          p_Var26[0x4e] = (_MACNV_SEEK_INFO)0x0;
                        }
                        else {
                          p_Var26[0x4e] = (_MACNV_SEEK_INFO)((bVar30 & 3) + 2);
                        }
                      }
                      if (((byte)p_Var26[0x68] - 2 & 0xff) < 4) {
                        bVar30 = *(byte *)(lVar6 + (ulong)((byte)p_Var26[0x68] - 2) + 0x34);
                        if ((bVar30 & 0x40) == 0) {
                          p_Var26[0x68] = (_MACNV_SEEK_INFO)0x0;
                        }
                        else {
                          p_Var26[0x68] = (_MACNV_SEEK_INFO)((bVar30 & 3) + 2);
                        }
                      }
                      if (((byte)p_Var26[0x82] - 2 & 0xff) < 4) {
                        bVar30 = *(byte *)(lVar6 + (ulong)((byte)p_Var26[0x82] - 2) + 0x34);
                        if ((bVar30 & 0x40) == 0) {
                          p_Var26[0x82] = (_MACNV_SEEK_INFO)0x0;
                        }
                        else {
                          p_Var26[0x82] = (_MACNV_SEEK_INFO)((bVar30 & 3) + 2);
                        }
                      }
                      if (((byte)p_Var26[0x9c] - 2 & 0xff) < 4) {
                        bVar30 = *(byte *)(lVar6 + (ulong)((byte)p_Var26[0x9c] - 2) + 0x34);
                        if ((bVar30 & 0x40) == 0) {
                          p_Var26[0x9c] = (_MACNV_SEEK_INFO)0x0;
                        }
                        else {
                          p_Var26[0x9c] = (_MACNV_SEEK_INFO)((bVar30 & 3) + 2);
                        }
                      }
                      if (((byte)p_Var26[0xb6] - 2 & 0xff) < 4) {
                        bVar30 = *(byte *)(lVar6 + (ulong)((byte)p_Var26[0xb6] - 2) + 0x34);
                        if ((bVar30 & 0x40) == 0) {
                          p_Var26[0xb6] = (_MACNV_SEEK_INFO)0x0;
                        }
                        else {
                          p_Var26[0xb6] = (_MACNV_SEEK_INFO)((bVar30 & 3) + 2);
                        }
                      }
                      p_Var26 = p_Var26 + 0xd0;
                    } while (p_Var26 != p_Var33 + 0x35b);
                  }
                  if (*(int *)(lVar6 + 4) == 6) {
                    MaDevDrv_SendDirectPacket(puVar36,0x40);
                  }
                  uVar25 = MaCmd_SetSeekInfo(uVar24,-1,*(byte *)(lVar6 + 0x38) & 1,
                                             *(byte *)(lVar6 + 0x39) & 1,p_Var33,
                                             *(uchar **)(lVar6 + 0x80));
                  iVar23 = MaDevDrv_SendDirectPacket(*(uchar **)(lVar6 + 0x80),uVar25);
                  if (iVar23 < 0) goto LAB_00193950;
                  iVar23 = (*(code *)(&PTR_MaDmyCnv_Conv_00565a08)[(long)*(int *)(lVar6 + 4) * 10])
                                     (puVar13,puVar31);
                  if (iVar23 < 0) break;
                  *(undefined4 *)(lVar6 + 0x4c) = 0;
                  iVar23 = *(int *)(lVar6 + 0xa4) + 1;
                  *(int *)(lVar6 + 0xa4) = iVar23;
                }
                else {
                  iVar23 = *(int *)(lVar6 + 0xa4);
                }
              }
            }
          }
        }
        lVar32 = lVar32 + 1;
        p_Var33 = p_Var33 + 0x398;
        puVar36 = puVar36 + 0x40;
      } while (lVar32 != 4);
LAB_00193950:
      uVar24 = *DAT_005a0050;
    }
    lVar32 = DAT_0059a420;
    if ((uVar24 >> 0xc & 1) != 0) {
      puVar31 = (undefined4 *)(DAT_0059a420 + 0x6c0);
      if (*(int *)(DAT_0059a420 + 0x6c0) == 4) {
        lVar32 = 0x25b0;
        bVar16 = false;
        uVar35 = 0x300;
        uVar24 = 9;
      }
      else {
        puVar31 = (undefined4 *)(DAT_0059a420 + 0xd80);
        if (*(int *)(DAT_0059a420 + 0xd80) != 4) goto joined_r0x0019455c;
        lVar32 = 0x4b60;
        uVar35 = 0x301;
        bVar16 = true;
        uVar24 = 0x12;
      }
      puVar11 = puVar31 + 0x28;
      iVar23 = puVar31[0x29];
      if (iVar23 != 0) {
        iVar23 = iVar23 + -1;
        puVar31[0x29] = iVar23;
      }
      puVar31[0x13] = puVar31[0x13] + puVar31[0x11];
      iVar14 = uVar24 * 0x10 + 0x5a0058;
      uVar25 = (uint)*(byte *)(DAT_0059a428 + lVar32 + 0x1d);
      while (iVar23 == 0) {
        iVar23 = FUN_0018b840(uVar35,*puVar11,0xffffffff,puVar31[0x2a],
                              *(undefined8 *)(puVar31 + 0x2c),puVar31[0x2e]);
        if (iVar23 < 0) {
          puVar31[0x29] = 0;
          *(undefined8 *)(puVar31 + 0x2c) = 0;
          *puVar11 = 0x1b;
          uVar24 = *DAT_005a0050;
          lVar32 = DAT_0059a420;
          goto joined_r0x0019455c;
        }
        iVar23 = (*(code *)(&PTR_MaDmyCnv_Conv_00565a08)[(long)(int)puVar31[1] * 10])
                           (iVar14,puVar11);
        if (iVar23 < 0) break;
        if (iVar23 == 0) {
          if ((puVar31[0xf] != 0) &&
             ((puVar31[0x10] == 0 ||
              (iVar23 = puVar31[0x10] + -1, puVar31[0x10] = iVar23, iVar23 == 0)))) {
            puVar31[0x10] = puVar31[0xf];
            *puVar31 = 3;
            puVar31[0x29] = 0;
            puVar31[0x28] = 0x1b;
            *(undefined8 *)(puVar31 + 0x2c) = 0;
            if (!bVar16) {
              if (*(byte *)(puVar31 + 0xd) != 0) {
                uVar1 = *(byte *)(puVar31 + 0xd) & 3;
                *DAT_005a0050 = *DAT_005a0050 & (0x100 << (ulong)uVar1 ^ 0xffffffffU);
                MaDsp_3DCtrl(1,0xa5,uVar1,(void *)0x0);
              }
              if (*(byte *)((long)puVar31 + 0x35) != 0) {
                uVar1 = *(byte *)((long)puVar31 + 0x35) & 3;
                *DAT_005a0050 = *DAT_005a0050 & (0x100 << (ulong)uVar1 ^ 0xffffffffU);
                MaDsp_3DCtrl(1,0xa5,uVar1,(void *)0x0);
              }
              if (*(byte *)((long)puVar31 + 0x36) != 0) {
                uVar1 = *(byte *)((long)puVar31 + 0x36) & 3;
                *DAT_005a0050 = *DAT_005a0050 & (0x100 << (ulong)uVar1 ^ 0xffffffffU);
                MaDsp_3DCtrl(1,0xa5,uVar1,(void *)0x0);
              }
              if (*(byte *)((long)puVar31 + 0x37) != 0) {
                uVar1 = *(byte *)((long)puVar31 + 0x37) & 3;
                *DAT_005a0050 = *DAT_005a0050 & (0x100 << (ulong)uVar1 ^ 0xffffffffU);
                MaDsp_3DCtrl(1,0xa5,uVar1,(void *)0x0);
              }
            }
            *DAT_005a0050 = *DAT_005a0050 & 0xffffefff;
            MaDevDrv_StopTimer();
            FUN_0018b7f4(*(undefined8 *)(puVar31 + 0x1c),uVar35,0x7f);
            break;
          }
          pcVar34 = *(code **)(puVar31 + 0x1c);
          if (pcVar34 != (code *)0x0) {
            machdep_LeaveCriticalSection();
            (*pcVar34)(0x300,0x7e);
            machdep_EnterCriticalSection();
          }
          iVar23 = (*(code *)(&PTR_MaDmyCnv_Seek_00565a00)[(long)(int)puVar31[1] * 10])(iVar14,0,0);
          if ((iVar23 < 0) ||
             (iVar23 = (*(code *)(&PTR_MaDmyCnv_Conv_00565a08)[(long)(int)puVar31[1] * 10])
                                 (iVar14,puVar11), iVar23 < 0)) break;
          pcVar34 = (code *)(&PTR_MaHvDrvJP_SetCommand_00565960)[(ulong)uVar25 * 5];
          (*pcVar34)(3,0,0);
          (*pcVar34)(6,0,0xc);
          puVar31[0x13] = 0;
          iVar23 = puVar31[0x29] + 1;
          puVar31[0x29] = iVar23;
        }
        else {
          iVar23 = puVar31[0x29];
        }
      }
      uVar25 = (*(code *)(&PTR_MaHvDrvJP_Generate_00565968)[(ulong)uVar25 * 5])
                         (*(long *)(puVar31 + 0x20) + 1);
      uVar24 = MaCmd_Hv((uint)*(byte *)((long)puVar31 + 0x2b),
                        (uint)(byte)(&DAT_0059a44e)[(ulong)uVar24 * 0x430],
                        *(uchar **)(puVar31 + 0x20),uVar25);
      if (0 < (int)uVar24) {
        MaDevDrv_SendDirectPacket(*(uchar **)(puVar31 + 0x20),uVar24);
      }
      uVar24 = *DAT_005a0050;
      lVar32 = DAT_0059a420;
    }
joined_r0x0019455c:
    DAT_0059a420 = lVar32;
    if ((uVar24 >> 0x14 & 1) != 0) {
      *(int *)(lVar32 + 0xf4c) = *(int *)(lVar32 + 0xf4c) + 0x14;
      uVar24 = MaDevDrv_ReadReg(0);
      if (((uVar24 & 0xff) >> 5 & 1) != 0) {
        MaDevDrv_WriteReg(0,(byte)uVar24 & 0xb9);
        pcVar34 = *(code **)(lVar32 + 0xf70);
        if (pcVar34 != (code *)0x0) {
          machdep_LeaveCriticalSection();
          (*pcVar34)(0x700,0x79);
          machdep_EnterCriticalSection();
        }
      }
    }
  }
  if (((uVar20 & 0xff) >> 6 & 1) != 0) {
    FUN_0018e2ec();
    uVar21 = uVar22;
  }
  while (uVar22 = DAT_005a1040, uVar24 = DAT_005a1044, puVar15 = DAT_005a1048,
        (uVar21 >> 4 & 1) != 0) {
    uVar21 = MaDevDrv_ReadReg(4);
    uVar22 = MaDevDrv_ReadReg(4);
    MaSmw_ReceiveMsg(0,0,uVar21 >> 4 & 7,(uVar21 & 0xf) << 8 | uVar22 & 0x7f);
    MaDevDrv_WriteReg(0xb,'\x10');
    uVar21 = MaDevDrv_ReadReg(0xb);
    uVar22 = DAT_005a1040;
    uVar24 = DAT_005a1044;
    puVar15 = DAT_005a1048;
    if ((uVar21 >> 4 & 1) == 0) break;
    uVar21 = MaDevDrv_ReadReg(4);
    uVar22 = MaDevDrv_ReadReg(4);
    MaSmw_ReceiveMsg(0,0,uVar21 >> 4 & 7,(uVar21 & 0xf) << 8 | uVar22 & 0x7f);
    MaDevDrv_WriteReg(0xb,'\x10');
    uVar21 = MaDevDrv_ReadReg(0xb);
  }
  DAT_005a1040 = uVar22;
  DAT_005a1044 = uVar24;
  DAT_005a1048 = puVar15;
  if (((uVar20 & 0xff) >> 5 & 1) == 0) goto LAB_00192f78;
  if (uVar24 - uVar22 < 0x400) {
    if (uVar22 < uVar24) {
      uVar21 = uVar22 + 1;
      uVar25 = ~uVar22 + uVar24 & 7;
      uVar17 = MaDevDrv_ReadReg(10);
      puVar15[uVar22] = uVar17;
      if (uVar21 < uVar24) {
        if (uVar25 != 0) {
          if (uVar25 != 1) {
            if (uVar25 != 2) {
              if (uVar25 != 3) {
                if (uVar25 != 4) {
                  if (uVar25 != 5) {
                    if (uVar25 != 6) {
                      uVar17 = MaDevDrv_ReadReg(10);
                      puVar15[uVar21] = uVar17;
                      uVar21 = uVar22 + 2;
                    }
                    uVar17 = MaDevDrv_ReadReg(10);
                    puVar15[uVar21] = uVar17;
                    uVar21 = uVar21 + 1;
                  }
                  uVar17 = MaDevDrv_ReadReg(10);
                  puVar15[uVar21] = uVar17;
                  uVar21 = uVar21 + 1;
                }
                uVar17 = MaDevDrv_ReadReg(10);
                puVar15[uVar21] = uVar17;
                uVar21 = uVar21 + 1;
              }
              uVar17 = MaDevDrv_ReadReg(10);
              puVar15[uVar21] = uVar17;
              uVar21 = uVar21 + 1;
            }
            uVar17 = MaDevDrv_ReadReg(10);
            puVar15[uVar21] = uVar17;
            uVar21 = uVar21 + 1;
          }
          uVar17 = MaDevDrv_ReadReg(10);
          puVar15[uVar21] = uVar17;
          uVar21 = uVar21 + 1;
          if (uVar24 <= uVar21) goto LAB_00193204;
        }
        do {
          uVar25 = uVar21 + 3;
          uVar1 = uVar21 + 2;
          uVar2 = uVar21 + 4;
          uVar17 = MaDevDrv_ReadReg(10);
          puVar15[uVar21] = uVar17;
          uVar3 = uVar21 + 5;
          uVar4 = uVar21 + 6;
          uVar17 = MaDevDrv_ReadReg(10);
          puVar15[uVar21 + 1] = uVar17;
          uVar5 = uVar21 + 7;
          uVar21 = uVar21 + 8;
          uVar17 = MaDevDrv_ReadReg(10);
          puVar15[uVar1] = uVar17;
          uVar17 = MaDevDrv_ReadReg(10);
          puVar15[uVar25] = uVar17;
          uVar17 = MaDevDrv_ReadReg(10);
          puVar15[uVar2] = uVar17;
          uVar17 = MaDevDrv_ReadReg(10);
          puVar15[uVar3] = uVar17;
          uVar17 = MaDevDrv_ReadReg(10);
          puVar15[uVar4] = uVar17;
          uVar17 = MaDevDrv_ReadReg(10);
          puVar15[uVar5] = uVar17;
        } while (uVar21 < uVar24);
      }
    }
LAB_00193204:
    iVar23 = -(uVar24 - uVar22);
    uVar22 = iVar23 + 0x400;
    lVar32 = 1;
    uVar21 = iVar23 + 0x3ffU & 7;
    uVar17 = MaDevDrv_ReadReg(10);
    *puVar15 = uVar17;
    if (1 < uVar22) {
      if (uVar21 != 0) {
        if (uVar21 != 1) {
          if (uVar21 != 2) {
            if (uVar21 != 3) {
              if (uVar21 != 4) {
                if (uVar21 != 5) {
                  if (uVar21 != 6) {
                    lVar32 = 2;
                    uVar17 = MaDevDrv_ReadReg(10);
                    puVar15[1] = uVar17;
                  }
                  uVar17 = MaDevDrv_ReadReg(10);
                  puVar15[lVar32] = uVar17;
                  lVar32 = lVar32 + 1;
                }
                uVar17 = MaDevDrv_ReadReg(10);
                puVar15[lVar32] = uVar17;
                lVar32 = lVar32 + 1;
              }
              uVar17 = MaDevDrv_ReadReg(10);
              puVar15[lVar32] = uVar17;
              lVar32 = lVar32 + 1;
            }
            uVar17 = MaDevDrv_ReadReg(10);
            puVar15[lVar32] = uVar17;
            lVar32 = lVar32 + 1;
          }
          uVar17 = MaDevDrv_ReadReg(10);
          puVar15[lVar32] = uVar17;
          lVar32 = lVar32 + 1;
        }
        uVar17 = MaDevDrv_ReadReg(10);
        puVar15[lVar32] = uVar17;
        lVar32 = lVar32 + 1;
        if (uVar22 <= (uint)lVar32) goto LAB_00193368;
      }
      do {
        lVar6 = lVar32 + 2;
        uVar17 = MaDevDrv_ReadReg(10);
        puVar15[lVar32] = uVar17;
        lVar7 = lVar32 + 3;
        lVar29 = lVar32 + 4;
        lVar8 = lVar32 + 5;
        uVar17 = MaDevDrv_ReadReg(10);
        puVar15[lVar32 + 1] = uVar17;
        lVar9 = lVar32 + 6;
        lVar10 = lVar32 + 7;
        lVar32 = lVar32 + 8;
        uVar17 = MaDevDrv_ReadReg(10);
        puVar15[lVar6] = uVar17;
        uVar17 = MaDevDrv_ReadReg(10);
        puVar15[lVar7] = uVar17;
        uVar17 = MaDevDrv_ReadReg(10);
        puVar15[lVar29] = uVar17;
        uVar17 = MaDevDrv_ReadReg(10);
        puVar15[lVar8] = uVar17;
        uVar17 = MaDevDrv_ReadReg(10);
        puVar15[lVar9] = uVar17;
        uVar17 = MaDevDrv_ReadReg(10);
        puVar15[lVar10] = uVar17;
      } while ((uint)lVar32 < uVar22);
    }
LAB_00193368:
    bVar27 = DAT_005a1050;
    DAT_005a1050 = 0;
    if ((DAT_005a1058 != '\0') && (DAT_005a1050 = DAT_005a1054 < uVar22, DAT_005a1060 != '\0')) {
      if (DAT_005a105c < uVar22) {
        DAT_005a1050 = 2;
      }
      if (DAT_005a1068 != '\0') {
        if (DAT_005a1064 < uVar22) {
          DAT_005a1050 = 3;
        }
        if ((DAT_005a1070 != '\0') && (DAT_005a106c < uVar22)) {
          DAT_005a1050 = 4;
        }
      }
    }
    DAT_005a1040 = uVar22;
    if (bVar27 < 4) {
      if ((DAT_005a1050 == 0) && ((&DAT_005a1058)[(ulong)bVar27 * 8] != '\x01')) goto LAB_00192f78;
    }
    else if (DAT_005a1050 == 0) goto LAB_00192f78;
  }
  else {
    uVar21 = uVar22 + 0x400;
    if (uVar22 < uVar21) {
      uVar24 = uVar22 + 1;
      uVar17 = MaDevDrv_ReadReg(10);
      puVar15[uVar22] = uVar17;
      do {
        uVar22 = uVar24 + 3;
        uVar25 = uVar24 + 5;
        uVar17 = MaDevDrv_ReadReg(10);
        uVar1 = uVar24 + 4;
        puVar15[uVar24] = uVar17;
        uVar2 = uVar24 + 6;
        uVar3 = uVar24 + 7;
        uVar17 = MaDevDrv_ReadReg(10);
        puVar15[uVar24 + 1] = uVar17;
        uVar4 = uVar24 + 8;
        uVar5 = uVar24 + 9;
        uVar17 = MaDevDrv_ReadReg(10);
        puVar15[uVar24 + 2] = uVar17;
        uVar12 = uVar24 + 10;
        uVar24 = uVar24 + 0xb;
        uVar17 = MaDevDrv_ReadReg(10);
        puVar15[uVar22] = uVar17;
        uVar17 = MaDevDrv_ReadReg(10);
        puVar15[uVar1] = uVar17;
        uVar17 = MaDevDrv_ReadReg(10);
        puVar15[uVar25] = uVar17;
        uVar17 = MaDevDrv_ReadReg(10);
        puVar15[uVar2] = uVar17;
        uVar17 = MaDevDrv_ReadReg(10);
        puVar15[uVar3] = uVar17;
        uVar17 = MaDevDrv_ReadReg(10);
        puVar15[uVar4] = uVar17;
        uVar17 = MaDevDrv_ReadReg(10);
        puVar15[uVar5] = uVar17;
        uVar17 = MaDevDrv_ReadReg(10);
        puVar15[uVar12] = uVar17;
        uVar22 = uVar21;
      } while (uVar24 != uVar21);
    }
    DAT_005a1040 = uVar22;
    if ((3 < DAT_005a1050) || (*(char *)(&DAT_005a1048 + (ulong)DAT_005a1050 + 2) == '\0'))
    goto LAB_00192f78;
    bVar16 = (&DAT_005a1044)[((ulong)DAT_005a1050 + 2) * 2] <= uVar22;
    bVar27 = DAT_005a1050;
    if (bVar16) {
      bVar27 = DAT_005a1050 + 1;
    }
    uVar21 = DAT_005a1050 + 1;
    if ((uVar21 != 4) && ((&DAT_005a1058)[(ulong)uVar21 * 8] != '\0')) {
      if ((&DAT_005a1054)[(ulong)uVar21 * 2] <= uVar22) {
        bVar27 = DAT_005a1050 + 2;
      }
      bVar16 = (&DAT_005a1054)[(ulong)uVar21 * 2] <= uVar22 || bVar16;
      uVar21 = DAT_005a1050 + 2;
      if ((uVar21 != 4) && ((&DAT_005a1058)[(ulong)uVar21 * 8] != '\0')) {
        if ((&DAT_005a1054)[(ulong)uVar21 * 2] <= uVar22) {
          bVar27 = DAT_005a1050 + 3;
        }
        bVar16 = (&DAT_005a1054)[(ulong)uVar21 * 2] <= uVar22 || bVar16;
        if ((DAT_005a1050 == 0) && (DAT_005a1070 != '\0')) {
          if (DAT_005a106c <= uVar22) {
            bVar27 = 4;
          }
          bVar16 = DAT_005a106c <= uVar22 || bVar16;
        }
      }
    }
    DAT_005a1050 = bVar27;
    if (!bVar16) goto LAB_00192f78;
  }
  pcVar34 = *(code **)(DAT_0059a420 + 0xf70);
  if (pcVar34 != (code *)0x0) {
    machdep_LeaveCriticalSection();
    (*pcVar34)(0x700,0x7d);
    machdep_EnterCriticalSection();
  }
LAB_00192f78:
  MaDevDrv_WriteReg(0xb,(byte)uVar19 & 0x9f);
  MaDevDrv_WriteReg(0xc,(byte)uVar20 & 0x7f);
  MaDevDrv_EnableIrq();
  machdep_LeaveCriticalSection();
  if (local_8 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

