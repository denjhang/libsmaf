/* MaMidCnv_Ctrl @ 000aa878 3994B */


/* YAMAHA::MaMidCnv_Ctrl(_MACNV_SEQ_INFO*, unsigned int, unsigned int, void*) */

int YAMAHA::MaMidCnv_Ctrl(_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3,void *param_4)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  byte *pbVar16;
  int iVar17;
  char *pcVar18;
  char cVar19;
  ushort *puVar20;
  char *pcVar21;
  byte *pbVar22;
  uint uVar23;
  uchar *puVar24;
  byte *pbVar25;
  byte bVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  code *pcVar30;
  uint local_1bc;
  _MARMDCNV_INFO a_Stack_1b0 [8];
  _MARMDCNV_INFO a_Stack_1a8 [4];
  uint auStack_1a4 [96];
  
  iVar7 = DAT_000ab8bc;
  iVar6 = DAT_000ab8b8;
  iVar5 = DAT_000ab8b4;
  iVar4 = DAT_000ab89c;
  iVar27 = DAT_000ab898;
  iVar29 = DAT_000ab890;
  iVar11 = DAT_000ab88c;
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) &&
     (pcVar18 = *(char **)(param_1 + 4), pcVar18 != (char *)0x0)) {
    uVar15 = 1 - (int)param_4;
    if ((void *)0x1 < param_4) {
      uVar15 = 0;
    }
    if (param_2 == 0x35) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar15 & 1;
    }
    if (uVar10 == 0) {
      if (param_2 == 5) {
        *(int *)param_4 = *(int *)(pcVar18 + 0x34) >> 10;
        return 0;
      }
      if (param_2 == 10) {
        iVar11 = FUN_000a68e8(pcVar18,param_4);
        return iVar11;
      }
      if (*pcVar18 != '\x01') {
switchD_000aa8c6_caseD_6:
        return -1;
      }
      switch(param_2) {
      case 5:
        *(int *)param_4 = *(int *)(pcVar18 + 0x34) >> 10;
        return 0;
      default:
        goto switchD_000aa8c6_caseD_6;
      case 0x32:
        pcVar18[0xb11] = *(char *)param_4;
        pcVar18[0xb12] = *(char *)((int)param_4 + 1);
        return 0;
      case 0x33:
        if (uVar15 != 0) {
          return -2;
        }
        bVar8 = *(byte *)param_4;
        if (2 < bVar8) {
          return -2;
        }
        if (bVar8 == 0) {
          *(uint *)((int)param_4 + 4) = (uint)(byte)pcVar18[0xb09];
          return 0;
        }
        uVar15 = (uint)*(byte *)((int)param_4 + 1);
        if (0xf < uVar15) {
          return -2;
        }
        if (bVar8 != 2) {
          *(uint *)((int)param_4 + 4) = (uint)(byte)pcVar18[uVar15 * 0x10 + 0x51d];
          return 0;
        }
        *(uint *)((int)param_4 + 4) = (uint)(byte)pcVar18[uVar15 * 0x10 + 0x51e];
        return 0;
      case 0x35:
        iVar11 = param_3 * 0x400;
        if (iVar11 == 0) {
          *(int *)(pcVar18 + 0x38) = *(int *)(pcVar18 + 0x34) + 1;
          return 0;
        }
        if (*(int *)(pcVar18 + 0x34) < iVar11) {
          return 0;
        }
        *(int *)(pcVar18 + 0x38) = iVar11;
        return 0;
      case 0x36:
        uVar15 = param_3 & 0xf;
        iVar27 = uVar15 * 0x10;
        iVar29 = uVar15 * 0x18 + 8;
        auStack_1a4[uVar15 * 6 + 1] = (uint)*(ushort *)(pcVar18 + iVar27 + 0x518);
        *(uint *)(a_Stack_1b0 + iVar29) = (uint)(byte)pcVar18[iVar27 + 0x51d];
        auStack_1a4[uVar15 * 6] = (uint)(byte)pcVar18[iVar27 + 0x51e];
        auStack_1a4[uVar15 * 6 + 2] = (uint)*(ushort *)(pcVar18 + iVar27 + 0x522);
        auStack_1a4[uVar15 * 6 + 3] = (uint)*(ushort *)(pcVar18 + iVar27 + 0x524);
        iVar11 = MaRmdCnv_ChannelMessage(a_Stack_1b0,param_3,param_4);
        if (iVar11 != 0) {
          return iVar11;
        }
        if ((param_3 & 0xf0) != 0xc0) {
          *(short *)(pcVar18 + iVar27 + 0x518) = (short)auStack_1a4[uVar15 * 6 + 1];
          pcVar18[iVar27 + 0x51d] = (char)*(undefined4 *)(a_Stack_1b0 + iVar29);
          pcVar18[iVar27 + 0x51e] = (char)auStack_1a4[uVar15 * 6];
          *(short *)(pcVar18 + iVar27 + 0x522) = (short)auStack_1a4[uVar15 * 6 + 2];
          *(short *)(pcVar18 + iVar27 + 0x524) = (short)auStack_1a4[uVar15 * 6 + 3];
          return 0;
        }
        pcVar18[iVar27 + 0x51c] = (byte)((param_3 << 0x11) >> 0x19);
        return 0;
      case 0x37:
        goto switchD_000aa8c6_caseD_37;
      case 0x40:
        if (pcVar18[0xb0f] == '\x01') {
          return -1;
        }
        cVar19 = *(char *)((int)param_4 + 1);
        if (cVar19 == '\x06') {
          uVar15 = 2;
        }
        else if (cVar19 == '\a') {
          uVar15 = 4;
        }
        else {
          if (cVar19 != '\x01') {
            return 0;
          }
          uVar15 = 0;
        }
        iVar11 = MaSndDrv_SetWtWave(param_1,(uint)*(byte *)param_4,uVar15,
                                    *(uchar **)((int)param_4 + 4),*(uint *)((int)param_4 + 8));
        return iVar11;
      case 0x41:
        if (pcVar18[0xb0f] == '\x01') {
          return -1;
        }
        pbVar16 = *(byte **)param_4;
        bVar8 = pbVar16[2];
        uVar9 = (ushort)pbVar16[1] + (ushort)*pbVar16 * 0x100;
        uVar15 = (uint)(*pbVar16 == 0x78);
        iVar11 = uVar15 * 0x504 + 0xb14;
        sVar2 = *(short *)(pcVar18 + uVar15 * 0x504 + 0x1016);
        uVar10 = (uint)bVar8;
        while( true ) {
          puVar20 = (ushort *)(pcVar18 + uVar10 * 10 + iVar11);
          uVar13 = (uint)puVar20[4];
          if (uVar13 == 0xfffe) {
            return -3;
          }
          if (uVar13 == 0xffff) break;
          if ((*(ushort *)(pcVar18 + uVar10 * 10 + iVar11) == uVar9) &&
             ((uint)(byte)puVar20[1] == (uint)bVar8)) goto LAB_000aaa0e;
          uVar10 = uVar13;
          if (uVar13 == 0xfffe) {
            return -3;
          }
        }
        *puVar20 = uVar9;
        if ((uVar9 & 0xff00) == 0x7800) {
          if (*(ushort *)(pcVar18 + uVar15 * 0x504 + 0x1014) == 0x80) {
            return -3;
          }
          puVar20[2] = *(ushort *)(pcVar18 + uVar15 * 0x504 + 0x1014);
          *(short *)(pcVar18 + uVar15 * 0x504 + 0x1014) =
               *(short *)(pcVar18 + uVar15 * 0x504 + 0x1014) + -1;
        }
        *(byte *)(puVar20 + 1) = bVar8;
        *(char *)(puVar20 + 3) = (char)*(undefined2 *)(pcVar18 + uVar15 * 0x504 + 0x1016);
        sVar3 = *(short *)(pcVar18 + uVar15 * 0x504 + 0x1016);
        *(short *)(pcVar18 + uVar15 * 0x504 + 0x1016) = sVar3 + 1;
        if ((short)(sVar3 + 1) == 0x80) {
          puVar20[4] = 0xfffe;
          pbVar16 = *(byte **)param_4;
        }
        else {
          if (uVar10 == 0x7f) {
            uVar9 = 0;
          }
          else {
            uVar9 = (short)uVar10 + 1;
          }
          puVar20[4] = uVar9;
          pbVar16 = *(byte **)param_4;
        }
LAB_000aaa0e:
        pbVar16[9] = pbVar16[9] & 0xdf;
        if (uVar15 == 0) {
          iVar11 = *(int *)param_4;
          if ((*(byte *)(iVar11 + 3) == 0) && (*(byte *)(iVar11 + 4) == 0x7f)) {
            uVar10 = 1;
          }
          else {
            uVar10 = 3;
          }
          iVar11 = MaSndDrv_SetVoice(param_1,(uint)puVar20[2],(uint)(byte)puVar20[3],uVar10,
                                     (uint)*(byte *)(iVar11 + 7) +
                                     (uint)*(byte *)(iVar11 + 6) * 0x100,
                                     (uint)*(byte *)(iVar11 + 0x2f),(uint)*(byte *)(iVar11 + 3),
                                     (uint)*(byte *)(iVar11 + 4),(uchar *)(iVar11 + 8),
                                     *(uint *)((int)param_4 + 4));
          if (-1 < iVar11) {
            return iVar11;
          }
        }
        else {
          local_1bc = (uint)*(byte *)(*(int *)param_4 + 3);
          uVar13 = (uint)*(byte *)(*(int *)param_4 + 4);
          uVar10 = uVar13;
          if (local_1bc <= uVar13) {
            uVar10 = local_1bc;
            local_1bc = uVar13;
          }
          iVar11 = 0;
          bVar8 = (char)local_1bc - (char)uVar10 & 3;
          if ((uVar10 & 0x80) == 0) {
            iVar11 = *(int *)param_4;
            uVar13 = MaSndDrv_SetVoice(param_1,(uint)puVar20[2],uVar10,1,
                                       (uint)*(byte *)(iVar11 + 7) +
                                       (uint)*(byte *)(iVar11 + 6) * 0x100,
                                       (uint)*(byte *)(iVar11 + 0x2f),(uint)*(byte *)(iVar11 + 3),
                                       (uint)*(byte *)(iVar11 + 4),(uchar *)(iVar11 + 8),
                                       *(uint *)((int)param_4 + 4));
            iVar11 = 1 - uVar13;
            if (1 < uVar13) {
              iVar11 = 0;
            }
          }
          uVar13 = uVar10 + 1 & 0xff;
          if (uVar13 <= local_1bc) {
            if (bVar8 == 0) goto LAB_000aaf34;
            if (bVar8 != 1) {
              if (bVar8 != 2) {
                if ((uVar10 + 1 & 0x80) == 0) {
                  iVar29 = *(int *)param_4;
                  iVar29 = MaSndDrv_SetVoice(param_1,(uint)puVar20[2],uVar13,1,
                                             (uint)*(byte *)(iVar29 + 7) +
                                             (uint)*(byte *)(iVar29 + 6) * 0x100,
                                             (uint)*(byte *)(iVar29 + 0x2f),
                                             (uint)*(byte *)(iVar29 + 3),(uint)*(byte *)(iVar29 + 4)
                                             ,(uchar *)(iVar29 + 8),*(uint *)((int)param_4 + 4));
                  if (iVar29 == 0) {
                    iVar11 = 1;
                  }
                }
                uVar13 = uVar13 + 1 & 0xff;
              }
              if ((uVar13 & 0x80) == 0) {
                iVar29 = *(int *)param_4;
                iVar29 = MaSndDrv_SetVoice(param_1,(uint)puVar20[2],uVar13,1,
                                           (uint)*(byte *)(iVar29 + 7) +
                                           (uint)*(byte *)(iVar29 + 6) * 0x100,
                                           (uint)*(byte *)(iVar29 + 0x2f),
                                           (uint)*(byte *)(iVar29 + 3),(uint)*(byte *)(iVar29 + 4),
                                           (uchar *)(iVar29 + 8),*(uint *)((int)param_4 + 4));
                if (iVar29 == 0) {
                  iVar11 = 1;
                }
              }
              uVar13 = uVar13 + 1 & 0xff;
            }
            if ((uVar13 & 0x80) == 0) {
              iVar29 = *(int *)param_4;
              iVar29 = MaSndDrv_SetVoice(param_1,(uint)puVar20[2],uVar13,1,
                                         (uint)*(byte *)(iVar29 + 7) +
                                         (uint)*(byte *)(iVar29 + 6) * 0x100,
                                         (uint)*(byte *)(iVar29 + 0x2f),(uint)*(byte *)(iVar29 + 3),
                                         (uint)*(byte *)(iVar29 + 4),(uchar *)(iVar29 + 8),
                                         *(uint *)((int)param_4 + 4));
              if (iVar29 == 0) {
                iVar11 = 1;
              }
            }
            while (uVar13 = uVar13 + 1 & 0xff, uVar13 <= local_1bc) {
LAB_000aaf34:
              if ((uVar13 & 0x80) == 0) {
                iVar29 = *(int *)param_4;
                iVar29 = MaSndDrv_SetVoice(param_1,(uint)puVar20[2],uVar13,1,
                                           (uint)*(byte *)(iVar29 + 7) +
                                           (uint)*(byte *)(iVar29 + 6) * 0x100,
                                           (uint)*(byte *)(iVar29 + 0x2f),
                                           (uint)*(byte *)(iVar29 + 3),(uint)*(byte *)(iVar29 + 4),
                                           (uchar *)(iVar29 + 8),*(uint *)((int)param_4 + 4));
                if (iVar29 == 0) {
                  iVar11 = 1;
                }
              }
              uVar10 = uVar13 + 1 & 0xff;
              if ((uVar13 + 1 & 0x80) == 0) {
                iVar29 = *(int *)param_4;
                iVar29 = MaSndDrv_SetVoice(param_1,(uint)puVar20[2],uVar10,1,
                                           (uint)*(byte *)(iVar29 + 7) +
                                           (uint)*(byte *)(iVar29 + 6) * 0x100,
                                           (uint)*(byte *)(iVar29 + 0x2f),
                                           (uint)*(byte *)(iVar29 + 3),(uint)*(byte *)(iVar29 + 4),
                                           (uchar *)(iVar29 + 8),*(uint *)((int)param_4 + 4));
                if (iVar29 == 0) {
                  iVar11 = 1;
                }
              }
              uVar10 = uVar10 + 1;
              uVar23 = uVar10 & 0xff;
              if ((uVar10 & 0x80) == 0) {
                iVar29 = *(int *)param_4;
                iVar29 = MaSndDrv_SetVoice(param_1,(uint)puVar20[2],uVar23,1,
                                           (uint)*(byte *)(iVar29 + 7) +
                                           (uint)*(byte *)(iVar29 + 6) * 0x100,
                                           (uint)*(byte *)(iVar29 + 0x2f),
                                           (uint)*(byte *)(iVar29 + 3),(uint)*(byte *)(iVar29 + 4),
                                           (uchar *)(iVar29 + 8),*(uint *)((int)param_4 + 4));
                if (iVar29 == 0) {
                  iVar11 = 1;
                }
              }
              uVar23 = uVar23 + 1;
              uVar13 = uVar23 & 0xff;
              if ((uVar23 & 0x80) == 0) {
                iVar29 = *(int *)param_4;
                iVar29 = MaSndDrv_SetVoice(param_1,(uint)puVar20[2],uVar13,1,
                                           (uint)*(byte *)(iVar29 + 7) +
                                           (uint)*(byte *)(iVar29 + 6) * 0x100,
                                           (uint)*(byte *)(iVar29 + 0x2f),
                                           (uint)*(byte *)(iVar29 + 3),(uint)*(byte *)(iVar29 + 4),
                                           (uchar *)(iVar29 + 8),*(uint *)((int)param_4 + 4));
                if (iVar29 == 0) {
                  iVar11 = 1;
                }
              }
            }
          }
          if (iVar11 != 0) {
            return 0;
          }
          iVar11 = -1;
        }
        if (sVar2 != *(short *)(pcVar18 + uVar15 * 0x504 + 0x1016)) {
          *(short *)(pcVar18 + uVar15 * 0x504 + 0x1016) =
               *(short *)(pcVar18 + uVar15 * 0x504 + 0x1016) + -1;
          puVar20[4] = 0xffff;
          return iVar11;
        }
        return iVar11;
      }
    }
  }
  return -2;
switchD_000aa8c6_caseD_37:
  piVar14 = *(int **)param_4;
  pcVar21 = (char *)*piVar14;
  if ((pcVar21 == (char *)0x0) || (uVar15 = piVar14[1], uVar15 == 0)) {
    iVar11 = -2;
    goto LAB_000aab72;
  }
  if ((*pcVar21 != -0x10) || (uVar10 = uVar15 - 1, pcVar21[uVar10] != -9)) {
LAB_000aab6e:
    iVar11 = -0x18;
LAB_000aab72:
    *(undefined4 *)((int)param_4 + 8) = 0;
    *(undefined4 *)((int)param_4 + 4) = 0x1b;
    *(undefined4 *)((int)param_4 + 0xc) = 0;
    *(undefined4 *)((int)param_4 + 0x10) = 0;
    *(undefined4 *)((int)param_4 + 0x14) = 0;
    return iVar11;
  }
  bVar8 = pcVar21[1];
  if (1 < uVar10) {
    if ((bVar8 & 0x80) == 0) {
      iVar17 = 1;
      uVar13 = ~(1 - uVar10) & 0xf;
      if (uVar13 == 0) goto LAB_000aacc4;
      iVar17 = 2;
      if (-1 < pcVar21[2]) {
        if (uVar13 == 1) goto LAB_000aacc4;
        if ((uVar13 == 2) ||
           (((uVar13 == 3 ||
             (((uVar13 == 4 ||
               (((uVar13 == 5 ||
                 (((uVar13 == 6 ||
                   (((uVar13 == 7 ||
                     (((uVar13 == 8 ||
                       (((uVar13 == 9 ||
                         (((uVar13 == 10 ||
                           (((uVar13 == 0xb ||
                             (((uVar13 == 0xc ||
                               (((uVar13 == 0xd ||
                                 (((uVar13 == 0xe || (iVar17 = 3, -1 < pcVar21[3])) &&
                                  (iVar17 = iVar17 + 1, -1 < pcVar21[iVar17])))) &&
                                (iVar17 = iVar17 + 1, -1 < pcVar21[iVar17])))) &&
                              (iVar17 = iVar17 + 1, -1 < pcVar21[iVar17])))) &&
                            (iVar17 = iVar17 + 1, -1 < pcVar21[iVar17])))) &&
                          (iVar17 = iVar17 + 1, -1 < pcVar21[iVar17])))) &&
                        (iVar17 = iVar17 + 1, -1 < pcVar21[iVar17])))) &&
                      (iVar17 = iVar17 + 1, -1 < pcVar21[iVar17])))) &&
                    (iVar17 = iVar17 + 1, -1 < pcVar21[iVar17])))) &&
                  (iVar17 = iVar17 + 1, -1 < pcVar21[iVar17])))) &&
                (iVar17 = iVar17 + 1, -1 < pcVar21[iVar17])))) &&
              (iVar17 = iVar17 + 1, -1 < pcVar21[iVar17])))) &&
            (iVar17 = iVar17 + 1, -1 < pcVar21[iVar17])))) {
          iVar17 = iVar17 + 1;
          cVar19 = pcVar21[iVar17];
          while (-1 < cVar19) {
LAB_000aacc4:
            if (uVar10 == iVar17 + 1U) goto LAB_000ab118;
            if ((((((pcVar21[iVar17 + 1U] < '\0') || (pcVar21[iVar17 + 2] < '\0')) ||
                  ((pcVar21[iVar17 + 3] < '\0' ||
                   ((pcVar21[iVar17 + 4] < '\0' || (pcVar21[iVar17 + 5] < '\0')))))) ||
                 (pcVar21[iVar17 + 6] < '\0')) ||
                ((((((pcVar21[iVar17 + 7] < '\0' || (pcVar21[iVar17 + 8] < '\0')) ||
                    (pcVar21[iVar17 + 9] < '\0')) ||
                   ((pcVar21[iVar17 + 10] < '\0' || (pcVar21[iVar17 + 0xb] < '\0')))) ||
                  (pcVar21[iVar17 + 0xc] < '\0')) ||
                 ((pcVar21[iVar17 + 0xd] < '\0' || (pcVar21[iVar17 + 0xe] < '\0')))))) ||
               (pcVar21[iVar17 + 0xf] < '\0')) break;
            iVar17 = iVar17 + 0x10;
            cVar19 = pcVar21[iVar17];
          }
        }
      }
    }
    goto LAB_000aab6e;
  }
LAB_000ab118:
  if (bVar8 != 0x7e) {
    if (bVar8 == 0x7f) {
      cVar19 = pcVar21[4];
      if (cVar19 == '\x03') {
        if ((((pcVar21[2] == '\x7f') && (pcVar21[3] == '\x04')) &&
            (-1 < (int)((uint)(byte)pcVar21[5] << 0x18))) &&
           (((-1 < (int)((uint)(byte)pcVar21[6] << 0x18) && (pcVar21[7] == -9)) && (uVar15 == 8))))
        {
          *(ushort *)(pcVar18 + 0xb0c) = (ushort)(byte)pcVar21[5] + (ushort)(byte)pcVar21[6] * 0x80;
          *(undefined4 *)((int)param_4 + 4) = 0x18;
          *(undefined4 *)((int)param_4 + 8) = 0;
          *(undefined4 *)((int)param_4 + 0xc) = 0;
          uVar9 = *(ushort *)(pcVar18 + 0xb0c);
          *(undefined4 *)((int)param_4 + 0x14) = 0;
          *(uint *)((int)param_4 + 0x10) = (uint)uVar9;
          return 0;
        }
      }
      else if (cVar19 == '\x04') {
        if (((pcVar21[2] == '\x7f') && (pcVar21[3] == '\x04')) &&
           ((-1 < (int)((uint)(byte)pcVar21[6] << 0x18) && ((pcVar21[7] == -9 && (uVar15 == 8))))))
        {
          pcVar18[0xb0a] = pcVar21[6];
          *(undefined4 *)((int)param_4 + 8) = 0;
          *(undefined4 *)((int)param_4 + 4) = 0x17;
          *(undefined4 *)((int)param_4 + 0xc) = 0;
          bVar8 = pcVar18[0xb0a];
          *(undefined4 *)((int)param_4 + 0x14) = 0;
          *(uint *)((int)param_4 + 0x10) = (uint)bVar8;
          return 0;
        }
      }
      else if (((((cVar19 == '\x01') && (pcVar21[2] == '\x7f')) && (pcVar21[3] == '\x04')) &&
               ((-1 < (int)((uint)(byte)pcVar21[6] << 0x18) && (pcVar21[7] == -9)))) &&
              (uVar15 == 8)) {
        pcVar18[0xb09] = pcVar21[6];
        *(undefined4 *)((int)param_4 + 8) = 0;
        *(undefined4 *)((int)param_4 + 4) = 0x16;
        *(undefined4 *)((int)param_4 + 0xc) = 0;
        bVar8 = pcVar18[0xb09];
        *(undefined4 *)((int)param_4 + 0x14) = 0;
        *(uint *)((int)param_4 + 0x10) = (uint)bVar8;
        return 0;
      }
      goto LAB_000ab12c;
    }
    if (bVar8 != 0x43) goto LAB_000ab12c;
    if (pcVar21[2] != 'y') {
      return 0;
    }
    if (pcVar21[3] == '\x06') {
      if (pcVar21[4] != '\x7f') {
        return 0;
      }
      if (uVar15 < 8) {
        return 0;
      }
      cVar19 = pcVar21[5];
      if (cVar19 == '\x03') {
        if ((uVar15 < 10) || (0x7f < (byte)pcVar21[6])) goto LAB_000ab268;
        iVar11 = MaSndDrv_SetWtWave(param_1,(uint)(byte)pcVar21[6],1,(uchar *)(pcVar21 + 8),
                                    uVar15 - 9);
        goto LAB_000ab26c;
      }
      if (cVar19 == '\x10') {
        if (uVar15 == 8) {
          *(undefined4 *)((int)param_4 + 8) = 0;
          *(undefined4 *)((int)param_4 + 4) = 0x25;
          *(undefined4 *)((int)param_4 + 0xc) = 0;
          bVar8 = *(byte *)(*piVar14 + 6);
          *(undefined4 *)((int)param_4 + 0x14) = 0;
          *(uint *)((int)param_4 + 0x10) = bVar8 & 0x7f;
          return 0;
        }
      }
      else if ((cVar19 == '\0') && (uVar15 == 8)) {
        pcVar18[0xb08] = pcVar21[6] & 0x7f;
        *(undefined4 *)((int)param_4 + 4) = 0x19;
        *(undefined4 *)((int)param_4 + 8) = 0;
        *(undefined4 *)((int)param_4 + 0xc) = 0;
        bVar8 = pcVar18[0xb08];
        *(undefined4 *)((int)param_4 + 0x14) = 0;
        *(uint *)((int)param_4 + 0x10) = (uint)bVar8;
        return 0;
      }
      goto LAB_000ab12c;
    }
    if (pcVar21[3] != '\b') {
      return 0;
    }
    if (pcVar21[4] != '\x7f') {
      return 0;
    }
    if (uVar15 < 8) {
      return 0;
    }
    if (pcVar21[5] != '!') goto LAB_000ab12c;
    if (0x20 < uVar15) {
      bVar8 = pcVar21[0xb];
      uVar10 = (uint)bVar8;
      if (pcVar21[6] == '|') {
        if ((byte)pcVar21[7] < 10) {
          bVar1 = pcVar21[8];
          uVar13 = (byte)pcVar21[7] + 1;
          goto LAB_000ab24c;
        }
      }
      else if (((pcVar21[6] == '}') && (pcVar21[7] == '\0')) && ((byte)pcVar21[8] < 10)) {
        bVar1 = pcVar21[9];
        uVar13 = (byte)pcVar21[8] + 0x81;
LAB_000ab24c:
        if (uVar15 == 0x3a) {
          uVar15 = uVar10 & 1;
          if (((bVar8 & 1) == 0) && ((int)(uVar10 << 0x1e) < 0)) {
            pbVar16 = (byte *)(pcVar21 + 0xc);
            do {
              bVar8 = *pbVar16;
              if (pcVar21 + 0x39 <= pbVar16 + 1) goto LAB_000ab4ee;
              pbVar25 = pbVar16 + 8;
              pbVar22 = pbVar16 + 1;
              do {
                bVar8 = bVar8 << 1;
                pbVar16 = pbVar22 + 1;
                uVar15 = uVar15 + 1;
                *(byte *)(iVar29 + uVar15 + 0xab4eb) = *pbVar22 | bVar8 & 0x80;
                if (pbVar16 == (byte *)(pcVar21 + 0x39)) {
                  if (0x26 < uVar15) goto LAB_000ab4ee;
                  break;
                }
                if (0x26 < uVar15) goto LAB_000ab4ee;
                pbVar22 = pbVar16;
              } while (pbVar16 != pbVar25);
            } while( true );
          }
        }
        else if (uVar15 < 0x3b) {
          if (uVar15 == 0x28) {
            uVar15 = uVar10 & 3;
            if ((bVar8 & 3) == 0) {
              pbVar16 = (byte *)(pcVar21 + 0xc);
              do {
                bVar8 = *pbVar16;
                if (pcVar21 + 0x27 <= pbVar16 + 1) goto LAB_000ab866;
                pbVar25 = pbVar16 + 8;
                pbVar22 = pbVar16 + 1;
                do {
                  bVar8 = bVar8 << 1;
                  pbVar16 = pbVar22 + 1;
                  uVar15 = uVar15 + 1;
                  *(byte *)(iVar5 + uVar15 + 0xab765) = *pbVar22 | bVar8 & 0x80;
                  if (pbVar16 == (byte *)(pcVar21 + 0x27)) {
                    if (0x16 < uVar15) goto LAB_000ab866;
                    break;
                  }
                  if (0x16 < uVar15) goto LAB_000ab866;
                  pbVar22 = pbVar16;
                } while (pbVar16 != pbVar25);
              } while( true );
            }
          }
          else if (uVar15 == 0x33) {
            if (((int)(uVar10 << 0x1f) < 0) && ((uVar10 & 6) == 2)) {
              uVar15 = 0;
              pbVar16 = (byte *)(pcVar21 + 0xc);
              do {
                bVar8 = *pbVar16;
                if (pcVar21 + 0x32 <= pbVar16 + 1) goto LAB_000ab822;
                pbVar25 = pbVar16 + 8;
                pbVar22 = pbVar16 + 1;
                do {
                  bVar8 = bVar8 << 1;
                  pbVar16 = pbVar22 + 1;
                  uVar15 = uVar15 + 1;
                  *(byte *)(iVar4 + uVar15 + 0xab631) = *pbVar22 | bVar8 & 0x80;
                  if (pbVar16 == (byte *)(pcVar21 + 0x32)) {
                    if (0x20 < uVar15) goto LAB_000ab822;
                    break;
                  }
                  if (0x20 < uVar15) goto LAB_000ab822;
                  pbVar22 = pbVar16;
                } while (pbVar16 != pbVar25);
              } while( true );
            }
          }
          else if (((uVar15 == 0x21) && ((int)(uVar10 << 0x1f) < 0)) &&
                  (uVar15 = uVar10 & 6, (bVar8 & 6) == 0)) {
            pbVar16 = (byte *)(pcVar21 + 0xc);
            do {
              bVar8 = *pbVar16;
              if (pcVar21 + 0x20 <= pbVar16 + 1) goto LAB_000ab5f6;
              pbVar25 = pbVar16 + 8;
              pbVar22 = pbVar16 + 1;
              do {
                bVar8 = bVar8 << 1;
                pbVar16 = pbVar22 + 1;
                uVar15 = uVar15 + 1;
                *(byte *)(iVar27 + uVar15 + 0xab5cd) = *pbVar22 | bVar8 & 0x80;
                if (pbVar16 == (byte *)(pcVar21 + 0x20)) {
                  if (0x10 < uVar15) goto LAB_000ab5f6;
                  break;
                }
                if (0x10 < uVar15) goto LAB_000ab5f6;
                pbVar22 = pbVar16;
              } while (pbVar16 != pbVar25);
            } while( true );
          }
        }
        else if (uVar15 == 0x3f) {
          uVar15 = uVar10 & 3;
          if ((bVar8 & 3) == 0) {
            pbVar16 = (byte *)(pcVar21 + 0xc);
            do {
              bVar8 = *pbVar16;
              if (pcVar21 + 0x3e <= pbVar16 + 1) goto LAB_000ab800;
              pbVar25 = pbVar16 + 8;
              pbVar22 = pbVar16 + 1;
              do {
                bVar8 = bVar8 << 1;
                pbVar16 = pbVar22 + 1;
                uVar15 = uVar15 + 1;
                *(byte *)(iVar7 + uVar15 + 0xab821) = *pbVar22 | bVar8 & 0x80;
                if (pbVar16 == (byte *)(pcVar21 + 0x3e)) {
                  if (0x2a < uVar15) goto LAB_000ab800;
                  break;
                }
                if (0x2a < uVar15) goto LAB_000ab800;
                pbVar22 = pbVar16;
              } while (pbVar16 != pbVar25);
            } while( true );
          }
        }
        else if (uVar15 == 0x51) {
          uVar15 = uVar10 & 1;
          if (((bVar8 & 1) == 0) && ((int)(uVar10 << 0x1e) < 0)) {
            pbVar16 = (byte *)(pcVar21 + 0xc);
            do {
              bVar8 = *pbVar16;
              if (pcVar21 + 0x50 <= pbVar16 + 1) goto LAB_000ab7e0;
              pbVar25 = pbVar16 + 8;
              pbVar22 = pbVar16 + 1;
              do {
                bVar8 = bVar8 << 1;
                pbVar16 = pbVar22 + 1;
                uVar15 = uVar15 + 1;
                *(byte *)(iVar6 + uVar15 + 0xab7c9) = *pbVar22 | bVar8 & 0x80;
                if (pbVar16 == (byte *)(pcVar21 + 0x50)) {
                  if (0x3a < uVar15) goto LAB_000ab7e0;
                  break;
                }
                if (0x3a < uVar15) goto LAB_000ab7e0;
                pbVar22 = pbVar16;
              } while (pbVar16 != pbVar25);
            } while( true );
          }
        }
        else if ((uVar15 == 0x3d) && ((uVar10 & 5) == 5)) {
          uVar15 = 0;
          pbVar16 = (byte *)(pcVar21 + 0xc);
          do {
            bVar26 = *pbVar16;
            if (pcVar21 + 0x3c <= pbVar16 + 1) goto LAB_000ab64e;
            pbVar25 = pbVar16 + 8;
            pbVar22 = pbVar16 + 1;
            do {
              bVar26 = bVar26 << 1;
              pbVar16 = pbVar22 + 1;
              uVar15 = uVar15 + 1;
              *(byte *)(iVar11 + uVar15 + 0xab473) = *pbVar22 | bVar26 & 0x80;
              if (pbVar16 == (byte *)(pcVar21 + 0x3c)) {
                if (0x29 < uVar15) goto LAB_000ab64e;
                break;
              }
              if (0x29 < uVar15) goto LAB_000ab64e;
              pbVar22 = pbVar16;
            } while (pbVar16 != pbVar25);
          } while( true );
        }
      }
    }
LAB_000ab268:
    iVar11 = -0x18;
    goto LAB_000ab26c;
  }
  if (((pcVar21[2] == '\x7f') && (pcVar21[3] == '\t')) &&
     (((byte)pcVar21[4] - 1 < 3 && ((pcVar21[5] == -9 && (uVar15 == 6)))))) {
    *(undefined4 *)((int)param_4 + 8) = 0;
    *(undefined4 *)((int)param_4 + 0xc) = 0;
    bVar8 = 0;
    *(undefined4 *)((int)param_4 + 0x10) = 0;
    *(undefined4 *)((int)param_4 + 0x14) = 0;
    *(undefined4 *)((int)param_4 + 4) = 0x1a;
    pcVar18[0xb13] = '\0';
    pcVar18[0xb09] = '\x7f';
    cVar19 = '\x01';
    pcVar18[0xb0c] = '\0';
    pcVar18[0xb0d] = ' ';
    pcVar18[0xb08] = 'L';
    pcVar18[0xb0a] = '@';
    do {
      iVar11 = (uint)bVar8 * 0x10;
      if (bVar8 == 9) {
        pcVar18[0x5aa] = '\0';
        pcVar18[0x5ab] = 'x';
        pcVar18[0x5a8] = '\0';
        pcVar18[0x5a9] = 'x';
        pcVar18[0x5ac] = '\0';
        pcVar18[0x5ad] = 'd';
        pcVar18[0x5ae] = '\x7f';
        pcVar18[0x5b2] = '\x7f';
        pcVar18[0x5b3] = '\x7f';
        pcVar18[0x5b4] = '\0';
        pcVar18[0x5b5] = ' ';
        pcVar18[0x5b6] = '\x02';
      }
      else {
        (pcVar18 + iVar11 + 0x51a)[0] = '\0';
        (pcVar18 + iVar11 + 0x51a)[1] = 'y';
        (pcVar18 + iVar11 + 0x518)[0] = '\0';
        (pcVar18 + iVar11 + 0x518)[1] = 'y';
        pcVar18[iVar11 + 0x51c] = '\0';
        pcVar18[iVar11 + 0x51d] = 'd';
        pcVar18[iVar11 + 0x51e] = '\x7f';
        (pcVar18 + iVar11 + 0x522)[0] = '\x7f';
        (pcVar18 + iVar11 + 0x522)[1] = '\x7f';
        (pcVar18 + iVar11 + 0x524)[0] = '\0';
        (pcVar18 + iVar11 + 0x524)[1] = ' ';
        pcVar18[iVar11 + 0x526] = '\x02';
        if (cVar19 == '\x10') {
          return 0;
        }
      }
      cVar19 = cVar19 + '\x01';
      bVar8 = bVar8 + 1;
    } while( true );
  }
  goto LAB_000ab12c;
LAB_000ab4ee:
  uVar15 = 0x26;
  iVar11 = DAT_000ab894 + 0xab4fe;
  puVar24 = (uchar *)(DAT_000ab894 + 0xab587);
  uVar23 = (uint)*(byte *)(DAT_000ab894 + 0xab586);
  bVar8 = *(byte *)(DAT_000ab894 + 0xab588);
  goto LAB_000ab508;
LAB_000ab800:
  uVar15 = 0x2a;
  iVar11 = DAT_000ab8c4 + 0xab810;
  puVar24 = (uchar *)((int)&DAT_000ab898 + DAT_000ab8c4 + 1);
  uVar23 = (uint)*(byte *)((int)&DAT_000ab898 + DAT_000ab8c4);
  bVar8 = *(byte *)((int)&DAT_000ab898 + DAT_000ab8c4 + 2);
  goto LAB_000ab508;
LAB_000ab7e0:
  uVar15 = 0x3a;
  iVar11 = DAT_000ab8c0 + 0xab7f0;
  puVar24 = (uchar *)(DAT_000ab8c0 + 0xab879);
  uVar23 = (uint)*(byte *)(DAT_000ab8c0 + 0xab878);
  bVar8 = *(byte *)(DAT_000ab8c0 + 0xab87a);
  goto LAB_000ab508;
LAB_000ab64e:
  iVar11 = DAT_000ab8b0;
  uVar15 = (uint)*(byte *)(DAT_000ab8a8 + 0xab707);
  uVar23 = (uint)CONCAT11(*(undefined1 *)(DAT_000ab8a8 + 0xab6de),
                          *(undefined1 *)(DAT_000ab8a8 + 0xab6df));
  if ((int)(uVar15 << 0x18) < 0) {
    uVar15 = uVar15 & 0x7f;
    if (0x1c < uVar15) goto LAB_000ab268;
  }
  else {
    uVar15 = uVar15 | 0x80;
  }
  uVar28 = uVar10 & 2;
  if ((bVar8 & 2) == 0) {
    do {
      uVar12 = uVar28 + 1;
      *(char *)(iVar11 + uVar28 + 0xab744) = (char)(uVar10 & 2);
      uVar28 = uVar12;
    } while (uVar12 != 0x10);
  }
  iVar11 = DAT_000ab8ac + 0xab686;
  pcVar30 = (code *)(DAT_000ab8ac + 0xab710);
  uVar28 = 0x27;
  bVar8 = *(byte *)(DAT_000ab8ac + 0xab711);
  goto LAB_000ab632;
LAB_000ab822:
  uVar15 = (uint)*(byte *)((int)&DAT_000ab8d0 + DAT_000ab8c8 + 2);
  uVar23 = (uint)CONCAT11(*(undefined1 *)((int)&DAT_000ab8b0 + DAT_000ab8c8 + 2),
                          *(undefined1 *)((int)&DAT_000ab8b0 + DAT_000ab8c8 + 3));
  if ((int)(uVar15 << 0x18) < 0) {
    uVar15 = uVar15 & 0x7f;
    if (0x1c < uVar15) goto LAB_000ab268;
  }
  else {
    uVar15 = uVar15 | 0x80;
  }
  iVar11 = DAT_000ab8cc + 0xab84e;
  pcVar30 = MaMidCnv_Conv + DAT_000ab8cc + 4;
  uVar28 = 0x1e;
  bVar8 = *(byte *)(DAT_000ab8cc + 0xab8d9);
  goto LAB_000ab632;
LAB_000ab5f6:
  uVar15 = (uint)*(byte *)(DAT_000ab8a0 + 0xab696);
  uVar23 = (uint)CONCAT11(*(undefined1 *)(DAT_000ab8a0 + 0xab686),
                          *(undefined1 *)(DAT_000ab8a0 + 0xab687));
  if ((int)(uVar15 << 0x18) < 0) {
    uVar15 = uVar15 & 0x7f;
    if (0x1c < uVar15) goto LAB_000ab268;
  }
  else {
    uVar15 = uVar15 | 0x80;
  }
  uVar28 = 0xe;
  iVar11 = DAT_000ab8a4 + 0xab622;
  pcVar30 = (code *)(DAT_000ab8a4 + 0xab6ac);
  bVar8 = *(byte *)(DAT_000ab8a4 + 0xab6ad);
LAB_000ab632:
  *(byte *)(iVar11 + 0x8b) = bVar8 & 0xef;
  iVar11 = MaSndDrv_SetVoice(param_1,uVar13,bVar1 & 0x7f,uVar10,uVar23,uVar15,0,0,(uchar *)pcVar30,
                             uVar28);
  goto LAB_000ab26c;
LAB_000ab866:
  uVar15 = 0x16;
  iVar11 = DAT_000ab8d0 + 0xab876;
  puVar24 = (uchar *)(DAT_000ab8d0 + 0xab8ff);
  uVar23 = (uint)*(byte *)(DAT_000ab8d0 + 0xab8fe);
  bVar8 = *(byte *)(DAT_000ab8d0 + 0xab900);
LAB_000ab508:
  *(byte *)(iVar11 + 0x8a) = bVar8 & 0xef;
  iVar11 = MaSndDrv_SetVoice(param_1,uVar13,bVar1 & 0x7f,uVar10,uVar23,0,0,0,puVar24,uVar15);
LAB_000ab26c:
  *(undefined4 *)((int)param_4 + 8) = 0;
  *(undefined4 *)((int)param_4 + 4) = 0x1b;
  *(undefined4 *)((int)param_4 + 0xc) = 0;
  *(undefined4 *)((int)param_4 + 0x10) = 0;
  *(undefined4 *)((int)param_4 + 0x14) = 0;
  if (iVar11 < 0) {
LAB_000ab12c:
    iVar11 = 0;
    *(undefined4 *)((int)param_4 + 8) = 0;
    *(undefined4 *)((int)param_4 + 0xc) = 0;
    *(undefined4 *)((int)param_4 + 0x10) = 0;
    *(undefined4 *)((int)param_4 + 0x14) = 0;
    *(undefined4 *)((int)param_4 + 4) = 0x1b;
  }
  return iVar11;
}

