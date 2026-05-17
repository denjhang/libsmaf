/* MaPhrCnv_Conv @ 000bf434 2362B */


/* YAMAHA::MaPhrCnv_Conv(_MACNV_SEQ_INFO*, _MASND_CMD_PARAM*) */

undefined4 YAMAHA::MaPhrCnv_Conv(_MACNV_SEQ_INFO *param_1,_MASND_CMD_PARAM *param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int extraout_r1;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  
  if (((param_1 != (_MACNV_SEQ_INFO *)0x0) &&
      (piVar10 = *(int **)(param_1 + 4), piVar10 != (int *)0x0)) &&
     (param_2 != (_MASND_CMD_PARAM *)0x0)) {
    if (*piVar10 != 1) {
      return 0xffffffff;
    }
    switch(piVar10[0xe]) {
    case -4:
      iVar7 = piVar10[0xf];
      piVar10[iVar7 * 10 + 0x1b] = 0;
      piVar10[0xe] = -1;
      *(undefined4 *)(param_2 + 4) = 0;
      iVar11 = piVar10[iVar7 * 10 + 0x1a];
      *(int *)(param_2 + 8) = iVar7;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(int *)(param_2 + 0xc) = iVar11;
      *(undefined4 *)param_2 = 0x15;
      return 1;
    case -3:
      *(undefined4 *)(param_2 + 4) = 0;
      *(undefined4 *)(param_2 + 8) = 0;
      *(undefined4 *)(param_2 + 0xc) = 0;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined4 *)param_2 = 0x1b;
      return 0;
    case -2:
      if (piVar10[0x434] != 0xf) {
        piVar10[0x434] = piVar10[0x434] + 1;
        *(undefined4 *)(param_2 + 4) = 0;
        iVar7 = piVar10[0x434];
        iVar11 = piVar10[0x433];
        *(undefined4 *)(param_2 + 0xc) = 0;
        *(int *)(param_2 + 8) = iVar7;
        *(int *)param_2 = iVar11;
        *(undefined4 *)(param_2 + 0x10) = 0;
        return 1;
      }
      piVar10[0xe] = -3;
      *(undefined4 *)(param_2 + 4) = 0;
      *(undefined4 *)(param_2 + 8) = 0;
      *(undefined4 *)(param_2 + 0xc) = 0;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined4 *)param_2 = 0x1b;
      return 0;
    case -1:
      goto switchD_000bf460_caseD_ffffffff;
    default:
      uVar5 = switchD_000bf460::default(piVar10 + 5,param_2);
      return uVar5;
    }
  }
  return 0xfffffffe;
switchD_000bf460_caseD_ffffffff:
  if (1 < piVar10[5] - 1U) {
    return 0xffffffff;
  }
  uVar4 = piVar10[0xc];
  if ((uint)piVar10[0xd] <= uVar4) {
    uVar4 = 0;
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)param_2 = 0x12;
    goto LAB_000bf494;
  }
  iVar7 = piVar10[10];
  iVar11 = iVar7 + 1;
  bVar2 = *(byte *)(piVar10[0x11] + iVar7);
  uVar12 = (uint)bVar2;
  if ((bVar2 & 0x80) != 0) {
    pbVar1 = (byte *)(piVar10[0x11] + iVar11);
    iVar11 = iVar7 + 2;
    uVar12 = *pbVar1 + 0x80 + (uVar12 & 0x7f) * 0x80;
  }
  if (piVar10[0xb] != 0) {
    uVar12 = piVar10[0xb] & 0x7fffffff;
    piVar10[0xb] = 0;
  }
  iVar7 = piVar10[8];
  iVar13 = piVar10[9];
  *(undefined4 *)param_2 = 0x1b;
  __aeabi_uidivmod(uVar4 * iVar7,iVar13);
  uVar5 = __udivsi3(iVar7 * uVar12 + extraout_r1,iVar13);
  uVar4 = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  iVar13 = iVar11 + 1;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 4) = uVar5;
  iVar7 = piVar10[0x11];
  piVar10[10] = iVar13;
  piVar10[0xc] = piVar10[0xc] + uVar12;
  bVar2 = *(byte *)(iVar7 + iVar11);
  uVar12 = (uint)bVar2;
  if (uVar12 == 0) {
    piVar10[10] = iVar11 + 2;
    iVar3 = DAT_000bfdac;
    iVar14 = DAT_000bfda4;
    bVar2 = *(byte *)(iVar7 + iVar13);
    uVar12 = bVar2 & 0x30;
    uVar9 = bVar2 & 0xf;
    uVar4 = (uint)(bVar2 >> 6);
    if (uVar12 == 0x20) {
      if ((piVar10[5] != 2) || (uVar9 - 1 < 0xe)) {
        *(uint *)(param_2 + 8) = uVar4;
        *(undefined4 *)param_2 = 3;
        *(undefined4 *)(param_2 + 0x10) = 0;
        *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(iVar3 + uVar9 * 4 + 0xbfb78);
        goto LAB_000bf494;
      }
    }
    else if (uVar12 == 0x30) {
      piVar10[10] = iVar11 + 3;
      iVar13 = DAT_000bfda8;
      bVar2 = *(byte *)(iVar7 + iVar11 + 2);
      uVar12 = (uint)bVar2;
      switch(uVar9) {
      case 0:
        iVar11 = piVar10[5];
        if (iVar11 == 2) {
          if (0x7f < uVar12) break;
          piVar10[uVar4 * 10 + 0x13] = uVar12;
          uVar9 = piVar10[uVar4 * 10 + 0x12];
        }
        else {
          uVar12 = uVar12 & 3;
          piVar10[uVar4 * 10 + 0x13] = uVar12;
          uVar9 = piVar10[(uVar12 + 0x21a) * 2 + 5];
        }
        if (uVar9 == 1) {
          if (iVar11 == 2) {
            piVar15 = piVar10 + 0x43b;
            do {
              if (piVar15[-2] == 1) {
                if (uVar12 == piVar15[-1]) goto LAB_000bf914;
              }
              else if (piVar15[-2] == -1) break;
              piVar15 = piVar15 + 2;
            } while (piVar15 != piVar10 + 0x45b);
            uVar12 = 0;
            uVar9 = uVar12;
          }
        }
        else if (uVar9 == 0) {
          if (iVar11 == 1) {
            uVar12 = piVar10[(uVar12 + 0x21a) * 2 + 6];
          }
        }
        else if (uVar9 - 0x80 < 2) {
          if (iVar11 == 1) {
            uVar9 = 0;
            uVar12 = 2;
          }
          else {
            uVar12 = 0;
          }
        }
        else {
          if (iVar11 != 1) break;
          uVar12 = 2;
          uVar9 = 0;
        }
LAB_000bf914:
        *(uint *)(param_2 + 8) = uVar4;
        *(uint *)(param_2 + 0xc) = uVar9;
        *(uint *)(param_2 + 0x10) = uVar12;
        *(undefined4 *)param_2 = 2;
        goto LAB_000bf494;
      case 1:
        if ((piVar10[5] == 2) && ((bVar2 & 0x7f) == 0 || (uVar12 & 0x7f) == 1)) {
          piVar10[uVar4 * 10 + 0x12] = uVar12;
          uVar4 = *(uint *)(param_2 + 8);
          goto LAB_000bf494;
        }
        break;
      case 2:
        if (uVar12 == 0x81) {
          uVar12 = 0xffffffff;
        }
        else if (uVar12 < 0x82) {
          if (4 < uVar12) {
LAB_000bfc34:
            uVar12 = piVar10[uVar4 * 10 + 0x19];
            if (piVar10[5] != 2) {
              uVar12 = 0;
            }
          }
        }
        else if (uVar12 == 0x83) {
          uVar12 = 0xfffffffd;
        }
        else if (uVar12 < 0x83) {
          uVar12 = 0xfffffffe;
        }
        else {
          if (uVar12 != 0x84) goto LAB_000bfc34;
          uVar12 = 0xfffffffc;
        }
        piVar10[uVar4 * 10 + 0x19] = uVar12;
        uVar4 = *(uint *)(param_2 + 8);
        goto LAB_000bf494;
      case 3:
        if ((piVar10[5] == 2) && (uVar12 < 0x80)) {
          *(uint *)(param_2 + 8) = uVar4;
          *(undefined4 *)param_2 = 3;
          *(undefined4 *)(param_2 + 0x10) = 0;
          *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(iVar13 + uVar12 * 4 + 0xbfade);
          goto LAB_000bf494;
        }
        break;
      case 4:
        if ((piVar10[5] != 2) || (uVar12 < 0x80)) {
          iVar11 = (uVar12 & 0x7f) << 7;
          if (piVar10[uVar4 * 10 + 0x1b] == 1) {
            piVar10[uVar4 * 10 + 0x1a] = iVar11;
            piVar10[0xf] = uVar4;
            iVar11 = piVar10[uVar4 * 10 + 0x17];
            *(uint *)(param_2 + 8) = uVar4;
            *(undefined4 *)param_2 = 0xd;
            *(int *)(param_2 + 0xc) = iVar11;
            *(undefined4 *)(param_2 + 0x10) = 0;
          }
          else {
            *(uint *)(param_2 + 8) = uVar4;
            *(int *)(param_2 + 0xc) = iVar11;
            *(undefined4 *)param_2 = 0x15;
            *(undefined4 *)(param_2 + 0x10) = 0;
          }
          goto LAB_000bf494;
        }
        break;
      case 5:
        if ((piVar10[5] == 2) && (uVar12 < 0x19)) {
          piVar10[uVar4 * 10 + 0x17] = uVar12;
          piVar10[uVar4 * 10 + 0x1b] = 1;
          uVar4 = *(uint *)(param_2 + 8);
          goto LAB_000bf494;
        }
        break;
      case 6:
        if ((piVar10[5] == 2) && (uVar12 < 0x80)) {
          piVar10[uVar4 * 10 + 0x18] = uVar12;
          uVar4 = *(uint *)(param_2 + 8);
          goto LAB_000bf494;
        }
        break;
      case 10:
        if ((piVar10[5] != 2) || (uVar12 < 0x80)) {
          *(uint *)(param_2 + 0xc) = uVar12 & 0x7f;
          *(uint *)(param_2 + 8) = uVar4;
          *(undefined4 *)param_2 = 5;
          *(undefined4 *)(param_2 + 0x10) = 0;
          goto LAB_000bf494;
        }
        break;
      case 0xb:
        if ((piVar10[5] != 2) || (uVar12 < 0x80)) {
          *(uint *)(param_2 + 8) = uVar4;
          *(uint *)(param_2 + 0xc) = uVar12 & 0x7f;
          *(undefined4 *)param_2 = 4;
          *(undefined4 *)(param_2 + 0x10) = 0;
          goto LAB_000bf494;
        }
      }
    }
    else if (((bVar2 & 0x30) == 0) && ((piVar10[5] != 2 || (uVar9 - 1 < 0xe)))) {
      *(uint *)(param_2 + 8) = uVar4;
      *(undefined4 *)param_2 = 4;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(iVar14 + uVar9 * 4 + 0xbf810);
      goto LAB_000bf494;
    }
  }
  else {
    if (uVar12 != 0xff) {
      piVar10[10] = iVar11 + 2;
      uVar4 = (uint)*(byte *)(iVar7 + iVar13);
      if ((*(byte *)(iVar7 + iVar13) & 0x80) != 0) {
        piVar10[10] = iVar11 + 3;
        uVar4 = *(byte *)(iVar7 + iVar11 + 2) + 0x80 + (uVar4 & 0x7f) * 0x80;
      }
      if (piVar10[5] == 1) {
        iVar11 = piVar10[(uint)(bVar2 >> 6) * 10 + 0x19];
        if (uVar4 != 0) {
          *(uint *)(param_2 + 8) = (uint)(bVar2 >> 6);
          *(undefined4 *)(param_2 + 0x10) = 0x7f;
          *(undefined4 *)param_2 = 0x1c;
          iVar11 = (uVar12 & 0xf) + (iVar11 + ((uVar12 & 0x3f) >> 4) + 3) * 0xc;
          uVar5 = UnsignedSaturate(iVar11,7);
          UnsignedDoesSaturate(iVar11,7);
          *(undefined4 *)(param_2 + 0xc) = uVar5;
        }
LAB_000bf6d0:
        piVar10[0x437] = uVar4;
      }
      else {
        uVar9 = uVar12 & 0xf;
        if (uVar9 - 1 < 0xc) {
          uVar6 = (uint)(bVar2 >> 6);
          uVar8 = (uVar12 & 0x3f) >> 4;
          uVar12 = piVar10[uVar6 * 10 + 0x12];
          if (uVar12 != 0x80) {
            if (uVar12 < 0x81) {
              if (uVar12 < 2) {
                iVar7 = uVar9 + (uVar8 + piVar10[uVar6 * 10 + 0x19] + 3) * 0xc;
                iVar11 = UnsignedSaturate(iVar7,7);
                UnsignedDoesSaturate(iVar7,7);
                goto LAB_000bf6b6;
              }
            }
            else if (uVar12 == 0x81) {
              iVar11 = uVar9 + uVar8 * 0xc;
              if (piVar10[0x439] == 0x81) {
                if (iVar11 == piVar10[0x43a]) goto LAB_000bf6b6;
              }
              else if (piVar10[0x439] == -1) goto LAB_000bf6d8;
              if (piVar10[0x43b] == 0x81) {
                if (iVar11 == piVar10[0x43c]) goto LAB_000bf6b6;
              }
              else if (piVar10[0x43b] == -1) goto LAB_000bf6d8;
              if (piVar10[0x43d] == 0x81) {
                if (iVar11 == piVar10[0x43e]) goto LAB_000bf6b6;
              }
              else if (piVar10[0x43d] == -1) goto LAB_000bf6d8;
              if (piVar10[0x43f] == 0x81) {
                if (iVar11 == piVar10[0x440]) goto LAB_000bf6b6;
              }
              else if (piVar10[0x43f] == -1) goto LAB_000bf6d8;
              if (piVar10[0x441] == 0x81) {
                if (iVar11 == piVar10[0x442]) goto LAB_000bf6b6;
              }
              else if (piVar10[0x441] == -1) goto LAB_000bf6d8;
              if (piVar10[0x443] == 0x81) {
                if (iVar11 == piVar10[0x444]) goto LAB_000bf6b6;
              }
              else if (piVar10[0x443] == -1) goto LAB_000bf6d8;
              if (piVar10[0x445] == 0x81) {
                if (iVar11 == piVar10[0x446]) goto LAB_000bf6b6;
              }
              else if (piVar10[0x445] == -1) goto LAB_000bf6d8;
              if (piVar10[0x447] == 0x81) {
                if (iVar11 == piVar10[0x448]) goto LAB_000bf6b6;
              }
              else if (piVar10[0x447] == -1) goto LAB_000bf6d8;
              if (piVar10[0x449] == 0x81) {
                if (iVar11 == piVar10[0x44a]) goto LAB_000bf6b6;
              }
              else if (piVar10[0x449] == -1) goto LAB_000bf6d8;
              if (piVar10[1099] == 0x81) {
                if (iVar11 == piVar10[0x44c]) goto LAB_000bf6b6;
              }
              else if (piVar10[1099] == -1) goto LAB_000bf6d8;
              if (piVar10[0x44d] == 0x81) {
                if (iVar11 == piVar10[0x44e]) goto LAB_000bf6b6;
              }
              else if (piVar10[0x44d] == -1) goto LAB_000bf6d8;
              if (piVar10[0x44f] == 0x81) {
                if (iVar11 == piVar10[0x450]) goto LAB_000bf6b6;
              }
              else if (piVar10[0x44f] == -1) goto LAB_000bf6d8;
              if (piVar10[0x451] == 0x81) {
                if (iVar11 == piVar10[0x452]) goto LAB_000bf6b6;
              }
              else if (piVar10[0x451] == -1) goto LAB_000bf6d8;
              if (piVar10[0x453] == 0x81) {
                if (iVar11 == piVar10[0x454]) goto LAB_000bf6b6;
              }
              else if (piVar10[0x453] == -1) goto LAB_000bf6d8;
              if (piVar10[0x455] == 0x81) {
                if (iVar11 == piVar10[0x456]) goto LAB_000bf6b6;
              }
              else if (piVar10[0x455] == -1) goto LAB_000bf6d8;
              if ((piVar10[0x457] != 0x81) || (iVar11 != piVar10[0x458])) goto LAB_000bf6d8;
              goto LAB_000bf6b6;
            }
            goto switchD_000bf752_caseD_7;
          }
          iVar11 = uVar9 + uVar8 * 0xc + 0x22;
LAB_000bf6b6:
          if (uVar4 != 0) {
            iVar7 = piVar10[uVar6 * 10 + 0x18];
            *(uint *)(param_2 + 8) = uVar6;
            *(int *)(param_2 + 0xc) = iVar11;
            *(int *)(param_2 + 0x10) = iVar7;
            *(undefined4 *)param_2 = 0x1c;
          }
          goto LAB_000bf6d0;
        }
      }
LAB_000bf6d8:
      uVar4 = *(uint *)(param_2 + 8);
      goto LAB_000bf494;
    }
    iVar14 = iVar11 + 2;
    piVar10[10] = iVar14;
    uVar12 = (uint)*(byte *)(iVar7 + iVar13);
    if (piVar10[5] == 1) {
      if (uVar12 == 0xf0) {
        iVar11 = iVar11 + 3;
        piVar10[10] = iVar11;
        bVar2 = *(byte *)(iVar7 + iVar14);
        if ((bVar2 == 6) && (iVar13 = iVar7 + iVar11, *(char *)(iVar7 + iVar11) == 'C')) {
          if (*(char *)(iVar13 + 1) == '\x03') {
            if ((*(char *)(iVar13 + 2) == -0x70) && (*(char *)(iVar13 + 5) == -9)) {
              uVar4 = *(byte *)(iVar13 + 3) & 0xf0;
              uVar12 = *(byte *)(iVar13 + 3) & 3;
              if (uVar4 == 0xc0) {
                piVar10[uVar12 * 10 + 0x14] = piVar10[uVar12 * 10 + 0x14] | 2;
                piVar10[uVar12 * 10 + 0x15] = (uint)*(byte *)(iVar13 + 4);
              }
              else {
                if (uVar4 != 0xb0) goto switchD_000bf752_caseD_7;
                piVar10[uVar12 * 10 + 0x14] = piVar10[uVar12 * 10 + 0x14] | 1;
                piVar10[uVar12 * 10 + 0x16] = (uint)*(byte *)(iVar13 + 4);
              }
              if ((piVar10[uVar12 * 10 + 0x14] & 3U) == 3) {
                uVar9 = piVar10[uVar12 * 10 + 0x15];
                uVar4 = piVar10[uVar12 * 10 + 0x16];
                *(uint *)(param_2 + 8) = uVar12;
                uVar4 = uVar4 | 0x80000000 | (uVar9 & 0xffffffdf) << 8;
                if ((uVar9 & 0x20) == 0) {
                  *(uint *)(param_2 + 0xc) = uVar4;
                  *(undefined4 *)(param_2 + 0x10) = 0;
                  *(undefined4 *)param_2 = 0x1f;
                }
                else {
                  *(uint *)(param_2 + 0xc) = uVar4;
                  *(undefined4 *)param_2 = 0x1d;
                  *(undefined4 *)(param_2 + 0x10) = 0x7f;
                }
              }
            }
          }
          else if ((((*(char *)(iVar13 + 1) == '\x04') && (*(char *)(iVar13 + 2) == '\x02')) &&
                   (*(byte *)(iVar13 + 4) < 0x19)) && (*(char *)(iVar13 + 5) == -9)) {
            uVar4 = *(byte *)(iVar13 + 3) & 3;
            piVar10[uVar4 * 10 + 0x17] = (uint)*(byte *)(iVar13 + 4);
            piVar10[uVar4 * 10 + 0x1b] = 1;
          }
        }
        piVar10[10] = piVar10[10] + (uint)bVar2;
        uVar4 = *(uint *)(param_2 + 8);
        goto LAB_000bf494;
      }
    }
    else if (uVar12 == 0xf0) {
      piVar10[10] = iVar11 + 3;
      piVar10[10] = iVar11 + 3 + (uint)*(byte *)(iVar7 + iVar14);
      uVar4 = *(uint *)(param_2 + 8);
      goto LAB_000bf494;
    }
    if ((uVar12 & 0xf0) == 0x10) {
      *(undefined4 *)(param_2 + 8) = 0;
      *(uint *)(param_2 + 0xc) = uVar12 & 0xf;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined4 *)param_2 = 0x25;
      goto LAB_000bf494;
    }
  }
switchD_000bf752_caseD_7:
  uVar4 = *(uint *)(param_2 + 8);
LAB_000bf494:
  piVar10[0x434] = uVar4;
  piVar10[0x435] = *(int *)(param_2 + 0xc);
  piVar10[0x436] = *(int *)(param_2 + 0x10);
  piVar10[0x432] = *(int *)(param_2 + 4);
  piVar10[0x433] = *(int *)param_2;
  piVar10[0x438] = 1;
  uVar5 = switchD_000bf460::default(piVar10 + 5,param_2);
  piVar10[0x438] = 0;
  return uVar5;
}

