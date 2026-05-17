/* LSendBlock @ 000fb4f4 1882B */


/* YAMAHA::LSendBlock(unsigned char, unsigned char) */

int YAMAHA::LSendBlock(uchar param_1,uchar param_2)

{
  undefined2 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  byte *pbVar11;
  int *piVar12;
  int iVar13;
  bool bVar14;
  uchar local_30;
  undefined1 local_2f;
  uchar local_28;
  undefined1 local_27;
  
  iVar10 = DAT_000fbc50 + 0xfb506;
  if (param_1 == '\x02') {
    pbVar11 = *(byte **)(iVar10 + DAT_000fbc58);
    iVar13 = *(int *)(iVar10 + DAT_000fbc54);
    bVar9 = pbVar11[4];
    bVar4 = pbVar11[6];
    bVar5 = pbVar11[1];
    bVar2 = pbVar11[3];
    bVar3 = *pbVar11;
    *(undefined2 *)(iVar13 + (pbVar11[8] + 0x10) * 2 + 6) = 0;
    *(undefined2 *)(iVar13 + (bVar4 + 0x10) * 2 + 6) = 0;
    *(undefined2 *)(iVar13 + (bVar9 + 0x10) * 2 + 6) = 0;
    *(undefined2 *)(iVar13 + (bVar2 + 0x10) * 2 + 6) = 0;
    *(undefined2 *)(iVar13 + (bVar5 + 0x10) * 2 + 6) = 0;
    *(undefined2 *)(iVar13 + (bVar3 + 0x10) * 2 + 6) = 0;
    LSendCoef('\x02',pbVar11 + 3);
    LSendCoef('\x01',pbVar11 + 6);
    LSendCoef('\x01',pbVar11 + 8);
    if (*(char *)(iVar13 + 9) == '\t') {
      if (*(int *)(iVar13 + 0x368) - 0x23U < 2) {
        uVar8 = 6;
      }
      else {
        uVar8 = 10;
      }
      machdep_Sleep(uVar8);
    }
    LSendCoef('\x02',pbVar11);
LAB_000fb6e6:
    iVar13 = MaDevDrv_ClearDspDelayRam(0xff00);
    if (iVar13 < 0) {
LAB_000fb9a2:
      FUN_000fafd8(2,0);
      return iVar13;
    }
    if (param_2 == '\0') {
      iVar13 = *(int *)(iVar10 + DAT_000fbc54);
      bVar9 = *(byte *)(iVar13 + 9);
      bVar14 = bVar9 == 5;
    }
    else {
      iVar13 = MaDevDrv_SetDspRamAddress(0x13,0x72);
      if (iVar13 < 0) goto LAB_000fb9a2;
      iVar13 = *(int *)(iVar10 + DAT_000fbc54);
      bVar9 = *(byte *)(iVar13 + 9);
      if (bVar9 == 5) {
        bVar14 = true;
        iVar6 = _MaDevDrv_SendDspProgram(0x13,*(uchar **)(iVar10 + DAT_000fbc90),0x240);
      }
      else {
        if (bVar9 < 6) {
          iVar6 = DAT_000fbc98;
          if (bVar9 != 2) {
            if (bVar9 < 3) {
              if (bVar9 == 0) {
                iVar6 = _MaDevDrv_SendDspProgram(0x13,*(uchar **)(iVar10 + DAT_000fbc94),0x240);
                bVar14 = false;
                goto LAB_000fb83c;
              }
              iVar6 = DAT_000fbc68;
              if (bVar9 != 1) goto LAB_000fbad4;
            }
            else {
              iVar6 = DAT_000fbc9c;
              if ((bVar9 != 3) && (iVar6 = DAT_000fbc78, bVar9 != 4)) goto LAB_000fbad4;
            }
          }
        }
        else {
          iVar6 = DAT_000fbc8c;
          if (bVar9 != 8) {
            if (bVar9 < 9) {
              iVar6 = DAT_000fbca4;
              if ((bVar9 == 6) || (iVar6 = DAT_000fbc7c, bVar9 == 7)) goto LAB_000fb94a;
            }
            else {
              if (bVar9 == 0xfe) {
                iVar6 = MaDevDrv_ClearDspProgram(0x13,0x72);
                if (iVar6 < 0) {
                  return iVar6;
                }
                iVar6 = _MaDevDrv_SendDspProgram(0x13,*(uchar **)(iVar10 + DAT_000fbc80),0x12);
              }
              else if (bVar9 == 0xff) {
                iVar6 = MaDevDrv_ClearDspProgram(0x13,0x72);
                if (iVar6 < 0) {
                  return iVar6;
                }
                iVar6 = _MaDevDrv_SendDspProgram(0x13,*(uchar **)(iVar10 + DAT_000fbca0),0x2a);
              }
              else {
                if (bVar9 != 9) goto LAB_000fbad4;
                if ((*(int *)(iVar13 + 0x36c) != 0) && (*(int *)(iVar13 + 0x370) != 0)) {
                  iVar6 = Ma7emu_GetMode();
                  if (iVar6 != 2) {
                    local_2f = 0;
                    local_30 = '~';
                    _MaDevDrv_SendDspCoef(0,&local_30,2);
                  }
                  iVar6 = _MaDevDrv_SendDspProgram(0x13,*(uchar **)(iVar13 + 0x36c),0x240);
                  if (iVar6 < 0) {
                    return iVar6;
                  }
                  iVar6 = _MaDevDrv_SendDspCoef(0x13,*(uchar **)(iVar13 + 0x370),0xc0);
                  iVar7 = Ma7emu_GetMode();
                  if (iVar7 == 2) {
                    bVar14 = false;
                  }
                  else {
                    bVar14 = false;
                    local_30 = 0xff;
                    local_2f = 0xff;
                    _MaDevDrv_SendDspCoef(0,&local_30,2);
                  }
                  goto LAB_000fb83c;
                }
                iVar6 = MaDevDrv_ClearDspProgram(0x13,0x72);
                if (iVar6 < 0) {
                  return iVar6;
                }
                iVar6 = _MaDevDrv_SendDspProgram(0x13,*(uchar **)(iVar10 + DAT_000fbca0),0x2a);
                if (iVar6 < 0) {
                  return iVar6;
                }
                iVar6 = MaDevDrv_ClearDspCoef(0x13,0x72);
              }
              if (iVar6 < 0) {
                return iVar6;
              }
              bVar9 = *(byte *)(iVar13 + 9);
            }
LAB_000fbad4:
            bVar14 = false;
            goto LAB_000fb706;
          }
        }
LAB_000fb94a:
        bVar14 = false;
        iVar6 = _MaDevDrv_SendDspProgram(0x13,*(uchar **)(iVar10 + iVar6),0x240);
      }
LAB_000fb83c:
      if (iVar6 < 0) {
        return iVar6;
      }
      bVar9 = *(byte *)(iVar13 + 9);
    }
LAB_000fb706:
    if ((bVar9 != 9) && (iVar6 = LSendCoef('`',*(uchar **)(iVar10 + DAT_000fbc60)), iVar6 < 0)) {
      return iVar6;
    }
    if ((param_2 != '\0') && (iVar6 = MaDevDrv_SetDspRamAddress(0,0), iVar6 < 0)) {
      FUN_000fafd8(2,0);
      return iVar6;
    }
    iVar6 = DAT_000fbc60;
    if (bVar14) {
      MaDevDrv_ClearDspCoef(0x16,0x37);
      LSendCoef('`',*(uchar **)(iVar10 + iVar6));
    }
    if (*(char *)(iVar13 + 0x25) != '\x01') {
LAB_000fb732:
      pbVar11 = *(byte **)(iVar10 + DAT_000fbc58);
LAB_000fb746:
      if ((*(char *)(iVar13 + 0x24) == '\0') && (*(char *)(iVar13 + 0x25) != '\x01')) {
        bVar9 = *pbVar11;
        uVar1 = *(undefined2 *)(iVar13 + 0x20);
        *(undefined2 *)(iVar13 + (uint)pbVar11[1] * 2 + 0x26) = uVar1;
        *(undefined2 *)(iVar13 + (uint)bVar9 * 2 + 0x26) = uVar1;
      }
      else {
        bVar9 = *pbVar11;
        *(undefined2 *)(iVar13 + (uint)pbVar11[1] * 2 + 0x26) = 0x7fff;
        *(undefined2 *)(iVar13 + (uint)bVar9 * 2 + 0x26) = 0x7fff;
      }
      LSendCoef('\x02',pbVar11);
      lup_tconnect('\x04');
      lup_tconnect('\x02');
      return 0;
    }
    if (*(char *)(iVar13 + 8) == '\x02') {
      MaDevDrv_ClearDspCoef(0x286,0x286);
      MaDevDrv_ClearDspCoef(0x28d,0x28d);
    }
    else {
      iVar6 = *(int *)(iVar10 + DAT_000fbc58);
      bVar9 = *(byte *)(iVar6 + 5);
      bVar3 = *(byte *)(iVar6 + 4);
      bVar4 = *(byte *)(iVar6 + 2);
      bVar5 = *(byte *)(iVar6 + 3);
      *(undefined2 *)(iVar13 + (*(byte *)(iVar6 + 7) + 0x10) * 2 + 6) = 0;
      *(undefined2 *)(iVar13 + (bVar9 + 0x10) * 2 + 6) = 0;
      *(undefined2 *)(iVar13 + (bVar3 + 0x10) * 2 + 6) = 0;
      *(undefined2 *)(iVar13 + (bVar5 + 0x10) * 2 + 6) = 0;
      *(undefined2 *)(iVar13 + (bVar4 + 0x10) * 2 + 6) = 0;
      LSendCoef('\x03',(uchar *)(iVar6 + 2));
      LSendCoef('\x01',(uchar *)(iVar6 + 5));
      LSendCoef('\x01',(uchar *)(iVar6 + 7));
    }
    iVar6 = MaDevDrv_ClearDspDelayRam(0xffff0000);
    if (iVar6 < 0) {
LAB_000fbbca:
      if (*(char *)(iVar13 + 8) != '\x02') {
        pbVar11 = (byte *)(*(int *)(iVar10 + DAT_000fbc58) + 2);
        *(short *)(iVar13 + (uint)*pbVar11 * 2 + 0x26) = (short)*(undefined4 *)(iVar13 + 0x20);
        LSendCoef('\x01',pbVar11);
        lup_tconnect('\x04');
        lup_tconnect('\0');
        return iVar6;
      }
      local_28 = '\x7f';
      local_27 = 0xff;
      _MaDevDrv_SendDspCoef(0x286,&local_28,2);
      _MaDevDrv_SendDspCoef(0x28d,&local_28,2);
      return iVar6;
    }
    if (param_2 == '\0') {
      iVar6 = LSendCoef('W',*(uchar **)(iVar10 + DAT_000fbc5c));
      if (iVar6 < 0) {
        return iVar6;
      }
LAB_000fba4e:
      if (*(char *)(iVar13 + 8) != '\x02') {
        pbVar11 = *(byte **)(iVar10 + DAT_000fbc58);
        *(short *)(iVar13 + (uint)pbVar11[2] * 2 + 0x26) = (short)*(undefined4 *)(iVar13 + 0x20);
        LSendCoef('\x01',pbVar11 + 2);
        lup_tconnect('\x04');
        lup_tconnect('\0');
        goto LAB_000fb746;
      }
      local_28 = '\x7f';
      local_27 = 0xff;
      _MaDevDrv_SendDspCoef(0x286,&local_28,2);
      iVar6 = _MaDevDrv_SendDspCoef(0x28d,&local_28,2);
      if (iVar6 < 0) {
        return iVar6;
      }
      goto LAB_000fb732;
    }
    iVar6 = MaDevDrv_SetDspRamAddress(0x76,0xcc);
    if (iVar6 < 0) goto LAB_000fbbca;
    _MaDevDrv_SendDspProgram(0x76,*(uchar **)(iVar10 + DAT_000fbc84),0x20a);
    iVar6 = LSendCoef('W',*(uchar **)(iVar10 + DAT_000fbc5c));
    if (iVar6 < 0) {
      return iVar6;
    }
    iVar6 = MaDevDrv_SetDspRamAddress(0,0);
    if (-1 < iVar6) goto LAB_000fba4e;
LAB_000fb64a:
    FUN_000fafd8(0xb,0);
  }
  else {
    if (param_1 == '\v') {
      iVar13 = *(int *)(iVar10 + DAT_000fbc54);
      if (*(char *)(iVar13 + 8) == '\x02') {
        MaDevDrv_ClearDspCoef(0x286,0x286);
        MaDevDrv_ClearDspCoef(0x28d,0x28d);
      }
      else {
        iVar6 = *(int *)(iVar10 + DAT_000fbc58);
        bVar3 = *(byte *)(iVar6 + 2);
        bVar4 = *(byte *)(iVar6 + 5);
        bVar5 = *(byte *)(iVar6 + 4);
        bVar9 = *(byte *)(iVar6 + 3);
        *(undefined2 *)(iVar13 + (*(byte *)(iVar6 + 7) + 0x10) * 2 + 6) = 0;
        *(undefined2 *)(iVar13 + (bVar4 + 0x10) * 2 + 6) = 0;
        *(undefined2 *)(iVar13 + (bVar5 + 0x10) * 2 + 6) = 0;
        *(undefined2 *)(iVar13 + (bVar9 + 0x10) * 2 + 6) = 0;
        *(undefined2 *)(iVar13 + (bVar3 + 0x10) * 2 + 6) = 0;
        LSendCoef('\x03',(uchar *)(iVar6 + 2));
        LSendCoef('\x01',(uchar *)(iVar6 + 5));
        LSendCoef('\x01',(uchar *)(iVar6 + 7));
      }
LAB_000fb5dc:
      iVar13 = MaDevDrv_ClearDspDelayRam(0xffff0000);
      if (iVar13 < 0) {
LAB_000fb996:
        FUN_000fafd8(0xb,0);
        return iVar13;
      }
      if (param_2 == '\0') {
        iVar13 = LSendCoef('W',*(uchar **)(iVar10 + DAT_000fbc5c));
        if (iVar13 < 0) {
          return iVar13;
        }
        goto LAB_000fb524;
      }
      iVar13 = MaDevDrv_SetDspRamAddress(0x76,0xcc);
      if (iVar13 < 0) goto LAB_000fb996;
      piVar12 = *(int **)(iVar10 + DAT_000fbc54);
      bVar9 = *(byte *)(piVar12 + 2);
      if (bVar9 == 2) {
        iVar13 = _MaDevDrv_SendDspProgram(0x76,*(uchar **)(iVar10 + DAT_000fbc74),0x20a);
LAB_000fb8ee:
        if (iVar13 < 0) {
          return iVar13;
        }
      }
      else {
        if (2 < bVar9) {
          if (bVar9 == 0xfe) {
            iVar13 = MaDevDrv_ClearDspProgram(0x76,0xcc);
            if (iVar13 < 0) {
              return iVar13;
            }
            iVar13 = _MaDevDrv_SendDspProgram(0x76,*(uchar **)(iVar10 + DAT_000fbc70),0x12);
          }
          else {
            if (bVar9 != 0xff) goto LAB_000fb62a;
            iVar13 = MaDevDrv_ClearDspProgram(0x76,0xcc);
            if (iVar13 < 0) {
              return iVar13;
            }
            iVar13 = _MaDevDrv_SendDspProgram(0x76,*(uchar **)(iVar10 + DAT_000fbc64),0x2a);
          }
          goto LAB_000fb8ee;
        }
        if (bVar9 == 0) {
          if (*piVar12 - 1U < 0xb) {
            iVar13 = _MaDevDrv_SendDspProgram(0x76,*(uchar **)(iVar10 + DAT_000fbc6c),0x20a);
            goto LAB_000fb8ee;
          }
        }
        else if ((bVar9 == 1) && (*piVar12 - 2U < 3)) {
          iVar13 = _MaDevDrv_SendDspProgram(0x76,*(uchar **)(iVar10 + DAT_000fbc88),0x20a);
          goto LAB_000fb8ee;
        }
      }
LAB_000fb62a:
      iVar13 = LSendCoef('W',*(uchar **)(iVar10 + DAT_000fbc5c));
      if (iVar13 < 0) {
        return iVar13;
      }
      iVar6 = MaDevDrv_SetDspRamAddress(0,0);
      if (iVar6 < 0) goto LAB_000fb64a;
    }
    else {
      if (param_1 == '\x02') goto LAB_000fb6e6;
      if (param_1 == '\v') goto LAB_000fb5dc;
      if (param_1 == '\x02') {
        iVar13 = *(int *)(iVar10 + DAT_000fbc54);
        pbVar11 = *(byte **)(iVar10 + DAT_000fbc58);
        goto LAB_000fb746;
      }
      if (param_1 != '\v') {
        return 0;
      }
LAB_000fb524:
      piVar12 = *(int **)(iVar10 + DAT_000fbc54);
    }
    if ((char)piVar12[2] == '\x02') {
      local_27 = 0xff;
      local_28 = '\x7f';
      _MaDevDrv_SendDspCoef(0x286,&local_28,2);
      iVar6 = _MaDevDrv_SendDspCoef(0x28d,&local_28,2);
    }
    else {
      pbVar11 = (byte *)(*(int *)(iVar10 + DAT_000fbc58) + 2);
      *(short *)((int)piVar12 + (uint)*pbVar11 * 2 + 0x26) = (short)piVar12[8];
      LSendCoef('\x01',pbVar11);
      lup_tconnect('\x04');
      lup_tconnect('\0');
      iVar6 = 0;
    }
  }
  return iVar6;
}

