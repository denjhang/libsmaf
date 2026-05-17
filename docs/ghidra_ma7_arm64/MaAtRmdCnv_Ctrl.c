/* MaAtRmdCnv_Ctrl @ 001b2240 8592B */


/* WARNING: Removing unreachable block (ram,0x001b2480) */
/* WARNING: Removing unreachable block (ram,0x001b4380) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* YAMAHA::MaAtRmdCnv_Ctrl(_MACNV_SEQ_INFO*, unsigned int, unsigned int, void*) */

void YAMAHA::MaAtRmdCnv_Ctrl(_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3,void *param_4)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  ushort uVar10;
  uint uVar11;
  long lVar12;
  undefined *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uchar *puVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  char *pcVar21;
  uint uVar22;
  uint uVar23;
  int *piVar24;
  long lVar25;
  uint uVar26;
  char *pcVar27;
  ulong uVar28;
  undefined4 uVar29;
  int iVar30;
  undefined8 *puVar31;
  int *piVar32;
  long *plVar33;
  ulong uVar34;
  undefined8 *puVar35;
  byte bVar36;
  undefined8 uVar37;
  undefined4 local_20;
  uint local_1c;
  int local_18;
  int local_14;
  uint local_10;
  long local_8;
  
  uVar26 = local_20;
  puVar13 = PTR_gsAtRtmMgrInfo_00567da0;
  uVar37 = _DAT_001b43d0;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if ((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
     (piVar32 = *(int **)(param_1 + 8), piVar32 == (int *)0x0)) {
LAB_001b2fb8:
    iVar14 = -2;
    goto LAB_001b2330;
  }
  if (*piVar32 != 1) {
LAB_001b232c:
    iVar14 = -1;
    goto LAB_001b2330;
  }
  if (param_2 != 0x37) {
    if (param_2 < 0x38) {
      if (param_2 == 0x33) {
        if ((param_4 != (void *)0x0) && (bVar36 = *(byte *)param_4, bVar36 < 3)) {
          if (bVar36 == 0) {
            *(int *)((long)param_4 + 4) = piVar32[1];
            iVar14 = 0;
            goto LAB_001b2330;
          }
          bVar5 = *(byte *)((long)param_4 + 1);
          if (bVar5 < 0x20) {
            if (bVar36 == 2) {
              *(int *)((long)param_4 + 4) = piVar32[(ulong)bVar5 * 0x13 + 7];
              iVar14 = 0;
            }
            else {
              *(int *)((long)param_4 + 4) = piVar32[(ulong)bVar5 * 0x13 + 6];
              iVar14 = 0;
            }
            goto LAB_001b2330;
          }
        }
        goto LAB_001b2fb8;
      }
      if (param_2 == 0x36) {
        iVar14 = MaAtRmdCnv_ChannelMessage(param_1,param_3,param_4);
        goto LAB_001b2330;
      }
    }
    else {
      if (param_2 == 0x101) {
        if (param_3 < 0x40) {
          bVar36 = *(byte *)(piVar32 + 5);
        }
        else {
          bVar36 = *(byte *)((long)piVar32 + 0x15);
        }
        iVar14 = 0;
        *(undefined **)param_4 = PTR_gsAtRtmMgrInfo_00567da0 + ((ulong)bVar36 + 0xb285) * 0x20;
        goto LAB_001b2330;
      }
      if (param_2 == 0x10000000) {
        if (param_3 == 0xa3) {
          local_20 = CONCAT31(local_20._1_3_,*(uchar *)param_4);
          iVar14 = ATRTMIDIMgr_DelWaveParam(*(uchar *)param_4);
          goto LAB_001b2330;
        }
        if (param_3 < 0xa4) {
          if (param_3 == 0x26) {
            iVar14 = ATRTMIDIMgr_SetEffectParam(param_4);
            goto LAB_001b2330;
          }
          if (param_3 < 0x27) {
            if (param_3 == 0x23) {
              iVar14 = ATRTMIDIMgr_SetWaveParam(param_4);
              if (iVar14 == 1) {
                uVar26 = (uint)*(byte *)param_4;
                iVar14 = MaSndDrv_SetWtWave(param_1,uVar26,0,
                                            *(uchar **)
                                             (PTR_gsAtRtmMgrInfo_00567da0 +
                                             (long)(int)uVar26 * 0x10 + 8),
                                            *(uint *)(PTR_gsAtRtmMgrInfo_00567da0 +
                                                     (long)(int)uVar26 * 0x10 + 0x10));
              }
              goto LAB_001b2330;
            }
            if (param_3 < 0x24) {
              if (param_3 == 0xb) {
                iVar14 = ATRTMIDIMgr_SetStreamPan(param_4);
                if (iVar14 != 0) goto LAB_001b2330;
                cVar9 = *(char *)((long)param_4 + 1);
                if (cVar9 == '\x01') {
                  uVar26 = 0xff;
                }
                else if (cVar9 == '\0') {
                  uVar26 = (uint)*(byte *)((long)param_4 + 2);
                }
                else {
                  uVar26 = 0x80;
                  if (cVar9 != '\x02') goto LAB_001b232c;
                }
                iVar14 = MaSmw_Ctrl(0x100,0x40000000,uVar26 | (*(byte *)param_4 - 1) * 0x100,
                                    (void *)0x0);
                goto LAB_001b2330;
              }
              if (param_3 == 0x21) {
                iVar14 = ATRTMIDIMgr_SetVoiceParam(*(uint *)param_1,param_4);
                goto LAB_001b2330;
              }
            }
            else {
              if (param_3 == 0x24) {
                iVar14 = ATRTMIDIMgr_SetHVChannel(param_4);
                if (iVar14 == 0) {
                  iVar14 = MaSndDrv_SetHvCh(param_1,(uint)*(byte *)param_4);
                }
                goto LAB_001b2330;
              }
              if (param_3 == 0x25) {
                iVar14 = ATRTMIDIMgr_SetStreamParam(param_4);
                puVar13 = PTR_gsAtRtmMgrInfo_00567da0;
                if ((iVar14 == 1) && (uVar26 = *(byte *)param_4 - 1, uVar26 < 0x20)) {
                  uVar34 = (ulong)uVar26;
                  uVar10 = *(ushort *)((long)param_4 + 4);
                  puVar17 = *(uchar **)(PTR_gsAtRtmMgrInfo_00567da0 + uVar34 * 0x20 + 0x164838);
                  uVar11 = (*(byte *)((long)param_4 + 1) & 1) << 6 |
                           *(byte *)((long)param_4 + 2) & 3 |
                           ((uint)(((ulong)*(byte *)((long)param_4 + 6) ^ 4) >> 2) & 1) << 7;
                  uVar16 = *(uint *)(PTR_gsAtRtmMgrInfo_00567da0 + uVar34 * 0x20 + 0x164840);
                  *(uint *)(PTR_gsAtRtmMgrInfo_00567da0 + (uVar34 + 0xb242) * 0x20 + 8) = uVar11;
                  *(uint *)(puVar13 + (uVar34 + 0xb242) * 0x20 + 0xc) = (uint)uVar10;
                  iVar15 = MaSndDrv_SetStream(param_1,uVar26,uVar11,(uint)uVar10,0,puVar17,uVar16);
                  iVar14 = 0;
                  if (iVar15 != 0) {
                    MaSndDrv_DelStream(param_1,uVar26);
                    iVar14 = iVar15;
                  }
                }
                goto LAB_001b2330;
              }
            }
          }
          else {
            if (param_3 == 0x2e) {
              iVar14 = ATRTMIDIMgr_SetHVScript(param_4,(uchar *)&local_20);
              puVar13 = PTR_gsAtRtmMgrInfo_00567da0;
              if (iVar14 == 1) {
                iVar14 = MaSndDrv_SetHvScript
                                   (param_1,*(uchar **)
                                             (PTR_gsAtRtmMgrInfo_00567da0 +
                                             ((ulong)(byte)local_20._0_1_ + 0x164c8) * 0x10 + 0x10),
                                    *(uint *)(PTR_gsAtRtmMgrInfo_00567da0 +
                                             ((ulong)(byte)local_20._0_1_ + 0x164c8) * 0x10 + 0x18))
                ;
                puVar17 = *(uchar **)(puVar13 + 0x165090);
                if (puVar17 != (uchar *)0x0) {
                  iVar14 = MaSndDrv_SetHvVoice(param_1,0xff,puVar17,*(uint *)(puVar13 + 0x165098));
                }
              }
              goto LAB_001b2330;
            }
            if (param_3 < 0x2f) {
              if (param_3 == 0x28) {
                if ((PTR_gsAtRtmMgrInfo_00567da0 + 0x164c38 < (undefined *)((long)param_4 + 0x10U))
                   && (param_4 < PTR_gsAtRtmMgrInfo_00567da0 + 0x164c48)) {
                  PTR_gsAtRtmMgrInfo_00567da0[0x164c38] = *(undefined1 *)param_4;
                  puVar13[0x164c39] = *(undefined1 *)((long)param_4 + 1);
                  puVar13[0x164c3a] = *(undefined1 *)((long)param_4 + 2);
                  puVar13[0x164c3b] = *(undefined1 *)((long)param_4 + 3);
                  puVar13[0x164c3c] = *(undefined1 *)((long)param_4 + 4);
                  puVar13[0x164c3d] = *(undefined1 *)((long)param_4 + 5);
                  puVar13[0x164c3e] = *(undefined1 *)((long)param_4 + 6);
                  puVar13[0x164c3f] = *(undefined1 *)((long)param_4 + 7);
                  puVar13[0x164c40] = *(undefined1 *)((long)param_4 + 8);
                  puVar13[0x164c41] = *(undefined1 *)((long)param_4 + 9);
                  puVar13[0x164c42] = *(undefined1 *)((long)param_4 + 10);
                  puVar13[0x164c43] = *(undefined1 *)((long)param_4 + 0xb);
                  puVar13[0x164c44] = *(undefined1 *)((long)param_4 + 0xc);
                  puVar13[0x164c45] = *(undefined1 *)((long)param_4 + 0xd);
                  puVar13[0x164c46] = *(undefined1 *)((long)param_4 + 0xe);
                  puVar13[0x164c47] = *(undefined1 *)((long)param_4 + 0xf);
                  puVar13[0x164c48] = *(undefined1 *)((long)param_4 + 0x10);
                  puVar13[0x164c49] = *(undefined1 *)((long)param_4 + 0x11);
                  puVar13[0x164c4a] = *(undefined1 *)((long)param_4 + 0x12);
                  puVar13[0x164c4b] = *(undefined1 *)((long)param_4 + 0x13);
                  puVar13[0x164c4c] = *(undefined1 *)((long)param_4 + 0x14);
                  puVar13[0x164c4d] = *(undefined1 *)((long)param_4 + 0x15);
                  puVar13[0x164c4e] = *(undefined1 *)((long)param_4 + 0x16);
                  puVar13[0x164c4f] = *(undefined1 *)((long)param_4 + 0x17);
                  puVar13[0x164c50] = *(undefined1 *)((long)param_4 + 0x18);
                  puVar13[0x164c51] = *(undefined1 *)((long)param_4 + 0x19);
                  puVar13[0x164c52] = *(undefined1 *)((long)param_4 + 0x1a);
                  puVar13[0x164c53] = *(undefined1 *)((long)param_4 + 0x1b);
                  puVar13[0x164c54] = *(undefined1 *)((long)param_4 + 0x1c);
                  puVar13[0x164c55] = *(undefined1 *)((long)param_4 + 0x1d);
                  puVar13[0x164c56] = *(undefined1 *)((long)param_4 + 0x1e);
                  puVar13[0x164c57] = *(undefined1 *)((long)param_4 + 0x1f);
                }
                else {
                  uVar26 = (uint)-(long)param_4 & 0xf;
                  if ((-(long)param_4 & 0xfU) == 0) {
                    uVar34 = 0;
                    iVar14 = 0x20;
                    iVar20 = 2;
                    iVar30 = iVar14;
                    iVar15 = iVar14;
                  }
                  else {
                    PTR_gsAtRtmMgrInfo_00567da0[0x164c38] = *(undefined1 *)param_4;
                    uVar16 = uVar26;
                    if (uVar26 == 1) {
                      iVar15 = 0x1f;
                    }
                    else {
                      puVar13[0x164c39] = *(undefined1 *)((long)param_4 + 1);
                      if (uVar26 == 2) {
                        iVar15 = 0x1e;
                      }
                      else {
                        puVar13[0x164c3a] = *(undefined1 *)((long)param_4 + 2);
                        if (uVar26 == 3) {
                          iVar15 = 0x1d;
                        }
                        else {
                          puVar13[0x164c3b] = *(undefined1 *)((long)param_4 + 3);
                          if (uVar26 == 4) {
                            iVar15 = 0x1c;
                          }
                          else {
                            puVar13[0x164c3c] = *(undefined1 *)((long)param_4 + 4);
                            if (uVar26 == 5) {
                              iVar15 = 0x1b;
                            }
                            else {
                              puVar13[0x164c3d] = *(undefined1 *)((long)param_4 + 5);
                              if (uVar26 == 6) {
                                iVar15 = 0x1a;
                              }
                              else {
                                puVar13[0x164c3e] = *(undefined1 *)((long)param_4 + 6);
                                if (uVar26 == 7) {
                                  iVar15 = 0x19;
                                }
                                else {
                                  puVar13[0x164c3f] = *(undefined1 *)((long)param_4 + 7);
                                  if (uVar26 == 8) {
                                    iVar15 = 0x18;
                                  }
                                  else {
                                    puVar13[0x164c40] = *(undefined1 *)((long)param_4 + 8);
                                    puVar13 = PTR_gsAtRtmMgrInfo_00567da0;
                                    if (uVar26 == 9) {
                                      iVar15 = 0x17;
                                      uVar16 = 9;
                                    }
                                    else {
                                      PTR_gsAtRtmMgrInfo_00567da0[0x164c41] =
                                           *(undefined1 *)((long)param_4 + 9);
                                      if (uVar26 == 10) {
                                        iVar15 = 0x16;
                                      }
                                      else {
                                        puVar13[0x164c42] = *(undefined1 *)((long)param_4 + 10);
                                        if (uVar26 == 0xb) {
                                          iVar15 = 0x15;
                                        }
                                        else {
                                          puVar13[0x164c43] = *(undefined1 *)((long)param_4 + 0xb);
                                          if (uVar26 == 0xc) {
                                            iVar15 = 0x14;
                                          }
                                          else {
                                            puVar13[0x164c44] = *(undefined1 *)((long)param_4 + 0xc)
                                            ;
                                            if (uVar26 == 0xd) {
                                              iVar15 = 0x13;
                                            }
                                            else {
                                              puVar13[0x164c45] =
                                                   *(undefined1 *)((long)param_4 + 0xd);
                                              if (uVar26 == 0xf) {
                                                iVar15 = 0x11;
                                                puVar13[0x164c46] =
                                                     *(undefined1 *)((long)param_4 + 0xe);
                                              }
                                              else {
                                                iVar15 = 0x12;
                                                uVar16 = 0xe;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    uVar34 = (ulong)uVar26;
                    iVar14 = 0x20 - uVar26;
                    iVar20 = 1;
                    iVar30 = 0x10;
                    uVar26 = uVar16;
                  }
                  puVar31 = (undefined8 *)((long)param_4 + uVar34);
                  uVar37 = *puVar31;
                  puVar35 = (undefined8 *)(PTR_gsAtRtmMgrInfo_00567da0 + uVar34 + 0x164c38);
                  puVar35[1] = puVar31[1];
                  *puVar35 = uVar37;
                  if (iVar20 == 2) {
                    uVar37 = puVar31[2];
                    puVar35[3] = puVar31[3];
                    puVar35[2] = uVar37;
                  }
                  puVar13 = PTR_gsAtRtmMgrInfo_00567da0;
                  uVar26 = uVar26 + iVar30;
                  iVar15 = iVar15 - iVar30;
                  if (iVar30 != iVar14) {
                    PTR_gsAtRtmMgrInfo_00567da0[(ulong)uVar26 + 0x164c38] =
                         *(undefined1 *)((long)param_4 + (ulong)uVar26);
                    if (iVar15 != 1) {
                      puVar13[(ulong)(uVar26 + 1) + 0x164c38] =
                           *(undefined1 *)((long)param_4 + (ulong)(uVar26 + 1));
                      if (iVar15 != 2) {
                        puVar13[(ulong)(uVar26 + 2) + 0x164c38] =
                             *(undefined1 *)((long)param_4 + (ulong)(uVar26 + 2));
                        if (iVar15 != 3) {
                          puVar13[(ulong)(uVar26 + 3) + 0x164c38] =
                               *(undefined1 *)((long)param_4 + (ulong)(uVar26 + 3));
                          if (iVar15 != 4) {
                            puVar13[(ulong)(uVar26 + 4) + 0x164c38] =
                                 *(undefined1 *)((long)param_4 + (ulong)(uVar26 + 4));
                            if (iVar15 != 5) {
                              puVar13[(ulong)(uVar26 + 5) + 0x164c38] =
                                   *(undefined1 *)((long)param_4 + (ulong)(uVar26 + 5));
                              if (iVar15 != 6) {
                                puVar13[(ulong)(uVar26 + 6) + 0x164c38] =
                                     *(undefined1 *)((long)param_4 + (ulong)(uVar26 + 6));
                                if (iVar15 != 7) {
                                  puVar13[(ulong)(uVar26 + 7) + 0x164c38] =
                                       *(undefined1 *)((long)param_4 + (ulong)(uVar26 + 7));
                                  if (iVar15 != 8) {
                                    puVar13[(ulong)(uVar26 + 8) + 0x164c38] =
                                         *(undefined1 *)((long)param_4 + (ulong)(uVar26 + 8));
                                    puVar13 = PTR_gsAtRtmMgrInfo_00567da0;
                                    if (iVar15 != 9) {
                                      PTR_gsAtRtmMgrInfo_00567da0[(ulong)(uVar26 + 9) + 0x164c38] =
                                           *(undefined1 *)((long)param_4 + (ulong)(uVar26 + 9));
                                      if (iVar15 != 10) {
                                        puVar13[(ulong)(uVar26 + 10) + 0x164c38] =
                                             *(undefined1 *)((long)param_4 + (ulong)(uVar26 + 10));
                                        if (iVar15 != 0xb) {
                                          puVar13[(ulong)(uVar26 + 0xb) + 0x164c38] =
                                               *(undefined1 *)
                                                ((long)param_4 + (ulong)(uVar26 + 0xb));
                                          if (iVar15 != 0xc) {
                                            puVar13[(ulong)(uVar26 + 0xc) + 0x164c38] =
                                                 *(undefined1 *)
                                                  ((long)param_4 + (ulong)(uVar26 + 0xc));
                                            if (iVar15 != 0xd) {
                                              puVar13[(ulong)(uVar26 + 0xd) + 0x164c38] =
                                                   *(undefined1 *)
                                                    ((long)param_4 + (ulong)(uVar26 + 0xd));
                                              if (iVar15 != 0xe) {
                                                puVar13[(ulong)(uVar26 + 0xe) + 0x164c38] =
                                                     *(undefined1 *)
                                                      ((long)param_4 + (ulong)(uVar26 + 0xe));
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                puVar13 = PTR_gsAtRtmMgrInfo_00567da0;
                MaSmw_Ctrl(0x100,0x20000000,(uint)(byte)PTR_gsAtRtmMgrInfo_00567da0[0x164c38],
                           (void *)0x0);
                MaSmw_Ctrl(0x100,0x20000000,(byte)puVar13[0x164c39] | 0x10000,(void *)0x0);
                lVar25 = 2;
                do {
                  puVar13 = PTR_gsAtRtmMgrInfo_00567da0;
                  iVar14 = (int)lVar25;
                  MaSmw_Ctrl(0x100,0x20000000,
                             (uint)(byte)PTR_gsAtRtmMgrInfo_00567da0[lVar25 + 0x164c38] |
                             iVar14 << 0x10,(void *)0x0);
                  MaSmw_Ctrl(0x100,0x20000000,
                             (uint)(byte)puVar13[lVar25 + 0x164c39] | (iVar14 + 1) * 0x10000,
                             (void *)0x0);
                  MaSmw_Ctrl(0x100,0x20000000,
                             (uint)(byte)puVar13[lVar25 + 0x164c3a] | (iVar14 + 2) * 0x10000,
                             (void *)0x0);
                  lVar2 = lVar25 + 5;
                  MaSmw_Ctrl(0x100,0x20000000,
                             (uint)(byte)puVar13[lVar25 + 0x164c3b] | (iVar14 + 3) * 0x10000,
                             (void *)0x0);
                  iVar14 = MaSmw_Ctrl(0x100,0x20000000,
                                      (uint)(byte)puVar13[lVar25 + 0x164c3c] |
                                      (iVar14 + 4) * 0x10000,(void *)0x0);
                  lVar25 = lVar2;
                } while (lVar2 != 0x20);
                goto LAB_001b2330;
              }
              if (param_3 == 0x2c) {
                iVar14 = ATRTMIDIMgr_SetFmParam(param_4);
                if (iVar14 == 0) {
                  iVar14 = MaSndDrv_SetFmExtWave
                                     (param_1,(uint)*(byte *)param_4,0,
                                      *(uchar **)((long)param_4 + 8),*(uint *)((long)param_4 + 0x10)
                                     );
                }
                goto LAB_001b2330;
              }
            }
            else {
              if (param_3 == 0x2f) {
                iVar14 = ATRTMIDIMgr_SetHVParam(param_4);
                if (iVar14 == 0) {
                  iVar14 = MaSndDrv_SetHvVoice(param_1,0xff,
                                               *(uchar **)(PTR_gsAtRtmMgrInfo_00567da0 + 0x165090),
                                               *(uint *)(PTR_gsAtRtmMgrInfo_00567da0 + 0x165098));
                }
                goto LAB_001b2330;
              }
              if (param_3 == 0xa1) {
                iVar14 = ATRTMIDIMgr_DelVoiceParam(*(uint *)param_1,param_4);
                goto LAB_001b2330;
              }
            }
          }
        }
        else {
          if (param_3 == 0xf1) {
            iVar14 = ATRTMIDIMgr_Init();
            goto LAB_001b2330;
          }
          if (param_3 < 0xf2) {
            if (param_3 == 0xac) {
              local_20 = CONCAT31(local_20._1_3_,*(uchar *)param_4);
              iVar14 = ATRTMIDIMgr_DelFmParam(*(uchar *)param_4);
              goto LAB_001b2330;
            }
            if (param_3 < 0xad) {
              if (param_3 == 0xa5) {
                local_20 = CONCAT31(local_20._1_3_,*(uchar *)param_4);
                iVar14 = ATRTMIDIMgr_DelStreamParam(*(uchar *)param_4);
                if (iVar14 == 0) {
                  iVar14 = MaSndDrv_DelStream(param_1,(local_20 & 0xff) - 1);
                }
                goto LAB_001b2330;
              }
              if (param_3 == 0xa6) {
                local_20 = CONCAT31(local_20._1_3_,*(uchar *)param_4);
                iVar14 = ATRTMIDIMgr_DelEffectParam(*(uchar *)param_4);
                goto LAB_001b2330;
              }
            }
            else {
              if (param_3 == 0xae) {
                local_20 = CONCAT31(local_20._1_3_,*(uchar *)param_4);
                iVar14 = ATRTMIDIMgr_DelHVScript(*(uchar *)param_4);
                goto LAB_001b2330;
              }
              if (param_3 == 0xaf) {
                iVar14 = ATRTMIDIMgr_DelHVParam();
                goto LAB_001b2330;
              }
            }
          }
          else {
            if (param_3 == 0xf4) {
              uVar16 = *(uint *)param_4;
              uVar26 = uVar16 & 0xf;
              if ((uVar16 >> 0x18 & 1) != 0) {
                uVar26 = uVar26 + 0x10;
              }
              uVar34 = (ulong)(uVar16 >> 8) & 0x7f;
              uVar18 = (uint)uVar34;
              uVar16 = piVar32[(ulong)uVar26 * 0x13 + 0xc];
              uVar11 = (uint)piVar32[(ulong)uVar26 * 0x13 + 8] >> 8;
              if (uVar11 == 0x7c) {
                uVar26 = piVar32[(ulong)uVar26 * 0x13 + 8] & 0x7f;
                uVar28 = (ulong)uVar26;
                uVar34 = (ulong)uVar16;
                if (PTR_gsAtRtmMgrInfo_00567da0[uVar34 + uVar28 * 0x80 + 0x838] == '\0') {
                  lVar25 = uVar34 * 5 + uVar28 * 0x280;
                  uVar22 = (uint)(byte)PTR_gsAtRtmMgrInfo_00567da0[lVar25 + 0x12d838];
                  uVar23 = (uint)(byte)PTR_gsAtRtmMgrInfo_00567da0[lVar25 + 0x132838];
                  lVar25 = 0;
                }
                else {
                  uVar22 = (uint)(byte)PTR_gsAtRtmMgrInfo_00567da0
                                       [uVar34 * 5 + uVar28 * 0x280 + 0x12d838];
                  if ((uVar18 < (byte)PTR_gsAtRtmMgrInfo_00567da0
                                      [uVar34 * 5 + uVar28 * 0x280 + 0x12d838]) ||
                     (uVar23 = (uint)(byte)PTR_gsAtRtmMgrInfo_00567da0
                                           [uVar34 * 5 + uVar28 * 0x280 + 0x132838],
                     (byte)PTR_gsAtRtmMgrInfo_00567da0[uVar34 * 5 + uVar28 * 0x280 + 0x132838] <
                     uVar18)) {
                    uVar22 = (uint)(byte)PTR_gsAtRtmMgrInfo_00567da0
                                         [uVar34 * 5 + uVar28 * 0x280 + 0x12d839];
                    if ((uVar18 < (byte)PTR_gsAtRtmMgrInfo_00567da0
                                        [uVar34 * 5 + uVar28 * 0x280 + 0x12d839]) ||
                       (uVar23 = (uint)(byte)PTR_gsAtRtmMgrInfo_00567da0
                                             [uVar34 * 5 + uVar28 * 0x280 + 0x132839],
                       (byte)PTR_gsAtRtmMgrInfo_00567da0[uVar34 * 5 + uVar28 * 0x280 + 0x132839] <
                       uVar18)) {
                      uVar22 = (uint)(byte)PTR_gsAtRtmMgrInfo_00567da0
                                           [uVar34 * 5 + uVar28 * 0x280 + 0x12d83a];
                      if ((uVar18 < (byte)PTR_gsAtRtmMgrInfo_00567da0
                                          [uVar34 * 5 + uVar28 * 0x280 + 0x12d83a]) ||
                         (uVar23 = (uint)(byte)PTR_gsAtRtmMgrInfo_00567da0
                                               [uVar34 * 5 + uVar28 * 0x280 + 0x13283a],
                         (byte)PTR_gsAtRtmMgrInfo_00567da0[uVar34 * 5 + uVar28 * 0x280 + 0x13283a] <
                         uVar18)) {
                        uVar22 = (uint)(byte)PTR_gsAtRtmMgrInfo_00567da0
                                             [uVar34 * 5 + uVar28 * 0x280 + 0x12d83b];
                        if ((uVar18 < (byte)PTR_gsAtRtmMgrInfo_00567da0
                                            [uVar34 * 5 + uVar28 * 0x280 + 0x12d83b]) ||
                           (uVar23 = (uint)(byte)PTR_gsAtRtmMgrInfo_00567da0
                                                 [uVar34 * 5 + uVar28 * 0x280 + 0x13283b],
                           (byte)PTR_gsAtRtmMgrInfo_00567da0[uVar34 * 5 + uVar28 * 0x280 + 0x13283b]
                           < uVar18)) {
                          iVar14 = -1;
                          uVar22 = (uint)(byte)PTR_gsAtRtmMgrInfo_00567da0
                                               [uVar34 * 5 + uVar28 * 0x280 + 0x12d83c];
                          if ((uVar18 < (byte)PTR_gsAtRtmMgrInfo_00567da0
                                              [uVar34 * 5 + uVar28 * 0x280 + 0x12d83c]) ||
                             (uVar23 = (uint)(byte)PTR_gsAtRtmMgrInfo_00567da0
                                                   [uVar34 * 5 + uVar28 * 0x280 + 0x13283c],
                             (byte)PTR_gsAtRtmMgrInfo_00567da0
                                   [uVar34 * 5 + uVar28 * 0x280 + 0x13283c] < uVar18))
                          goto LAB_001b2330;
                          lVar25 = 4;
                        }
                        else {
                          lVar25 = 3;
                        }
                      }
                      else {
                        lVar25 = 2;
                      }
                    }
                    else {
                      lVar25 = 1;
                    }
                  }
                  else {
                    lVar25 = 0;
                  }
                  uVar34 = (ulong)uVar16;
                }
              }
              else {
                if (uVar11 != 0x7d) goto LAB_001b2e04;
                uVar26 = uVar16 + 0x10;
                uVar28 = (ulong)uVar26;
                lVar25 = 0;
                lVar2 = uVar34 * 5 + uVar28 * 0x280;
                uVar22 = (uint)(byte)PTR_gsAtRtmMgrInfo_00567da0[lVar2 + 0x12d838];
                uVar23 = (uint)(byte)PTR_gsAtRtmMgrInfo_00567da0[lVar2 + 0x132838];
                uVar16 = uVar18;
              }
              lVar2 = uVar34 * 5 + uVar28 * 0x280;
              lVar12 = lVar25 + lVar2;
              uVar18 = (byte)PTR_gsAtRtmMgrInfo_00567da0[lVar12 + 0x1838] & 1;
              if ((PTR_gsAtRtmMgrInfo_00567da0[lVar12 + 0x1838] & 1) == 0) {
                uVar19 = (uint)(byte)PTR_gsAtRtmMgrInfo_00567da0[lVar12 + 0x15f838];
              }
              else {
                uVar18 = 1;
                uVar19 = *(uint *)(PTR_gsAtRtmMgrInfo_00567da0 +
                                  (lVar2 + lVar25 + 0x4d000) * 4 + 0x3838);
              }
              lVar2 = uVar34 * 5 + uVar28 * 0x280;
              uVar4 = *(uint *)(PTR_gsAtRtmMgrInfo_00567da0 +
                               (lVar2 + lVar25 + 0x52000) * 4 + 0x3838);
              uVar3 = uVar4 + 0x80;
              if (0x7f < uVar4) {
                uVar3 = uVar4 & 0x7f;
              }
              if (uVar11 == 0x7c) {
                iVar14 = MaSndDrv_SetVoice(param_1,(uint)(byte)(&DAT_0048d0b0)[uVar28],uVar16,uVar18
                                           ,uVar19,uVar3,uVar22,uVar23,
                                           PTR_gsAtRtmMgrInfo_00567da0 +
                                           uVar34 * 0x122 + lVar25 * 0x3a + uVar28 * 0x9100 + 0x6838
                                           ,(uint)(byte)PTR_gsAtRtmMgrInfo_00567da0
                                                        [lVar25 + lVar2 + 0x128838]);
              }
              else {
                iVar14 = MaSndDrv_SetVoice(param_1,(byte)(&DAT_0048d0b0)[uVar26 - 0x10] + 0x80,
                                           uVar16,uVar18,uVar19,uVar3,uVar22,uVar23,
                                           PTR_gsAtRtmMgrInfo_00567da0 +
                                           uVar34 * 0x122 + lVar25 * 0x3a + uVar28 * 0x9100 + 0x6838
                                           ,(uint)(byte)PTR_gsAtRtmMgrInfo_00567da0
                                                        [lVar25 + lVar2 + 0x128838]);
              }
              goto LAB_001b2330;
            }
            if (param_3 < 0xf5) {
              if (param_3 == 0xf2) {
                iVar14 = ATRTMIDIMgr_Term();
                goto LAB_001b2330;
              }
              if (param_3 == 0xf3) {
                if (*(uchar **)(PTR_gsAtRtmMgrInfo_00567da0 + 0x808) != (uchar *)0x0) {
                  MaSndDrv_SetFmExtWave
                            (param_1,0xf,0,*(uchar **)(PTR_gsAtRtmMgrInfo_00567da0 + 0x808),
                             *(uint *)(PTR_gsAtRtmMgrInfo_00567da0 + 0x810));
                }
                if (*(uchar **)(puVar13 + 0x818) != (uchar *)0x0) {
                  MaSndDrv_SetFmExtWave
                            (param_1,0x17,0,*(uchar **)(puVar13 + 0x818),*(uint *)(puVar13 + 0x820))
                  ;
                }
                if (*(uchar **)(puVar13 + 0x828) != (uchar *)0x0) {
                  MaSndDrv_SetFmExtWave
                            (param_1,0x1f,0,*(uchar **)(puVar13 + 0x828),*(uint *)(puVar13 + 0x830))
                  ;
                }
                uVar26 = 0;
                puVar31 = (undefined8 *)(PTR_gsAtRtmMgrInfo_00567da0 + 8);
                do {
                  if ((uchar *)*puVar31 != (uchar *)0x0) {
                    MaSndDrv_SetWtWave(param_1,uVar26,0,(uchar *)*puVar31,*(uint *)(puVar31 + 1));
                  }
                  if ((uchar *)puVar31[2] != (uchar *)0x0) {
                    MaSndDrv_SetWtWave(param_1,uVar26 + 1,0,(uchar *)puVar31[2],
                                       *(uint *)(puVar31 + 3));
                  }
                  if ((uchar *)puVar31[4] != (uchar *)0x0) {
                    MaSndDrv_SetWtWave(param_1,uVar26 + 2,0,(uchar *)puVar31[4],
                                       *(uint *)(puVar31 + 5));
                  }
                  if ((uchar *)puVar31[6] != (uchar *)0x0) {
                    MaSndDrv_SetWtWave(param_1,uVar26 + 3,0,(uchar *)puVar31[6],
                                       *(uint *)(puVar31 + 7));
                  }
                  if ((uchar *)puVar31[8] != (uchar *)0x0) {
                    MaSndDrv_SetWtWave(param_1,uVar26 + 4,0,(uchar *)puVar31[8],
                                       *(uint *)(puVar31 + 9));
                  }
                  if ((uchar *)puVar31[10] != (uchar *)0x0) {
                    MaSndDrv_SetWtWave(param_1,uVar26 + 5,0,(uchar *)puVar31[10],
                                       *(uint *)(puVar31 + 0xb));
                  }
                  if ((uchar *)puVar31[0xc] != (uchar *)0x0) {
                    MaSndDrv_SetWtWave(param_1,uVar26 + 6,0,(uchar *)puVar31[0xc],
                                       *(uint *)(puVar31 + 0xd));
                  }
                  if ((uchar *)puVar31[0xe] != (uchar *)0x0) {
                    MaSndDrv_SetWtWave(param_1,uVar26 + 7,0,(uchar *)puVar31[0xe],
                                       *(uint *)(puVar31 + 0xf));
                  }
                  uVar26 = uVar26 + 8;
                  puVar31 = puVar31 + 0x10;
                } while (uVar26 != 0x80);
                uVar26 = 0;
                puVar31 = (undefined8 *)(PTR_gsAtRtmMgrInfo_00567da0 + 0x164838);
                do {
                  if ((uchar *)*puVar31 != (uchar *)0x0) {
                    MaSndDrv_SetStream(param_1,uVar26,*(uint *)(puVar31 + 2),
                                       *(uint *)((long)puVar31 + 0x14),0,(uchar *)*puVar31,
                                       *(uint *)(puVar31 + 1));
                    MaSmw_Ctrl(0x100,0x40000000,(uint)*(byte *)(puVar31 + 3) | uVar26 << 8,
                               (void *)0x0);
                  }
                  if ((uchar *)puVar31[4] != (uchar *)0x0) {
                    MaSndDrv_SetStream(param_1,uVar26 + 1,*(uint *)(puVar31 + 6),
                                       *(uint *)((long)puVar31 + 0x34),0,(uchar *)puVar31[4],
                                       *(uint *)(puVar31 + 5));
                    MaSmw_Ctrl(0x100,0x40000000,(uint)*(byte *)(puVar31 + 7) | (uVar26 + 1) * 0x100,
                               (void *)0x0);
                  }
                  if ((uchar *)puVar31[8] != (uchar *)0x0) {
                    MaSndDrv_SetStream(param_1,uVar26 + 2,*(uint *)(puVar31 + 10),
                                       *(uint *)((long)puVar31 + 0x54),0,(uchar *)puVar31[8],
                                       *(uint *)(puVar31 + 9));
                    MaSmw_Ctrl(0x100,0x40000000,
                               (uint)*(byte *)(puVar31 + 0xb) | (uVar26 + 2) * 0x100,(void *)0x0);
                  }
                  if ((uchar *)puVar31[0xc] != (uchar *)0x0) {
                    MaSndDrv_SetStream(param_1,uVar26 + 3,*(uint *)(puVar31 + 0xe),
                                       *(uint *)((long)puVar31 + 0x74),0,(uchar *)puVar31[0xc],
                                       *(uint *)(puVar31 + 0xd));
                    MaSmw_Ctrl(0x100,0x40000000,
                               (uint)*(byte *)(puVar31 + 0xf) | (uVar26 + 3) * 0x100,(void *)0x0);
                  }
                  puVar13 = PTR_gsAtRtmMgrInfo_00567da0;
                  uVar26 = uVar26 + 4;
                  puVar31 = puVar31 + 0x10;
                } while (uVar26 != 0x20);
                MaSmw_Ctrl(0x100,0x20000000,(uint)(byte)PTR_gsAtRtmMgrInfo_00567da0[0x164c38],
                           (void *)0x0);
                MaSmw_Ctrl(0x100,0x20000000,(byte)puVar13[0x164c39] | 0x10000,(void *)0x0);
                lVar25 = 2;
                do {
                  puVar13 = PTR_gsAtRtmMgrInfo_00567da0;
                  iVar14 = (int)lVar25;
                  MaSmw_Ctrl(0x100,0x20000000,
                             (uint)(byte)PTR_gsAtRtmMgrInfo_00567da0[lVar25 + 0x164c38] |
                             iVar14 << 0x10,(void *)0x0);
                  MaSmw_Ctrl(0x100,0x20000000,
                             (uint)(byte)puVar13[lVar25 + 0x164c39] | (iVar14 + 1) * 0x10000,
                             (void *)0x0);
                  MaSmw_Ctrl(0x100,0x20000000,
                             (uint)(byte)puVar13[lVar25 + 0x164c3a] | (iVar14 + 2) * 0x10000,
                             (void *)0x0);
                  lVar2 = lVar25 + 5;
                  MaSmw_Ctrl(0x100,0x20000000,
                             (uint)(byte)puVar13[lVar25 + 0x164c3b] | (iVar14 + 3) * 0x10000,
                             (void *)0x0);
                  MaSmw_Ctrl(0x100,0x20000000,
                             (uint)(byte)puVar13[lVar25 + 0x164c3c] | (iVar14 + 4) * 0x10000,
                             (void *)0x0);
                  lVar25 = lVar2;
                } while (lVar2 != 0x20);
                local_20 = 0;
                local_18 = *(int *)(puVar13 + 0x164c58);
                local_14 = *(int *)(puVar13 + 0x164c5c);
                local_10 = *(uint *)(puVar13 + 0x164c60);
                local_1c = 0;
                MaSmw_Ctrl(0x100,0x30000000,0,&local_20);
                local_18 = *(int *)(puVar13 + 0x164c64);
                local_20 = 1;
                local_14 = *(int *)(puVar13 + 0x164c68);
                local_10 = *(uint *)(puVar13 + 0x164c6c);
                local_1c = 0;
                MaSmw_Ctrl(0x100,0x30000000,0,&local_20);
                local_18 = *(int *)(puVar13 + 0x164c70);
                local_20 = 2;
                local_14 = *(int *)(puVar13 + 0x164c74);
                local_10 = *(uint *)(puVar13 + 0x164c78);
                local_1c = 0;
                MaSmw_Ctrl(0x100,0x30000000,0,&local_20);
                local_18 = *(int *)(puVar13 + 0x164c7c);
                local_14 = *(int *)(puVar13 + 0x164c80);
                local_10 = *(uint *)(puVar13 + 0x164c84);
                local_1c = 0;
                local_20 = 3;
                MaSmw_Ctrl(0x100,0x30000000,0,&local_20);
                iVar14 = MaSndDrv_SetHvCh(param_1,(uint)(byte)puVar13[0x164c88]);
                puVar31 = (undefined8 *)(puVar13 + 0x165090);
                puVar17 = *(uchar **)(puVar13 + 0x164c90);
                uVar34 = (ulong)((long)puVar31 + (-0x10 - (long)(puVar13 + 0x164c90))) >> 4 & 7;
                if (puVar17 != (uchar *)0x0) {
                  iVar14 = MaSndDrv_SetHvScript(param_1,puVar17,*(uint *)(puVar13 + 0x164c98));
                }
                puVar35 = (undefined8 *)(puVar13 + 0x164ca0);
                if (puVar35 != puVar31) {
                  if (uVar34 != 0) {
                    if (uVar34 != 1) {
                      if (uVar34 != 2) {
                        if (uVar34 != 3) {
                          if (uVar34 != 4) {
                            if (uVar34 != 5) {
                              if (uVar34 != 6) {
                                if ((uchar *)*puVar35 != (uchar *)0x0) {
                                  iVar14 = MaSndDrv_SetHvScript
                                                     (param_1,(uchar *)*puVar35,
                                                      *(uint *)(puVar13 + 0x164ca8));
                                }
                                puVar35 = (undefined8 *)(puVar13 + 0x164cb0);
                              }
                              if ((uchar *)*puVar35 != (uchar *)0x0) {
                                iVar14 = MaSndDrv_SetHvScript
                                                   (param_1,(uchar *)*puVar35,*(uint *)(puVar35 + 1)
                                                   );
                              }
                              puVar35 = puVar35 + 2;
                            }
                            if ((uchar *)*puVar35 != (uchar *)0x0) {
                              iVar14 = MaSndDrv_SetHvScript
                                                 (param_1,(uchar *)*puVar35,*(uint *)(puVar35 + 1));
                            }
                            puVar35 = puVar35 + 2;
                          }
                          if ((uchar *)*puVar35 != (uchar *)0x0) {
                            iVar14 = MaSndDrv_SetHvScript
                                               (param_1,(uchar *)*puVar35,*(uint *)(puVar35 + 1));
                          }
                          puVar35 = puVar35 + 2;
                        }
                        if ((uchar *)*puVar35 != (uchar *)0x0) {
                          iVar14 = MaSndDrv_SetHvScript
                                             (param_1,(uchar *)*puVar35,*(uint *)(puVar35 + 1));
                        }
                        puVar35 = puVar35 + 2;
                      }
                      if ((uchar *)*puVar35 != (uchar *)0x0) {
                        iVar14 = MaSndDrv_SetHvScript
                                           (param_1,(uchar *)*puVar35,*(uint *)(puVar35 + 1));
                      }
                      puVar35 = puVar35 + 2;
                    }
                    if ((uchar *)*puVar35 != (uchar *)0x0) {
                      iVar14 = MaSndDrv_SetHvScript
                                         (param_1,(uchar *)*puVar35,*(uint *)(puVar35 + 1));
                    }
                    puVar35 = puVar35 + 2;
                    if (puVar35 == puVar31) goto LAB_001b2a14;
                  }
                  do {
                    if ((uchar *)*puVar35 != (uchar *)0x0) {
                      iVar14 = MaSndDrv_SetHvScript
                                         (param_1,(uchar *)*puVar35,*(uint *)(puVar35 + 1));
                    }
                    if ((uchar *)puVar35[2] != (uchar *)0x0) {
                      iVar14 = MaSndDrv_SetHvScript
                                         (param_1,(uchar *)puVar35[2],*(uint *)(puVar35 + 3));
                    }
                    if ((uchar *)puVar35[4] != (uchar *)0x0) {
                      iVar14 = MaSndDrv_SetHvScript
                                         (param_1,(uchar *)puVar35[4],*(uint *)(puVar35 + 5));
                    }
                    if ((uchar *)puVar35[6] != (uchar *)0x0) {
                      iVar14 = MaSndDrv_SetHvScript
                                         (param_1,(uchar *)puVar35[6],*(uint *)(puVar35 + 7));
                    }
                    if ((uchar *)puVar35[8] != (uchar *)0x0) {
                      iVar14 = MaSndDrv_SetHvScript
                                         (param_1,(uchar *)puVar35[8],*(uint *)(puVar35 + 9));
                    }
                    if ((uchar *)puVar35[10] != (uchar *)0x0) {
                      iVar14 = MaSndDrv_SetHvScript
                                         (param_1,(uchar *)puVar35[10],*(uint *)(puVar35 + 0xb));
                    }
                    if ((uchar *)puVar35[0xc] != (uchar *)0x0) {
                      iVar14 = MaSndDrv_SetHvScript
                                         (param_1,(uchar *)puVar35[0xc],*(uint *)(puVar35 + 0xd));
                    }
                    if ((uchar *)puVar35[0xe] != (uchar *)0x0) {
                      iVar14 = MaSndDrv_SetHvScript
                                         (param_1,(uchar *)puVar35[0xe],*(uint *)(puVar35 + 0xf));
                    }
                    puVar35 = puVar35 + 0x10;
                  } while (puVar35 != puVar31);
                }
LAB_001b2a14:
                if (*(uchar **)(PTR_gsAtRtmMgrInfo_00567da0 + 0x165090) != (uchar *)0x0) {
                  iVar14 = MaSndDrv_SetHvVoice(param_1,0xff,
                                               *(uchar **)(PTR_gsAtRtmMgrInfo_00567da0 + 0x165090),
                                               *(uint *)(PTR_gsAtRtmMgrInfo_00567da0 + 0x165098));
                }
                goto LAB_001b2330;
              }
            }
            else if (param_3 == 0xf5) {
              uVar16 = *(uint *)param_4;
              uVar26 = uVar16 & 0xf;
              if ((uVar16 >> 0x18 & 1) != 0) {
                uVar26 = uVar26 + 0x10;
              }
              uVar34 = (ulong)(uVar16 >> 8) & 0x7f;
              uVar16 = piVar32[(ulong)uVar26 * 0x13 + 0xc];
              uVar11 = (uint)piVar32[(ulong)uVar26 * 0x13 + 8] >> 8;
              uVar18 = (uint)uVar34;
              if (uVar11 == 0x7c) {
                uVar34 = (ulong)(uint)piVar32[(ulong)uVar26 * 0x13 + 8] & 0x7f;
                uVar28 = (ulong)uVar16;
                bVar36 = 0;
                if (PTR_gsAtRtmMgrInfo_00567da0[uVar28 + uVar34 * 0x80 + 0x838] != '\0') {
                  if ((uVar18 < (byte)PTR_gsAtRtmMgrInfo_00567da0
                                      [uVar28 * 5 + uVar34 * 0x280 + 0x12d838]) ||
                     ((byte)PTR_gsAtRtmMgrInfo_00567da0[uVar28 * 5 + uVar34 * 0x280 + 0x132838] <
                      uVar18)) {
                    if ((uVar18 < (byte)PTR_gsAtRtmMgrInfo_00567da0
                                        [uVar28 * 5 + uVar34 * 0x280 + 0x12d839]) ||
                       ((byte)PTR_gsAtRtmMgrInfo_00567da0[uVar28 * 5 + uVar34 * 0x280 + 0x132839] <
                        uVar18)) {
                      if ((uVar18 < (byte)PTR_gsAtRtmMgrInfo_00567da0
                                          [uVar28 * 5 + uVar34 * 0x280 + 0x12d83a]) ||
                         ((byte)PTR_gsAtRtmMgrInfo_00567da0[uVar28 * 5 + uVar34 * 0x280 + 0x13283a]
                          < uVar18)) {
                        if ((uVar18 < (byte)PTR_gsAtRtmMgrInfo_00567da0
                                            [uVar28 * 5 + uVar34 * 0x280 + 0x12d83b]) ||
                           ((byte)PTR_gsAtRtmMgrInfo_00567da0
                                  [uVar28 * 5 + uVar34 * 0x280 + 0x13283b] < uVar18)) {
                          iVar14 = -1;
                          if ((uVar18 < (byte)PTR_gsAtRtmMgrInfo_00567da0
                                              [uVar28 * 5 + uVar34 * 0x280 + 0x12d83c]) ||
                             ((byte)PTR_gsAtRtmMgrInfo_00567da0
                                    [uVar28 * 5 + uVar34 * 0x280 + 0x13283c] < uVar18))
                          goto LAB_001b2330;
                          bVar36 = 4;
                        }
                        else {
                          bVar36 = 3;
                        }
                      }
                      else {
                        bVar36 = 2;
                      }
                    }
                    else {
                      bVar36 = 1;
                    }
                  }
                  else {
                    bVar36 = 0;
                  }
                }
                iVar14 = MaSndDrv_DelVoice(param_1,(uint)(byte)(&DAT_0048d0b0)[uVar34],uVar16,
                                           (uint)(byte)PTR_gsAtRtmMgrInfo_00567da0
                                                       [(ulong)bVar36 + uVar28 * 5 + uVar34 * 0x280
                                                        + 0x128838]);
                goto LAB_001b2330;
              }
              if (uVar11 == 0x7d) {
                iVar14 = MaSndDrv_DelVoice(param_1,(byte)(&DAT_0048d0b0)[uVar16] + 0x80,uVar18,
                                           (uint)(byte)PTR_gsAtRtmMgrInfo_00567da0
                                                       [uVar34 * 5 + (ulong)(uVar16 + 0x10) * 0x280
                                                        + 0x128838]);
                goto LAB_001b2330;
              }
            }
            else if (param_3 == 0xf6) {
              piVar24 = piVar32 + 8;
              *(undefined8 *)(piVar32 + 3) = _UNK_001b43d8;
              *(undefined8 *)(piVar32 + 1) = uVar37;
              *(undefined1 *)(piVar32 + 5) = 0;
              *(undefined1 *)((long)piVar32 + 0x15) = 0x40;
              uVar26 = 0;
              do {
                if (uVar26 == 9) {
                  piVar32[0xb3] = 0x7800;
                }
                else if ((uVar26 & 0xff) < 0x10) {
                  *piVar24 = 0x7900;
                }
                else {
                  *piVar24 = 32000;
                }
                uVar16 = uVar26 + 1;
                piVar24 = piVar24 + 0x13;
                piVar32[(long)(int)uVar26 * 0x13 + 9] = 0x7f7f;
                piVar32[(long)(int)uVar26 * 0x13 + 6] = 100;
                piVar32[(long)(int)uVar26 * 0x13 + 7] = 0x7f;
                piVar32[(long)(int)uVar26 * 0x13 + 10] = 0x2000;
                piVar32[(long)(int)uVar26 * 0x13 + 0xb] = 0;
                piVar32[(long)(int)uVar26 * 0x13 + 0xc] = 0;
                piVar32[(long)(int)uVar26 * 0x13 + 0xd] = 0;
                piVar32[(long)(int)uVar26 * 0x13 + 0xe] = 0x40;
                piVar32[(long)(int)uVar26 * 0x13 + 0xf] = 0;
                piVar32[(long)(int)uVar26 * 0x13 + 0x10] = 0x2000;
                piVar32[(long)(int)uVar26 * 0x13 + 0x11] = 2;
                piVar32[(long)(int)uVar26 * 0x13 + 0x12] = 1;
                piVar32[(long)(int)uVar26 * 0x13 + 0x13] = 0x40;
                piVar32[(long)(int)uVar26 * 0x13 + 0x14] = 0x40;
                piVar32[(long)(int)uVar26 * 0x13 + 0x15] = 0x40;
                piVar32[(long)(int)uVar26 * 0x13 + 0x16] = 0x7f;
                piVar32[(long)(int)uVar26 * 0x13 + 0x17] = 0x28;
                piVar32[(long)(int)uVar26 * 0x13 + 0x18] = 0;
                uVar26 = uVar16;
              } while (uVar16 != 0x20);
            }
          }
        }
LAB_001b2e04:
        iVar14 = 0;
        goto LAB_001b2330;
      }
    }
    goto LAB_001b232c;
  }
  plVar33 = *(long **)param_4;
  pcVar27 = (char *)*plVar33;
  if ((pcVar27 == (char *)0x0) || (uVar16 = *(uint *)(plVar33 + 1), uVar16 == 0)) {
    iVar14 = -2;
    goto LAB_001b23f0;
  }
  if (*pcVar27 != -0x10) goto switchD_001b3018_caseD_c;
  cVar9 = pcVar27[1];
  if (cVar9 == '~') {
    if ((((pcVar27[2] == '\x7f') && (pcVar27[3] == '\t')) && ((byte)(pcVar27[4] - 1U) < 3)) &&
       ((pcVar27[5] == -9 && (uVar16 == 6)))) {
      *(undefined4 *)((long)param_4 + 0xc) = 0;
      *(undefined4 *)((long)param_4 + 0x10) = 0;
      *(undefined4 *)((long)param_4 + 8) = 0x1a;
      *(undefined8 *)((long)param_4 + 0x18) = 0;
      *(undefined4 *)((long)param_4 + 0x20) = 0;
      piVar24 = piVar32 + 8;
      piVar32[1] = 0x7f;
      piVar32[2] = 0x40;
      piVar32[3] = 0x2000;
      piVar32[4] = 0x4c;
      *(undefined1 *)(piVar32 + 5) = 0;
      *(undefined1 *)((long)piVar32 + 0x15) = 0x40;
      uVar26 = 0;
      do {
        if (uVar26 == 9) {
          piVar32[0xb3] = 0x7800;
        }
        else if ((uVar26 & 0xff) < 0x10) {
          *piVar24 = 0x7900;
        }
        else {
          *piVar24 = 32000;
        }
        uVar16 = uVar26 + 1;
        piVar24 = piVar24 + 0x13;
        piVar32[(long)(int)uVar26 * 0x13 + 9] = 0x7f7f;
        piVar32[(long)(int)uVar26 * 0x13 + 6] = 100;
        piVar32[(long)(int)uVar26 * 0x13 + 7] = 0x7f;
        piVar32[(long)(int)uVar26 * 0x13 + 10] = 0x2000;
        piVar32[(long)(int)uVar26 * 0x13 + 0xb] = 0;
        piVar32[(long)(int)uVar26 * 0x13 + 0xc] = 0;
        piVar32[(long)(int)uVar26 * 0x13 + 0xd] = 0;
        piVar32[(long)(int)uVar26 * 0x13 + 0xe] = 0x40;
        piVar32[(long)(int)uVar26 * 0x13 + 0xf] = 0;
        piVar32[(long)(int)uVar26 * 0x13 + 0x10] = 0x2000;
        piVar32[(long)(int)uVar26 * 0x13 + 0x11] = 2;
        piVar32[(long)(int)uVar26 * 0x13 + 0x12] = 1;
        piVar32[(long)(int)uVar26 * 0x13 + 0x13] = 0x40;
        piVar32[(long)(int)uVar26 * 0x13 + 0x14] = 0x40;
        piVar32[(long)(int)uVar26 * 0x13 + 0x15] = 0x40;
        piVar32[(long)(int)uVar26 * 0x13 + 0x16] = 0x7f;
        piVar32[(long)(int)uVar26 * 0x13 + 0x17] = 0x28;
        piVar32[(long)(int)uVar26 * 0x13 + 0x18] = 0;
        uVar26 = uVar16;
      } while (uVar16 != 0x20);
      goto LAB_001b2e04;
    }
    goto switchD_001b3018_caseD_c;
  }
  if (cVar9 == '\x7f') {
    cVar9 = pcVar27[4];
    if (cVar9 == '\x03') {
      if (((pcVar27[2] == '\x7f') && (pcVar27[3] == '\x04')) &&
         ((-1 < pcVar27[5] && (((-1 < pcVar27[6] && (pcVar27[7] == -9)) && (uVar16 == 8)))))) {
        uVar26 = (uint)(byte)pcVar27[5] | (uint)(byte)pcVar27[6] << 7;
        *(ulong *)((long)param_4 + 0x18) = (ulong)uVar26;
        iVar14 = 0;
        *(undefined4 *)((long)param_4 + 8) = 0x18;
        *(undefined4 *)((long)param_4 + 0xc) = 0;
        *(undefined4 *)((long)param_4 + 0x10) = 0;
        *(undefined4 *)((long)param_4 + 0x20) = 0;
        piVar32[3] = uVar26;
        goto LAB_001b2330;
      }
    }
    else if (cVar9 == '\x04') {
      if (((pcVar27[2] == '\x7f') && (pcVar27[3] == '\x04')) &&
         ((bVar36 = pcVar27[6], -1 < (char)bVar36 && ((pcVar27[7] == -9 && (uVar16 == 8)))))) {
        *(ulong *)((long)param_4 + 0x18) = (ulong)bVar36;
        iVar14 = 0;
        *(undefined4 *)((long)param_4 + 8) = 0x17;
        *(undefined4 *)((long)param_4 + 0xc) = 0;
        *(undefined4 *)((long)param_4 + 0x10) = 0;
        *(undefined4 *)((long)param_4 + 0x20) = 0;
        piVar32[2] = (uint)bVar36;
        goto LAB_001b2330;
      }
    }
    else if (((cVar9 == '\x01') && (pcVar27[2] == '\x7f')) && (pcVar27[3] == '\x04')) {
      bVar36 = pcVar27[6];
      if (((-1 < (char)bVar36) && (pcVar27[7] == -9)) && (uVar16 == 8)) {
        piVar32[1] = (uint)bVar36;
        *(undefined4 *)((long)param_4 + 8) = 0x16;
        *(undefined4 *)((long)param_4 + 0xc) = 0;
        iVar14 = 0;
        *(undefined4 *)((long)param_4 + 0x10) = 0;
        *(ulong *)((long)param_4 + 0x18) = (ulong)bVar36;
        *(undefined4 *)((long)param_4 + 0x20) = 0;
        goto LAB_001b2330;
      }
    }
    goto switchD_001b3018_caseD_c;
  }
  if ((cVar9 != 'C') || (pcVar27[uVar16 - 1] != -9)) goto switchD_001b3018_caseD_c;
  if (1 < uVar16 - 1) {
    uVar11 = uVar16 - 3;
    uVar34 = (ulong)uVar11 & 0xf;
    pcVar21 = pcVar27;
    if ((uVar11 & 0xf) == 0) goto LAB_001b2c38;
    pcVar21 = pcVar27 + 1;
    if (-1 < pcVar27[2]) {
      if (uVar34 == 1) goto LAB_001b2c38;
      if ((uVar34 == 2) ||
         (((uVar34 == 3 ||
           (((uVar34 == 4 ||
             (((uVar34 == 5 ||
               (((uVar34 == 6 ||
                 (((uVar34 == 7 ||
                   (((uVar34 == 8 ||
                     (((uVar34 == 9 ||
                       (((uVar34 == 10 ||
                         (((uVar34 == 0xb ||
                           (((uVar34 == 0xc ||
                             (((uVar34 == 0xd ||
                               (((uVar34 == 0xe || (pcVar21 = pcVar27 + 2, -1 < pcVar27[3])) &&
                                (pcVar1 = pcVar21 + 2, pcVar21 = pcVar21 + 1, -1 < *pcVar1)))) &&
                              (pcVar1 = pcVar21 + 2, pcVar21 = pcVar21 + 1, -1 < *pcVar1)))) &&
                            (pcVar1 = pcVar21 + 2, pcVar21 = pcVar21 + 1, -1 < *pcVar1)))) &&
                          (pcVar1 = pcVar21 + 2, pcVar21 = pcVar21 + 1, -1 < *pcVar1)))) &&
                        (pcVar1 = pcVar21 + 2, pcVar21 = pcVar21 + 1, -1 < *pcVar1)))) &&
                      (pcVar1 = pcVar21 + 2, pcVar21 = pcVar21 + 1, -1 < *pcVar1)))) &&
                    (pcVar1 = pcVar21 + 2, pcVar21 = pcVar21 + 1, -1 < *pcVar1)))) &&
                  (pcVar1 = pcVar21 + 2, pcVar21 = pcVar21 + 1, -1 < *pcVar1)))) &&
                (pcVar1 = pcVar21 + 2, pcVar21 = pcVar21 + 1, -1 < *pcVar1)))) &&
              (pcVar1 = pcVar21 + 2, pcVar21 = pcVar21 + 1, -1 < *pcVar1)))) &&
            (pcVar1 = pcVar21 + 2, pcVar21 = pcVar21 + 1, -1 < *pcVar1)))) &&
          (pcVar1 = pcVar21 + 2, pcVar21 = pcVar21 + 1, -1 < *pcVar1)))) {
        pcVar1 = pcVar21 + 2;
        pcVar21 = pcVar21 + 1;
        cVar9 = *pcVar1;
        while (-1 < cVar9) {
LAB_001b2c38:
          if (pcVar21 == pcVar27 + uVar11) goto LAB_001b2fc0;
          if ((((pcVar21[2] < '\0') || (pcVar21[3] < '\0')) ||
              ((pcVar21[4] < '\0' || ((pcVar21[5] < '\0' || (pcVar21[6] < '\0')))))) ||
             ((pcVar21[7] < '\0' ||
              ((((((pcVar21[8] < '\0' || (pcVar21[9] < '\0')) || (pcVar21[10] < '\0')) ||
                 ((pcVar21[0xb] < '\0' || (pcVar21[0xc] < '\0')))) || (pcVar21[0xd] < '\0')) ||
               (((pcVar21[0xe] < '\0' || (pcVar21[0xf] < '\0')) || (pcVar21[0x10] < '\0'))))))))
          break;
          pcVar1 = pcVar21 + 0x11;
          pcVar21 = pcVar21 + 0x10;
          cVar9 = *pcVar1;
        }
      }
    }
    goto switchD_001b3018_caseD_c;
  }
LAB_001b2fc0:
  if (((pcVar27[2] != 'y') || (pcVar27[4] != '\x7f')) || (uVar16 < 8))
  goto switchD_001b3018_caseD_c;
  if (pcVar27[3] == '\x06') {
    switch(pcVar27[5]) {
    case '\0':
      if (uVar16 == 8) {
        bVar36 = pcVar27[6];
        *(undefined4 *)((long)param_4 + 0xc) = 0;
        iVar14 = 0;
        *(undefined4 *)((long)param_4 + 8) = 0x19;
        *(undefined4 *)((long)param_4 + 0x10) = 0;
        *(undefined4 *)((long)param_4 + 0x20) = 0;
        *(ulong *)((long)param_4 + 0x18) = (ulong)(byte)(bVar36 & 0x7f);
        piVar32[4] = bVar36 & 0x7f;
        goto LAB_001b2330;
      }
      break;
    case '\x01':
    case '\x03':
switchD_001b3018_caseD_21:
      *(undefined4 *)((long)param_4 + 0xc) = 0;
      *(undefined4 *)((long)param_4 + 8) = 0x1b;
      iVar14 = 0;
      *(undefined4 *)((long)param_4 + 0x10) = 0;
      *(undefined8 *)((long)param_4 + 0x18) = 0;
      *(undefined4 *)((long)param_4 + 0x20) = 0;
      goto LAB_001b2330;
    case '\x10':
      if (uVar16 == 8) {
        bVar36 = pcVar27[6];
        *(undefined4 *)((long)param_4 + 0xc) = 0;
        iVar14 = 0;
        *(undefined4 *)((long)param_4 + 8) = 0x25;
        *(ulong *)((long)param_4 + 0x18) = (ulong)bVar36 & 0xf;
        *(undefined4 *)((long)param_4 + 0x10) = 0;
        *(undefined4 *)((long)param_4 + 0x20) = 0;
        goto LAB_001b2330;
      }
    }
    goto switchD_001b3018_caseD_c;
  }
  if (pcVar27[3] != '\b') goto switchD_001b3018_caseD_c;
  switch(pcVar27[5]) {
  case '\v':
    if (uVar16 != 10) goto LAB_001b426c;
    local_20._3_1_ = SUB41(uVar26,3);
    local_20._0_3_ = CONCAT12(pcVar27[8],CONCAT11(pcVar27[7],pcVar27[6] + '\x01'));
    iVar14 = ATRTMIDIMgr_SetStreamPan((_MASMW_SETSTREAMAUDIO_PAN *)&local_20);
    if (iVar14 == 0) {
      if (local_20._1_1_ == '\x01') {
        uVar26 = 0xff;
      }
      else if (local_20._1_1_ == '\0') {
        uVar26 = local_20 >> 0x10 & 0xff;
      }
      else {
        uVar26 = 0x80;
        if (local_20._1_1_ != '\x02') {
          uVar26 = 0;
        }
      }
      iVar14 = MaSmw_Ctrl(0x100,0x40000000,uVar26 | ((local_20 & 0xff) - 1) * 0x100,(void *)0x0);
    }
    break;
  default:
    goto switchD_001b3018_caseD_c;
  case '!':
    goto switchD_001b3018_caseD_21;
  case ')':
    if (uVar16 == 0x12) {
      bVar36 = pcVar27[0xe];
      bVar5 = pcVar27[0xd];
      bVar6 = pcVar27[6];
      bVar7 = pcVar27[0x10];
      bVar8 = pcVar27[0xf];
      uVar26 = (uint)(byte)pcVar27[8] << 0xe | (uint)(byte)pcVar27[7] << 0x15 |
               (uint)(byte)pcVar27[10] | (uint)(byte)pcVar27[9] << 7;
      iVar14 = ((byte)pcVar27[0xb] - 0x40) * 3;
      iVar15 = ((byte)pcVar27[0xc] - 0x40) * 3;
      if (bVar6 < 4) {
        local_20 = (uint)bVar6;
        *(int *)(PTR_gsAtRtmMgrInfo_00567da0 + (ulong)bVar6 * 0xc + 0x164c58) = iVar14;
        *(int *)(puVar13 + (ulong)bVar6 * 0xc + 0x164c5c) = iVar15;
        *(uint *)(puVar13 + (ulong)bVar6 * 0xc + 0x164c60) = uVar26;
        local_1c = (uint)bVar36 << 0xe | (uint)bVar5 << 0x15 | (uint)bVar7 | (uint)bVar8 << 7;
        local_18 = iVar14;
        local_14 = iVar15;
        local_10 = uVar26;
        iVar14 = MaSmw_Ctrl(0x100,0x30000000,0,&local_20);
        break;
      }
    }
LAB_001b426c:
    iVar14 = -1;
    break;
  case '*':
    if ((uVar16 == 8) && (bVar36 = pcVar27[6], -1 < (char)bVar36)) {
      if (((byte)(bVar36 - 0x40) < 0x20) || (bVar36 == 0x7f)) {
        *(undefined8 *)((long)param_4 + 0x18) = 1;
        puVar13 = PTR_gsAtRtmMgrInfo_00567da0;
        if (PTR_gsAtRtmMgrInfo_00567da0[0x166081] == '\x01') {
          *(undefined4 *)((long)param_4 + 0x20) = 0x40;
          puVar13[0x166081] = 0;
        }
        else {
          *(undefined4 *)((long)param_4 + 0x20) = 0x41;
          puVar13[0x166081] = 1;
        }
        if (bVar36 != 0x7f) {
          *(byte *)((long)piVar32 + 0x15) = bVar36;
        }
      }
      else {
        if ((bVar36 != 0x3f) && (0x1f < bVar36)) goto switchD_001b3018_caseD_c;
        *(undefined8 *)((long)param_4 + 0x18) = 0;
        puVar13 = PTR_gsAtRtmMgrInfo_00567da0;
        if (PTR_gsAtRtmMgrInfo_00567da0[0x166080] == '\x01') {
          *(undefined4 *)((long)param_4 + 0x20) = 0;
          puVar13[0x166080] = 0;
        }
        else {
          *(undefined4 *)((long)param_4 + 0x20) = 1;
          puVar13[0x166080] = 1;
        }
        if (bVar36 != 0x3f) {
          *(byte *)(piVar32 + 5) = bVar36;
        }
      }
      *(undefined4 *)((long)param_4 + 8) = 0x31;
      *(undefined4 *)((long)param_4 + 0xc) = 0;
      *(undefined4 *)((long)param_4 + 0x10) = 0;
      goto LAB_001b2e04;
    }
    goto switchD_001b3018_caseD_c;
  case '-':
    if (pcVar27[6] == '\0') {
      PTR_gsAtRtmMgrInfo_00567da0[1] = 1;
      if (*(char *)(*plVar33 + 7) == '[') {
        uVar29 = 0xb;
      }
      else {
        uVar29 = 0xc;
      }
      *(uint *)((long)param_4 + 0x10) = (uint)*(byte *)(*plVar33 + 8);
      iVar14 = 0;
      *(undefined4 *)((long)param_4 + 8) = uVar29;
      *(undefined4 *)((long)param_4 + 0xc) = 0;
      *(undefined8 *)((long)param_4 + 0x18) = 0;
      *(undefined4 *)((long)param_4 + 0x20) = 0;
    }
    else {
      PTR_gsAtRtmMgrInfo_00567da0[1] = 0;
      bVar36 = *(byte *)(*plVar33 + 8);
      uVar26 = (uint)bVar36;
      if (*(char *)(*plVar33 + 7) == '[') {
        uVar16 = piVar32[(long)(int)uVar26 * 0x13 + 0x17];
        *(undefined4 *)((long)param_4 + 0xc) = 0;
        iVar14 = 0;
        *(undefined4 *)((long)param_4 + 8) = 0xb;
        *(uint *)((long)param_4 + 0x10) = uVar26;
        *(ulong *)((long)param_4 + 0x18) = (ulong)uVar16;
        *(undefined4 *)((long)param_4 + 0x20) = 0;
      }
      else {
        uVar26 = piVar32[(long)(int)uVar26 * 0x13 + 0x18];
        *(undefined4 *)((long)param_4 + 0xc) = 0;
        iVar14 = 0;
        *(undefined4 *)((long)param_4 + 8) = 0xc;
        *(uint *)((long)param_4 + 0x10) = (uint)bVar36;
        *(ulong *)((long)param_4 + 0x18) = (ulong)uVar26;
        *(undefined4 *)((long)param_4 + 0x20) = 0;
      }
    }
    goto LAB_001b2330;
  }
  *(undefined4 *)((long)param_4 + 8) = 0x1b;
  *(undefined4 *)((long)param_4 + 0xc) = 0;
  *(undefined4 *)((long)param_4 + 0x10) = 0;
  *(undefined8 *)((long)param_4 + 0x18) = 0;
  *(undefined4 *)((long)param_4 + 0x20) = 0;
  if (iVar14 < 0) {
LAB_001b23f0:
    *(undefined4 *)((long)param_4 + 8) = 0x1b;
    *(undefined4 *)((long)param_4 + 0xc) = 0;
    *(undefined4 *)((long)param_4 + 0x10) = 0;
    *(undefined8 *)((long)param_4 + 0x18) = 0;
    *(undefined4 *)((long)param_4 + 0x20) = 0;
  }
LAB_001b2330:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar14);
switchD_001b3018_caseD_c:
  iVar14 = -1;
  goto LAB_001b23f0;
}

