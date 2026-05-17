/* MaMfiCnv_Ctrl @ 001c982c 5788B */


/* YAMAHA::MaMfiCnv_Ctrl(_MACNV_SEQ_INFO*, unsigned int, unsigned int, void*) */

uint YAMAHA::MaMfiCnv_Ctrl(_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3,void *param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  byte bVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  char *pcVar25;
  long lVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  uint uVar29;
  bool bVar30;
  uint uVar31;
  ulong uVar32;
  undefined1 *puVar33;
  uint uVar34;
  byte *pbVar35;
  undefined1 *puVar36;
  uint *puVar37;
  byte bVar38;
  ulong uVar39;
  undefined8 *puVar40;
  undefined8 *puVar41;
  undefined8 uVar42;
  
  uVar32 = (ulong)param_3;
  if ((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
     (pcVar25 = *(char **)(param_1 + 8), pcVar25 == (char *)0x0)) {
    return 0xfffffffe;
  }
  if (param_2 == 5) {
LAB_001c98f0:
    if (pcVar25[0x11] == '\x01') {
      if (*(int *)(pcVar25 + 0x8584) != 0) {
        *(int *)param_4 = *(int *)(pcVar25 + 0x8584) >> 10;
        return 0;
      }
      if (param_3 == 1) {
        *(undefined4 *)param_4 = 0xffffffff;
        return 0;
      }
    }
    *(int *)param_4 = *(int *)(pcVar25 + 0x857c) >> 10;
    return 0;
  }
  if (param_2 != 10) {
    if (*pcVar25 != '\x01') {
      return 0xffffffff;
    }
    if (param_2 == 0x32) {
      pcVar25[0x7368] = *(char *)param_4;
      pcVar25[0x7369] = *(char *)((long)param_4 + 1);
      return 0;
    }
    if (0x32 < param_2) {
      if (param_2 == 0x100) {
        uVar34 = *(uint *)(pcVar25 + uVar32 * 0x14 + 0xb50);
        if (3 < uVar34) {
          return 0xffffffff;
        }
        if (0x3ff < param_3) {
          return 0xffffffff;
        }
        if (((&DAT_0048e730)[uVar34] & pcVar25[10]) == 0) {
          return 0xffffffff;
        }
        *(uint *)param_4 = uVar34;
        iVar19 = *(int *)(pcVar25 + uVar32 * 0x14 + 0xb54);
        iVar17 = *(int *)(pcVar25 + uVar32 * 0x14 + 0xb58);
        iVar18 = *(int *)(pcVar25 + uVar32 * 0x14 + 0xb5c);
        *(undefined4 *)((long)param_4 + 4) = *(undefined4 *)(pcVar25 + uVar32 * 0x14 + 0xb60);
        *(int *)((long)param_4 + 0x10) = iVar19 * 0x32;
        *(int *)((long)param_4 + 8) = (iVar17 + -0x80) * 3;
        *(int *)((long)param_4 + 0xc) = (iVar18 + -0x80) * 3;
        return 0;
      }
      if (param_2 != 0x101) {
        if (param_2 != 0x35) {
          return 0xffffffff;
        }
        iVar19 = param_3 * 0x400;
        if (iVar19 != 0) {
          if (iVar19 <= *(int *)(pcVar25 + 0x857c)) {
            *(int *)(pcVar25 + 0x1fc) = iVar19;
            return 0;
          }
          return 0;
        }
        *(int *)(pcVar25 + 0x1fc) = *(int *)(pcVar25 + 0x857c) + 1;
        return 0;
      }
      if (param_3 < 0x20) {
        if ((byte)pcVar25[0xb30] - 1 < param_3) {
          return 0;
        }
        *(ulong *)param_4 = *(long *)(pcVar25 + 0xb28) + (uVar32 & 0x7ffffff) * 0x20;
        return 0;
      }
      if (param_3 < 0x40) {
        return 0xffffffff;
      }
      if (0x5f < param_3) {
        return 0;
      }
      if ((byte)pcVar25[0xb48] - 1 < param_3 - 0x40) {
        return 0;
      }
      *(ulong *)param_4 = *(long *)(pcVar25 + 0xb40) + (ulong)(param_3 * 0x20 - 0x800);
      return 0;
    }
    if (param_2 == 0x29) {
      if (3 < (byte)pcVar25[0x8640]) {
        pcVar25[0x8570] = '\0';
        pcVar25[0x8571] = '\0';
        pcVar25[0x8572] = '\0';
        pcVar25[0x8573] = '\0';
        if (param_3 == 100) {
          uVar32 = 0;
          do {
            uVar39 = (long)(ulong)*(uint *)(pcVar25 + 0x856c) >> (uVar32 & 0x3f);
            uVar34 = (uint)uVar32;
            if ((uVar39 & 1) == 0) {
              MaSndDrv_MuteStream(param_1,uVar34,(uint)uVar39 & 1);
            }
            uVar32 = (long)(ulong)*(uint *)(pcVar25 + 0x856c) >> ((ulong)(uVar34 + 1) & 0x3f);
            if ((uVar32 & 1) == 0) {
              MaSndDrv_MuteStream(param_1,uVar34 + 1,(uint)uVar32 & 1);
            }
            uVar32 = (long)(ulong)*(uint *)(pcVar25 + 0x856c) >> ((ulong)(uVar34 + 2) & 0x3f);
            if ((uVar32 & 1) == 0) {
              MaSndDrv_MuteStream(param_1,uVar34 + 2,(uint)uVar32 & 1);
            }
            uVar32 = (long)(ulong)*(uint *)(pcVar25 + 0x856c) >> ((ulong)(uVar34 + 3) & 0x3f);
            if ((uVar32 & 1) == 0) {
              MaSndDrv_MuteStream(param_1,uVar34 + 3,(uint)uVar32 & 1);
            }
            uVar32 = (long)(ulong)*(uint *)(pcVar25 + 0x856c) >> ((ulong)(uVar34 + 4) & 0x3f);
            if ((uVar32 & 1) == 0) {
              MaSndDrv_MuteStream(param_1,uVar34 + 4,(uint)uVar32 & 1);
            }
            uVar32 = (long)(ulong)*(uint *)(pcVar25 + 0x856c) >> ((ulong)(uVar34 + 5) & 0x3f);
            if ((uVar32 & 1) == 0) {
              MaSndDrv_MuteStream(param_1,uVar34 + 5,(uint)uVar32 & 1);
            }
            uVar32 = (long)(ulong)*(uint *)(pcVar25 + 0x856c) >> ((ulong)(uVar34 + 6) & 0x3f);
            if ((uVar32 & 1) == 0) {
              MaSndDrv_MuteStream(param_1,uVar34 + 6,(uint)uVar32 & 1);
            }
            uVar32 = (long)(ulong)*(uint *)(pcVar25 + 0x856c) >> ((ulong)(uVar34 + 7) & 0x3f);
            if ((uVar32 & 1) == 0) {
              MaSndDrv_MuteStream(param_1,uVar34 + 7,(uint)uVar32 & 1);
            }
            uVar32 = (ulong)(uVar34 + 8);
          } while (uVar34 + 8 != 0x40);
        }
        else {
          puVar37 = (uint *)(pcVar25 + 0x8718);
          uVar32 = 0;
          do {
            uVar34 = (uint)uVar32;
            if ((*puVar37 >> 1 & 1) == 0) {
              *(uint *)(pcVar25 + 0x8570) =
                   *(uint *)(pcVar25 + 0x8570) | (uint)(1L << (uVar32 & 0x3f));
              MaSndDrv_MuteStream(param_1,uVar34,1);
            }
            if ((puVar37[8] >> 1 & 1) == 0) {
              *(uint *)(pcVar25 + 0x8570) =
                   *(uint *)(pcVar25 + 0x8570) | (uint)(1L << ((ulong)(uVar34 + 1) & 0x3f));
              MaSndDrv_MuteStream(param_1,uVar34 + 1,1);
            }
            if ((puVar37[0x10] >> 1 & 1) == 0) {
              *(uint *)(pcVar25 + 0x8570) =
                   *(uint *)(pcVar25 + 0x8570) | (uint)(1L << ((ulong)(uVar34 + 2) & 0x3f));
              MaSndDrv_MuteStream(param_1,uVar34 + 2,1);
            }
            if ((puVar37[0x18] >> 1 & 1) == 0) {
              *(uint *)(pcVar25 + 0x8570) =
                   *(uint *)(pcVar25 + 0x8570) | (uint)(1L << ((ulong)(uVar34 + 3) & 0x3f));
              MaSndDrv_MuteStream(param_1,uVar34 + 3,1);
            }
            if ((puVar37[0x20] >> 1 & 1) == 0) {
              *(uint *)(pcVar25 + 0x8570) =
                   *(uint *)(pcVar25 + 0x8570) | (uint)(1L << ((ulong)(uVar34 + 4) & 0x3f));
              MaSndDrv_MuteStream(param_1,uVar34 + 4,1);
            }
            if ((puVar37[0x28] >> 1 & 1) == 0) {
              *(uint *)(pcVar25 + 0x8570) =
                   *(uint *)(pcVar25 + 0x8570) | (uint)(1L << ((ulong)(uVar34 + 5) & 0x3f));
              MaSndDrv_MuteStream(param_1,uVar34 + 5,1);
            }
            if ((puVar37[0x30] >> 1 & 1) == 0) {
              *(uint *)(pcVar25 + 0x8570) =
                   *(uint *)(pcVar25 + 0x8570) | (uint)(1L << ((ulong)(uVar34 + 6) & 0x3f));
              MaSndDrv_MuteStream(param_1,uVar34 + 6,1);
            }
            if ((puVar37[0x38] >> 1 & 1) == 0) {
              *(uint *)(pcVar25 + 0x8570) =
                   *(uint *)(pcVar25 + 0x8570) | (uint)(1L << ((ulong)(uVar34 + 7) & 0x3f));
              MaSndDrv_MuteStream(param_1,uVar34 + 7,1);
            }
            uVar32 = (ulong)(uVar34 + 8);
            puVar37 = puVar37 + 0x40;
          } while (uVar34 + 8 != 0x40);
        }
      }
      return 0;
    }
    if (param_2 == 0x30) {
      if ((byte)pcVar25[0x8640] < 4) {
        return 0;
      }
      pcVar25[0x856c] = '\0';
      pcVar25[0x856d] = '\0';
      pcVar25[0x856e] = '\0';
      pcVar25[0x856f] = '\0';
      if (param_3 != 0) {
        puVar37 = (uint *)(pcVar25 + 0x8718);
        uVar32 = 0;
        do {
          uVar34 = (uint)uVar32;
          if ((*puVar37 & 1) == 0) {
            *(uint *)(pcVar25 + 0x856c) =
                 *(uint *)(pcVar25 + 0x856c) | (uint)(1L << (uVar32 & 0x3f));
            MaSndDrv_MuteStream(param_1,uVar34,1);
          }
          if ((puVar37[8] & 1) == 0) {
            *(uint *)(pcVar25 + 0x856c) =
                 *(uint *)(pcVar25 + 0x856c) | (uint)(1L << ((ulong)(uVar34 + 1) & 0x3f));
            MaSndDrv_MuteStream(param_1,uVar34 + 1,1);
          }
          if ((puVar37[0x10] & 1) == 0) {
            *(uint *)(pcVar25 + 0x856c) =
                 *(uint *)(pcVar25 + 0x856c) | (uint)(1L << ((ulong)(uVar34 + 2) & 0x3f));
            MaSndDrv_MuteStream(param_1,uVar34 + 2,1);
          }
          if ((puVar37[0x18] & 1) == 0) {
            *(uint *)(pcVar25 + 0x856c) =
                 *(uint *)(pcVar25 + 0x856c) | (uint)(1L << ((ulong)(uVar34 + 3) & 0x3f));
            MaSndDrv_MuteStream(param_1,uVar34 + 3,1);
          }
          if ((puVar37[0x20] & 1) == 0) {
            *(uint *)(pcVar25 + 0x856c) =
                 *(uint *)(pcVar25 + 0x856c) | (uint)(1L << ((ulong)(uVar34 + 4) & 0x3f));
            MaSndDrv_MuteStream(param_1,uVar34 + 4,1);
          }
          if ((puVar37[0x28] & 1) == 0) {
            *(uint *)(pcVar25 + 0x856c) =
                 *(uint *)(pcVar25 + 0x856c) | (uint)(1L << ((ulong)(uVar34 + 5) & 0x3f));
            MaSndDrv_MuteStream(param_1,uVar34 + 5,1);
          }
          if ((puVar37[0x30] & 1) == 0) {
            *(uint *)(pcVar25 + 0x856c) =
                 *(uint *)(pcVar25 + 0x856c) | (uint)(1L << ((ulong)(uVar34 + 6) & 0x3f));
            MaSndDrv_MuteStream(param_1,uVar34 + 6,1);
          }
          if ((puVar37[0x38] & 1) == 0) {
            *(uint *)(pcVar25 + 0x856c) =
                 *(uint *)(pcVar25 + 0x856c) | (uint)(1L << ((ulong)(uVar34 + 7) & 0x3f));
            MaSndDrv_MuteStream(param_1,uVar34 + 7,1);
          }
          uVar32 = (ulong)(uVar34 + 8);
          puVar37 = puVar37 + 0x40;
        } while (uVar34 + 8 != 0x40);
        return 0;
      }
      uVar32 = 0;
      do {
        uVar39 = (long)(ulong)*(uint *)(pcVar25 + 0x8570) >> (uVar32 & 0x3f);
        uVar34 = (uint)uVar32;
        if ((uVar39 & 1) == 0) {
          MaSndDrv_MuteStream(param_1,uVar34,(uint)uVar39 & 1);
        }
        uVar32 = (long)(ulong)*(uint *)(pcVar25 + 0x8570) >> ((ulong)(uVar34 + 1) & 0x3f);
        if ((uVar32 & 1) == 0) {
          MaSndDrv_MuteStream(param_1,uVar34 + 1,(uint)uVar32 & 1);
        }
        uVar32 = (long)(ulong)*(uint *)(pcVar25 + 0x8570) >> ((ulong)(uVar34 + 2) & 0x3f);
        if ((uVar32 & 1) == 0) {
          MaSndDrv_MuteStream(param_1,uVar34 + 2,(uint)uVar32 & 1);
        }
        uVar32 = (long)(ulong)*(uint *)(pcVar25 + 0x8570) >> ((ulong)(uVar34 + 3) & 0x3f);
        if ((uVar32 & 1) == 0) {
          MaSndDrv_MuteStream(param_1,uVar34 + 3,(uint)uVar32 & 1);
        }
        uVar32 = (long)(ulong)*(uint *)(pcVar25 + 0x8570) >> ((ulong)(uVar34 + 4) & 0x3f);
        if ((uVar32 & 1) == 0) {
          MaSndDrv_MuteStream(param_1,uVar34 + 4,(uint)uVar32 & 1);
        }
        uVar32 = (long)(ulong)*(uint *)(pcVar25 + 0x8570) >> ((ulong)(uVar34 + 5) & 0x3f);
        if ((uVar32 & 1) == 0) {
          MaSndDrv_MuteStream(param_1,uVar34 + 5,(uint)uVar32 & 1);
        }
        uVar32 = (long)(ulong)*(uint *)(pcVar25 + 0x8570) >> ((ulong)(uVar34 + 6) & 0x3f);
        if ((uVar32 & 1) == 0) {
          MaSndDrv_MuteStream(param_1,uVar34 + 6,(uint)uVar32 & 1);
        }
        uVar32 = (long)(ulong)*(uint *)(pcVar25 + 0x8570) >> ((ulong)(uVar34 + 7) & 0x3f);
        if ((uVar32 & 1) == 0) {
          MaSndDrv_MuteStream(param_1,uVar34 + 7,(uint)uVar32 & 1);
        }
        uVar32 = (ulong)(uVar34 + 8);
      } while (uVar34 + 8 != 0x40);
      return 0;
    }
    if (param_2 != 5) {
      return 0xffffffff;
    }
    goto LAB_001c98f0;
  }
  if (pcVar25[0x870b] == '\0') {
    return 0xffffffff;
  }
  if (*(short *)param_4 != 0) {
    return 0xffffffff;
  }
  uVar34 = (uint)*(byte *)((long)param_4 + 2) * 0x100 + (uint)*(byte *)((long)param_4 + 3);
  if (uVar34 == 0x4658) {
    *(bool *)*(undefined8 *)((long)param_4 + 8) =
         *(long *)(pcVar25 + 0xb40) != 0 || *(long *)(pcVar25 + 0xb28) != 0;
    *(undefined4 *)((long)param_4 + 0x14) = 1;
    return 1;
  }
  if (uVar34 < 0x4659) {
    if (uVar34 == 0x4334) {
      **(char **)((long)param_4 + 8) = pcVar25[0x8640];
      *(undefined4 *)((long)param_4 + 0x14) = 1;
      return 1;
    }
    if (uVar34 < 0x4335) {
      if (uVar34 == 0x3344) {
        **(byte **)((long)param_4 + 8) = pcVar25[0x870d] << 4 | pcVar25[0xb];
        *(undefined4 *)((long)param_4 + 0x14) = 1;
        return 1;
      }
      if (uVar34 != 0x4332) {
        return 0xffffffeb;
      }
      if (*(byte **)(pcVar25 + 0x85f0) == (byte *)0x0) {
        return 0xffffffff;
      }
      **(byte **)((long)param_4 + 8) = **(byte **)(pcVar25 + 0x85f0) & 1;
      *(undefined4 *)((long)param_4 + 0x14) = 1;
      return 1;
    }
    if (uVar34 == 0x4352) {
      puVar33 = *(undefined1 **)(pcVar25 + 0x8608);
      uVar34 = (uint)*(ushort *)(pcVar25 + 0x8636);
      goto LAB_001ca118;
    }
    if (uVar34 == 0x464d) {
      **(char **)((long)param_4 + 8) = pcVar25[0x8643];
      *(undefined4 *)((long)param_4 + 0x14) = 1;
      return 1;
    }
    if (uVar34 != 0x4344) {
      return 0xffffffeb;
    }
    puVar33 = *(undefined1 **)(pcVar25 + 0x8600);
    if (puVar33 == (undefined1 *)0x0) {
      return 0xffffffff;
    }
    uVar34 = 8;
  }
  else {
    if (uVar34 != 0x4d49) {
      if (0x4d49 < uVar34) {
        if (uVar34 == 0x5642) {
          bVar30 = (bool)(pcVar25[0x868b] & 1);
          if ((pcVar25[0x868c] & 1U) != 0) {
            bVar30 = true;
          }
          if ((pcVar25[0x868d] & 1U) != 0) {
            bVar30 = true;
          }
          if ((pcVar25[0x868e] & 1U) != 0) {
            bVar30 = true;
          }
          if ((pcVar25[0x868f] & 1U) != 0) {
            bVar30 = true;
          }
          if ((pcVar25[0x8690] & 1U) != 0) {
            bVar30 = true;
          }
          if ((pcVar25[0x8691] & 1U) != 0) {
            bVar30 = true;
          }
          if ((pcVar25[0x8692] & 1U) != 0) {
            bVar30 = true;
          }
          if ((pcVar25[0x8693] & 1U) != 0) {
            bVar30 = true;
          }
          if ((pcVar25[0x8694] & 1U) != 0) {
            bVar30 = true;
          }
          if ((pcVar25[0x8695] & 1U) != 0) {
            bVar30 = true;
          }
          if ((pcVar25[0x8696] & 1U) != 0) {
            bVar30 = true;
          }
          if ((pcVar25[0x8697] & 1U) != 0) {
            bVar30 = true;
          }
          if ((pcVar25[0x8698] & 1U) != 0) {
            bVar30 = true;
          }
          if ((pcVar25[0x8699] & 1U) != 0) {
            bVar30 = true;
          }
          if ((pcVar25[0x869a] & 1U) != 0) {
            bVar30 = true;
          }
          if ((pcVar25[0x869b] & 1U) != 0) {
            bVar30 = true;
          }
          if ((pcVar25[0x869c] & 1U) != 0) {
            bVar30 = true;
          }
          if ((pcVar25[0x869d] & 1U) != 0) {
            bVar30 = true;
          }
          if ((pcVar25[0x869e] & 1U) != 0) {
            bVar30 = true;
          }
          if ((pcVar25[0x869f] & 1U) != 0) {
            bVar30 = true;
          }
          if ((pcVar25[0x86a0] & 1U) != 0) {
            bVar30 = true;
          }
          if ((pcVar25[0x86a1] & 1U) != 0) {
            bVar30 = true;
          }
          if ((pcVar25[0x86a2] & 1U) != 0) {
            bVar30 = true;
          }
          if ((pcVar25[0x86a3] & 1U) != 0) {
            bVar30 = true;
          }
          if ((pcVar25[0x86a4] & 1U) != 0) {
            bVar30 = true;
          }
          if ((pcVar25[0x86a5] & 1U) != 0) {
            bVar30 = true;
          }
          if ((pcVar25[0x86a6] & 1U) != 0) {
            bVar30 = true;
          }
          if ((pcVar25[0x86a7] & 1U) != 0) {
            bVar30 = true;
          }
          bVar22 = pcVar25[0x86a9] & 1;
          pbVar35 = *(byte **)((long)param_4 + 8);
          if ((pcVar25[0x86a8] & 1U) != 0) {
            bVar30 = true;
          }
          bVar38 = pcVar25[0x86aa] & 1;
LAB_001ca628:
          if (bVar22 != 0) {
            bVar30 = true;
          }
          if (bVar38 != 0) {
            bVar30 = true;
          }
          *pbVar35 = bVar30;
          *(undefined4 *)((long)param_4 + 0x14) = 1;
          return 1;
        }
        if (uVar34 == 0x5a5a) {
          puVar33 = *(undefined1 **)(pcVar25 + 0x8610);
          uVar34 = (uint)*(ushort *)(pcVar25 + 0x8638);
        }
        else {
          if (uVar34 != 0x5354) {
            return 0xffffffeb;
          }
          puVar33 = *(undefined1 **)(pcVar25 + 0x85f8);
          uVar34 = (uint)*(ushort *)(pcVar25 + 0x8634);
        }
        goto LAB_001ca118;
      }
      if (uVar34 == 0x4b43) {
        *(bool *)*(undefined8 *)((long)param_4 + 8) =
             (pcVar25[0x866a] & 3U) != 1 ||
             ((pcVar25[0x8669] & 3U) != 1 ||
             ((pcVar25[0x8668] & 3U) != 1 ||
             ((pcVar25[0x8667] & 3U) != 1 ||
             ((pcVar25[0x8666] & 3U) != 1 ||
             ((pcVar25[0x8665] & 3U) != 1 ||
             ((pcVar25[0x8664] & 3U) != 1 ||
             ((pcVar25[0x8663] & 3U) != 1 ||
             ((pcVar25[0x8662] & 3U) != 1 ||
             ((pcVar25[0x8661] & 3U) != 1 ||
             ((pcVar25[0x8660] & 3U) != 1 ||
             ((pcVar25[0x865f] & 3U) != 1 ||
             ((pcVar25[0x865e] & 3U) != 1 ||
             ((pcVar25[0x865d] & 3U) != 1 ||
             ((pcVar25[0x865c] & 3U) != 1 ||
             ((pcVar25[0x865b] & 3U) != 1 ||
             ((pcVar25[0x865a] & 3U) != 1 ||
             ((pcVar25[0x8659] & 3U) != 1 ||
             ((pcVar25[0x8658] & 3U) != 1 ||
             ((pcVar25[0x8657] & 3U) != 1 ||
             ((pcVar25[0x8656] & 3U) != 1 ||
             ((pcVar25[0x8655] & 3U) != 1 ||
             ((pcVar25[0x8654] & 3U) != 1 ||
             ((pcVar25[0x8653] & 3U) != 1 ||
             ((pcVar25[0x8652] & 3U) != 1 ||
             ((pcVar25[0x8651] & 3U) != 1 ||
             ((pcVar25[0x8650] & 3U) != 1 ||
             ((pcVar25[0x864f] & 3U) != 1 ||
             ((pcVar25[0x864e] & 3U) != 1 ||
             ((pcVar25[0x864d] & 3U) != 1 ||
             ((pcVar25[0x864c] & 3U) != 1 || (pcVar25[0x864b] & 3U) != 1))))))))))))))))))))))))))))
             ));
        *(undefined4 *)((long)param_4 + 0x14) = 1;
        return 1;
      }
      if (uVar34 == 0x4c44) {
        pbVar35 = *(byte **)((long)param_4 + 8);
        bVar22 = pcVar25[0x8689] & 7;
        bVar30 = (pcVar25[0x8688] & 7U) != 0 ||
                 ((pcVar25[0x8687] & 7U) != 0 ||
                 ((pcVar25[0x8686] & 7U) != 0 ||
                 ((pcVar25[0x8685] & 7U) != 0 ||
                 ((pcVar25[0x8684] & 7U) != 0 ||
                 ((pcVar25[0x8683] & 7U) != 0 ||
                 ((pcVar25[0x8682] & 7U) != 0 ||
                 ((pcVar25[0x8681] & 7U) != 0 ||
                 ((pcVar25[0x8680] & 7U) != 0 ||
                 ((pcVar25[0x867f] & 7U) != 0 ||
                 ((pcVar25[0x867e] & 7U) != 0 ||
                 ((pcVar25[0x867d] & 7U) != 0 ||
                 ((pcVar25[0x867c] & 7U) != 0 ||
                 ((pcVar25[0x867b] & 7U) != 0 ||
                 ((pcVar25[0x867a] & 7U) != 0 ||
                 ((pcVar25[0x8679] & 7U) != 0 ||
                 ((pcVar25[0x8678] & 7U) != 0 ||
                 ((pcVar25[0x8677] & 7U) != 0 ||
                 ((pcVar25[0x8676] & 7U) != 0 ||
                 ((pcVar25[0x8675] & 7U) != 0 ||
                 ((pcVar25[0x8674] & 7U) != 0 ||
                 ((pcVar25[0x8673] & 7U) != 0 ||
                 ((pcVar25[0x8672] & 7U) != 0 ||
                 ((pcVar25[0x8671] & 7U) != 0 ||
                 ((pcVar25[0x8670] & 7U) != 0 ||
                 ((pcVar25[0x866f] & 7U) != 0 ||
                 ((pcVar25[0x866e] & 7U) != 0 ||
                 ((pcVar25[0x866d] & 7U) != 0 ||
                 ((pcVar25[0x866c] & 7U) != 0 || (pcVar25[0x866b] & 7U) != 0))))))))))))))))))))))))
                 ))));
        bVar38 = pcVar25[0x868a] & 7;
        goto LAB_001ca628;
      }
      if (uVar34 != 0x4752) {
        return 0xffffffeb;
      }
    }
    if ((byte)pcVar25[0x8640] < 3) {
      puVar33 = *(undefined1 **)(pcVar25 + 0x8610);
      uVar34 = (uint)*(ushort *)(pcVar25 + 0x8638);
    }
    else {
      puVar33 = *(undefined1 **)(pcVar25 + 0x8618);
      uVar34 = (uint)*(ushort *)(pcVar25 + 0x863a);
    }
LAB_001ca118:
    if ((puVar33 == (undefined1 *)0x0) || (uVar34 == 0)) {
      return 0xffffffff;
    }
  }
  puVar36 = *(undefined1 **)((long)param_4 + 8);
  if ((int)*(uint *)((long)param_4 + 0x10) < (int)uVar34) {
    uVar34 = *(uint *)((long)param_4 + 0x10);
  }
  if ((int)uVar34 < 1) goto LAB_001ca104;
  if ((puVar36 < puVar33 + 0x10 && puVar33 < puVar36 + 0x10) || (uVar34 < 0x16)) {
    *puVar36 = *puVar33;
    uVar16 = uVar34 - 1 & 0xf;
    lVar26 = 1;
    if (1 < (int)uVar34) {
      if (uVar16 != 0) {
        if (uVar16 != 1) {
          if (uVar16 != 2) {
            if (uVar16 != 3) {
              if (uVar16 != 4) {
                if (uVar16 != 5) {
                  if (uVar16 != 6) {
                    if (uVar16 != 7) {
                      if (uVar16 != 8) {
                        if (uVar16 != 9) {
                          if (uVar16 != 10) {
                            if (uVar16 != 0xb) {
                              if (uVar16 != 0xc) {
                                if (uVar16 != 0xd) {
                                  if (uVar16 != 0xe) {
                                    lVar26 = 2;
                                    puVar36[1] = puVar33[1];
                                  }
                                  puVar36[lVar26] = puVar33[lVar26];
                                  lVar26 = lVar26 + 1;
                                }
                                puVar36[lVar26] = puVar33[lVar26];
                                lVar26 = lVar26 + 1;
                              }
                              puVar36[lVar26] = puVar33[lVar26];
                              lVar26 = lVar26 + 1;
                            }
                            puVar36[lVar26] = puVar33[lVar26];
                            lVar26 = lVar26 + 1;
                          }
                          puVar36[lVar26] = puVar33[lVar26];
                          lVar26 = lVar26 + 1;
                        }
                        puVar36[lVar26] = puVar33[lVar26];
                        lVar26 = lVar26 + 1;
                      }
                      puVar36[lVar26] = puVar33[lVar26];
                      lVar26 = lVar26 + 1;
                    }
                    puVar36[lVar26] = puVar33[lVar26];
                    lVar26 = lVar26 + 1;
                  }
                  puVar36[lVar26] = puVar33[lVar26];
                  lVar26 = lVar26 + 1;
                }
                puVar36[lVar26] = puVar33[lVar26];
                lVar26 = lVar26 + 1;
              }
              puVar36[lVar26] = puVar33[lVar26];
              lVar26 = lVar26 + 1;
            }
            puVar36[lVar26] = puVar33[lVar26];
            lVar26 = lVar26 + 1;
          }
          puVar36[lVar26] = puVar33[lVar26];
          lVar26 = lVar26 + 1;
        }
        puVar36[lVar26] = puVar33[lVar26];
        lVar26 = lVar26 + 1;
        if ((int)uVar34 <= (int)lVar26) goto LAB_001ca104;
      }
      do {
        puVar36[lVar26] = puVar33[lVar26];
        lVar2 = lVar26 + 4;
        lVar3 = lVar26 + 5;
        puVar36[lVar26 + 1] = puVar33[lVar26 + 1];
        lVar4 = lVar26 + 6;
        lVar5 = lVar26 + 7;
        lVar6 = lVar26 + 8;
        lVar7 = lVar26 + 9;
        puVar36[lVar26 + 2] = puVar33[lVar26 + 2];
        lVar8 = lVar26 + 10;
        lVar9 = lVar26 + 0xb;
        lVar10 = lVar26 + 0xc;
        lVar11 = lVar26 + 0xd;
        puVar36[lVar26 + 3] = puVar33[lVar26 + 3];
        lVar12 = lVar26 + 0xe;
        lVar13 = lVar26 + 0xf;
        lVar26 = lVar26 + 0x10;
        puVar36[lVar2] = puVar33[lVar2];
        puVar36[lVar3] = puVar33[lVar3];
        puVar36[lVar4] = puVar33[lVar4];
        puVar36[lVar5] = puVar33[lVar5];
        puVar36[lVar6] = puVar33[lVar6];
        puVar36[lVar7] = puVar33[lVar7];
        puVar36[lVar8] = puVar33[lVar8];
        puVar36[lVar9] = puVar33[lVar9];
        puVar36[lVar10] = puVar33[lVar10];
        puVar36[lVar11] = puVar33[lVar11];
        puVar36[lVar12] = puVar33[lVar12];
        puVar36[lVar13] = puVar33[lVar13];
      } while ((int)lVar26 < (int)uVar34);
      *(uint *)((long)param_4 + 0x14) = uVar34;
      return uVar34;
    }
    goto LAB_001ca104;
  }
  uVar16 = -(int)puVar33 & 0xf;
  if (uVar34 < uVar16) {
    uVar16 = uVar34;
  }
  puVar27 = puVar33;
  puVar28 = puVar36;
  uVar29 = uVar16;
  if (uVar16 != 0) {
    *puVar36 = *puVar33;
    puVar27 = puVar33 + 1;
    puVar28 = puVar36 + 1;
    if (uVar16 != 1) {
      puVar36[1] = puVar33[1];
      puVar27 = puVar33 + 2;
      puVar28 = puVar36 + 2;
      if (uVar16 != 2) {
        puVar36[2] = puVar33[2];
        puVar27 = puVar33 + 3;
        puVar28 = puVar36 + 3;
        if (uVar16 != 3) {
          puVar36[3] = puVar33[3];
          puVar27 = puVar33 + 4;
          puVar28 = puVar36 + 4;
          if (uVar16 != 4) {
            puVar36[4] = puVar33[4];
            puVar27 = puVar33 + 5;
            puVar28 = puVar36 + 5;
            if (uVar16 != 5) {
              puVar36[5] = puVar33[5];
              if (uVar16 == 6) {
                puVar27 = puVar33 + 6;
                puVar28 = puVar36 + 6;
                uVar29 = 6;
              }
              else {
                puVar36[6] = puVar33[6];
                puVar27 = puVar33 + 7;
                puVar28 = puVar36 + 7;
                if (uVar16 != 7) {
                  puVar36[7] = puVar33[7];
                  puVar27 = puVar33 + 8;
                  puVar28 = puVar36 + 8;
                  if (uVar16 != 8) {
                    puVar36[8] = puVar33[8];
                    puVar27 = puVar33 + 9;
                    puVar28 = puVar36 + 9;
                    if (uVar16 != 9) {
                      puVar36[9] = puVar33[9];
                      puVar27 = puVar33 + 10;
                      puVar28 = puVar36 + 10;
                      if (uVar16 != 10) {
                        puVar36[10] = puVar33[10];
                        puVar27 = puVar33 + 0xb;
                        puVar28 = puVar36 + 0xb;
                        if (uVar16 != 0xb) {
                          puVar36[0xb] = puVar33[0xb];
                          puVar27 = puVar33 + 0xc;
                          puVar28 = puVar36 + 0xc;
                          if (uVar16 != 0xc) {
                            puVar36[0xc] = puVar33[0xc];
                            puVar27 = puVar33 + 0xd;
                            puVar28 = puVar36 + 0xd;
                            if (uVar16 != 0xd) {
                              puVar36[0xd] = puVar33[0xd];
                              if (uVar16 == 0xf) {
                                puVar36[0xe] = puVar33[0xe];
                                puVar27 = puVar33 + 0xf;
                                puVar28 = puVar36 + 0xf;
                              }
                              else {
                                puVar27 = puVar33 + 0xe;
                                puVar28 = puVar36 + 0xe;
                                uVar29 = 0xe;
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
  uVar21 = (uVar34 - uVar16) - 0x10 >> 4;
  uVar1 = uVar21 + 1;
  uVar20 = uVar1 * 0x10;
  if (0xe < (uVar34 - 1) - uVar16) {
    puVar14 = (undefined8 *)(puVar33 + uVar16);
    puVar15 = (undefined8 *)(puVar36 + uVar16);
    uVar31 = 1;
    uVar21 = uVar21 & 7;
    puVar41 = puVar14 + 2;
    uVar42 = *puVar14;
    puVar24 = puVar15 + 2;
    puVar15[1] = puVar14[1];
    *puVar15 = uVar42;
    if (1 < uVar1) {
      if (uVar21 != 0) {
        if (uVar21 != 1) {
          puVar23 = puVar24;
          puVar40 = puVar41;
          if (uVar21 != 2) {
            if (uVar21 != 3) {
              if (uVar21 != 4) {
                if (uVar21 != 5) {
                  if (uVar21 != 6) {
                    puVar40 = puVar14 + 4;
                    uVar42 = *puVar41;
                    uVar31 = 2;
                    puVar23 = puVar15 + 4;
                    puVar15[3] = puVar14[3];
                    *puVar24 = uVar42;
                  }
                  puVar41 = puVar40 + 2;
                  uVar42 = *puVar40;
                  uVar31 = uVar31 + 1;
                  puVar24 = puVar23 + 2;
                  puVar23[1] = puVar40[1];
                  *puVar23 = uVar42;
                }
                puVar40 = puVar41 + 2;
                uVar42 = *puVar41;
                uVar31 = uVar31 + 1;
                puVar23 = puVar24 + 2;
                puVar24[1] = puVar41[1];
                *puVar24 = uVar42;
              }
              puVar41 = puVar40 + 2;
              uVar42 = *puVar40;
              uVar31 = uVar31 + 1;
              puVar24 = puVar23 + 2;
              puVar23[1] = puVar40[1];
              *puVar23 = uVar42;
            }
            puVar40 = puVar41 + 2;
            uVar42 = *puVar41;
            uVar31 = uVar31 + 1;
            puVar23 = puVar24 + 2;
            puVar24[1] = puVar41[1];
            *puVar24 = uVar42;
          }
          puVar41 = puVar40 + 2;
          uVar42 = *puVar40;
          uVar31 = uVar31 + 1;
          puVar24 = puVar23 + 2;
          puVar23[1] = puVar40[1];
          *puVar23 = uVar42;
        }
        uVar42 = *puVar41;
        uVar31 = uVar31 + 1;
        puVar24[1] = puVar41[1];
        *puVar24 = uVar42;
        puVar24 = puVar24 + 2;
        puVar41 = puVar41 + 2;
        if (uVar1 <= uVar31) goto LAB_001c9fcc;
      }
      do {
        uVar42 = *puVar41;
        uVar31 = uVar31 + 8;
        puVar24[1] = puVar41[1];
        *puVar24 = uVar42;
        uVar42 = puVar41[2];
        puVar24[3] = puVar41[3];
        puVar24[2] = uVar42;
        uVar42 = puVar41[4];
        puVar24[5] = puVar41[5];
        puVar24[4] = uVar42;
        uVar42 = puVar41[6];
        puVar24[7] = puVar41[7];
        puVar24[6] = uVar42;
        uVar42 = puVar41[8];
        puVar24[9] = puVar41[9];
        puVar24[8] = uVar42;
        uVar42 = puVar41[10];
        puVar24[0xb] = puVar41[0xb];
        puVar24[10] = uVar42;
        uVar42 = puVar41[0xc];
        puVar24[0xd] = puVar41[0xd];
        puVar24[0xc] = uVar42;
        uVar42 = puVar41[0xe];
        puVar24[0xf] = puVar41[0xf];
        puVar24[0xe] = uVar42;
        puVar24 = puVar24 + 0x10;
        puVar41 = puVar41 + 0x10;
      } while (uVar31 < uVar1);
    }
LAB_001c9fcc:
    puVar28 = puVar28 + uVar20;
    puVar27 = puVar27 + uVar20;
    uVar29 = uVar29 + uVar20;
    if (uVar34 - uVar16 == uVar20) goto LAB_001ca104;
  }
  *puVar28 = *puVar27;
  if ((((((int)(uVar29 + 1) < (int)uVar34) &&
        (puVar28[1] = puVar27[1], (int)(uVar29 + 2) < (int)uVar34)) &&
       (puVar28[2] = puVar27[2], (int)(uVar29 + 3) < (int)uVar34)) &&
      ((((puVar28[3] = puVar27[3], (int)(uVar29 + 4) < (int)uVar34 &&
         (puVar28[4] = puVar27[4], (int)(uVar29 + 5) < (int)uVar34)) &&
        ((puVar28[5] = puVar27[5], (int)(uVar29 + 6) < (int)uVar34 &&
         ((puVar28[6] = puVar27[6], (int)(uVar29 + 7) < (int)uVar34 &&
          (puVar28[7] = puVar27[7], (int)(uVar29 + 8) < (int)uVar34)))))) &&
       (puVar28[8] = puVar27[8], (int)(uVar29 + 9) < (int)uVar34)))) &&
     ((((puVar28[9] = puVar27[9], (int)(uVar29 + 10) < (int)uVar34 &&
        (puVar28[10] = puVar27[10], (int)(uVar29 + 0xb) < (int)uVar34)) &&
       (puVar28[0xb] = puVar27[0xb], (int)(uVar29 + 0xc) < (int)uVar34)) &&
      ((puVar28[0xc] = puVar27[0xc], (int)(uVar29 + 0xd) < (int)uVar34 &&
       (puVar28[0xd] = puVar27[0xd], (int)(uVar29 + 0xe) < (int)uVar34)))))) {
    puVar28[0xe] = puVar27[0xe];
  }
LAB_001ca104:
  *(uint *)((long)param_4 + 0x14) = uVar34;
  return uVar34;
}

