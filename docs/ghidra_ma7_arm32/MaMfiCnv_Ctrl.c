/* MaMfiCnv_Ctrl @ 000a2e90 4068B */


/* YAMAHA::MaMfiCnv_Ctrl(_MACNV_SEQ_INFO*, unsigned int, unsigned int, void*) */

uint YAMAHA::MaMfiCnv_Ctrl(_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3,void *param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  char *pcVar15;
  int iVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  bool bVar24;
  
  if ((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
     (pcVar9 = *(char **)(param_1 + 4), pcVar9 == (char *)0x0)) {
    return 0xfffffffe;
  }
  if (param_2 == 5) {
LAB_000a2eca:
    if (pcVar9[0x11] == '\x01') {
      if (*(int *)(pcVar9 + 0x7bd4) != 0) {
        *(int *)param_4 = *(int *)(pcVar9 + 0x7bd4) >> 10;
        return 0;
      }
      if (param_3 == 1) {
        *(undefined4 *)param_4 = 0xffffffff;
        return 0;
      }
    }
    *(int *)param_4 = *(int *)(pcVar9 + 0x7bcc) >> 10;
    return 0;
  }
  if (param_2 != 10) {
    if (*pcVar9 != '\x01') {
      return 0xffffffff;
    }
    if (param_2 == 0x32) {
      pcVar9[0x6b40] = *(char *)param_4;
      pcVar9[0x6b41] = *(char *)((int)param_4 + 1);
      return 0;
    }
    if (param_2 < 0x33) {
      if (param_2 == 0x29) {
        pcVar14 = pcVar9 + 0x7bb8;
        if (3 < (byte)pcVar9[0x7c6c]) {
          pcVar9[0x7bc0] = '\0';
          pcVar9[0x7bc1] = '\0';
          pcVar9[0x7bc2] = '\0';
          pcVar9[0x7bc3] = '\0';
          if (param_3 == 100) {
            uVar10 = 0;
            do {
              uVar8 = *(uint *)(pcVar9 + 0x7bbc);
              if ((1 << (uVar10 & 0xff) & uVar8) == 0) {
                MaSndDrv_MuteStream(param_1,uVar10,0);
                uVar8 = *(uint *)(pcVar9 + 0x7bbc);
              }
              if ((1 << (uVar10 + 1 & 0xff) & uVar8) == 0) {
                MaSndDrv_MuteStream(param_1,uVar10 + 1,0);
                uVar8 = *(uint *)(pcVar9 + 0x7bbc);
              }
              if ((1 << (uVar10 + 2 & 0xff) & uVar8) == 0) {
                MaSndDrv_MuteStream(param_1,uVar10 + 2,0);
                uVar8 = *(uint *)(pcVar9 + 0x7bbc);
              }
              if ((1 << (uVar10 + 3 & 0xff) & uVar8) == 0) {
                MaSndDrv_MuteStream(param_1,uVar10 + 3,0);
                uVar8 = *(uint *)(pcVar9 + 0x7bbc);
              }
              if ((1 << (uVar10 + 4 & 0xff) & uVar8) == 0) {
                MaSndDrv_MuteStream(param_1,uVar10 + 4,0);
                uVar8 = *(uint *)(pcVar9 + 0x7bbc);
              }
              if ((1 << (uVar10 + 5 & 0xff) & uVar8) == 0) {
                MaSndDrv_MuteStream(param_1,uVar10 + 5,0);
                uVar8 = *(uint *)(pcVar9 + 0x7bbc);
              }
              if ((1 << (uVar10 + 6 & 0xff) & uVar8) == 0) {
                MaSndDrv_MuteStream(param_1,uVar10 + 6,0);
                uVar8 = *(uint *)(pcVar9 + 0x7bbc);
              }
              if ((1 << (uVar10 + 7 & 0xff) & uVar8) == 0) {
                MaSndDrv_MuteStream(param_1,uVar10 + 7,0);
              }
              uVar10 = uVar10 + 8;
            } while (uVar10 != 0x40);
          }
          else {
            uVar10 = 0;
            pcVar15 = pcVar14;
            do {
              if (-1 < *(int *)(pcVar14 + (int)(pcVar15 + (-0x7a30 - (int)pcVar9))) << 0x1e) {
                *(uint *)(pcVar9 + 0x7bc0) = 1 << (uVar10 & 0xff) | *(uint *)(pcVar9 + 0x7bc0);
                MaSndDrv_MuteStream(param_1,uVar10,1);
              }
              if (-1 < *(int *)(pcVar14 + (int)(pcVar15 + (-0x7a18 - (int)pcVar9))) << 0x1e) {
                *(uint *)(pcVar9 + 0x7bc0) = 1 << (uVar10 + 1 & 0xff) | *(uint *)(pcVar9 + 0x7bc0);
                MaSndDrv_MuteStream(param_1,uVar10 + 1,1);
              }
              if (-1 < *(int *)(pcVar14 + (int)(pcVar15 + (-0x7a00 - (int)pcVar9))) << 0x1e) {
                *(uint *)(pcVar9 + 0x7bc0) = 1 << (uVar10 + 2 & 0xff) | *(uint *)(pcVar9 + 0x7bc0);
                MaSndDrv_MuteStream(param_1,uVar10 + 2,1);
              }
              if (-1 < *(int *)(pcVar14 + (int)(pcVar15 + (-0x79e8 - (int)pcVar9))) << 0x1e) {
                *(uint *)(pcVar9 + 0x7bc0) = 1 << (uVar10 + 3 & 0xff) | *(uint *)(pcVar9 + 0x7bc0);
                MaSndDrv_MuteStream(param_1,uVar10 + 3,1);
              }
              if (-1 < *(int *)(pcVar14 + (int)(pcVar15 + (-0x79d0 - (int)pcVar9))) << 0x1e) {
                *(uint *)(pcVar9 + 0x7bc0) = 1 << (uVar10 + 4 & 0xff) | *(uint *)(pcVar9 + 0x7bc0);
                MaSndDrv_MuteStream(param_1,uVar10 + 4,1);
              }
              if (-1 < *(int *)(pcVar14 + (int)(pcVar15 + (-0x79b8 - (int)pcVar9))) << 0x1e) {
                *(uint *)(pcVar9 + 0x7bc0) = 1 << (uVar10 + 5 & 0xff) | *(uint *)(pcVar9 + 0x7bc0);
                MaSndDrv_MuteStream(param_1,uVar10 + 5,1);
              }
              if (-1 < *(int *)(pcVar14 + (int)(pcVar15 + (-0x79a0 - (int)pcVar9))) << 0x1e) {
                *(uint *)(pcVar9 + 0x7bc0) = 1 << (uVar10 + 6 & 0xff) | *(uint *)(pcVar9 + 0x7bc0);
                MaSndDrv_MuteStream(param_1,uVar10 + 6,1);
              }
              if (-1 < *(int *)(pcVar14 + (int)(pcVar15 + (-0x7988 - (int)pcVar9))) << 0x1e) {
                *(uint *)(pcVar9 + 0x7bc0) = 1 << (uVar10 + 7 & 0xff) | *(uint *)(pcVar9 + 0x7bc0);
                MaSndDrv_MuteStream(param_1,uVar10 + 7,1);
              }
              uVar10 = uVar10 + 8;
              pcVar15 = pcVar15 + 0xc0;
            } while (uVar10 != 0x40);
          }
        }
      }
      else {
        if (param_2 != 0x30) {
          if (param_2 != 5) {
            return 0xffffffff;
          }
          goto LAB_000a2eca;
        }
        pcVar14 = pcVar9 + 0x7bb8;
        if (3 < (byte)pcVar9[0x7c6c]) {
          pcVar9[0x7bbc] = '\0';
          pcVar9[0x7bbd] = '\0';
          pcVar9[0x7bbe] = '\0';
          pcVar9[0x7bbf] = '\0';
          if (param_3 == 0) {
            uVar10 = 0;
            do {
              uVar8 = *(uint *)(pcVar9 + 0x7bc0);
              if ((1 << (uVar10 & 0xff) & uVar8) == 0) {
                MaSndDrv_MuteStream(param_1,uVar10,0);
                uVar8 = *(uint *)(pcVar9 + 0x7bc0);
              }
              if ((1 << (uVar10 + 1 & 0xff) & uVar8) == 0) {
                MaSndDrv_MuteStream(param_1,uVar10 + 1,0);
                uVar8 = *(uint *)(pcVar9 + 0x7bc0);
              }
              if ((1 << (uVar10 + 2 & 0xff) & uVar8) == 0) {
                MaSndDrv_MuteStream(param_1,uVar10 + 2,0);
                uVar8 = *(uint *)(pcVar9 + 0x7bc0);
              }
              if ((1 << (uVar10 + 3 & 0xff) & uVar8) == 0) {
                MaSndDrv_MuteStream(param_1,uVar10 + 3,0);
                uVar8 = *(uint *)(pcVar9 + 0x7bc0);
              }
              if ((1 << (uVar10 + 4 & 0xff) & uVar8) == 0) {
                MaSndDrv_MuteStream(param_1,uVar10 + 4,0);
                uVar8 = *(uint *)(pcVar9 + 0x7bc0);
              }
              if ((1 << (uVar10 + 5 & 0xff) & uVar8) == 0) {
                MaSndDrv_MuteStream(param_1,uVar10 + 5,0);
                uVar8 = *(uint *)(pcVar9 + 0x7bc0);
              }
              if ((1 << (uVar10 + 6 & 0xff) & uVar8) == 0) {
                MaSndDrv_MuteStream(param_1,uVar10 + 6,0);
                uVar8 = *(uint *)(pcVar9 + 0x7bc0);
              }
              if ((1 << (uVar10 + 7 & 0xff) & uVar8) == 0) {
                MaSndDrv_MuteStream(param_1,uVar10 + 7,0);
              }
              uVar10 = uVar10 + 8;
            } while (uVar10 != 0x40);
          }
          else {
            uVar10 = 0;
            pcVar15 = pcVar14;
            do {
              if (-1 < *(int *)(pcVar14 + (int)(pcVar15 + (-0x7a30 - (int)pcVar9))) << 0x1f) {
                *(uint *)(pcVar9 + 0x7bbc) = 1 << (uVar10 & 0xff) | *(uint *)(pcVar9 + 0x7bbc);
                MaSndDrv_MuteStream(param_1,uVar10,1);
              }
              if (-1 < *(int *)(pcVar14 + (int)(pcVar15 + (-0x7a18 - (int)pcVar9))) << 0x1f) {
                *(uint *)(pcVar9 + 0x7bbc) = 1 << (uVar10 + 1 & 0xff) | *(uint *)(pcVar9 + 0x7bbc);
                MaSndDrv_MuteStream(param_1,uVar10 + 1,1);
              }
              if (-1 < *(int *)(pcVar14 + (int)(pcVar15 + (-0x7a00 - (int)pcVar9))) << 0x1f) {
                *(uint *)(pcVar9 + 0x7bbc) = 1 << (uVar10 + 2 & 0xff) | *(uint *)(pcVar9 + 0x7bbc);
                MaSndDrv_MuteStream(param_1,uVar10 + 2,1);
              }
              if (-1 < *(int *)(pcVar14 + (int)(pcVar15 + (-0x79e8 - (int)pcVar9))) << 0x1f) {
                *(uint *)(pcVar9 + 0x7bbc) = 1 << (uVar10 + 3 & 0xff) | *(uint *)(pcVar9 + 0x7bbc);
                MaSndDrv_MuteStream(param_1,uVar10 + 3,1);
              }
              if (-1 < *(int *)(pcVar14 + (int)(pcVar15 + (-0x79d0 - (int)pcVar9))) << 0x1f) {
                *(uint *)(pcVar9 + 0x7bbc) = 1 << (uVar10 + 4 & 0xff) | *(uint *)(pcVar9 + 0x7bbc);
                MaSndDrv_MuteStream(param_1,uVar10 + 4,1);
              }
              if (-1 < *(int *)(pcVar14 + (int)(pcVar15 + (-0x79b8 - (int)pcVar9))) << 0x1f) {
                *(uint *)(pcVar9 + 0x7bbc) = 1 << (uVar10 + 5 & 0xff) | *(uint *)(pcVar9 + 0x7bbc);
                MaSndDrv_MuteStream(param_1,uVar10 + 5,1);
              }
              if (-1 < *(int *)(pcVar14 + (int)(pcVar15 + (-0x79a0 - (int)pcVar9))) << 0x1f) {
                *(uint *)(pcVar9 + 0x7bbc) = 1 << (uVar10 + 6 & 0xff) | *(uint *)(pcVar9 + 0x7bbc);
                MaSndDrv_MuteStream(param_1,uVar10 + 6,1);
              }
              if (-1 < *(int *)(pcVar14 + (int)(pcVar15 + (-0x7988 - (int)pcVar9))) << 0x1f) {
                *(uint *)(pcVar9 + 0x7bbc) = 1 << (uVar10 + 7 & 0xff) | *(uint *)(pcVar9 + 0x7bbc);
                MaSndDrv_MuteStream(param_1,uVar10 + 7,1);
              }
              uVar10 = uVar10 + 8;
              pcVar15 = pcVar15 + 0xc0;
            } while (uVar10 != 0x40);
          }
        }
      }
    }
    else {
      if (param_2 == 0x100) {
        if (3 < *(uint *)(pcVar9 + param_3 * 0x14 + 0xb34)) {
          return 0xffffffff;
        }
        if ((*(byte *)(*(uint *)(pcVar9 + param_3 * 0x14 + 0xb34) + DAT_000a3538 + 0xa3b40) &
            pcVar9[10]) != 0) {
          if (param_3 < 0x400) {
            *(undefined4 *)param_4 = *(undefined4 *)(pcVar9 + param_3 * 0x14 + 0xb34);
            *(int *)((int)param_4 + 0x10) = *(int *)(pcVar9 + param_3 * 0x14 + 0xb38) * 0x32;
            *(int *)((int)param_4 + 8) = (*(int *)(pcVar9 + param_3 * 0x14 + 0xb3c) + -0x80) * 3;
            *(int *)((int)param_4 + 0xc) = (*(int *)(pcVar9 + param_3 * 0x14 + 0xb40) + -0x80) * 3;
            *(undefined4 *)((int)param_4 + 4) = *(undefined4 *)(pcVar9 + param_3 * 0x14 + 0xb44);
            return 0;
          }
          return 0xffffffff;
        }
        return 0xffffffff;
      }
      if (param_2 == 0x101) {
        if (param_3 < 0x20) {
          if (param_3 <= (byte)pcVar9[0xb24] - 1) {
            *(uint *)param_4 = *(int *)(pcVar9 + 0xb20) + param_3 * 0x20;
            return 0;
          }
        }
        else {
          if (param_3 < 0x40) {
            return 0xffffffff;
          }
          if ((param_3 < 0x60) && (param_3 - 0x40 <= (byte)pcVar9[0xb30] - 1)) {
            *(uint *)param_4 = param_3 * 0x20 + -0x800 + *(int *)(pcVar9 + 0xb2c);
            return 0;
          }
        }
      }
      else {
        if (param_2 != 0x35) {
          return 0xffffffff;
        }
        iVar2 = param_3 * 0x400;
        iVar3 = *(int *)(pcVar9 + 0x7bcc);
        if (iVar2 == 0) {
          *(int *)(pcVar9 + 0x1f8) = iVar3 + 1;
          return 0;
        }
        if (iVar2 - iVar3 == 0 || iVar2 < iVar3) {
          *(int *)(pcVar9 + 0x1f8) = iVar2;
        }
      }
    }
    return 0;
  }
  if (pcVar9[0x7d37] == '\0') {
    return 0xffffffff;
  }
  if (*(short *)param_4 != 0) {
    return 0xffffffff;
  }
  uVar10 = (uint)*(byte *)((int)param_4 + 3) + (uint)*(byte *)((int)param_4 + 2) * 0x100;
  if (uVar10 == 0x4658) {
    *(bool *)*(undefined4 *)((int)param_4 + 4) =
         *(int *)(pcVar9 + 0xb2c) != 0 || *(int *)(pcVar9 + 0xb20) != 0;
    *(undefined4 *)((int)param_4 + 0xc) = 1;
    return 1;
  }
  if (uVar10 < 0x4659) {
    if (uVar10 == 0x4334) {
      **(char **)((int)param_4 + 4) = pcVar9[0x7c6c];
      *(undefined4 *)((int)param_4 + 0xc) = 1;
      return 1;
    }
    if (uVar10 < 0x4335) {
      if (uVar10 == 0x3344) {
        **(byte **)((int)param_4 + 4) = pcVar9[0xb] | pcVar9[0x7d39] << 4;
        *(undefined4 *)((int)param_4 + 0xc) = 1;
        return 1;
      }
      if (uVar10 == 0x4332) {
        if (*(byte **)(pcVar9 + 0x7c3c) == (byte *)0x0) {
          return 0xffffffff;
        }
        **(byte **)((int)param_4 + 4) = **(byte **)(pcVar9 + 0x7c3c) & 1;
        *(undefined4 *)((int)param_4 + 0xc) = 1;
        return 1;
      }
      return 0xffffffeb;
    }
    if (uVar10 == 0x4352) {
      puVar7 = *(undefined4 **)(pcVar9 + 0x7c48);
      uVar10 = (uint)*(ushort *)(pcVar9 + 0x7c62);
      goto LAB_000974d4;
    }
    if (uVar10 == 0x464d) {
      **(char **)((int)param_4 + 4) = pcVar9[0x7c6f];
      *(undefined4 *)((int)param_4 + 0xc) = 1;
      return 1;
    }
    if (uVar10 != 0x4344) {
      return 0xffffffeb;
    }
    puVar7 = *(undefined4 **)(pcVar9 + 0x7c44);
    if (puVar7 == (undefined4 *)0x0) {
      return 0xffffffff;
    }
    uVar10 = 8;
  }
  else {
    if (uVar10 != 0x4d49) {
      if (0x4d49 < uVar10) {
        if (uVar10 == 0x5642) {
          bVar11 = pcVar9[0x7cb7] & 1;
          if ((pcVar9[0x7cb8] & 1U) != 0) {
            bVar11 = 1;
          }
          if ((pcVar9[0x7cb9] & 1U) != 0) {
            bVar11 = 1;
          }
          if ((pcVar9[0x7cba] & 1U) != 0) {
            bVar11 = 1;
          }
          if ((pcVar9[0x7cbb] & 1U) != 0) {
            bVar11 = 1;
          }
          if ((pcVar9[0x7cbc] & 1U) != 0) {
            bVar11 = 1;
          }
          if ((pcVar9[0x7cbd] & 1U) != 0) {
            bVar11 = 1;
          }
          if ((pcVar9[0x7cbe] & 1U) != 0) {
            bVar11 = 1;
          }
          if ((pcVar9[0x7cbf] & 1U) != 0) {
            bVar11 = 1;
          }
          if ((pcVar9[0x7cc0] & 1U) != 0) {
            bVar11 = 1;
          }
          if ((pcVar9[0x7cc1] & 1U) != 0) {
            bVar11 = 1;
          }
          if ((pcVar9[0x7cc2] & 1U) != 0) {
            bVar11 = 1;
          }
          if ((pcVar9[0x7cc3] & 1U) != 0) {
            bVar11 = 1;
          }
          if ((pcVar9[0x7cc4] & 1U) != 0) {
            bVar11 = 1;
          }
          if ((pcVar9[0x7cc5] & 1U) != 0) {
            bVar11 = 1;
          }
          if ((pcVar9[0x7cc6] & 1U) != 0) {
            bVar11 = 1;
          }
          if ((pcVar9[0x7cc7] & 1U) != 0) {
            bVar11 = 1;
          }
          if ((pcVar9[0x7cc8] & 1U) != 0) {
            bVar11 = 1;
          }
          if ((pcVar9[0x7cc9] & 1U) != 0) {
            bVar11 = 1;
          }
          if ((pcVar9[0x7cca] & 1U) != 0) {
            bVar11 = 1;
          }
          if ((pcVar9[0x7ccb] & 1U) != 0) {
            bVar11 = 1;
          }
          if ((pcVar9[0x7ccc] & 1U) != 0) {
            bVar11 = 1;
          }
          if ((pcVar9[0x7ccd] & 1U) != 0) {
            bVar11 = 1;
          }
          if ((pcVar9[0x7cce] & 1U) != 0) {
            bVar11 = 1;
          }
          if ((pcVar9[0x7ccf] & 1U) != 0) {
            bVar11 = 1;
          }
          if ((pcVar9[0x7cd0] & 1U) != 0) {
            bVar11 = 1;
          }
          if ((pcVar9[0x7cd1] & 1U) != 0) {
            bVar11 = 1;
          }
          if ((pcVar9[0x7cd2] & 1U) != 0) {
            bVar11 = 1;
          }
          if ((pcVar9[0x7cd3] & 1U) != 0) {
            bVar11 = 1;
          }
          if ((pcVar9[0x7cd4] & 1U) != 0) {
            bVar11 = 1;
          }
          if ((pcVar9[0x7cd5] & 1U) != 0) {
            bVar11 = 1;
          }
          if ((pcVar9[0x7cd6] & 1U) != 0) {
            bVar11 = 1;
          }
          **(byte **)((int)param_4 + 4) = bVar11;
          *(undefined4 *)((int)param_4 + 0xc) = 1;
          return 1;
        }
        if (uVar10 == 0x5a5a) {
          puVar7 = *(undefined4 **)(pcVar9 + 0x7c4c);
          uVar10 = (uint)*(ushort *)(pcVar9 + 0x7c64);
        }
        else {
          if (uVar10 != 0x5354) {
            return 0xffffffeb;
          }
          puVar7 = *(undefined4 **)(pcVar9 + 0x7c40);
          uVar10 = (uint)*(ushort *)(pcVar9 + 0x7c60);
        }
        goto LAB_000974d4;
      }
      if (uVar10 == 0x4b43) {
        *(bool *)*(undefined4 *)((int)param_4 + 4) =
             (pcVar9[0x7c96] & 3U) != 1 ||
             ((pcVar9[0x7c95] & 3U) != 1 ||
             ((pcVar9[0x7c94] & 3U) != 1 ||
             ((pcVar9[0x7c93] & 3U) != 1 ||
             ((pcVar9[0x7c92] & 3U) != 1 ||
             ((pcVar9[0x7c91] & 3U) != 1 ||
             ((pcVar9[0x7c90] & 3U) != 1 ||
             ((pcVar9[0x7c8f] & 3U) != 1 ||
             ((pcVar9[0x7c8e] & 3U) != 1 ||
             ((pcVar9[0x7c8d] & 3U) != 1 ||
             ((pcVar9[0x7c8c] & 3U) != 1 ||
             ((pcVar9[0x7c8b] & 3U) != 1 ||
             ((pcVar9[0x7c8a] & 3U) != 1 ||
             ((pcVar9[0x7c89] & 3U) != 1 ||
             ((pcVar9[0x7c88] & 3U) != 1 ||
             ((pcVar9[0x7c87] & 3U) != 1 ||
             ((pcVar9[0x7c86] & 3U) != 1 ||
             ((pcVar9[0x7c85] & 3U) != 1 ||
             ((pcVar9[0x7c84] & 3U) != 1 ||
             ((pcVar9[0x7c83] & 3U) != 1 ||
             ((pcVar9[0x7c82] & 3U) != 1 ||
             ((pcVar9[0x7c81] & 3U) != 1 ||
             ((pcVar9[0x7c80] & 3U) != 1 ||
             ((pcVar9[0x7c7f] & 3U) != 1 ||
             ((pcVar9[0x7c7e] & 3U) != 1 ||
             ((pcVar9[0x7c7d] & 3U) != 1 ||
             ((pcVar9[0x7c7c] & 3U) != 1 ||
             ((pcVar9[0x7c7b] & 3U) != 1 ||
             ((pcVar9[0x7c7a] & 3U) != 1 ||
             ((pcVar9[0x7c79] & 3U) != 1 ||
             ((pcVar9[0x7c78] & 3U) != 1 || (pcVar9[0x7c77] & 3U) != 1))))))))))))))))))))))))))))))
        ;
        *(undefined4 *)((int)param_4 + 0xc) = 1;
        return 1;
      }
      if (uVar10 == 0x4c44) {
        bVar11 = pcVar9[0x7c97] & 7;
        if ((pcVar9[0x7c97] & 7U) != 0) {
          bVar11 = 1;
        }
        if ((pcVar9[0x7c98] & 7U) != 0) {
          bVar11 = 1;
        }
        if ((pcVar9[0x7c99] & 7U) != 0) {
          bVar11 = 1;
        }
        if ((pcVar9[0x7c9a] & 7U) != 0) {
          bVar11 = 1;
        }
        if ((pcVar9[0x7c9b] & 7U) != 0) {
          bVar11 = 1;
        }
        if ((pcVar9[0x7c9c] & 7U) != 0) {
          bVar11 = 1;
        }
        if ((pcVar9[0x7c9d] & 7U) != 0) {
          bVar11 = 1;
        }
        if ((pcVar9[0x7c9e] & 7U) != 0) {
          bVar11 = 1;
        }
        if ((pcVar9[0x7c9f] & 7U) != 0) {
          bVar11 = 1;
        }
        if ((pcVar9[0x7ca0] & 7U) != 0) {
          bVar11 = 1;
        }
        if ((pcVar9[0x7ca1] & 7U) != 0) {
          bVar11 = 1;
        }
        if ((pcVar9[0x7ca2] & 7U) != 0) {
          bVar11 = 1;
        }
        if ((pcVar9[0x7ca3] & 7U) != 0) {
          bVar11 = 1;
        }
        if ((pcVar9[0x7ca4] & 7U) != 0) {
          bVar11 = 1;
        }
        if ((pcVar9[0x7ca5] & 7U) != 0) {
          bVar11 = 1;
        }
        if ((pcVar9[0x7ca6] & 7U) != 0) {
          bVar11 = 1;
        }
        if ((pcVar9[0x7ca7] & 7U) != 0) {
          bVar11 = 1;
        }
        if ((pcVar9[0x7ca8] & 7U) != 0) {
          bVar11 = 1;
        }
        if ((pcVar9[0x7ca9] & 7U) != 0) {
          bVar11 = 1;
        }
        if ((pcVar9[0x7caa] & 7U) != 0) {
          bVar11 = 1;
        }
        if ((pcVar9[0x7cab] & 7U) != 0) {
          bVar11 = 1;
        }
        if ((pcVar9[0x7cac] & 7U) != 0) {
          bVar11 = 1;
        }
        if ((pcVar9[0x7cad] & 7U) != 0) {
          bVar11 = 1;
        }
        if ((pcVar9[0x7cae] & 7U) != 0) {
          bVar11 = 1;
        }
        if ((pcVar9[0x7caf] & 7U) != 0) {
          bVar11 = 1;
        }
        if ((pcVar9[0x7cb0] & 7U) != 0) {
          bVar11 = 1;
        }
        if ((pcVar9[0x7cb1] & 7U) != 0) {
          bVar11 = 1;
        }
        if ((pcVar9[0x7cb2] & 7U) != 0) {
          bVar11 = 1;
        }
        if ((pcVar9[0x7cb3] & 7U) != 0) {
          bVar11 = 1;
        }
        if ((pcVar9[0x7cb4] & 7U) != 0) {
          bVar11 = 1;
        }
        if ((pcVar9[0x7cb5] & 7U) != 0) {
          bVar11 = 1;
        }
        if ((pcVar9[0x7cb6] & 7U) != 0) {
          bVar11 = 1;
        }
        **(byte **)((int)param_4 + 4) = bVar11;
        *(undefined4 *)((int)param_4 + 0xc) = 1;
        return 1;
      }
      if (uVar10 != 0x4752) {
        return 0xffffffeb;
      }
    }
    if ((byte)pcVar9[0x7c6c] < 3) {
      puVar7 = *(undefined4 **)(pcVar9 + 0x7c4c);
      uVar1 = *(ushort *)(pcVar9 + 0x7c64);
    }
    else {
      puVar7 = *(undefined4 **)(pcVar9 + 0x7c50);
      uVar1 = *(ushort *)(pcVar9 + 0x7c66);
    }
    uVar10 = (uint)uVar1;
LAB_000974d4:
    if ((puVar7 == (undefined4 *)0x0) || (uVar10 == 0)) {
      return 0xffffffff;
    }
  }
  puVar4 = *(undefined4 **)((int)param_4 + 4);
  if ((int)*(uint *)((int)param_4 + 8) <= (int)uVar10) {
    uVar10 = *(uint *)((int)param_4 + 8);
  }
  if ((int)uVar10 < 1) goto LAB_000975ce;
  if ((((uint)puVar7 | (uint)puVar4) & 3) != 0 ||
      (uVar10 < 10 || puVar7 < puVar4 + 1 && puVar4 < puVar7 + 1)) {
    puVar18 = (undefined1 *)((int)puVar7 + uVar10);
    puVar22 = (undefined1 *)((int)puVar7 + 1);
    uVar8 = (uint)(puVar18 + ~(uint)puVar7) & 7;
    puVar5 = (undefined1 *)((int)puVar4 + 1);
    *(undefined1 *)puVar4 = *(undefined1 *)puVar7;
    if (puVar22 != puVar18) {
      puVar23 = puVar22;
      if (uVar8 != 0) {
        if (uVar8 != 1) {
          puVar23 = puVar5;
          puVar6 = puVar22;
          if (uVar8 != 2) {
            if (uVar8 != 3) {
              if (uVar8 != 4) {
                if (uVar8 != 5) {
                  puVar6 = puVar5;
                  puVar23 = puVar22;
                  if (uVar8 != 6) {
                    puVar23 = (undefined1 *)((int)puVar7 + 2);
                    puVar6 = (undefined1 *)((int)puVar4 + 2);
                    *puVar5 = *puVar22;
                  }
                  puVar22 = puVar23 + 1;
                  puVar5 = puVar6 + 1;
                  *puVar6 = *puVar23;
                }
                puVar6 = puVar22 + 1;
                puVar23 = puVar5 + 1;
                *puVar5 = *puVar22;
              }
              puVar22 = puVar6 + 1;
              puVar5 = puVar23 + 1;
              *puVar23 = *puVar6;
            }
            puVar6 = puVar22 + 1;
            puVar23 = puVar5 + 1;
            *puVar5 = *puVar22;
          }
          puVar22 = puVar6 + 1;
          puVar5 = puVar23 + 1;
          *puVar23 = *puVar6;
        }
        *puVar5 = *puVar22;
        puVar5 = puVar5 + 1;
        puVar23 = puVar22 + 1;
        if (puVar22 + 1 == puVar18) goto LAB_000975ce;
      }
      do {
        puVar22 = puVar23 + 8;
        *puVar5 = *puVar23;
        puVar5[1] = puVar23[1];
        puVar5[2] = puVar23[2];
        puVar5[3] = puVar23[3];
        puVar5[4] = puVar23[4];
        puVar5[5] = puVar23[5];
        puVar5[6] = puVar23[6];
        puVar5[7] = puVar23[7];
        puVar5 = puVar5 + 8;
        puVar23 = puVar22;
      } while (puVar22 != puVar18);
    }
    goto LAB_000975ce;
  }
  uVar13 = uVar10 >> 2;
  uVar12 = 1;
  uVar21 = uVar13 * 4;
  *puVar4 = *puVar7;
  uVar8 = uVar13 - 1 & 7;
  iVar2 = 4;
  if (1 < uVar13) {
    if (uVar8 != 0) {
      if (uVar8 != 1) {
        if (uVar8 != 2) {
          if (uVar8 != 3) {
            if (uVar8 != 4) {
              if (uVar8 != 5) {
                bVar24 = uVar8 != 6;
                if (bVar24) {
                  uVar8 = puVar7[1];
                  iVar2 = 8;
                  uVar12 = 2;
                }
                uVar12 = uVar12 + 1;
                if (bVar24) {
                  puVar4[1] = uVar8;
                }
                *(undefined4 *)((int)puVar4 + iVar2) = *(undefined4 *)((int)puVar7 + iVar2);
                iVar2 = iVar2 + 4;
              }
              uVar12 = uVar12 + 1;
              *(undefined4 *)((int)puVar4 + iVar2) = *(undefined4 *)((int)puVar7 + iVar2);
              iVar2 = iVar2 + 4;
            }
            uVar12 = uVar12 + 1;
            *(undefined4 *)((int)puVar4 + iVar2) = *(undefined4 *)((int)puVar7 + iVar2);
            iVar2 = iVar2 + 4;
          }
          uVar12 = uVar12 + 1;
          *(undefined4 *)((int)puVar4 + iVar2) = *(undefined4 *)((int)puVar7 + iVar2);
          iVar2 = iVar2 + 4;
        }
        uVar12 = uVar12 + 1;
        *(undefined4 *)((int)puVar4 + iVar2) = *(undefined4 *)((int)puVar7 + iVar2);
        iVar2 = iVar2 + 4;
      }
      uVar12 = uVar12 + 1;
      *(undefined4 *)((int)puVar4 + iVar2) = *(undefined4 *)((int)puVar7 + iVar2);
      iVar2 = iVar2 + 4;
      if (uVar13 <= uVar12) goto LAB_000975a2;
    }
    do {
      iVar16 = iVar2 + 0x10;
      iVar17 = iVar2 + 0xc;
      *(undefined4 *)((int)puVar4 + iVar2) = *(undefined4 *)((int)puVar7 + iVar2);
      iVar20 = iVar2 + 0x14;
      uVar12 = uVar12 + 8;
      *(undefined4 *)((int)puVar4 + iVar2 + 4) = *(undefined4 *)((int)puVar7 + iVar2 + 4);
      iVar3 = iVar2 + 0x18;
      *(undefined4 *)((int)puVar4 + iVar2 + 8) = *(undefined4 *)((int)puVar7 + iVar2 + 8);
      iVar19 = iVar2 + 0x1c;
      iVar2 = iVar2 + 0x20;
      *(undefined4 *)((int)puVar4 + iVar17) = *(undefined4 *)((int)puVar7 + iVar17);
      *(undefined4 *)((int)puVar4 + iVar16) = *(undefined4 *)((int)puVar7 + iVar16);
      *(undefined4 *)((int)puVar4 + iVar20) = *(undefined4 *)((int)puVar7 + iVar20);
      *(undefined4 *)((int)puVar4 + iVar3) = *(undefined4 *)((int)puVar7 + iVar3);
      *(undefined4 *)((int)puVar4 + iVar19) = *(undefined4 *)((int)puVar7 + iVar19);
    } while (uVar12 < uVar13);
  }
LAB_000975a2:
  if (((uVar10 != uVar21) &&
      (*(undefined1 *)(puVar4 + uVar13) = *(undefined1 *)(puVar7 + uVar13),
      (int)(uVar21 + 1) < (int)uVar10)) &&
     (*(undefined1 *)((int)puVar4 + uVar21 + 1) = *(undefined1 *)((int)puVar7 + uVar21 + 1),
     (int)(uVar21 + 2) < (int)uVar10)) {
    *(undefined1 *)((int)puVar4 + uVar21 + 2) = *(undefined1 *)((int)puVar7 + uVar21 + 2);
  }
LAB_000975ce:
  *(uint *)((int)param_4 + 0xc) = uVar10;
  return uVar10;
}

