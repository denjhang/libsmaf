/* MaSndDrv_IrqProc @ 0007c5ec 5356B */


/* WARNING: Type propagation algorithm not settling */
/* YAMAHA::MaSndDrv_IrqProc() */

void YAMAHA::MaSndDrv_IrqProc(void)

{
  bool bVar1;
  bool bVar2;
  char *pcVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  byte bVar8;
  byte bVar9;
  _MACNV_SEEK_INFO _Var10;
  uint uVar11;
  int iVar12;
  _MACNV_SEEK_INFO *p_Var13;
  undefined1 *puVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  code *pcVar19;
  undefined1 *puVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined4 uVar29;
  undefined4 *puVar30;
  _MACNV_SEEK_INFO *local_68;
  void *local_2c [2];
  
  machdep_EnterCriticalSection();
  bVar5 = MaDevDrv_ReadReg(0xb);
  bVar6 = MaDevDrv_ReadReg(0xc);
  MaDevDrv_WriteReg(0xb,bVar5 & 0x60);
  MaDevDrv_WriteReg(0xc,bVar6 & 0x80);
  if ((bVar5 & 1) != 0) {
    MaSrm_DataProc(0);
  }
  if ((bVar5 & 2) != 0) {
    MaSrm_DataProc(1);
  }
  if ((bVar5 & 4) != 0) {
    MaSrm_DataProc(2);
  }
  if ((bVar5 & 8) != 0) {
    MaSrm_DataProc(3);
  }
  iVar18 = DAT_0007d328;
  if ((bVar5 & 0x20) != 0) {
    uVar11 = **(uint **)(DAT_0007d328 + 0x7c650);
    if ((int)(uVar11 << 0x1b) < 0) {
      MaSrm_CtrlProc(0);
      uVar11 = **(uint **)(iVar18 + 0x7c650);
    }
    iVar18 = DAT_0007d374;
    if ((int)(uVar11 << 0x1a) < 0) {
      MaSrm_CtrlProc(1);
      uVar11 = **(uint **)(DAT_0007d370 + 0x7cd26);
      iVar18 = DAT_0007d374;
    }
    DAT_0007d374 = iVar18;
    iVar21 = DAT_0007d378;
    if ((int)(uVar11 << 0x19) < 0) {
      MaSrm_CtrlProc(2);
      uVar11 = **(uint **)(iVar18 + 0x7cd3c);
      iVar21 = DAT_0007d378;
    }
    DAT_0007d378 = iVar21;
    if ((int)(uVar11 << 0x18) < 0) {
      MaSrm_CtrlProc(3);
      uVar11 = **(uint **)(iVar21 + 0x7cd52);
    }
    if ((int)(uVar11 << 0xf) < 0) {
      iVar21 = MaSrm_CtrlProc2(0);
      iVar18 = DAT_0007d3dc;
      if (iVar21 == 0) {
        uVar11 = **(uint **)(DAT_0007d37c + 0x7cd6e);
      }
      else {
        **(uint **)(DAT_0007d3dc + 0x7d0a4) = **(uint **)(DAT_0007d3dc + 0x7d0a4) & 0xfffeffff;
        MaDevDrv_StopTimer();
        uVar11 = **(uint **)(iVar18 + 0x7d0a4);
      }
    }
    if ((int)(uVar11 << 0xe) < 0) {
      iVar21 = MaSrm_CtrlProc2(1);
      iVar18 = DAT_0007d3d8;
      if (iVar21 == 0) {
        uVar11 = **(uint **)(DAT_0007d380 + 0x7cd8c);
      }
      else {
        **(uint **)(DAT_0007d3d8 + 0x7d088) = **(uint **)(DAT_0007d3d8 + 0x7d088) & 0xfffdffff;
        MaDevDrv_StopTimer();
        uVar11 = **(uint **)(iVar18 + 0x7d088);
      }
    }
    if ((int)(uVar11 << 0xd) < 0) {
      iVar21 = MaSrm_CtrlProc2(2);
      iVar18 = DAT_0007d3d4;
      if (iVar21 == 0) {
        uVar11 = **(uint **)(DAT_0007d384 + 0x7cdaa);
      }
      else {
        **(uint **)(DAT_0007d3d4 + 0x7d06a) = **(uint **)(DAT_0007d3d4 + 0x7d06a) & 0xfffbffff;
        MaDevDrv_StopTimer();
        uVar11 = **(uint **)(iVar18 + 0x7d06a);
      }
    }
    if ((int)(uVar11 << 0xc) < 0) {
      iVar21 = MaSrm_CtrlProc2(3);
      iVar18 = DAT_0007d3d0;
      if (iVar21 == 0) {
        uVar11 = **(uint **)(DAT_0007d388 + 0x7cdc8);
      }
      else {
        **(uint **)(DAT_0007d3d0 + 0x7d04a) = **(uint **)(DAT_0007d3d0 + 0x7d04a) & 0xfff7ffff;
        MaDevDrv_StopTimer();
        uVar11 = **(uint **)(iVar18 + 0x7d04a);
      }
    }
    iVar18 = DAT_0007d3a0;
    iVar21 = DAT_0007d3ac;
    if ((uVar11 & 0xf00) != 0) {
      iVar18 = MaDsp_3DPosProc();
      if ((*(char *)(DAT_0007d38c + 0x7d980) == '\x01') && (iVar18 << 0x1f < 0)) {
        uVar11 = *(uint *)(DAT_0007d38c + 0x7d97c);
        pcVar19 = *(code **)(*(int *)(DAT_0007d3fc + 0x7d1b6) +
                             (uint)*(byte *)(DAT_0007d3f8 + 0x7d1b0 +
                                            ((uVar11 & 0xffff) >> 8) * 4 + (uVar11 & 0xff)) * 0x98 +
                            100);
        if (pcVar19 != (code *)0x0) {
          machdep_LeaveCriticalSection();
          (*pcVar19)(uVar11,0x7c);
          machdep_EnterCriticalSection();
        }
      }
      if ((*(char *)(DAT_0007d390 + 0x7d99a) == '\x01') && (iVar18 << 0x1e < 0)) {
        uVar11 = *(uint *)(DAT_0007d390 + 0x7d996);
        pcVar19 = *(code **)(*(int *)(DAT_0007d3f4 + 0x7d168) +
                             (uint)*(byte *)(DAT_0007d3f0 + 0x7d164 +
                                            ((uVar11 & 0xffff) >> 8) * 4 + (uVar11 & 0xff)) * 0x98 +
                            100);
        if (pcVar19 != (code *)0x0) {
          machdep_LeaveCriticalSection();
          (*pcVar19)(uVar11,0x7c);
          machdep_EnterCriticalSection();
        }
      }
      if ((*(char *)(DAT_0007d394 + 0x7d9b2) == '\x01') && (iVar18 << 0x1d < 0)) {
        uVar11 = *(uint *)(DAT_0007d394 + 0x7d9ae);
        pcVar19 = *(code **)(*(int *)(DAT_0007d3ec + 0x7d11c) +
                             (uint)*(byte *)(DAT_0007d3e8 + 0x7d118 +
                                            ((uVar11 & 0xffff) >> 8) * 4 + (uVar11 & 0xff)) * 0x98 +
                            100);
        if (pcVar19 != (code *)0x0) {
          machdep_LeaveCriticalSection();
          (*pcVar19)(uVar11,0x7c);
          machdep_EnterCriticalSection();
        }
      }
      if ((*(char *)(DAT_0007d398 + 0x7d9ca) == '\x01') && (iVar18 << 0x1c < 0)) {
        uVar11 = *(uint *)(DAT_0007d398 + 0x7d9c6);
        pcVar19 = *(code **)(*(int *)(DAT_0007d3e4 + 0x7d0d2) +
                             (uint)*(byte *)(DAT_0007d3e0 + 0x7d0cc +
                                            ((uVar11 & 0xffff) >> 8) * 4 + (uVar11 & 0xff)) * 0x98 +
                            100);
        if (pcVar19 != (code *)0x0) {
          machdep_LeaveCriticalSection();
          (*pcVar19)(uVar11,0x7c);
          machdep_EnterCriticalSection();
        }
      }
      uVar11 = **(uint **)(DAT_0007d39c + 0x7ce22);
      iVar18 = DAT_0007d3a0;
      iVar21 = DAT_0007d3ac;
    }
    DAT_0007d3a0 = iVar18;
    DAT_0007d3ac = iVar21;
    if ((uVar11 & 0xf) != 0) {
      iVar25 = 0;
      uVar11 = 0;
      local_68 = (_MACNV_SEEK_INFO *)(DAT_0007d3a4 + 0x7dc7c);
      iVar23 = DAT_0007d3a8 + 0x7d122;
      local_2c[0] = (void *)0x0;
      do {
        uVar17 = (uint)*(byte *)(iVar21 + uVar11 + 0x7ce48);
        iVar26 = *(int *)(DAT_0007d3b0 + 0x7ce72);
        iVar27 = iVar26 + uVar17 * 0x98;
        if (*(int *)(iVar27 + 4) == 2) {
          if (*(int *)(iVar26 + uVar17 * 0x98) == 4) {
            iVar28 = 2;
            if (*(char *)(iVar27 + 0xc) == '\x14') {
              pcVar19 = *(code **)(iVar27 + 100);
              if (pcVar19 != (code *)0x0) {
                machdep_LeaveCriticalSection();
                (*pcVar19)(uVar11 | 0x100,0x7a);
                machdep_EnterCriticalSection();
                goto LAB_0007ce8a;
              }
            }
            goto LAB_0007cf0a;
          }
        }
        else {
LAB_0007ce8a:
          if (*(int *)(iVar26 + uVar17 * 0x98) == 4) {
            iVar28 = *(int *)(iVar27 + 4);
LAB_0007cf0a:
            if (*(int *)(DAT_0007d3bc + iVar28 * 0x28 + 0x7cf72) != 0) {
              iVar28 = *(int *)(iVar27 + 0x88);
              if (iVar28 != 0) {
                iVar28 = iVar28 + -1;
                *(int *)(iVar27 + 0x88) = iVar28;
              }
              bVar9 = *(byte *)(iVar27 + 0x28);
              uVar15 = *(int *)(iVar27 + 0x4c) + *(int *)(iVar27 + 0x44);
              *(uint *)(iVar27 + 0x4c) = uVar15;
              if (((int)((uint)bVar9 << 0x1f) < 0) && (*(uint *)(iVar27 + 0x54) <= uVar15)) {
                pcVar19 = *(code **)(iVar27 + 100);
                if (pcVar19 != (code *)0x0) {
                  machdep_LeaveCriticalSection();
                  (*pcVar19)(uVar11 | 0x100,0x7b);
                  machdep_EnterCriticalSection();
                  bVar9 = *(byte *)(iVar27 + 0x28);
                  iVar28 = *(int *)(iVar27 + 0x88);
                }
                *(byte *)(iVar27 + 0x28) = bVar9 & 0xfe;
              }
              iVar16 = DAT_0007d3c0 + 0x7cf68 + uVar17 * 8;
              iVar12 = DAT_0007d3c4 + 0x7ddb4;
              while( true ) {
                iVar22 = DAT_0007d3c8;
                uVar15 = uVar11 | 0x100;
                while( true ) {
                  if (iVar28 != 0) goto LAB_0007ce92;
                  iVar28 = FUN_00074728(uVar15,*(undefined4 *)(iVar27 + 0x84),0xffffffff,
                                        *(undefined4 *)(iVar27 + 0x8c),
                                        *(undefined4 *)(iVar27 + 0x90),
                                        *(undefined4 *)(iVar27 + 0x94));
                  if (iVar28 < 0) {
                    *(undefined4 *)(iVar27 + 0x88) = 0;
                    *(undefined4 *)(iVar27 + 0x90) = 0;
                    *(undefined4 *)(iVar27 + 0x84) = 0x1b;
                    goto LAB_0007ceac;
                  }
                  iVar28 = (**(code **)(iVar22 + *(int *)(iVar27 + 4) * 0x28 + 0x7cff0))
                                     (iVar16,iVar27 + 0x84);
                  if (iVar28 < 0) goto LAB_0007ce92;
                  if (iVar28 == 0) break;
                  iVar28 = *(int *)(iVar27 + 0x88);
                }
                iVar28 = *(int *)(iVar27 + 0x3c);
                if ((iVar28 != 0) &&
                   ((*(int *)(iVar27 + 0x40) == 0 ||
                    (iVar22 = *(int *)(iVar27 + 0x40) + -1, *(int *)(iVar27 + 0x40) = iVar22,
                    iVar22 == 0)))) break;
                pcVar19 = *(code **)(iVar27 + 100);
                if (pcVar19 != (code *)0x0) {
                  machdep_LeaveCriticalSection();
                  (*pcVar19)(uVar15,0x7e);
                  machdep_EnterCriticalSection();
                }
                MaCmd_SeekInfoInit(local_68);
                iVar28 = (**(code **)(DAT_0007dbc4 + *(int *)(iVar27 + 4) * 0x28 + 0x7d4ae))
                                   (iVar16,0,local_68);
                if (iVar28 < 0) goto LAB_0007ce92;
                bVar9 = *(byte *)(iVar27 + 0x2c);
                bVar8 = bVar9 & 1;
                if ((bVar9 & 1) == 0) {
                  iVar28 = iVar12 + iVar25;
                  *(byte *)(iVar28 + 8) = bVar8;
                  *(byte *)(iVar28 + 0x22) = bVar8;
                  *(byte *)(iVar28 + 0x3c) = bVar8;
                  *(byte *)(iVar28 + 0x56) = bVar8;
                  *(byte *)(iVar28 + 0x70) = bVar8;
                  *(byte *)(iVar28 + 0x8a) = bVar8;
                  *(byte *)(iVar28 + 0xa4) = bVar8;
                  *(byte *)(iVar28 + 0xbe) = bVar8;
                  *(byte *)(iVar28 + 0xd8) = bVar8;
                  *(byte *)(iVar28 + 0xf2) = bVar8;
                  *(byte *)(iVar28 + 0x10c) = bVar8;
                  *(byte *)(iVar28 + 0x126) = bVar8;
                  *(byte *)(iVar28 + 0x140) = bVar8;
                  *(byte *)(iVar28 + 0x15a) = bVar8;
                  *(byte *)(iVar28 + 0x174) = bVar8;
                  *(byte *)(iVar28 + 0x18e) = bVar8;
                  *(byte *)(iVar28 + 0x1a8) = bVar8;
                  *(byte *)(iVar28 + 0x1c2) = bVar8;
                  *(byte *)(iVar28 + 0x1dc) = bVar8;
                  *(byte *)(iVar28 + 0x1f6) = bVar8;
                  *(byte *)(iVar28 + 0x210) = bVar8;
                  *(byte *)(iVar28 + 0x22a) = bVar8;
                  *(byte *)(iVar28 + 0x244) = bVar8;
                  *(byte *)(iVar28 + 0x25e) = bVar8;
                  *(byte *)(iVar28 + 0x278) = bVar8;
                  *(byte *)(iVar28 + 0x292) = bVar8;
                  *(byte *)(iVar28 + 0x2ac) = bVar8;
                  *(byte *)(iVar28 + 0x2c6) = bVar8;
                  *(byte *)(iVar28 + 0x2e0) = bVar8;
                  *(byte *)(iVar28 + 0x2fa) = bVar8;
                  *(byte *)(iVar28 + 0x314) = bVar8;
                  *(byte *)(iVar28 + 0x32e) = bVar8;
                  bVar9 = *(byte *)(iVar27 + 0x2c);
                }
                bVar8 = bVar9 & 2;
                if ((bVar9 & 2) == 0) {
                  iVar22 = iVar18 + 0x7ce36 + iVar25;
                  iVar28 = iVar18 + 0x7dc72 + iVar25;
                  *(byte *)(iVar22 + 0xe45) = bVar8;
                  *(byte *)(iVar22 + 0xe5f) = bVar8;
                  *(byte *)(iVar22 + 0xe79) = bVar8;
                  *(byte *)(iVar22 + 0xe93) = bVar8;
                  *(byte *)(iVar22 + 0xead) = bVar8;
                  *(byte *)(iVar22 + 0xec7) = bVar8;
                  *(byte *)(iVar22 + 0xee1) = bVar8;
                  *(byte *)(iVar22 + 0xefb) = bVar8;
                  *(byte *)(iVar22 + 0xf15) = bVar8;
                  *(byte *)(iVar22 + 0xf2f) = bVar8;
                  *(byte *)(iVar22 + 0xf49) = bVar8;
                  *(byte *)(iVar22 + 0xf63) = bVar8;
                  *(byte *)(iVar22 + 0xf7d) = bVar8;
                  *(byte *)(iVar22 + 0xf97) = bVar8;
                  *(byte *)(iVar22 + 0xfb1) = bVar8;
                  *(byte *)(iVar22 + 0xfcb) = bVar8;
                  *(byte *)(iVar22 + 0xfe5) = bVar8;
                  *(byte *)(iVar22 + 0xfff) = bVar8;
                  *(byte *)(iVar18 + iVar25 + 0x7de4f) = bVar8;
                  *(byte *)(iVar28 + 0x1f7) = bVar8;
                  *(byte *)(iVar28 + 0x211) = bVar8;
                  *(byte *)(iVar28 + 0x22b) = bVar8;
                  *(byte *)(iVar18 + 0x7ce36 + iVar25 + 0x1081) = bVar8;
                  *(byte *)(iVar28 + 0x25f) = bVar8;
                  *(byte *)(iVar28 + 0x279) = bVar8;
                  *(byte *)(iVar28 + 0x293) = bVar8;
                  *(byte *)(iVar28 + 0x2ad) = bVar8;
                  *(byte *)(iVar28 + 0x2c7) = bVar8;
                  *(byte *)(iVar28 + 0x2e1) = bVar8;
                  *(byte *)(iVar28 + 0x2fb) = bVar8;
                  *(byte *)(iVar28 + 0x315) = bVar8;
                  *(byte *)(iVar28 + 0x32f) = bVar8;
                }
                iVar28 = FUN_00076038(local_68,iVar27,1,1,uVar11);
                if (iVar28 < 0) goto LAB_0007ceac;
                if (*(char *)(iVar27 + 0x38) == '\x01') {
                  iVar22 = DAT_0007dbf4 + 0x7e8cc + iVar25;
                  iVar28 = *(int *)(DAT_0007dbf0 + 0x7da90) + uVar17 * 0x228;
                  cVar4 = *(char *)(iVar22 + 6);
                  if (*(char *)(iVar28 + 0x20) != cVar4) {
                    *(char *)(iVar28 + 0x20) = cVar4;
                    if (cVar4 == -1) {
                      local_2c[0] = (void *)(DAT_0007dc04 + 0x7dd42);
LAB_0007dabc:
                      uVar15 = 3;
                    }
                    else {
                      if (cVar4 == -2) {
                        local_2c[0] = (void *)(DAT_0007dbf8 + 0x7dcc4);
                        goto LAB_0007dabc;
                      }
                      iVar28 = (**(code **)((int)&DAT_0007dbc8 +
                                           DAT_0007dc08 + *(int *)(iVar27 + 4) * 0x28))
                                         (iVar16,0x101,*(undefined1 *)(iVar22 + 6),local_2c);
                      if (iVar28 < 0) goto LAB_0007d5ca;
                      uVar15 = 0x7fffffff;
                    }
                    if (local_2c[0] != (void *)0x0) {
                      MaDsp_SfxCtrl(0,0x2011e,uVar15,local_2c[0]);
                    }
                  }
                }
LAB_0007d5ca:
                if (*(char *)(iVar27 + 0x39) == '\x01') {
                  iVar22 = DAT_0007dbe8 + 0x7e870 + iVar25;
                  iVar28 = *(int *)(DAT_0007dbe4 + 0x7da34) + uVar17 * 0x228;
                  cVar4 = *(char *)(iVar22 + 7);
                  if (*(char *)(iVar28 + 0x21) != cVar4) {
                    *(char *)(iVar28 + 0x21) = cVar4;
                    if (cVar4 == -1) {
                      local_2c[0] = (void *)(DAT_0007dc00 + 0x7dd30);
LAB_0007da60:
                      uVar15 = 3;
                    }
                    else {
                      if (cVar4 == -2) {
                        local_2c[0] = (void *)(DAT_0007dbec + 0x7dc88);
                        goto LAB_0007da60;
                      }
                      iVar28 = (**(code **)(DAT_0007dbfc + *(int *)(iVar27 + 4) * 0x28 + 0x7db74))
                                         (iVar16,0x101,*(undefined1 *)(iVar22 + 7),local_2c);
                      if (iVar28 < 0) goto LAB_0007d5d4;
                      uVar15 = 0x7fffffff;
                    }
                    if (local_2c[0] != (void *)0x0) {
                      MaDsp_SfxCtrl(0,0x2013e,uVar15,local_2c[0]);
                    }
                  }
                }
LAB_0007d5d4:
                if ((int)((uint)*(byte *)(iVar27 + 0x34) << 0x18) < 0) {
                  if (*(char *)(iVar27 + 0x2f) == '\x02') {
                    _Var10 = (_MACNV_SEEK_INFO)0x0;
                  }
                  else {
                    _Var10 = (_MACNV_SEEK_INFO)((*(byte *)(iVar27 + 0x34) & 3) + 2);
                  }
                  local_68[0x1b] = _Var10;
                  local_68[0x35] = _Var10;
                  local_68[0x4f] = _Var10;
                  local_68[0x69] = _Var10;
                  local_68[0x83] = _Var10;
                  local_68[0x9d] = _Var10;
                  local_68[0xb7] = _Var10;
                  local_68[0xd1] = _Var10;
                  local_68[0xeb] = _Var10;
                  local_68[0x105] = _Var10;
                  local_68[0x11f] = _Var10;
                  local_68[0x139] = _Var10;
                  local_68[0x153] = _Var10;
                  local_68[0x16d] = _Var10;
                  local_68[0x187] = _Var10;
                  local_68[0x1a1] = _Var10;
                  local_68[0x1bb] = _Var10;
                  local_68[0x1d5] = _Var10;
                  local_68[0x1ef] = _Var10;
                  local_68[0x209] = _Var10;
                  local_68[0x223] = _Var10;
                  local_68[0x23d] = _Var10;
                  local_68[599] = _Var10;
                  local_68[0x271] = _Var10;
                  local_68[0x28b] = _Var10;
                  local_68[0x2a5] = _Var10;
                  local_68[0x2bf] = _Var10;
                  local_68[0x2d9] = _Var10;
                  local_68[0x2f3] = _Var10;
                  local_68[0x30d] = _Var10;
                  local_68[0x327] = _Var10;
                  local_68[0x341] = _Var10;
                }
                else {
                  iVar28 = 0;
                  p_Var13 = local_68;
                  do {
                    if ((byte)p_Var13[0x1b] - 2 < 4) {
                      bVar9 = *(byte *)((uint)(byte)p_Var13[0x1b] + iVar27 + 0x32);
                      if ((bVar9 & 0x40) == 0) {
                        p_Var13[0x1b] = (_MACNV_SEEK_INFO)(bVar9 & 0x40);
                      }
                      else {
                        p_Var13[0x1b] = (_MACNV_SEEK_INFO)((bVar9 & 3) + 2);
                      }
                    }
                    if ((byte)p_Var13[0x35] - 2 < 4) {
                      bVar9 = *(byte *)((uint)(byte)p_Var13[0x35] + iVar27 + 0x32);
                      if ((bVar9 & 0x40) == 0) {
                        p_Var13[0x35] = (_MACNV_SEEK_INFO)(bVar9 & 0x40);
                      }
                      else {
                        p_Var13[0x35] = (_MACNV_SEEK_INFO)((bVar9 & 3) + 2);
                      }
                    }
                    if ((byte)p_Var13[0x4f] - 2 < 4) {
                      bVar9 = *(byte *)((uint)(byte)p_Var13[0x4f] + iVar27 + 0x32);
                      if ((bVar9 & 0x40) == 0) {
                        p_Var13[0x4f] = (_MACNV_SEEK_INFO)(bVar9 & 0x40);
                      }
                      else {
                        p_Var13[0x4f] = (_MACNV_SEEK_INFO)((bVar9 & 3) + 2);
                      }
                    }
                    if ((byte)p_Var13[0x69] - 2 < 4) {
                      bVar9 = *(byte *)((uint)(byte)p_Var13[0x69] + iVar27 + 0x32);
                      if ((bVar9 & 0x40) == 0) {
                        p_Var13[0x69] = (_MACNV_SEEK_INFO)(bVar9 & 0x40);
                      }
                      else {
                        p_Var13[0x69] = (_MACNV_SEEK_INFO)((bVar9 & 3) + 2);
                      }
                    }
                    if ((byte)p_Var13[0x83] - 2 < 4) {
                      bVar9 = *(byte *)((uint)(byte)p_Var13[0x83] + iVar27 + 0x32);
                      if ((bVar9 & 0x40) == 0) {
                        p_Var13[0x83] = (_MACNV_SEEK_INFO)(bVar9 & 0x40);
                      }
                      else {
                        p_Var13[0x83] = (_MACNV_SEEK_INFO)((bVar9 & 3) + 2);
                      }
                    }
                    if ((byte)p_Var13[0x9d] - 2 < 4) {
                      bVar9 = *(byte *)((uint)(byte)p_Var13[0x9d] + iVar27 + 0x32);
                      if ((bVar9 & 0x40) == 0) {
                        p_Var13[0x9d] = (_MACNV_SEEK_INFO)(bVar9 & 0x40);
                      }
                      else {
                        p_Var13[0x9d] = (_MACNV_SEEK_INFO)((bVar9 & 3) + 2);
                      }
                    }
                    if ((byte)p_Var13[0xb7] - 2 < 4) {
                      bVar9 = *(byte *)((uint)(byte)p_Var13[0xb7] + iVar27 + 0x32);
                      if ((bVar9 & 0x40) == 0) {
                        p_Var13[0xb7] = (_MACNV_SEEK_INFO)(bVar9 & 0x40);
                      }
                      else {
                        p_Var13[0xb7] = (_MACNV_SEEK_INFO)((bVar9 & 3) + 2);
                      }
                    }
                    if ((byte)p_Var13[0xd1] - 2 < 4) {
                      bVar9 = *(byte *)((uint)(byte)p_Var13[0xd1] + iVar27 + 0x32);
                      if ((bVar9 & 0x40) == 0) {
                        p_Var13[0xd1] = (_MACNV_SEEK_INFO)(bVar9 & 0x40);
                      }
                      else {
                        p_Var13[0xd1] = (_MACNV_SEEK_INFO)((bVar9 & 3) + 2);
                      }
                    }
                    iVar28 = iVar28 + 8;
                    p_Var13 = p_Var13 + 0xd0;
                  } while (iVar28 != 0x20);
                }
                if (*(int *)(iVar27 + 4) == 6) {
                  MaDevDrv_SendDirectPacket((uchar *)(iVar23 + uVar11 * 0x40),0x40);
                }
                uVar15 = MaCmd_SetSeekInfo(uVar11,-1,*(byte *)(iVar27 + 0x38) & 1,
                                           *(byte *)(iVar27 + 0x39) & 1,local_68,
                                           *(uchar **)(iVar27 + 0x6c));
                iVar28 = MaDevDrv_SendDirectPacket(*(uchar **)(iVar27 + 0x6c),uVar15);
                if (iVar28 < 0) goto LAB_0007ceac;
                iVar28 = (**(code **)(DAT_0007dbc8 + *(int *)(iVar27 + 4) * 0x28 + 0x7d85e))
                                   (iVar16,iVar27 + 0x84);
                if (iVar28 < 0) goto LAB_0007ce92;
                *(undefined4 *)(iVar27 + 0x4c) = 0;
                iVar28 = *(int *)(iVar27 + 0x88) + 1;
                *(int *)(iVar27 + 0x88) = iVar28;
              }
              *(undefined4 *)(iVar26 + uVar17 * 0x98) = 3;
              *(int *)(iVar27 + 0x40) = iVar28;
              *(undefined4 *)(iVar27 + 0x88) = 0;
              *(undefined4 *)(iVar27 + 0x90) = 0;
              *(undefined4 *)(iVar27 + 0x84) = 0x1b;
              if (*(byte *)(iVar27 + 0x34) != 0) {
                uVar17 = *(byte *)(iVar27 + 0x34) & 3;
                **(uint **)(DAT_0007dc0c + 0x7dbac) =
                     **(uint **)(DAT_0007dc0c + 0x7dbac) & ~(0x100 << uVar17);
                MaDsp_3DCtrl(1,0xa5,uVar17,(void *)0x0);
              }
              if (*(byte *)(iVar27 + 0x35) != 0) {
                uVar17 = *(byte *)(iVar27 + 0x35) & 3;
                **(uint **)(DAT_0007d400 + 0x7d246) =
                     **(uint **)(DAT_0007d400 + 0x7d246) & ~(0x100 << uVar17);
                MaDsp_3DCtrl(1,0xa5,uVar17,(void *)0x0);
              }
              if (*(byte *)(iVar27 + 0x36) != 0) {
                uVar17 = *(byte *)(iVar27 + 0x36) & 3;
                **(uint **)(DAT_0007d404 + 0x7d27a) =
                     **(uint **)(DAT_0007d404 + 0x7d27a) & ~(0x100 << uVar17);
                MaDsp_3DCtrl(1,0xa5,uVar17,(void *)0x0);
              }
              if (*(byte *)(iVar27 + 0x37) != 0) {
                uVar17 = *(byte *)(iVar27 + 0x37) & 3;
                **(uint **)(DAT_0007d408 + 0x7d2ae) =
                     **(uint **)(DAT_0007d408 + 0x7d2ae) & ~(0x100 << uVar17);
                MaDsp_3DCtrl(1,0xa5,uVar17,(void *)0x0);
              }
              uVar24 = 1 << (uVar11 & 0xff);
              uVar17 = **(uint **)(DAT_0007d40c + 0x7d2d8);
              if ((uVar24 & uVar17) != 0) {
                **(uint **)(DAT_0007d40c + 0x7d2d8) = uVar17 & ~uVar24;
                MaDevDrv_StopTimer();
              }
              FUN_00074708(*(undefined4 *)(iVar27 + 100),uVar15,0x7f);
            }
          }
        }
LAB_0007ce92:
        uVar11 = uVar11 + 1;
        iVar25 = iVar25 + 0x398;
        local_68 = local_68 + 0x398;
      } while (uVar11 != 4);
LAB_0007ceac:
      uVar11 = **(uint **)(DAT_0007d3b4 + 0x7cebc);
    }
    if ((int)(uVar11 << 0x13) < 0) {
      iVar18 = *(int *)(DAT_0007d350 + 0x7cb96);
      if (*(int *)(iVar18 + 0x558) == 4) {
        puVar30 = (undefined4 *)(iVar18 + 0x558);
        iVar18 = 0x1368;
        bVar1 = false;
        uVar29 = 0x300;
        local_68 = (_MACNV_SEEK_INFO *)0x9;
      }
      else {
        if (*(int *)(iVar18 + 0xab0) != 4) goto LAB_0007c68e;
        puVar30 = (undefined4 *)(iVar18 + 0xab0);
        iVar18 = 0x26d0;
        uVar29 = 0x301;
        bVar1 = true;
        local_68 = (_MACNV_SEEK_INFO *)0x12;
      }
      iVar21 = puVar30[0x22];
      if (iVar21 != 0) {
        iVar21 = iVar21 + -1;
        puVar30[0x22] = iVar21;
      }
      iVar23 = DAT_0007d358;
      iVar25 = *(int *)(DAT_0007d354 + 0x7cbe0);
      puVar30[0x13] = puVar30[0x11] + puVar30[0x13];
      uVar11 = (uint)*(byte *)(iVar18 + iVar25 + 0x1d);
      iVar18 = DAT_0007d35c + 0x7cbfc;
      while( true ) {
        iVar25 = DAT_0007d360;
        iVar26 = iVar23 + 0x7cbfc + (int)local_68 * 8;
        while( true ) {
          if (iVar21 != 0) goto LAB_0007cc6c;
          iVar27 = FUN_00074728(uVar29,puVar30[0x21],0xffffffff,puVar30[0x23],puVar30[0x24],
                                puVar30[0x25]);
          iVar21 = DAT_0007dbe0;
          if (iVar27 < 0) {
            puVar30[0x22] = 0;
            puVar30[0x24] = 0;
            puVar30[0x21] = 0x1b;
            uVar11 = **(uint **)(iVar21 + 0x7d9a2);
            goto LAB_0007c68e;
          }
          iVar21 = (**(code **)(iVar25 + puVar30[1] * 0x28 + 0x7cc7c))(iVar26,puVar30 + 0x21);
          if (iVar21 < 0) goto LAB_0007cc6c;
          if (iVar21 == 0) break;
          iVar21 = puVar30[0x22];
        }
        if ((puVar30[0xf] != 0) &&
           ((puVar30[0x10] == 0 ||
            (iVar21 = puVar30[0x10] + -1, puVar30[0x10] = iVar21, iVar21 == 0)))) break;
        pcVar19 = (code *)puVar30[0x19];
        if (pcVar19 != (code *)0x0) {
          machdep_LeaveCriticalSection();
          (*pcVar19)(0x300,0x7e);
          machdep_EnterCriticalSection();
        }
        iVar21 = (**(code **)(iVar18 + puVar30[1] * 0x28 + 0x58))(iVar26,0,0);
        if ((iVar21 < 0) ||
           (iVar21 = (**(code **)(iVar18 + puVar30[1] * 0x28 + 0x5c))(iVar26,puVar30 + 0x21),
           iVar21 < 0)) goto LAB_0007cc6c;
        pcVar19 = *(code **)(iVar18 + uVar11 * 0x14 + 8);
        (*pcVar19)(3,0,0);
        (*pcVar19)(6,0,0xc);
        iVar21 = puVar30[0x22] + 1;
        puVar30[0x13] = 0;
        puVar30[0x22] = iVar21;
      }
      puVar30[0x10] = puVar30[0xf];
      *puVar30 = 3;
      puVar30[0x22] = 0;
      puVar30[0x24] = 0;
      puVar30[0x21] = 0x1b;
      if (!bVar1) {
        if (*(byte *)(puVar30 + 0xd) != 0) {
          uVar17 = *(byte *)(puVar30 + 0xd) & 3;
          **(uint **)(DAT_0007dbcc + 0x7d8d2) =
               **(uint **)(DAT_0007dbcc + 0x7d8d2) & ~(0x100 << uVar17);
          MaDsp_3DCtrl(1,0xa5,uVar17,(void *)0x0);
        }
        if (*(byte *)((int)puVar30 + 0x35) != 0) {
          uVar17 = *(byte *)((int)puVar30 + 0x35) & 3;
          **(uint **)(DAT_0007dbd0 + 0x7d900) =
               **(uint **)(DAT_0007dbd0 + 0x7d900) & ~(0x100 << uVar17);
          MaDsp_3DCtrl(1,0xa5,uVar17,(void *)0x0);
        }
        if (*(byte *)((int)puVar30 + 0x36) != 0) {
          uVar17 = *(byte *)((int)puVar30 + 0x36) & 3;
          **(uint **)(DAT_0007dbd4 + 0x7d92e) =
               **(uint **)(DAT_0007dbd4 + 0x7d92e) & ~(0x100 << uVar17);
          MaDsp_3DCtrl(1,0xa5,uVar17,(void *)0x0);
        }
        if (*(byte *)((int)puVar30 + 0x37) != 0) {
          uVar17 = *(byte *)((int)puVar30 + 0x37) & 3;
          **(uint **)(DAT_0007dbd8 + 0x7d95c) =
               **(uint **)(DAT_0007dbd8 + 0x7d95c) & ~(0x100 << uVar17);
          MaDsp_3DCtrl(1,0xa5,uVar17,(void *)0x0);
        }
      }
      **(uint **)(DAT_0007dbdc + 0x7d97a) = **(uint **)(DAT_0007dbdc + 0x7d97a) & 0xffffefff;
      MaDevDrv_StopTimer();
      FUN_00074708(puVar30[0x19],uVar29,0x7f);
LAB_0007cc6c:
      iVar18 = DAT_0007d368;
      uVar11 = (**(code **)(DAT_0007d364 + uVar11 * 0x14 + 0x7cc88))(puVar30[0x1b] + 1);
      uVar11 = MaCmd_Hv((uint)*(byte *)((int)puVar30 + 0x2b),
                        (uint)*(byte *)((int)local_68 * 0x228 + iVar18 + 0x7cd62),
                        (uchar *)puVar30[0x1b],uVar11);
      if (0 < (int)uVar11) {
        MaDevDrv_SendDirectPacket((uchar *)puVar30[0x1b],uVar11);
      }
      uVar11 = **(uint **)(iVar18 + 0x7cc90);
    }
LAB_0007c68e:
    if ((int)(uVar11 << 0xb) < 0) {
      iVar21 = *(int *)(DAT_0007d36c + 0x7ccc2);
      *(int *)(iVar21 + 0xc2c) = *(int *)(iVar21 + 0xc2c) + 0x14;
      iVar18 = MaDevDrv_ReadReg(0);
      if (iVar18 << 0x1a < 0) {
        MaDevDrv_WriteReg(0,(byte)iVar18 & 0xb9);
        pcVar19 = *(code **)(iVar21 + 0xc44);
        if (pcVar19 != (code *)0x0) {
          machdep_LeaveCriticalSection();
          (*pcVar19)(0x700,0x79);
          machdep_EnterCriticalSection();
        }
      }
    }
  }
  if ((bVar6 & 0x40) != 0) {
    FUN_0007a1f8();
  }
  if ((bVar5 & 0x10) != 0) {
    do {
      uVar11 = MaDevDrv_ReadReg(4);
      uVar17 = MaDevDrv_ReadReg(4);
      MaSmw_ReceiveMsg(0,0,(uVar11 & 0x7f) >> 4,uVar17 & 0x7f | (uVar11 & 0xf) << 8);
      MaDevDrv_WriteReg(0xb,'\x10');
      uVar11 = MaDevDrv_ReadReg(0xb);
      if ((uVar11 & 0x10) == 0) break;
      uVar11 = MaDevDrv_ReadReg(4);
      uVar17 = MaDevDrv_ReadReg(4);
      MaSmw_ReceiveMsg(0,0,(uVar11 & 0x7f) >> 4,uVar17 & 0x7f | (uVar11 & 0xf) << 8);
      MaDevDrv_WriteReg(0xb,'\x10');
      iVar18 = MaDevDrv_ReadReg(0xb);
    } while (iVar18 << 0x1b < 0);
  }
  if ((bVar6 & 0x20) == 0) goto LAB_0007c6a8;
  uVar11 = *(uint *)(DAT_0007d32c + 0x7d310);
  uVar17 = *(uint *)(DAT_0007d32c + 0x7d314);
  puVar14 = *(undefined1 **)(DAT_0007d32c + 0x7d318);
  if (uVar17 - uVar11 < 0x400) {
    if (uVar11 < uVar17) {
      uVar15 = uVar11 + 1;
      uVar24 = ~uVar11 + uVar17 & 7;
      uVar7 = MaDevDrv_ReadReg(10);
      puVar14[uVar11] = uVar7;
      if (uVar15 < uVar17) {
        if (uVar24 != 0) {
          if (uVar24 != 1) {
            if (uVar24 != 2) {
              if (uVar24 != 3) {
                if (uVar24 != 4) {
                  if (uVar24 != 5) {
                    if (uVar24 != 6) {
                      uVar7 = MaDevDrv_ReadReg(10);
                      puVar14[uVar15] = uVar7;
                      uVar15 = uVar11 + 2;
                    }
                    uVar7 = MaDevDrv_ReadReg(10);
                    puVar14[uVar15] = uVar7;
                    uVar15 = uVar15 + 1;
                  }
                  uVar7 = MaDevDrv_ReadReg(10);
                  puVar14[uVar15] = uVar7;
                  uVar15 = uVar15 + 1;
                }
                uVar7 = MaDevDrv_ReadReg(10);
                puVar14[uVar15] = uVar7;
                uVar15 = uVar15 + 1;
              }
              uVar7 = MaDevDrv_ReadReg(10);
              puVar14[uVar15] = uVar7;
              uVar15 = uVar15 + 1;
            }
            uVar7 = MaDevDrv_ReadReg(10);
            puVar14[uVar15] = uVar7;
            uVar15 = uVar15 + 1;
          }
          uVar7 = MaDevDrv_ReadReg(10);
          puVar14[uVar15] = uVar7;
          uVar15 = uVar15 + 1;
          if (uVar17 <= uVar15) goto LAB_0007c880;
        }
        do {
          iVar23 = uVar15 + 1;
          uVar7 = MaDevDrv_ReadReg(10);
          iVar28 = uVar15 + 2;
          iVar18 = uVar15 + 3;
          iVar26 = uVar15 + 4;
          iVar21 = uVar15 + 5;
          iVar27 = uVar15 + 6;
          iVar25 = uVar15 + 7;
          puVar14[uVar15] = uVar7;
          uVar7 = MaDevDrv_ReadReg(10);
          uVar15 = uVar15 + 8;
          puVar14[iVar23] = uVar7;
          uVar7 = MaDevDrv_ReadReg(10);
          puVar14[iVar28] = uVar7;
          uVar7 = MaDevDrv_ReadReg(10);
          puVar14[iVar18] = uVar7;
          uVar7 = MaDevDrv_ReadReg(10);
          puVar14[iVar26] = uVar7;
          uVar7 = MaDevDrv_ReadReg(10);
          puVar14[iVar21] = uVar7;
          uVar7 = MaDevDrv_ReadReg(10);
          puVar14[iVar27] = uVar7;
          uVar7 = MaDevDrv_ReadReg(10);
          puVar14[iVar25] = uVar7;
        } while (uVar15 < uVar17);
      }
    }
LAB_0007c880:
    iVar18 = -(uVar17 - uVar11);
    uVar15 = iVar18 + 0x400;
    uVar11 = 1;
    uVar17 = iVar18 + 0x3ffU & 7;
    uVar7 = MaDevDrv_ReadReg(10);
    *puVar14 = uVar7;
    if (1 < uVar15) {
      if (uVar17 != 0) {
        if (uVar17 != 1) {
          if (uVar17 != 2) {
            if (uVar17 != 3) {
              if (uVar17 != 4) {
                if (uVar17 != 5) {
                  if (uVar17 != 6) {
                    uVar11 = 2;
                    uVar7 = MaDevDrv_ReadReg(10);
                    puVar14[1] = uVar7;
                  }
                  uVar7 = MaDevDrv_ReadReg(10);
                  puVar14[uVar11] = uVar7;
                  uVar11 = uVar11 + 1;
                }
                uVar7 = MaDevDrv_ReadReg(10);
                puVar14[uVar11] = uVar7;
                uVar11 = uVar11 + 1;
              }
              uVar7 = MaDevDrv_ReadReg(10);
              puVar14[uVar11] = uVar7;
              uVar11 = uVar11 + 1;
            }
            uVar7 = MaDevDrv_ReadReg(10);
            puVar14[uVar11] = uVar7;
            uVar11 = uVar11 + 1;
          }
          uVar7 = MaDevDrv_ReadReg(10);
          puVar14[uVar11] = uVar7;
          uVar11 = uVar11 + 1;
        }
        uVar7 = MaDevDrv_ReadReg(10);
        puVar14[uVar11] = uVar7;
        uVar11 = uVar11 + 1;
        if (uVar15 <= uVar11) goto LAB_0007c978;
      }
      do {
        iVar23 = uVar11 + 1;
        uVar7 = MaDevDrv_ReadReg(10);
        iVar21 = uVar11 + 2;
        iVar18 = uVar11 + 3;
        iVar28 = uVar11 + 4;
        iVar25 = uVar11 + 5;
        iVar27 = uVar11 + 6;
        iVar26 = uVar11 + 7;
        puVar14[uVar11] = uVar7;
        uVar11 = uVar11 + 8;
        uVar7 = MaDevDrv_ReadReg(10);
        puVar14[iVar23] = uVar7;
        uVar7 = MaDevDrv_ReadReg(10);
        puVar14[iVar21] = uVar7;
        uVar7 = MaDevDrv_ReadReg(10);
        puVar14[iVar18] = uVar7;
        uVar7 = MaDevDrv_ReadReg(10);
        puVar14[iVar28] = uVar7;
        uVar7 = MaDevDrv_ReadReg(10);
        puVar14[iVar25] = uVar7;
        uVar7 = MaDevDrv_ReadReg(10);
        puVar14[iVar27] = uVar7;
        uVar7 = MaDevDrv_ReadReg(10);
        puVar14[iVar26] = uVar7;
      } while (uVar11 < uVar15);
    }
LAB_0007c978:
    iVar18 = DAT_0007d330;
    pcVar3 = (char *)(DAT_0007d330 + 0x7d558);
    *(uint *)(DAT_0007d330 + 0x7d544) = uVar11;
    bVar9 = *(byte *)(iVar18 + 0x7d550);
    uVar7 = 0;
    if ((*pcVar3 == '\0') ||
       (uVar7 = *(uint *)(iVar18 + 0x7d554) < uVar11, *(char *)(iVar18 + 0x7d560) == '\0')) {
LAB_0007d31a:
      *(undefined1 *)(DAT_0007d410 + 0x7def2) = uVar7;
    }
    else {
      if (*(uint *)(iVar18 + 0x7d55c) < uVar11) {
        uVar7 = 2;
      }
      if (*(char *)(iVar18 + 0x7d568) == '\0') goto LAB_0007d31a;
      if (*(uint *)(iVar18 + 0x7d564) < uVar11) {
        uVar7 = 3;
      }
      if (*(char *)(iVar18 + 0x7d570) == '\0') goto LAB_0007d31a;
      if (*(uint *)(iVar18 + 0x7d56c) < uVar11) {
        uVar7 = 4;
      }
      *(undefined1 *)(iVar18 + 0x7d550) = uVar7;
    }
    if (bVar9 < 4) {
      if ((*(char *)(DAT_0007d334 + 0x7d5ba) == '\0') &&
         (*(char *)(DAT_0007d334 + (uint)bVar9 * 8 + 0x7d5c2) != '\x01')) goto LAB_0007c6a8;
    }
    else if (*(char *)(DAT_0007d3b8 + 0x7daca) == '\0') goto LAB_0007c6a8;
  }
  else {
    uVar17 = uVar11 + 0x400;
    if (uVar11 < uVar17) {
      iVar18 = uVar11 + 0x3ff;
      puVar20 = puVar14 + uVar11;
      uVar7 = MaDevDrv_ReadReg(10);
      *puVar20 = uVar7;
      do {
        uVar7 = MaDevDrv_ReadReg(10);
        puVar20[1] = uVar7;
        uVar7 = MaDevDrv_ReadReg(10);
        puVar20[2] = uVar7;
        uVar7 = MaDevDrv_ReadReg(10);
        puVar20[3] = uVar7;
        uVar7 = MaDevDrv_ReadReg(10);
        puVar20[4] = uVar7;
        uVar7 = MaDevDrv_ReadReg(10);
        puVar20[5] = uVar7;
        uVar7 = MaDevDrv_ReadReg(10);
        puVar20[6] = uVar7;
        uVar7 = MaDevDrv_ReadReg(10);
        puVar20[7] = uVar7;
        uVar7 = MaDevDrv_ReadReg(10);
        puVar20[8] = uVar7;
        uVar7 = MaDevDrv_ReadReg(10);
        puVar20[9] = uVar7;
        uVar7 = MaDevDrv_ReadReg(10);
        puVar20[10] = uVar7;
        uVar7 = MaDevDrv_ReadReg(10);
        puVar20 = puVar20 + 0xb;
        *puVar20 = uVar7;
        uVar11 = uVar17;
      } while (puVar20 != puVar14 + iVar18);
    }
    iVar18 = DAT_0007d33c + 0x7cade;
    bVar9 = *(byte *)(DAT_0007d33c + 0x7d6ae);
    uVar17 = (uint)bVar9;
    *(uint *)(DAT_0007d33c + 0x7d6a2) = uVar11;
    if (3 < uVar17) goto LAB_0007c6a8;
    iVar18 = iVar18 + (uVar17 + 2) * 8;
    if (*(char *)(iVar18 + 0xbc8) == '\0') goto LAB_0007c6a8;
    bVar1 = *(uint *)(iVar18 + 0xbc4) <= uVar11;
    bVar8 = bVar9;
    if (bVar1) {
      bVar8 = (byte)(uVar17 + 1);
    }
    if (uVar17 + 1 == 4) {
LAB_0007cb7c:
      *(byte *)(DAT_0007d34c + 0x7d754) = bVar8;
    }
    else {
      iVar18 = DAT_0007d340 + 0x7cb1a + (uVar17 + 3) * 8;
      if (*(char *)(iVar18 + 0xbc8) != '\0') {
        bVar2 = *(uint *)(iVar18 + 0xbc4) <= uVar11;
        if (bVar2) {
          bVar8 = bVar9 + 2;
        }
        bVar1 = bVar2 || bVar1;
        if (uVar17 + 2 != 4) {
          iVar18 = DAT_0007d344 + 0x7cb42 + (uVar17 + 4) * 8;
          if (*(char *)(iVar18 + 0xbc8) == '\0') goto LAB_0007cff6;
          bVar2 = *(uint *)(iVar18 + 0xbc4) <= uVar11;
          if (bVar2) {
            bVar8 = bVar9 + 3;
          }
          bVar1 = bVar2 || bVar1;
          if (uVar17 == 0) {
            if (*(char *)(DAT_0007d348 + 0x7d756) == '\0') goto LAB_0007cff6;
            if (*(uint *)(DAT_0007d348 + 0x7d752) <= uVar11) {
              bVar8 = 4;
              bVar1 = true;
            }
          }
        }
        goto LAB_0007cb7c;
      }
LAB_0007cff6:
      *(byte *)((int)&DAT_0007dbcc + DAT_0007d3cc + 2) = bVar8;
    }
    if (!bVar1) goto LAB_0007c6a8;
  }
  pcVar19 = *(code **)(*(int *)(DAT_0007d338 + 0x7ca04) + 0xc44);
  if (pcVar19 != (code *)0x0) {
    machdep_LeaveCriticalSection();
    (*pcVar19)(0x700,0x7d);
    machdep_EnterCriticalSection();
  }
LAB_0007c6a8:
  MaDevDrv_WriteReg(0xb,bVar5 & 0x9f);
  MaDevDrv_WriteReg(0xc,bVar6 & 0x7f);
  MaDevDrv_EnableIrq();
  machdep_LeaveCriticalSection();
  return;
}

