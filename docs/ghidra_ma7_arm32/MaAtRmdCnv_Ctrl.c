/* MaAtRmdCnv_Ctrl @ 00091234 5996B */


/* WARNING: Removing unreachable block (ram,0x0009153e) */
/* WARNING: Removing unreachable block (ram,0x00091518) */
/* WARNING: Removing unreachable block (ram,0x00092a16) */
/* YAMAHA::MaAtRmdCnv_Ctrl(_MACNV_SEQ_INFO*, unsigned int, unsigned int, void*) */

int YAMAHA::MaAtRmdCnv_Ctrl(_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3,void *param_4)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  int *piVar10;
  uchar *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  bool bVar22;
  bool bVar23;
  undefined4 local_40;
  uint local_3c;
  int local_38;
  int local_34;
  uint local_30;
  
  uVar14 = local_40;
  iVar12 = DAT_00092a34;
  iVar4 = DAT_00091eec;
  iVar13 = DAT_00091ee8 + 0x91246;
  if ((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
     (piVar10 = *(int **)(param_1 + 4), piVar10 == (int *)0x0)) {
    return -2;
  }
  if (*piVar10 != 1) {
    return -1;
  }
  if (param_2 != 0x37) {
    if (0x37 < param_2) {
      if (param_2 == 0x101) {
        if (param_3 < 0x40) {
          bVar1 = *(byte *)(piVar10 + 5);
        }
        else {
          bVar1 = *(byte *)((int)piVar10 + 0x15);
        }
        *(uint *)param_4 = *(int *)(iVar13 + DAT_00091eec) + (bVar1 + 0xb248) * 0x20;
        return 0;
      }
      if (param_2 != 0x10000000) {
        return -1;
      }
      if (param_3 == 0xa3) {
        local_40 = CONCAT31(local_40._1_3_,*(uchar *)param_4);
        iVar4 = ATRTMIDIMgr_DelWaveParam(*(uchar *)param_4);
        return iVar4;
      }
      if (param_3 < 0xa4) {
        if (param_3 == 0x26) {
          iVar4 = ATRTMIDIMgr_SetEffectParam(param_4);
          return iVar4;
        }
        if (param_3 < 0x27) {
          if (param_3 == 0x23) {
            iVar4 = ATRTMIDIMgr_SetWaveParam(param_4);
            if (iVar4 == 1) {
              iVar4 = *(byte *)param_4 + 1;
              iVar4 = MaSndDrv_SetWtWave(param_1,(uint)*(byte *)param_4,0,
                                         *(uchar **)(*(int *)(iVar13 + DAT_00092a34) + iVar4 * 8),
                                         *(uint *)(*(int *)(iVar13 + DAT_00092a34) + iVar4 * 8 + 4))
              ;
              return iVar4;
            }
            return iVar4;
          }
          if (param_3 < 0x24) {
            if (param_3 == 0xb) {
              iVar4 = ATRTMIDIMgr_SetStreamPan(param_4);
              if (iVar4 != 0) {
                return iVar4;
              }
              cVar2 = *(char *)((int)param_4 + 1);
              if (cVar2 == '\x01') {
                uVar14 = 0xff;
              }
              else if (cVar2 == '\0') {
                uVar14 = (uint)*(byte *)((int)param_4 + 2);
              }
              else {
                if (cVar2 != '\x02') {
                  return -1;
                }
                uVar14 = 0x80;
              }
              iVar4 = MaSmw_Ctrl(0x100,0x40000000,uVar14 | (*(byte *)param_4 - 1) * 0x100,
                                 (void *)0x0);
              return iVar4;
            }
            if (param_3 == 0x21) {
              iVar4 = ATRTMIDIMgr_SetVoiceParam(*(uint *)param_1,param_4);
              return iVar4;
            }
          }
          else {
            if (param_3 == 0x24) {
              iVar4 = ATRTMIDIMgr_SetHVChannel(param_4);
              if (iVar4 == 0) {
                iVar4 = MaSndDrv_SetHvCh(param_1,(uint)*(byte *)param_4);
                return iVar4;
              }
              return iVar4;
            }
            if (param_3 == 0x25) {
              iVar4 = ATRTMIDIMgr_SetStreamParam(param_4);
              if (iVar4 != 1) {
                return iVar4;
              }
              uVar14 = *(byte *)param_4 - 1;
              if (uVar14 < 0x20) {
                iVar4 = *(int *)(iVar13 + DAT_00092a34) + uVar14 * 0x14;
                uVar7 = *(byte *)((int)param_4 + 2) & 3 | (*(byte *)((int)param_4 + 1) & 1) << 6 |
                        (((*(byte *)((int)param_4 + 6) ^ 4) & 7) >> 2) << 7;
                *(uint *)(&UNK_00164428 + iVar4) = uVar7;
                uVar3 = *(ushort *)((int)param_4 + 4);
                *(uint *)(&UNK_0016442c + iVar4) = (uint)uVar3;
                iVar4 = MaSndDrv_SetStream(param_1,uVar14,uVar7,(uint)uVar3,0,
                                           *(uchar **)(&UNK_00164420 + iVar4),
                                           *(uint *)(&UNK_00164424 + iVar4));
                if (iVar4 != 0) {
                  MaSndDrv_DelStream(param_1,uVar14);
                  return iVar4;
                }
                return 0;
              }
              return 1;
            }
          }
        }
        else {
          if (param_3 == 0x2e) {
            iVar4 = ATRTMIDIMgr_SetHVScript(param_4,(uchar *)&local_40);
            if (iVar4 != 1) {
              return iVar4;
            }
            iVar4 = (local_40 & 0xff) + 0x2c8df;
            iVar12 = *(int *)(iVar13 + DAT_00092a34);
            iVar4 = MaSndDrv_SetHvScript
                              (param_1,*(uchar **)(iVar12 + iVar4 * 8),
                               *(uint *)(iVar12 + iVar4 * 8 + 4));
            if (*(uchar **)(&UNK_001648f8 + iVar12) != (uchar *)0x0) {
              iVar4 = MaSndDrv_SetHvVoice(param_1,0xff,*(uchar **)(&UNK_001648f8 + iVar12),
                                          *(uint *)(&UNK_001648fc + iVar12));
              return iVar4;
            }
            return iVar4;
          }
          if (param_3 < 0x2f) {
            if (param_3 == 0x28) {
              iVar4 = *(int *)(iVar13 + DAT_00092a34);
              bVar23 = param_4 <= &UNK_001646a4 + iVar4;
              bVar22 = &UNK_001646a4 + iVar4 == param_4;
              if (bVar23 && !bVar22) {
                bVar23 = &UNK_001646a0 + iVar4 <= (undefined *)((int)param_4 + 4);
                bVar22 = (undefined *)((int)param_4 + 4) == &UNK_001646a0 + iVar4;
              }
              if (((uint)param_4 & 3) != 0 || bVar23 && !bVar22) {
                (&UNK_001646a0)[iVar4] = *(undefined1 *)param_4;
                (&UNK_001646a1)[iVar4] = *(undefined1 *)((int)param_4 + 1);
                (&UNK_001646a2)[iVar4] = *(undefined1 *)((int)param_4 + 2);
                (&UNK_001646a3)[iVar4] = *(undefined1 *)((int)param_4 + 3);
                (&UNK_001646a4)[iVar4] = *(undefined1 *)((int)param_4 + 4);
                (&UNK_001646a5)[iVar4] = *(undefined1 *)((int)param_4 + 5);
                (&UNK_001646a6)[iVar4] = *(undefined1 *)((int)param_4 + 6);
                (&UNK_001646a7)[iVar4] = *(undefined1 *)((int)param_4 + 7);
                (&UNK_001646a8)[iVar4] = *(undefined1 *)((int)param_4 + 8);
                (&UNK_001646a9)[iVar4] = *(undefined1 *)((int)param_4 + 9);
                (&UNK_001646aa)[iVar4] = *(undefined1 *)((int)param_4 + 10);
                (&UNK_001646ab)[iVar4] = *(undefined1 *)((int)param_4 + 0xb);
                (&UNK_001646ac)[iVar4] = *(undefined1 *)((int)param_4 + 0xc);
                (&UNK_001646ad)[iVar4] = *(undefined1 *)((int)param_4 + 0xd);
                (&UNK_001646ae)[iVar4] = *(undefined1 *)((int)param_4 + 0xe);
                (&UNK_001646af)[iVar4] = *(undefined1 *)((int)param_4 + 0xf);
                (&UNK_001646b0)[iVar4] = *(undefined1 *)((int)param_4 + 0x10);
                (&UNK_001646b1)[iVar4] = *(undefined1 *)((int)param_4 + 0x11);
                (&UNK_001646b2)[iVar4] = *(undefined1 *)((int)param_4 + 0x12);
                (&UNK_001646b3)[iVar4] = *(undefined1 *)((int)param_4 + 0x13);
                (&UNK_001646b4)[iVar4] = *(undefined1 *)((int)param_4 + 0x14);
                (&UNK_001646b5)[iVar4] = *(undefined1 *)((int)param_4 + 0x15);
                (&UNK_001646b6)[iVar4] = *(undefined1 *)((int)param_4 + 0x16);
                (&UNK_001646b7)[iVar4] = *(undefined1 *)((int)param_4 + 0x17);
                (&UNK_001646b8)[iVar4] = *(undefined1 *)((int)param_4 + 0x18);
                (&UNK_001646b9)[iVar4] = *(undefined1 *)((int)param_4 + 0x19);
                (&UNK_001646ba)[iVar4] = *(undefined1 *)((int)param_4 + 0x1a);
                (&UNK_001646bb)[iVar4] = *(undefined1 *)((int)param_4 + 0x1b);
                (&UNK_001646bc)[iVar4] = *(undefined1 *)((int)param_4 + 0x1c);
                (&UNK_001646bd)[iVar4] = *(undefined1 *)((int)param_4 + 0x1d);
                (&UNK_001646be)[iVar4] = *(undefined1 *)((int)param_4 + 0x1e);
                (&UNK_001646bf)[iVar4] = *(undefined1 *)((int)param_4 + 0x1f);
              }
              else {
                *(undefined4 *)(&UNK_001646a0 + iVar4) = *(undefined4 *)param_4;
                *(undefined4 *)(&UNK_001646a4 + iVar4) = *(undefined4 *)((int)param_4 + 4);
                *(undefined4 *)(&UNK_001646a8 + iVar4) = *(undefined4 *)((int)param_4 + 8);
                *(undefined4 *)(&UNK_001646ac + iVar4) = *(undefined4 *)((int)param_4 + 0xc);
                *(undefined4 *)(&UNK_001646b0 + iVar4) = *(undefined4 *)((int)param_4 + 0x10);
                *(undefined4 *)(&UNK_001646b4 + iVar4) = *(undefined4 *)((int)param_4 + 0x14);
                *(undefined4 *)(&UNK_001646b8 + iVar4) = *(undefined4 *)((int)param_4 + 0x18);
                *(undefined4 *)(&UNK_001646bc + iVar4) = *(undefined4 *)((int)param_4 + 0x1c);
              }
              iVar12 = 2;
              MaSmw_Ctrl(0x100,0x20000000,(uint)(byte)(&UNK_001646a0)[iVar4],(void *)0x0);
              MaSmw_Ctrl(0x100,0x20000000,(byte)(&UNK_001646a1)[iVar4] | 0x10000,(void *)0x0);
              do {
                iVar18 = iVar12 + 2;
                MaSmw_Ctrl(0x100,0x20000000,
                           (uint)(byte)(&UNK_001646a0)[iVar4 + iVar12] | iVar12 << 0x10,(void *)0x0)
                ;
                iVar19 = iVar12 + 3;
                MaSmw_Ctrl(0x100,0x20000000,
                           (uint)(byte)(&UNK_001646a0)[iVar4 + iVar12 + 1] | (iVar12 + 1) * 0x10000,
                           (void *)0x0);
                iVar13 = iVar12 + 4;
                iVar12 = iVar12 + 5;
                MaSmw_Ctrl(0x100,0x20000000,
                           (uint)(byte)(&UNK_001646a0)[iVar4 + iVar18] | iVar18 * 0x10000,
                           (void *)0x0);
                MaSmw_Ctrl(0x100,0x20000000,
                           (uint)(byte)(&UNK_001646a0)[iVar4 + iVar19] | iVar19 * 0x10000,
                           (void *)0x0);
                iVar13 = MaSmw_Ctrl(0x100,0x20000000,
                                    (uint)(byte)(&UNK_001646a0)[iVar4 + iVar13] | iVar13 * 0x10000,
                                    (void *)0x0);
              } while (iVar12 != 0x20);
              return iVar13;
            }
            if (param_3 == 0x2c) {
              iVar4 = ATRTMIDIMgr_SetFmParam(param_4);
              if (iVar4 == 0) {
                iVar4 = MaSndDrv_SetFmExtWave
                                  (param_1,(uint)*(byte *)param_4,0,*(uchar **)((int)param_4 + 4),
                                   *(uint *)((int)param_4 + 8));
                return iVar4;
              }
              return iVar4;
            }
          }
          else {
            if (param_3 == 0x2f) {
              iVar4 = ATRTMIDIMgr_SetHVParam(param_4);
              if (iVar4 == 0) {
                iVar4 = MaSndDrv_SetHvVoice(param_1,0xff,
                                            *(uchar **)
                                             (&UNK_001648f8 + *(int *)(iVar13 + DAT_00092a34)),
                                            *(uint *)(&UNK_001648fc +
                                                     *(int *)(iVar13 + DAT_00092a34)));
                return iVar4;
              }
              return iVar4;
            }
            if (param_3 == 0xa1) {
              iVar4 = ATRTMIDIMgr_DelVoiceParam(*(uint *)param_1,param_4);
              return iVar4;
            }
          }
        }
      }
      else {
        if (param_3 == 0xf1) {
          iVar4 = ATRTMIDIMgr_Init();
          return iVar4;
        }
        if (param_3 < 0xf2) {
          if (param_3 == 0xac) {
            local_40 = CONCAT31(local_40._1_3_,*(uchar *)param_4);
            iVar4 = ATRTMIDIMgr_DelFmParam(*(uchar *)param_4);
            return iVar4;
          }
          if (param_3 < 0xad) {
            if (param_3 == 0xa5) {
              local_40 = CONCAT31(local_40._1_3_,*(uchar *)param_4);
              iVar4 = ATRTMIDIMgr_DelStreamParam(*(uchar *)param_4);
              if (iVar4 == 0) {
                iVar4 = MaSndDrv_DelStream(param_1,(local_40 & 0xff) - 1);
                return iVar4;
              }
              return iVar4;
            }
            if (param_3 == 0xa6) {
              local_40 = CONCAT31(local_40._1_3_,*(uchar *)param_4);
              iVar4 = ATRTMIDIMgr_DelEffectParam(*(uchar *)param_4);
              return iVar4;
            }
          }
          else {
            if (param_3 == 0xae) {
              local_40 = CONCAT31(local_40._1_3_,*(uchar *)param_4);
              iVar4 = ATRTMIDIMgr_DelHVScript(*(uchar *)param_4);
              return iVar4;
            }
            if (param_3 == 0xaf) {
              iVar4 = ATRTMIDIMgr_DelHVParam();
              return iVar4;
            }
          }
        }
        else {
          if (param_3 == 0xf4) {
            uVar7 = *(uint *)param_4;
            uVar14 = uVar7 & 0xf;
            if ((int)(uVar7 << 7) < 0) {
              uVar14 = uVar14 + 0x10;
            }
            uVar16 = (uVar7 & 0x7fff) >> 8;
            uVar7 = piVar10[uVar14 * 0x13 + 0xc];
            uVar9 = (uint)piVar10[uVar14 * 0x13 + 8] >> 8;
            if (uVar9 == 0x7c) {
              uVar14 = piVar10[uVar14 * 0x13 + 8] & 0x7f;
              iVar4 = *(int *)(iVar13 + DAT_00091eec);
              if (*(char *)(iVar4 + uVar14 * 0x80 + uVar7 + 0x420) == '\0') {
                iVar18 = uVar7 << 2;
                iVar19 = uVar14 << 2;
                iVar12 = 0;
              }
              else {
                iVar19 = uVar14 * 4;
                iVar18 = uVar7 * 4;
                if ((uVar16 < (byte)(&DAT_0012d420)[uVar7 * 5 + uVar14 * 0x280 + iVar4]) ||
                   ((byte)(&DAT_00132420)[uVar14 * 0x280 + uVar7 * 5 + iVar4] < uVar16)) {
                  if ((uVar16 < (byte)(&UNK_0012d421)[uVar7 * 5 + uVar14 * 0x280 + iVar4]) ||
                     ((byte)(&UNK_00132421)[uVar14 * 0x280 + uVar7 * 5 + iVar4] < uVar16)) {
                    if ((uVar16 < (byte)(&UNK_0012d422)[uVar7 * 5 + uVar14 * 0x280 + iVar4]) ||
                       ((byte)(&UNK_00132422)[uVar14 * 0x280 + uVar7 * 5 + iVar4] < uVar16)) {
                      if ((uVar16 < (byte)(&UNK_0012d423)[uVar7 * 5 + uVar14 * 0x280 + iVar4]) ||
                         ((byte)(&UNK_00132423)[uVar14 * 0x280 + uVar7 * 5 + iVar4] < uVar16)) {
                        if (uVar16 < (byte)(&UNK_0012d424)[uVar7 * 5 + uVar14 * 0x280 + iVar4]) {
                          return -1;
                        }
                        if ((byte)(&UNK_00132424)[uVar14 * 0x280 + uVar7 * 5 + iVar4] < uVar16) {
                          return -1;
                        }
                        iVar12 = 4;
                      }
                      else {
                        iVar12 = 3;
                      }
                    }
                    else {
                      iVar12 = 2;
                    }
                  }
                  else {
                    iVar12 = 1;
                  }
                }
                else {
                  iVar12 = 0;
                }
              }
            }
            else {
              if (uVar9 != 0x7d) {
                return 0;
              }
              uVar14 = uVar7 + 0x10;
              iVar18 = uVar16 << 2;
              iVar19 = uVar14 * 4;
              iVar12 = 0;
              iVar4 = *(int *)(iVar13 + DAT_00092a34);
              uVar7 = uVar16;
            }
            iVar20 = iVar18 + uVar7 + (iVar19 + uVar14) * 0x80;
            iVar13 = iVar4 + iVar20 + iVar12;
            bVar1 = *(byte *)(iVar13 + 0x1420);
            uVar16 = bVar1 & 1;
            if ((bVar1 & 1) == 0) {
              uVar21 = (uint)(byte)(&DAT_0015f420)[iVar13];
            }
            else {
              uVar16 = 1;
              uVar21 = *(uint *)(iVar4 + (iVar20 + iVar12 + 0x4dd08) * 4);
            }
            uVar15 = *(uint *)(iVar4 + (iVar18 + uVar7 + (iVar19 + uVar14) * 0x80 + iVar12 + 0x52d08
                                       ) * 4);
            iVar13 = iVar12 + iVar18 + uVar7 + (iVar19 + uVar14) * 0x80 + iVar4;
            if (uVar15 < 0x80) {
              uVar15 = uVar15 + 0x80;
            }
            else {
              uVar15 = uVar15 & 0x7f;
            }
            puVar11 = (uchar *)(uVar14 * 0x9100 + iVar12 * 0x3a + uVar7 * 0x122 + 0x6420 + iVar4);
            if (uVar9 == 0x7c) {
              iVar4 = MaSndDrv_SetVoice(param_1,(uint)*(byte *)(uVar14 + DAT_00092a44 + 0x92a1c),
                                        uVar7,uVar16,uVar21,uVar15,
                                        (uint)(byte)(&DAT_0012d420)[iVar13],
                                        (uint)(byte)(&DAT_00132420)[iVar13],puVar11,
                                        (uint)(byte)(&DAT_00128420)[iVar13]);
              return iVar4;
            }
            iVar4 = MaSndDrv_SetVoice(param_1,*(byte *)(uVar14 + DAT_00092a38 + 0x924f0) + 0x80,
                                      uVar7,uVar16,uVar21,uVar15,(uint)(byte)(&DAT_0012d420)[iVar13]
                                      ,(uint)(byte)(&DAT_00132420)[iVar13],puVar11,
                                      (uint)(byte)(&DAT_00128420)[iVar13]);
            return iVar4;
          }
          if (param_3 < 0xf5) {
            if (param_3 == 0xf2) {
              iVar4 = ATRTMIDIMgr_Term();
              return iVar4;
            }
            if (param_3 == 0xf3) {
              iVar4 = *(int *)(iVar13 + DAT_00091eec);
              if (*(uchar **)(iVar4 + 0x408) != (uchar *)0x0) {
                MaSndDrv_SetFmExtWave
                          (param_1,0xf,0,*(uchar **)(iVar4 + 0x408),*(uint *)(iVar4 + 0x40c));
              }
              if (*(uchar **)(iVar4 + 0x410) != (uchar *)0x0) {
                MaSndDrv_SetFmExtWave
                          (param_1,0x17,0,*(uchar **)(iVar4 + 0x410),*(uint *)(iVar4 + 0x414));
              }
              if (*(uchar **)(iVar4 + 0x418) != (uchar *)0x0) {
                MaSndDrv_SetFmExtWave
                          (param_1,0x1f,0,*(uchar **)(iVar4 + 0x418),*(uint *)(iVar4 + 0x41c));
              }
              uVar14 = 0;
              iVar12 = iVar4;
              do {
                if (*(uchar **)(iVar12 + 8) != (uchar *)0x0) {
                  MaSndDrv_SetWtWave(param_1,uVar14,0,*(uchar **)(iVar12 + 8),
                                     *(uint *)(iVar12 + 0xc));
                }
                if (*(uchar **)(iVar12 + 0x10) != (uchar *)0x0) {
                  MaSndDrv_SetWtWave(param_1,uVar14 + 1,0,*(uchar **)(iVar12 + 0x10),
                                     *(uint *)(iVar12 + 0x14));
                }
                if (*(uchar **)(iVar12 + 0x18) != (uchar *)0x0) {
                  MaSndDrv_SetWtWave(param_1,uVar14 + 2,0,*(uchar **)(iVar12 + 0x18),
                                     *(uint *)(iVar12 + 0x1c));
                }
                if (*(uchar **)(iVar12 + 0x20) != (uchar *)0x0) {
                  MaSndDrv_SetWtWave(param_1,uVar14 + 3,0,*(uchar **)(iVar12 + 0x20),
                                     *(uint *)(iVar12 + 0x24));
                }
                if (*(uchar **)(iVar12 + 0x28) != (uchar *)0x0) {
                  MaSndDrv_SetWtWave(param_1,uVar14 + 4,0,*(uchar **)(iVar12 + 0x28),
                                     *(uint *)(iVar12 + 0x2c));
                }
                if (*(uchar **)(iVar12 + 0x30) != (uchar *)0x0) {
                  MaSndDrv_SetWtWave(param_1,uVar14 + 5,0,*(uchar **)(iVar12 + 0x30),
                                     *(uint *)(iVar12 + 0x34));
                }
                if (*(uchar **)(iVar12 + 0x38) != (uchar *)0x0) {
                  MaSndDrv_SetWtWave(param_1,uVar14 + 6,0,*(uchar **)(iVar12 + 0x38),
                                     *(uint *)(iVar12 + 0x3c));
                }
                if (*(uchar **)(iVar12 + 0x40) != (uchar *)0x0) {
                  MaSndDrv_SetWtWave(param_1,uVar14 + 7,0,*(uchar **)(iVar12 + 0x40),
                                     *(uint *)(iVar12 + 0x44));
                }
                uVar14 = uVar14 + 8;
                iVar12 = iVar12 + 0x40;
              } while (uVar14 != 0x80);
              pbVar17 = &UNK_00164430 + iVar4;
              uVar14 = 0;
              do {
                if (*(uchar **)(pbVar17 + -0x10) != (uchar *)0x0) {
                  MaSndDrv_SetStream(param_1,uVar14,*(uint *)(pbVar17 + -8),*(uint *)(pbVar17 + -4),
                                     0,*(uchar **)(pbVar17 + -0x10),*(uint *)(pbVar17 + -0xc));
                  MaSmw_Ctrl(0x100,0x40000000,(uint)*pbVar17 | uVar14 << 8,(void *)0x0);
                }
                if (*(uchar **)(pbVar17 + 4) != (uchar *)0x0) {
                  MaSndDrv_SetStream(param_1,uVar14 + 1,*(uint *)(pbVar17 + 0xc),
                                     *(uint *)(pbVar17 + 0x10),0,*(uchar **)(pbVar17 + 4),
                                     *(uint *)(pbVar17 + 8));
                  MaSmw_Ctrl(0x100,0x40000000,(uint)pbVar17[0x14] | (uVar14 + 1) * 0x100,(void *)0x0
                            );
                }
                uVar7 = uVar14 + 4;
                if (*(uchar **)(pbVar17 + 0x18) != (uchar *)0x0) {
                  MaSndDrv_SetStream(param_1,uVar14 + 2,*(uint *)(pbVar17 + 0x20),
                                     *(uint *)(pbVar17 + 0x24),0,*(uchar **)(pbVar17 + 0x18),
                                     *(uint *)(pbVar17 + 0x1c));
                  MaSmw_Ctrl(0x100,0x40000000,(uint)pbVar17[0x28] | (uVar14 + 2) * 0x100,(void *)0x0
                            );
                }
                if (*(uchar **)(pbVar17 + 0x2c) != (uchar *)0x0) {
                  MaSndDrv_SetStream(param_1,uVar14 + 3,*(uint *)(pbVar17 + 0x34),
                                     *(uint *)(pbVar17 + 0x38),0,*(uchar **)(pbVar17 + 0x2c),
                                     *(uint *)(pbVar17 + 0x30));
                  MaSmw_Ctrl(0x100,0x40000000,(uint)pbVar17[0x3c] | (uVar14 + 3) * 0x100,(void *)0x0
                            );
                }
                pbVar17 = pbVar17 + 0x50;
                uVar14 = uVar7;
              } while (uVar7 != 0x20);
              iVar12 = 2;
              MaSmw_Ctrl(0x100,0x20000000,(uint)(byte)(&UNK_001646a0)[iVar4],(void *)0x0);
              MaSmw_Ctrl(0x100,0x20000000,(byte)(&UNK_001646a1)[iVar4] | 0x10000,(void *)0x0);
              do {
                iVar13 = iVar12 + 1;
                iVar19 = iVar12 + 2;
                iVar18 = iVar12 + 3;
                MaSmw_Ctrl(0x100,0x20000000,
                           (uint)(byte)(&UNK_001646a0)[iVar4 + iVar12] | iVar12 << 0x10,(void *)0x0)
                ;
                iVar20 = iVar12 + 4;
                iVar12 = iVar12 + 5;
                MaSmw_Ctrl(0x100,0x20000000,
                           (uint)(byte)(&UNK_001646a0)[iVar4 + iVar13] | iVar13 * 0x10000,
                           (void *)0x0);
                MaSmw_Ctrl(0x100,0x20000000,
                           (uint)(byte)(&UNK_001646a0)[iVar4 + iVar19] | iVar19 * 0x10000,
                           (void *)0x0);
                MaSmw_Ctrl(0x100,0x20000000,
                           (uint)(byte)(&UNK_001646a0)[iVar4 + iVar18] | iVar18 * 0x10000,
                           (void *)0x0);
                MaSmw_Ctrl(0x100,0x20000000,
                           (uint)(byte)(&UNK_001646a0)[iVar4 + iVar20] | iVar20 * 0x10000,
                           (void *)0x0);
              } while (iVar12 != 0x20);
              local_38 = *(int *)(&UNK_001646c0 + iVar4);
              local_30 = *(uint *)(&UNK_001646c8 + iVar4);
              local_40 = 0;
              local_34 = *(int *)(&UNK_001646c4 + iVar4);
              local_3c = 0;
              MaSmw_Ctrl(0x100,0x30000000,0,&local_40);
              local_34 = *(int *)(&UNK_001646d0 + iVar4);
              local_30 = *(uint *)(&UNK_001646d4 + iVar4);
              local_38 = *(int *)(&UNK_001646cc + iVar4);
              local_40 = 1;
              iVar13 = 0;
              local_3c = 0;
              MaSmw_Ctrl(0x100,0x30000000,0,&local_40);
              local_38 = *(int *)(&UNK_001646d8 + iVar4);
              local_34 = *(int *)(&UNK_001646dc + iVar4);
              local_40 = 2;
              local_3c = 0;
              local_30 = *(uint *)(&UNK_001646e0 + iVar4);
              MaSmw_Ctrl(0x100,0x30000000,0,&local_40);
              local_34 = *(int *)(&UNK_001646e8 + iVar4);
              local_38 = *(int *)(&UNK_001646e4 + iVar4);
              local_30 = *(uint *)(&UNK_001646ec + iVar4);
              local_3c = 0;
              local_40 = 3;
              MaSmw_Ctrl(0x100,0x30000000,0,&local_40);
              iVar12 = MaSndDrv_SetHvCh(param_1,(uint)(byte)(&UNK_001646f0)[iVar4]);
              do {
                if (*(uchar **)(&UNK_001646f8 + iVar4 + iVar13) != (uchar *)0x0) {
                  iVar12 = MaSndDrv_SetHvScript
                                     (param_1,*(uchar **)(&UNK_001646f8 + iVar4 + iVar13),
                                      *(uint *)(&UNK_001646fc + iVar4 + iVar13));
                }
                iVar18 = iVar4 + iVar13 + 8;
                if (*(uchar **)(&UNK_001646f8 + iVar18) != (uchar *)0x0) {
                  iVar12 = MaSndDrv_SetHvScript
                                     (param_1,*(uchar **)(&UNK_001646f8 + iVar18),
                                      *(uint *)(&UNK_001646fc + iVar18));
                }
                iVar18 = iVar13 + 0x10 + iVar4;
                if (*(uchar **)(&UNK_001646f8 + iVar18) != (uchar *)0x0) {
                  iVar12 = MaSndDrv_SetHvScript
                                     (param_1,*(uchar **)(&UNK_001646f8 + iVar18),
                                      *(uint *)(&UNK_001646fc + iVar18));
                }
                iVar18 = iVar13 + 0x18 + iVar4;
                if (*(uchar **)(&UNK_001646f8 + iVar18) != (uchar *)0x0) {
                  iVar12 = MaSndDrv_SetHvScript
                                     (param_1,*(uchar **)(&UNK_001646f8 + iVar18),
                                      *(uint *)(&UNK_001646fc + iVar18));
                }
                iVar18 = iVar13 + 0x20 + iVar4;
                if (*(uchar **)(&UNK_001646f8 + iVar18) != (uchar *)0x0) {
                  iVar12 = MaSndDrv_SetHvScript
                                     (param_1,*(uchar **)(&UNK_001646f8 + iVar18),
                                      *(uint *)(&UNK_001646fc + iVar18));
                }
                iVar18 = iVar13 + 0x28 + iVar4;
                if (*(uchar **)(&UNK_001646f8 + iVar18) != (uchar *)0x0) {
                  iVar12 = MaSndDrv_SetHvScript
                                     (param_1,*(uchar **)(&UNK_001646f8 + iVar18),
                                      *(uint *)(&UNK_001646fc + iVar18));
                }
                iVar18 = iVar13 + 0x30 + iVar4;
                if (*(uchar **)(&UNK_001646f8 + iVar18) != (uchar *)0x0) {
                  iVar12 = MaSndDrv_SetHvScript
                                     (param_1,*(uchar **)(&UNK_001646f8 + iVar18),
                                      *(uint *)(&UNK_001646fc + iVar18));
                }
                iVar18 = iVar13 + 0x38 + iVar4;
                if (*(uchar **)(&UNK_001646f8 + iVar18) != (uchar *)0x0) {
                  iVar12 = MaSndDrv_SetHvScript
                                     (param_1,*(uchar **)(&UNK_001646f8 + iVar18),
                                      *(uint *)(&UNK_001646fc + iVar18));
                }
                iVar13 = iVar13 + 0x40;
              } while (iVar13 != 0x200);
              if (*(uchar **)(&UNK_001648f8 + iVar4) != (uchar *)0x0) {
                iVar4 = MaSndDrv_SetHvVoice(param_1,0xff,*(uchar **)(&UNK_001648f8 + iVar4),
                                            *(uint *)(&UNK_001648fc + iVar4));
                return iVar4;
              }
              return iVar12;
            }
          }
          else if (param_3 == 0xf5) {
            uVar7 = *(uint *)param_4;
            uVar14 = uVar7 & 0xf;
            if ((int)(uVar7 << 7) < 0) {
              uVar14 = uVar14 + 0x10;
            }
            uVar9 = (uVar7 & 0x7fff) >> 8;
            uVar7 = piVar10[uVar14 * 0x13 + 0xc];
            uVar16 = (uint)piVar10[uVar14 * 0x13 + 8] >> 8;
            if (uVar16 == 0x7c) {
              uVar14 = piVar10[uVar14 * 0x13 + 8] & 0x7f;
              iVar4 = *(int *)(iVar13 + DAT_00092a34);
              if (*(char *)(iVar4 + uVar14 * 0x80 + uVar7 + 0x420) == '\0') {
                iVar18 = uVar7 << 2;
                iVar13 = uVar14 << 2;
                iVar12 = 0;
              }
              else {
                iVar13 = uVar14 * 4;
                iVar18 = uVar7 * 4;
                if ((uVar9 < (byte)(&DAT_0012d420)[uVar7 * 5 + uVar14 * 0x280 + iVar4]) ||
                   ((byte)(&DAT_00132420)[uVar14 * 0x280 + uVar7 * 5 + iVar4] < uVar9)) {
                  if ((uVar9 < (byte)(&UNK_0012d421)[uVar7 * 5 + uVar14 * 0x280 + iVar4]) ||
                     ((byte)(&UNK_00132421)[uVar14 * 0x280 + uVar7 * 5 + iVar4] < uVar9)) {
                    if ((uVar9 < (byte)(&UNK_0012d422)[uVar7 * 5 + uVar14 * 0x280 + iVar4]) ||
                       ((byte)(&UNK_00132422)[uVar14 * 0x280 + uVar7 * 5 + iVar4] < uVar9)) {
                      if ((uVar9 < (byte)(&UNK_0012d423)[uVar7 * 5 + uVar14 * 0x280 + iVar4]) ||
                         ((byte)(&UNK_00132423)[uVar14 * 0x280 + uVar7 * 5 + iVar4] < uVar9)) {
                        if (uVar9 < (byte)(&UNK_0012d424)[uVar7 * 5 + uVar14 * 0x280 + iVar4]) {
                          return -1;
                        }
                        if ((byte)(&UNK_00132424)[uVar14 * 0x280 + uVar7 * 5 + iVar4] < uVar9) {
                          return -1;
                        }
                        iVar12 = 4;
                      }
                      else {
                        iVar12 = 3;
                      }
                    }
                    else {
                      iVar12 = 2;
                    }
                  }
                  else {
                    iVar12 = 1;
                  }
                }
                else {
                  iVar12 = 0;
                }
              }
              iVar4 = MaSndDrv_DelVoice(param_1,(uint)*(byte *)((int)&UINT_000928f0 +
                                                               uVar14 + DAT_00092a40 + 2),uVar7,
                                        (uint)(byte)(&DAT_00128420)
                                                    [iVar12 + iVar4 + iVar18 + uVar7 +
                                                                      (iVar13 + uVar14) * 0x80]);
              return iVar4;
            }
            if (uVar16 == 0x7d) {
              iVar4 = MaSndDrv_DelVoice(param_1,*(byte *)(DAT_00092a3c + uVar7 + 0x9257e) + 0x80,
                                        uVar9,(uint)(byte)(&DAT_00128420)
                                                          [*(int *)(iVar13 + DAT_00092a34) +
                                                           uVar9 * 5 + (uVar7 + 0x10) * 0x280]);
              return iVar4;
            }
          }
          else if (param_3 == 0xf6) {
            *(undefined1 *)(piVar10 + 5) = 0;
            piVar10[1] = 0x7f;
            piVar10[2] = 0x40;
            *(undefined1 *)((int)piVar10 + 0x15) = 0x40;
            piVar10[3] = 0x2000;
            piVar10[4] = 0x4c;
            uVar14 = 0;
            piVar5 = piVar10;
            do {
              if ((uVar14 & 0xff) == 9) {
                piVar10[0xb3] = 0x7800;
              }
              else {
                if ((uVar14 & 0xff) < 0x10) {
                  iVar4 = 0x7900;
                }
                else {
                  iVar4 = 32000;
                }
                piVar5[8] = iVar4;
              }
              uVar7 = uVar14 + 1;
              piVar5 = piVar5 + 0x13;
              piVar10[uVar14 * 0x13 + 9] = 0x7f7f;
              piVar10[uVar14 * 0x13 + 7] = 0x7f;
              piVar10[uVar14 * 0x13 + 6] = 100;
              piVar10[uVar14 * 0x13 + 10] = 0x2000;
              piVar10[uVar14 * 0x13 + 0xb] = 0;
              piVar10[uVar14 * 0x13 + 0xc] = 0;
              piVar10[uVar14 * 0x13 + 0xd] = 0;
              piVar10[uVar14 * 0x13 + 0xe] = 0x40;
              piVar10[uVar14 * 0x13 + 0xf] = 0;
              piVar10[uVar14 * 0x13 + 0x10] = 0x2000;
              piVar10[uVar14 * 0x13 + 0x11] = 2;
              piVar10[uVar14 * 0x13 + 0x12] = 1;
              piVar10[uVar14 * 0x13 + 0x13] = 0x40;
              piVar10[uVar14 * 0x13 + 0x14] = 0x40;
              piVar10[uVar14 * 0x13 + 0x15] = 0x40;
              piVar10[uVar14 * 0x13 + 0x16] = 0x7f;
              piVar10[uVar14 * 0x13 + 0x18] = 0;
              piVar10[uVar14 * 0x13 + 0x17] = 0x28;
              uVar14 = uVar7;
            } while (uVar7 != 0x20);
          }
        }
      }
      return 0;
    }
    if (param_2 != 0x33) {
      if (param_2 != 0x36) {
        return -1;
      }
      iVar4 = MaAtRmdCnv_ChannelMessage(param_1,param_3,param_4);
      return iVar4;
    }
    if (param_4 == (void *)0x0) {
      return -2;
    }
    bVar1 = *(byte *)param_4;
    if (2 < bVar1) {
      return -2;
    }
    if (bVar1 == 0) {
      *(int *)((int)param_4 + 4) = piVar10[1];
      return 0;
    }
    uVar14 = (uint)*(byte *)((int)param_4 + 1);
    if (0x1f < uVar14) {
      return -2;
    }
    if (bVar1 != 2) {
      *(int *)((int)param_4 + 4) = piVar10[uVar14 * 0x13 + 6];
      return 0;
    }
    *(int *)((int)param_4 + 4) = piVar10[uVar14 * 0x13 + 7];
    return 0;
  }
  piVar5 = *(int **)param_4;
  pcVar8 = (char *)*piVar5;
  if ((pcVar8 == (char *)0x0) || (uVar7 = piVar5[1], uVar7 == 0)) {
    iVar4 = -2;
    goto LAB_00091478;
  }
  if (*pcVar8 != -0x10) {
LAB_00091474:
    iVar4 = -1;
    goto LAB_00091478;
  }
  cVar2 = pcVar8[1];
  if (cVar2 == '~') {
    if ((((pcVar8[2] == '\x7f') && (pcVar8[3] == '\t')) && ((byte)pcVar8[4] - 1 < 3)) &&
       ((pcVar8[5] == -9 && (uVar7 == 6)))) {
      *(undefined4 *)((int)param_4 + 8) = 0;
      *(undefined4 *)((int)param_4 + 0xc) = 0;
      *(undefined4 *)((int)param_4 + 0x10) = 0;
      *(undefined4 *)((int)param_4 + 4) = 0x1a;
      *(undefined4 *)((int)param_4 + 0x14) = 0;
      *(undefined1 *)(piVar10 + 5) = 0;
      piVar10[1] = 0x7f;
      piVar10[2] = 0x40;
      *(undefined1 *)((int)piVar10 + 0x15) = 0x40;
      piVar10[3] = 0x2000;
      piVar10[4] = 0x4c;
      uVar14 = 0;
      piVar5 = piVar10;
      do {
        if ((uVar14 & 0xff) == 9) {
          piVar10[0xb3] = 0x7800;
        }
        else {
          if ((uVar14 & 0xff) < 0x10) {
            iVar4 = 0x7900;
          }
          else {
            iVar4 = 32000;
          }
          piVar5[8] = iVar4;
        }
        uVar7 = uVar14 + 1;
        piVar5 = piVar5 + 0x13;
        piVar10[uVar14 * 0x13 + 9] = 0x7f7f;
        piVar10[uVar14 * 0x13 + 7] = 0x7f;
        piVar10[uVar14 * 0x13 + 6] = 100;
        piVar10[uVar14 * 0x13 + 10] = 0x2000;
        piVar10[uVar14 * 0x13 + 0xb] = 0;
        piVar10[uVar14 * 0x13 + 0xc] = 0;
        piVar10[uVar14 * 0x13 + 0xd] = 0;
        piVar10[uVar14 * 0x13 + 0xe] = 0x40;
        piVar10[uVar14 * 0x13 + 0xf] = 0;
        piVar10[uVar14 * 0x13 + 0x10] = 0x2000;
        piVar10[uVar14 * 0x13 + 0x11] = 2;
        piVar10[uVar14 * 0x13 + 0x12] = 1;
        piVar10[uVar14 * 0x13 + 0x13] = 0x40;
        piVar10[uVar14 * 0x13 + 0x14] = 0x40;
        piVar10[uVar14 * 0x13 + 0x15] = 0x40;
        piVar10[uVar14 * 0x13 + 0x16] = 0x7f;
        piVar10[uVar14 * 0x13 + 0x18] = 0;
        piVar10[uVar14 * 0x13 + 0x17] = 0x28;
        uVar14 = uVar7;
      } while (uVar7 != 0x20);
      return 0;
    }
    goto LAB_00091474;
  }
  if (cVar2 == '\x7f') {
    cVar2 = pcVar8[4];
    if (cVar2 == '\x03') {
      if (((pcVar8[2] == '\x7f') && (pcVar8[3] == '\x04')) &&
         ((-1 < (int)((uint)(byte)pcVar8[5] << 0x18) &&
          (((-1 < (int)((uint)(byte)pcVar8[6] << 0x18) && (pcVar8[7] == -9)) && (uVar7 == 8)))))) {
        uVar14 = (uint)(byte)pcVar8[5] | (uint)(byte)pcVar8[6] << 7;
        *(undefined4 *)((int)param_4 + 8) = 0;
        *(uint *)((int)param_4 + 0x10) = uVar14;
        *(undefined4 *)((int)param_4 + 0xc) = 0;
        *(undefined4 *)((int)param_4 + 0x14) = 0;
        *(undefined4 *)((int)param_4 + 4) = 0x18;
        piVar10[3] = uVar14;
        return 0;
      }
    }
    else if (cVar2 == '\x04') {
      if (((pcVar8[2] == '\x7f') && (pcVar8[3] == '\x04')) &&
         ((uVar14 = (uint)(byte)pcVar8[6], -1 < (int)(uVar14 << 0x18) &&
          ((pcVar8[7] == -9 && (uVar7 == 8)))))) {
        *(uint *)((int)param_4 + 0x10) = uVar14;
        *(undefined4 *)((int)param_4 + 8) = 0;
        *(undefined4 *)((int)param_4 + 0xc) = 0;
        *(undefined4 *)((int)param_4 + 0x14) = 0;
        *(undefined4 *)((int)param_4 + 4) = 0x17;
        piVar10[2] = uVar14;
        return 0;
      }
    }
    else if (((((cVar2 == '\x01') && (pcVar8[2] == '\x7f')) && (pcVar8[3] == '\x04')) &&
             ((-1 < (int)((uint)(byte)pcVar8[6] << 0x18) && (pcVar8[7] == -9)))) && (uVar7 == 8)) {
      piVar10[1] = (uint)(byte)pcVar8[6];
      *(undefined4 *)((int)param_4 + 8) = 0;
      *(undefined4 *)((int)param_4 + 4) = 0x16;
      *(undefined4 *)((int)param_4 + 0xc) = 0;
      iVar4 = piVar10[1];
      *(undefined4 *)((int)param_4 + 0x14) = 0;
      *(int *)((int)param_4 + 0x10) = iVar4;
      return 0;
    }
    goto LAB_00091474;
  }
  if ((cVar2 != 'C') || (uVar9 = uVar7 - 1, pcVar8[uVar9] != -9)) goto LAB_00091474;
  if (1 < uVar9) {
    iVar18 = 1;
    uVar16 = ~(1 - uVar9) & 0xf;
    if (uVar16 == 0) goto LAB_00091b3a;
    iVar18 = 2;
    if (-1 < pcVar8[2]) {
      if (uVar16 == 1) goto LAB_00091b3a;
      if ((uVar16 == 2) ||
         (((uVar16 == 3 ||
           (((uVar16 == 4 ||
             (((uVar16 == 5 ||
               (((uVar16 == 6 ||
                 (((uVar16 == 7 ||
                   (((uVar16 == 8 ||
                     (((uVar16 == 9 ||
                       (((uVar16 == 10 ||
                         (((uVar16 == 0xb ||
                           (((uVar16 == 0xc ||
                             (((uVar16 == 0xd ||
                               (((uVar16 == 0xe || (iVar18 = 3, -1 < pcVar8[3])) &&
                                (iVar18 = iVar18 + 1, -1 < pcVar8[iVar18])))) &&
                              (iVar18 = iVar18 + 1, -1 < pcVar8[iVar18])))) &&
                            (iVar18 = iVar18 + 1, -1 < pcVar8[iVar18])))) &&
                          (iVar18 = iVar18 + 1, -1 < pcVar8[iVar18])))) &&
                        (iVar18 = iVar18 + 1, -1 < pcVar8[iVar18])))) &&
                      (iVar18 = iVar18 + 1, -1 < pcVar8[iVar18])))) &&
                    (iVar18 = iVar18 + 1, -1 < pcVar8[iVar18])))) &&
                  (iVar18 = iVar18 + 1, -1 < pcVar8[iVar18])))) &&
                (iVar18 = iVar18 + 1, -1 < pcVar8[iVar18])))) &&
              (iVar18 = iVar18 + 1, -1 < pcVar8[iVar18])))) &&
            (iVar18 = iVar18 + 1, -1 < pcVar8[iVar18])))) &&
          (iVar18 = iVar18 + 1, -1 < pcVar8[iVar18])))) {
        iVar18 = iVar18 + 1;
        cVar2 = pcVar8[iVar18];
        while (-1 < cVar2) {
LAB_00091b3a:
          if (uVar9 == iVar18 + 1U) goto LAB_00091d3e;
          if (((((((pcVar8[iVar18 + 1U] < '\0') || (pcVar8[iVar18 + 2] < '\0')) ||
                 ((pcVar8[iVar18 + 3] < '\0' ||
                  ((pcVar8[iVar18 + 4] < '\0' || (pcVar8[iVar18 + 5] < '\0')))))) ||
                (pcVar8[iVar18 + 6] < '\0')) ||
               (((pcVar8[iVar18 + 7] < '\0' || (pcVar8[iVar18 + 8] < '\0')) ||
                (pcVar8[iVar18 + 9] < '\0')))) ||
              (((pcVar8[iVar18 + 10] < '\0' || (pcVar8[iVar18 + 0xb] < '\0')) ||
               ((pcVar8[iVar18 + 0xc] < '\0' ||
                ((pcVar8[iVar18 + 0xd] < '\0' || (pcVar8[iVar18 + 0xe] < '\0')))))))) ||
             (pcVar8[iVar18 + 0xf] < '\0')) break;
          iVar18 = iVar18 + 0x10;
          cVar2 = pcVar8[iVar18];
        }
      }
    }
    goto LAB_00091474;
  }
LAB_00091d3e:
  if (((pcVar8[2] != 'y') || (pcVar8[4] != '\x7f')) || (uVar7 < 8)) goto LAB_00091474;
  if (pcVar8[3] == '\x06') {
    switch(pcVar8[5]) {
    case '\0':
      if (uVar7 != 8) goto switchD_00091d72_caseD_c;
      bVar1 = pcVar8[6];
      *(undefined4 *)((int)param_4 + 8) = 0;
      *(undefined4 *)((int)param_4 + 0xc) = 0;
      *(uint *)((int)param_4 + 0x10) = bVar1 & 0x7f;
      iVar4 = 0;
      *(undefined4 *)((int)param_4 + 0x14) = 0;
      *(undefined4 *)((int)param_4 + 4) = 0x19;
      piVar10[4] = bVar1 & 0x7f;
      break;
    case '\x01':
    case '\x03':
switchD_00091d72_caseD_21:
      iVar4 = 0;
      *(undefined4 *)((int)param_4 + 8) = 0;
      *(undefined4 *)((int)param_4 + 0xc) = 0;
      *(undefined4 *)((int)param_4 + 0x10) = 0;
      *(undefined4 *)((int)param_4 + 0x14) = 0;
      *(undefined4 *)((int)param_4 + 4) = 0x1b;
      break;
    default:
      goto switchD_00091d72_caseD_c;
    case '\x10':
      if (uVar7 != 8) goto switchD_00091d72_caseD_c;
      bVar1 = pcVar8[6];
      iVar4 = 0;
      *(undefined4 *)((int)param_4 + 8) = 0;
      *(undefined4 *)((int)param_4 + 0xc) = 0;
      *(uint *)((int)param_4 + 0x10) = bVar1 & 0xf;
      *(undefined4 *)((int)param_4 + 0x14) = 0;
      *(undefined4 *)((int)param_4 + 4) = 0x25;
    }
    goto LAB_00091dd6;
  }
  if (pcVar8[3] != '\b') goto LAB_00091474;
  switch(pcVar8[5]) {
  case '\v':
    if (uVar7 != 10) goto LAB_000929f6;
    local_40._3_1_ = SUB41(uVar14,3);
    local_40._0_3_ = CONCAT12(pcVar8[8],CONCAT11(pcVar8[7],pcVar8[6] + '\x01'));
    iVar4 = ATRTMIDIMgr_SetStreamPan((_MASMW_SETSTREAMAUDIO_PAN *)&local_40);
    if (iVar4 == 0) {
      if (local_40._1_1_ == '\x01') {
        uVar14 = 0xff;
      }
      else if (local_40._1_1_ == '\0') {
        uVar14 = local_40 >> 0x10 & 0xff;
      }
      else if (local_40._1_1_ == '\x02') {
        uVar14 = 0x80;
      }
      else {
        uVar14 = 0;
      }
      iVar4 = MaSmw_Ctrl(0x100,0x40000000,uVar14 | ((local_40 & 0xff) - 1) * 0x100,(void *)0x0);
    }
    break;
  default:
    goto switchD_00091d72_caseD_c;
  case '!':
    goto switchD_00091d72_caseD_21;
  case ')':
    if (uVar7 == 0x12) {
      local_40 = (uint)(byte)pcVar8[6];
      local_30 = (uint)(byte)pcVar8[8] << 0xe | (uint)(byte)pcVar8[7] << 0x15 |
                 (uint)(byte)pcVar8[10] | (uint)(byte)pcVar8[9] << 7;
      local_38 = ((byte)pcVar8[0xb] - 0x40) * 3;
      local_3c = (uint)(byte)pcVar8[0xe] << 0xe | (uint)(byte)pcVar8[0xd] << 0x15 |
                 (uint)(byte)pcVar8[0x10] | (uint)(byte)pcVar8[0xf] << 7;
      local_34 = ((byte)pcVar8[0xc] - 0x40) * 3;
      if (local_40 < 4) {
        iVar4 = *(int *)(iVar13 + DAT_00092a34) + local_40 * 0xc;
        *(int *)(&UNK_001646c0 + iVar4) = local_38;
        *(int *)(&UNK_001646c4 + iVar4) = local_34;
        *(uint *)(&UNK_001646c8 + iVar4) = local_30;
        iVar4 = MaSmw_Ctrl(0x100,0x30000000,0,&local_40);
        break;
      }
    }
LAB_000929f6:
    iVar4 = -1;
    break;
  case '*':
    if (uVar7 == 8) {
      bVar1 = pcVar8[6];
      uVar14 = (uint)bVar1;
      if (-1 < (int)(uVar14 << 0x18)) {
        bVar22 = 0x7e < uVar14;
        if (uVar14 != 0x7f) {
          bVar22 = 0x1e < uVar14 - 0x40;
        }
        if (bVar22 && (uVar14 != 0x7f && uVar14 - 0x40 != 0x1f)) {
          if ((uVar14 != 0x3f) && (0x1f < uVar14)) goto switchD_00091d72_caseD_c;
          *(undefined4 *)((int)param_4 + 0x10) = 0;
          iVar4 = *(int *)(iVar13 + iVar12);
          bVar22 = (&UNK_001658e0)[iVar4] != '\x01';
          *(uint *)((int)param_4 + 0x14) = (uint)bVar22;
          (&UNK_001658e0)[iVar4] = bVar22;
          if (uVar14 != 0x3f) {
            *(byte *)(piVar10 + 5) = bVar1;
          }
        }
        else {
          *(undefined4 *)((int)param_4 + 0x10) = 1;
          iVar4 = *(int *)(iVar13 + iVar4);
          cVar2 = (&UNK_001658e1)[iVar4];
          if (cVar2 != '\x01') {
            uVar6 = 0x41;
          }
          else {
            uVar6 = 0x40;
          }
          *(undefined4 *)((int)param_4 + 0x14) = uVar6;
          (&UNK_001658e1)[iVar4] = cVar2 != '\x01';
          if (uVar14 != 0x7f) {
            *(byte *)((int)piVar10 + 0x15) = bVar1;
          }
        }
        *(undefined4 *)((int)param_4 + 8) = 0;
        iVar4 = 0;
        *(undefined4 *)((int)param_4 + 0xc) = 0;
        *(undefined4 *)((int)param_4 + 4) = 0x31;
        goto LAB_00091dd6;
      }
    }
    goto switchD_00091d72_caseD_c;
  case '-':
    if (pcVar8[6] == '\0') {
      *(undefined1 *)(*(int *)(iVar13 + DAT_00091eec) + 1) = 1;
      cVar2 = *(char *)(*piVar5 + 7);
      bVar1 = *(byte *)(*piVar5 + 8);
      *(undefined4 *)((int)param_4 + 8) = 0;
      *(undefined4 *)((int)param_4 + 0x10) = 0;
      *(uint *)((int)param_4 + 0xc) = (uint)bVar1;
      if (cVar2 == '[') {
        uVar6 = 0xb;
      }
      else {
        uVar6 = 0xc;
      }
      *(undefined4 *)((int)param_4 + 0x14) = 0;
      *(undefined4 *)((int)param_4 + 4) = uVar6;
      iVar4 = 0;
    }
    else {
      *(undefined1 *)(*(int *)(iVar13 + DAT_00091eec) + 1) = 0;
      uVar14 = (uint)*(byte *)(*piVar5 + 8);
      cVar2 = *(char *)(*piVar5 + 7);
      *(undefined4 *)((int)param_4 + 8) = 0;
      *(uint *)((int)param_4 + 0xc) = uVar14;
      if (cVar2 == '[') {
        *(undefined4 *)((int)param_4 + 4) = 0xb;
        iVar12 = piVar10[uVar14 * 0x13 + 0x17];
      }
      else {
        *(undefined4 *)((int)param_4 + 4) = 0xc;
        iVar12 = piVar10[uVar14 * 0x13 + 0x18];
      }
      iVar4 = 0;
      *(undefined4 *)((int)param_4 + 0x14) = 0;
      *(int *)((int)param_4 + 0x10) = iVar12;
    }
    goto LAB_00091dd6;
  }
  *(undefined4 *)((int)param_4 + 8) = 0;
  *(undefined4 *)((int)param_4 + 4) = 0x1b;
  *(undefined4 *)((int)param_4 + 0xc) = 0;
  *(undefined4 *)((int)param_4 + 0x10) = 0;
  *(undefined4 *)((int)param_4 + 0x14) = 0;
LAB_00091dd6:
  if (iVar4 < 0) {
LAB_00091478:
    *(undefined4 *)((int)param_4 + 8) = 0;
    *(undefined4 *)((int)param_4 + 4) = 0x1b;
    *(undefined4 *)((int)param_4 + 0xc) = 0;
    *(undefined4 *)((int)param_4 + 0x10) = 0;
    *(undefined4 *)((int)param_4 + 0x14) = 0;
  }
  return iVar4;
switchD_00091d72_caseD_c:
  iVar4 = -1;
  goto LAB_00091dd6;
}

