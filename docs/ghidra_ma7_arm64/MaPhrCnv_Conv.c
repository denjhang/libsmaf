/* MaPhrCnv_Conv @ 001f6ec8 7312B */


/* YAMAHA::MaPhrCnv_Conv(_MACNV_SEQ_INFO*, _MASND_CMD_PARAM*) */

undefined8 YAMAHA::MaPhrCnv_Conv(_MACNV_SEQ_INFO *param_1,_MASND_CMD_PARAM *param_2)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  bool bVar10;
  undefined8 uVar11;
  uint *puVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  int iVar18;
  int *piVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
      (piVar14 = *(int **)(param_1 + 8), param_2 == (_MASND_CMD_PARAM *)0x0)) ||
     (piVar14 == (int *)0x0)) {
    return 0xfffffffe;
  }
  if (*piVar14 != 1) {
    return 0xffffffff;
  }
  iVar27 = piVar14[0x11];
  switch(iVar27) {
  case -4:
    uVar26 = piVar14[0x12];
    uVar23 = piVar14[(ulong)uVar26 * 10 + 0x20];
    piVar14[(ulong)uVar26 * 10 + 0x21] = 0;
    piVar14[0x11] = -1;
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)param_2 = 0x15;
    *(uint *)(param_2 + 8) = uVar26;
    *(ulong *)(param_2 + 0x10) = (ulong)uVar23;
    *(undefined4 *)(param_2 + 0x18) = 0;
    return 1;
  case -2:
    if (piVar14[0x43a] != 0xf) {
      iVar18 = piVar14[0x439];
      iVar27 = piVar14[0x43a] + 1;
      piVar14[0x43a] = iVar27;
      *(undefined4 *)(param_2 + 4) = 0;
      *(int *)param_2 = iVar18;
      *(int *)(param_2 + 8) = iVar27;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0x18) = 0;
      return 1;
    }
    piVar14[0x11] = -3;
  case -3:
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)param_2 = 0x1b;
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    return 0;
  case -1:
    break;
  default:
    puVar2 = (uint *)(piVar14 + 0xb8);
    uVar26 = *puVar2;
    puVar12 = (uint *)(piVar14 + 0xbf);
    bVar10 = 0x7fffffe < uVar26;
    if (bVar10) {
      uVar26 = 0x7ffffff;
    }
    uVar23 = -(uint)bVar10;
    uVar25 = 1;
    do {
      uVar22 = *puVar12;
      uVar24 = puVar12[7];
      uVar21 = puVar12[0xe];
      uVar13 = puVar12[0x15];
      uVar5 = puVar12[0x1c];
      uVar16 = uVar25;
      if (uVar22 == 0xffffffff || uVar26 <= uVar22) {
        uVar16 = uVar23;
        uVar22 = uVar26;
      }
      uVar6 = puVar12[0x23];
      uVar1 = uVar25 + 4;
      uVar23 = uVar25 + 1;
      if (uVar24 == 0xffffffff || uVar22 <= uVar24) {
        uVar23 = uVar16;
        uVar24 = uVar22;
      }
      uVar22 = puVar12[0x2a];
      uVar16 = uVar25 + 5;
      if (uVar21 != 0xffffffff && uVar21 < uVar24) {
        uVar23 = uVar25 + 2;
        uVar24 = uVar21;
      }
      uVar26 = puVar12[0x31];
      uVar21 = uVar25 + 6;
      uVar4 = uVar25 + 3;
      if (uVar13 == 0xffffffff || uVar24 <= uVar13) {
        uVar4 = uVar23;
        uVar13 = uVar24;
      }
      uVar23 = uVar25 + 7;
      uVar25 = uVar25 + 8;
      if (uVar5 == 0xffffffff || uVar13 <= uVar5) {
        uVar1 = uVar4;
        uVar5 = uVar13;
      }
      puVar12 = puVar12 + 0x38;
      if (uVar6 == 0xffffffff || uVar5 <= uVar6) {
        uVar16 = uVar1;
        uVar6 = uVar5;
      }
      if (uVar22 == 0xffffffff || uVar6 <= uVar22) {
        uVar21 = uVar16;
        uVar22 = uVar6;
      }
      if (uVar26 == 0xffffffff || uVar22 <= uVar26) {
        uVar23 = uVar21;
        uVar26 = uVar22;
      }
    } while (uVar25 != 0x81);
    if (uVar23 == 0xffffffff) {
      return 0;
    }
    if (uVar23 == 0x80) {
      iVar27 = piVar14[0x439];
      iVar18 = -1;
    }
    else {
      iVar27 = piVar14[(ulong)uVar23 * 7 + 0xb9];
      iVar18 = iVar27;
    }
    piVar14[0x11] = iVar18;
    uVar26 = uVar23;
    switch(iVar27) {
    case 0xd:
      piVar14[0x11] = -4;
      break;
    case 0xe:
    case 0xf:
    case 0x11:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
      break;
    case 0x10:
    case 0x12:
      piVar14[0x11] = -2;
      break;
    case 0x1c:
      uVar25 = 0;
      uVar16 = piVar14[(ulong)uVar23 * 7 + 0xba];
      puVar12 = puVar2;
      do {
        uVar22 = *puVar12;
        if (((uVar22 != 0xffffffff) && (uVar23 != uVar25)) &&
           (uVar26 = uVar25, uVar16 == puVar12[2])) {
LAB_001f7778:
          uVar25 = piVar14[(ulong)uVar23 * 7 + 0xbd];
          if ((uint)piVar14[(ulong)uVar23 * 7 + 0xbd] < uVar22) {
            piVar14[(ulong)uVar23 * 7 + 0xbd] = uVar22;
            uVar25 = uVar22;
          }
          goto LAB_001f77a0;
        }
        uVar22 = puVar12[7];
        uVar26 = uVar25 + 1;
        if (((uVar22 != 0xffffffff) && (uVar23 != uVar26)) && (uVar16 == puVar12[9]))
        goto LAB_001f7778;
        uVar22 = puVar12[0xe];
        uVar26 = uVar25 + 2;
        if (((uVar22 != 0xffffffff) && (uVar23 != uVar26)) && (uVar16 == puVar12[0x10]))
        goto LAB_001f7778;
        uVar22 = puVar12[0x15];
        uVar26 = uVar25 + 3;
        if (((uVar22 != 0xffffffff) && (uVar23 != uVar26)) && (uVar16 == puVar12[0x17]))
        goto LAB_001f7778;
        uVar25 = uVar25 + 4;
        puVar12 = puVar12 + 0x1c;
      } while (uVar25 != 0x80);
      puVar12 = puVar2;
      uVar25 = 0;
      do {
        uVar26 = uVar25;
        if ((((((*puVar12 == 0xffffffff) || (uVar26 = uVar25 + 1, puVar12[7] == 0xffffffff)) ||
              ((uVar26 = uVar25 + 2, puVar12[0xe] == 0xffffffff ||
               ((((uVar26 = uVar25 + 3, puVar12[0x15] == 0xffffffff ||
                  (uVar26 = uVar25 + 4, puVar12[0x1c] == 0xffffffff)) ||
                 (uVar26 = uVar25 + 5, puVar12[0x23] == 0xffffffff)) ||
                ((uVar26 = uVar25 + 6, puVar12[0x2a] == 0xffffffff ||
                 (uVar26 = uVar25 + 7, puVar12[0x31] == 0xffffffff)))))))) ||
             (uVar26 = uVar25 + 8, puVar12[0x38] == 0xffffffff)) ||
            ((uVar26 = uVar25 + 9, puVar12[0x3f] == 0xffffffff ||
             (uVar26 = uVar25 + 10, puVar12[0x46] == 0xffffffff)))) ||
           (((uVar26 = uVar25 + 0xb, puVar12[0x4d] == 0xffffffff ||
             (((uVar26 = uVar25 + 0xc, puVar12[0x54] == 0xffffffff ||
               (uVar26 = uVar25 + 0xd, puVar12[0x5b] == 0xffffffff)) ||
              (uVar26 = uVar25 + 0xe, puVar12[0x62] == 0xffffffff)))) ||
            (uVar26 = uVar25 + 0xf, puVar12[0x69] == 0xffffffff)))) break;
        uVar26 = uVar25 + 0x10;
        puVar12 = puVar12 + 0x70;
        uVar25 = uVar26;
      } while (uVar26 != 0x80);
      uVar25 = piVar14[(ulong)uVar23 * 7 + 0xbd];
LAB_001f77a0:
      uVar20 = (ulong)uVar26;
      piVar14[uVar20 * 7 + 0xb8] = uVar25;
      piVar14[uVar20 * 7 + 0xb9] = 0x1e;
      piVar14[uVar20 * 7 + 0xba] = piVar14[(ulong)uVar23 * 7 + 0xba];
      piVar14[uVar20 * 7 + 0xbb] = piVar14[(ulong)uVar23 * 7 + 0xbb];
      piVar14[uVar20 * 7 + 0xbc] = 0;
    }
    uVar20 = (ulong)uVar23;
    if (piVar14[uVar20 * 7 + 0xbe] == 0) {
      uVar23 = piVar14[0xb];
      iVar18 = piVar14[0xf];
      uVar25 = piVar14[0xc];
      iVar27 = piVar14[uVar20 * 7 + 0xb8];
      uVar16 = piVar14[uVar20 * 7 + 0xbb];
      iVar15 = piVar14[uVar20 * 7 + 0xba];
      uVar22 = 0;
      if (uVar25 != 0) {
        uVar22 = (uVar23 * iVar18) / uVar25;
      }
      iVar7 = piVar14[uVar20 * 7 + 0xbc];
      *(int *)param_2 = piVar14[uVar20 * 7 + 0xb9];
      *(int *)(param_2 + 8) = iVar15;
      *(ulong *)(param_2 + 0x10) = (ulong)uVar16;
      *(int *)(param_2 + 0x18) = iVar7;
      uVar16 = 0;
      if (uVar23 != 0) {
        uVar16 = ((uVar23 * iVar18 - uVar22 * uVar25) + uVar23 * iVar27) / uVar23;
      }
      *(uint *)(param_2 + 4) = uVar16;
    }
    else {
      iVar27 = piVar14[uVar20 * 7 + 0xb8];
    }
    piVar14[uVar20 * 7 + 0xb8] = -1;
    if ((*puVar2 != 0xffffffff) && ((piVar14[uVar20 * 7 + 0xb9] != 0x1c || (uVar26 != 0)))) {
      *puVar2 = *puVar2 - iVar27;
    }
    uVar23 = 1;
    piVar19 = piVar14 + 0xbf;
    do {
      if ((*piVar19 != -1) && ((piVar14[uVar20 * 7 + 0xb9] != 0x1c || (uVar23 != uVar26)))) {
        *piVar19 = *piVar19 - iVar27;
      }
      if ((piVar19[7] != -1) && ((piVar14[uVar20 * 7 + 0xb9] != 0x1c || (uVar23 + 1 != uVar26)))) {
        piVar19[7] = piVar19[7] - iVar27;
      }
      if ((piVar19[0xe] != -1) && ((piVar14[uVar20 * 7 + 0xb9] != 0x1c || (uVar23 + 2 != uVar26))))
      {
        piVar19[0xe] = piVar19[0xe] - iVar27;
      }
      if ((piVar19[0x15] != -1) && ((piVar14[uVar20 * 7 + 0xb9] != 0x1c || (uVar23 + 3 != uVar26))))
      {
        piVar19[0x15] = piVar19[0x15] - iVar27;
      }
      if ((piVar19[0x1c] != -1) && ((piVar14[uVar20 * 7 + 0xb9] != 0x1c || (uVar23 + 4 != uVar26))))
      {
        piVar19[0x1c] = piVar19[0x1c] - iVar27;
      }
      if ((piVar19[0x23] != -1) && ((piVar14[uVar20 * 7 + 0xb9] != 0x1c || (uVar23 + 5 != uVar26))))
      {
        piVar19[0x23] = piVar19[0x23] - iVar27;
      }
      if ((piVar19[0x2a] != -1) && ((piVar14[uVar20 * 7 + 0xb9] != 0x1c || (uVar23 + 6 != uVar26))))
      {
        piVar19[0x2a] = piVar19[0x2a] - iVar27;
      }
      if ((piVar19[0x31] != -1) && ((piVar14[uVar20 * 7 + 0xb9] != 0x1c || (uVar23 + 7 != uVar26))))
      {
        piVar19[0x31] = piVar19[0x31] - iVar27;
      }
      uVar23 = uVar23 + 8;
      piVar19 = piVar19 + 0x38;
    } while (uVar23 != 0x81);
    return 1;
  }
  iVar18 = piVar14[8];
  if (1 < iVar18 - 1U) {
    return 0xffffffff;
  }
  uVar26 = piVar14[0xf];
  if ((uint)piVar14[0x10] <= uVar26) {
    uVar16 = 0;
    iVar15 = 0x12;
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)param_2 = 0x12;
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    uVar26 = 0;
    uVar25 = 0;
    uVar23 = 0;
    goto LAB_001f7310;
  }
  uVar25 = piVar14[0xd];
  lVar17 = *(long *)(piVar14 + 0x16);
  uVar22 = uVar25 + 1;
  bVar8 = *(byte *)(lVar17 + (ulong)uVar25);
  uVar23 = (uint)bVar8;
  if ((char)bVar8 < '\0') {
    uVar20 = (ulong)uVar22;
    uVar22 = uVar25 + 2;
    uVar23 = *(byte *)(lVar17 + uVar20) + 0x80 + (bVar8 & 0x7f) * 0x80;
  }
  if (piVar14[0xe] != 0) {
    uVar23 = piVar14[0xe] & 0x7fffffff;
    piVar14[0xe] = 0;
  }
  iVar7 = piVar14[0xb];
  uVar24 = piVar14[0xc];
  *(undefined4 *)(param_2 + 8) = 0;
  uVar25 = uVar22 + 1;
  uVar21 = iVar7 * uVar26;
  iVar15 = 0x1b;
  *(undefined4 *)param_2 = 0x1b;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar13 = 0;
  if (uVar24 != 0) {
    uVar13 = uVar21 / uVar24;
  }
  *(undefined4 *)(param_2 + 0x18) = 0;
  uVar16 = 0;
  if (uVar24 != 0) {
    uVar16 = ((uVar21 - uVar13 * uVar24) + uVar23 * iVar7) / uVar24;
  }
  *(uint *)(param_2 + 4) = uVar16;
  piVar14[0xf] = uVar23 + uVar26;
  piVar14[0xd] = uVar25;
  bVar8 = *(byte *)(lVar17 + (ulong)uVar22);
  uVar26 = (uint)bVar8;
  if (bVar8 == 0) {
    piVar14[0xd] = uVar22 + 2;
    bVar8 = *(byte *)(lVar17 + (ulong)uVar25);
    uVar26 = bVar8 & 0x30;
    uVar24 = bVar8 & 0xf;
    uVar20 = (ulong)(bVar8 >> 6);
    uVar21 = (uint)(bVar8 >> 6);
    uVar25 = uVar21;
    if (uVar26 == 0x20) {
      if ((iVar18 != 2) || (uVar24 - 1 < 0xe)) {
        *(uint *)(param_2 + 8) = uVar21;
        iVar15 = 3;
        *(undefined4 *)param_2 = 3;
        uVar26 = *(uint *)(&DAT_0048fb80 + (ulong)uVar24 * 4);
        *(ulong *)(param_2 + 0x10) = (ulong)uVar26;
        uVar23 = 0;
        goto LAB_001f7310;
      }
    }
    else {
      if (uVar26 == 0x30) {
        piVar14[0xd] = uVar22 + 3;
        bVar8 = *(byte *)(lVar17 + (ulong)(uVar22 + 2));
        uVar23 = (uint)bVar8;
        uVar22 = (uint)bVar8;
        if (uVar24 < 0xc) {
          uVar13 = (uint)bVar8;
          switch(uVar24) {
          case 0:
            if (iVar18 == 2) {
              if (0x7f < uVar13) {
LAB_001f84c4:
                uVar26 = 0;
                iVar15 = 0x1b;
                uVar25 = 0;
                uVar23 = 0;
                goto LAB_001f7310;
              }
              uVar26 = piVar14[uVar20 * 10 + 0x18];
              piVar14[uVar20 * 10 + 0x19] = uVar22;
              if (uVar26 == 1) {
                if (piVar14[0x43f] == 1) {
                  if (uVar13 != piVar14[0x440]) goto LAB_001f8660;
LAB_001f87dc:
                  uVar20 = 1;
                  uVar26 = 1;
                }
                else {
                  if (piVar14[0x43f] != -1) {
LAB_001f8660:
                    if (piVar14[0x441] == 1) {
                      if (uVar13 == piVar14[0x442]) goto LAB_001f87dc;
                    }
                    else if (piVar14[0x441] == -1) goto LAB_001f87c0;
                    if (piVar14[0x443] == 1) {
                      if (uVar13 == piVar14[0x444]) goto LAB_001f87dc;
                    }
                    else if (piVar14[0x443] == -1) goto LAB_001f87c0;
                    if (piVar14[0x445] == 1) {
                      if (uVar13 == piVar14[0x446]) goto LAB_001f87dc;
                    }
                    else if (piVar14[0x445] == -1) goto LAB_001f87c0;
                    if (piVar14[0x447] == 1) {
                      if (uVar13 == piVar14[0x448]) goto LAB_001f87dc;
                    }
                    else if (piVar14[0x447] == -1) goto LAB_001f87c0;
                    if (piVar14[0x449] == 1) {
                      if (uVar13 == piVar14[0x44a]) goto LAB_001f87dc;
                    }
                    else if (piVar14[0x449] == -1) goto LAB_001f87c0;
                    if (piVar14[1099] == 1) {
                      if (uVar13 == piVar14[0x44c]) goto LAB_001f87dc;
                    }
                    else if (piVar14[1099] == -1) goto LAB_001f87c0;
                    if (piVar14[0x44d] == 1) {
                      if (uVar13 == piVar14[0x44e]) goto LAB_001f87dc;
                    }
                    else if (piVar14[0x44d] == -1) goto LAB_001f87c0;
                    if (piVar14[0x44f] == 1) {
                      if (uVar13 == piVar14[0x450]) goto LAB_001f87dc;
                    }
                    else if (piVar14[0x44f] == -1) goto LAB_001f87c0;
                    if (piVar14[0x451] == 1) {
                      if (uVar13 == piVar14[0x452]) goto LAB_001f87dc;
                    }
                    else if (piVar14[0x451] == -1) goto LAB_001f87c0;
                    if (piVar14[0x453] == 1) {
                      if (uVar13 == piVar14[0x454]) goto LAB_001f87dc;
                    }
                    else if (piVar14[0x453] == -1) goto LAB_001f87c0;
                    if (piVar14[0x455] == 1) {
                      if (uVar13 == piVar14[0x456]) goto LAB_001f87dc;
                    }
                    else if (piVar14[0x455] == -1) goto LAB_001f87c0;
                    if (piVar14[0x457] == 1) {
                      if (uVar13 == piVar14[0x458]) goto LAB_001f87dc;
                    }
                    else if (piVar14[0x457] == -1) goto LAB_001f87c0;
                    if (piVar14[0x459] == 1) {
                      if (uVar13 == piVar14[0x45a]) goto LAB_001f87dc;
                    }
                    else if (piVar14[0x459] == -1) goto LAB_001f87c0;
                    if (piVar14[0x45b] == 1) {
                      if (uVar13 == piVar14[0x45c]) goto LAB_001f87dc;
                    }
                    else if (piVar14[0x45b] == -1) goto LAB_001f87c0;
                    if ((piVar14[0x45d] == 1) && (uVar13 == piVar14[0x45e])) goto LAB_001f87dc;
                  }
LAB_001f87c0:
                  uVar20 = 0;
                  uVar26 = 0;
                  uVar23 = 0;
                }
              }
              else if (uVar26 == 0) {
                uVar20 = 0;
              }
              else {
                if (1 < uVar26 - 0x80) goto LAB_001f84c4;
                uVar20 = (ulong)uVar26;
                uVar23 = 0;
              }
            }
            else {
              uVar23 = uVar22 & 3;
              iVar18 = piVar14[((ulong)uVar23 + 0x21a) * 2 + 0xb];
              piVar14[uVar20 * 10 + 0x19] = uVar23;
              if (iVar18 == 0) {
                uVar23 = piVar14[((ulong)uVar23 + 0x21a) * 2 + 0xc];
                uVar20 = 0;
                uVar26 = 0;
              }
              else {
                uVar26 = (uint)(iVar18 == 1);
                uVar20 = (ulong)(iVar18 == 1);
                if (iVar18 != 1) {
                  uVar23 = 2;
                }
              }
            }
            *(uint *)(param_2 + 8) = uVar21;
            iVar15 = 2;
            *(undefined4 *)param_2 = 2;
            *(ulong *)(param_2 + 0x10) = uVar20;
            *(uint *)(param_2 + 0x18) = uVar23;
            goto LAB_001f7310;
          case 1:
            if ((iVar18 == 2) && ((uVar13 & 0x7f) < 2)) {
              iVar15 = 0x1b;
              uVar26 = 0;
              piVar14[uVar20 * 10 + 0x18] = uVar13;
              uVar25 = 0;
              uVar23 = 0;
              goto LAB_001f7310;
            }
            break;
          case 2:
            if (uVar13 == 0x81) {
              uVar22 = 0xffffffff;
            }
            else if (uVar13 < 0x82) {
              if (4 < uVar13) {
LAB_001f84a0:
                uVar22 = piVar14[uVar20 * 10 + 0x1f];
                if (iVar18 != 2) {
                  uVar22 = 0;
                }
              }
            }
            else if (uVar13 == 0x83) {
              uVar22 = 0xfffffffd;
            }
            else if (uVar13 < 0x83) {
              uVar22 = 0xfffffffe;
            }
            else {
              uVar22 = 0xfffffffc;
              if (uVar13 != 0x84) goto LAB_001f84a0;
            }
            iVar15 = 0x1b;
            uVar26 = 0;
            piVar14[uVar20 * 10 + 0x1f] = uVar22;
            uVar25 = 0;
            uVar23 = 0;
            goto LAB_001f7310;
          case 3:
            if ((uVar13 < 0x80) && (iVar18 == 2)) {
              *(uint *)(param_2 + 8) = uVar21;
              iVar15 = 3;
              *(undefined4 *)param_2 = 3;
              uVar26 = *(uint *)(&DAT_0048fbc0 + (ulong)bVar8 * 4);
              *(ulong *)(param_2 + 0x10) = (ulong)uVar26;
              uVar23 = 0;
              goto LAB_001f7310;
            }
            break;
          case 4:
            if ((uVar13 < 0x80) || (iVar18 != 2)) {
              uVar23 = (uVar13 & 0x7f) << 7;
              if (piVar14[uVar20 * 10 + 0x21] == 1) {
                uVar26 = piVar14[uVar20 * 10 + 0x1d];
                piVar14[uVar20 * 10 + 0x20] = uVar23;
                piVar14[0x12] = uVar21;
                iVar15 = 0xd;
                *(undefined4 *)param_2 = 0xd;
                *(uint *)(param_2 + 8) = uVar21;
                *(ulong *)(param_2 + 0x10) = (ulong)uVar26;
                uVar23 = 0;
              }
              else {
                iVar15 = 0x15;
                *(undefined4 *)param_2 = 0x15;
                *(uint *)(param_2 + 8) = uVar21;
                *(ulong *)(param_2 + 0x10) = (ulong)uVar23;
                uVar26 = uVar23;
                uVar23 = 0;
              }
              goto LAB_001f7310;
            }
            break;
          case 5:
            if ((uVar13 < 0x19) && (iVar18 == 2)) {
              iVar15 = 0x1b;
              piVar14[uVar20 * 10 + 0x1d] = uVar13;
              piVar14[uVar20 * 10 + 0x21] = 1;
              uVar26 = 0;
              uVar25 = 0;
              uVar23 = 0;
              goto LAB_001f7310;
            }
            break;
          case 6:
            if ((uVar13 < 0x80) && (iVar18 == 2)) {
              iVar15 = 0x1b;
              piVar14[uVar20 * 10 + 0x1e] = uVar13;
              uVar26 = 0;
              uVar25 = 0;
              uVar23 = 0;
              goto LAB_001f7310;
            }
            break;
          case 10:
            if ((uVar13 < 0x80) || (iVar18 != 2)) {
              iVar15 = 5;
LAB_001f8208:
              *(uint *)(param_2 + 8) = uVar21;
              *(int *)param_2 = iVar15;
              *(ulong *)(param_2 + 0x10) = (ulong)(byte)(uVar13 & 0x7f);
              uVar26 = uVar13 & 0x7f;
              uVar23 = 0;
              goto LAB_001f7310;
            }
            break;
          case 0xb:
            if ((bVar8 < 0x80) || (iVar18 != 2)) {
              iVar15 = 4;
              goto LAB_001f8208;
            }
          }
        }
        goto switchD_001f80a8_caseD_7;
      }
      if ((bVar8 & 0x30) == 0) {
        if ((iVar18 != 2) || (uVar25 = uVar26, uVar23 = uVar26, uVar24 - 1 < 0xe)) {
          iVar15 = 4;
          *(undefined4 *)param_2 = 4;
          *(uint *)(param_2 + 8) = uVar21;
          uVar26 = *(uint *)(&DAT_0048fb40 + (ulong)uVar24 * 4);
          *(ulong *)(param_2 + 0x10) = (ulong)uVar26;
          uVar25 = uVar21;
          uVar23 = 0;
        }
        goto LAB_001f7310;
      }
    }
    uVar26 = 0;
    uVar25 = 0;
    uVar23 = 0;
    goto LAB_001f7310;
  }
  if (uVar26 == 0xff) {
    uVar26 = uVar22 + 2;
    piVar14[0xd] = uVar26;
    uVar23 = (uint)*(byte *)(lVar17 + (ulong)uVar25);
    if (iVar18 == 1) {
      if (uVar23 == 0xf0) {
        uVar22 = uVar22 + 3;
        piVar14[0xd] = uVar22;
        lVar3 = lVar17 + (ulong)uVar22;
        bVar8 = *(byte *)(lVar17 + (ulong)uVar26);
        if ((bVar8 == 6) && (*(char *)(lVar17 + (ulong)uVar22) == 'C')) {
          if (*(char *)(lVar3 + 1) == '\x03') {
            if ((*(char *)(lVar3 + 2) != -0x70) || (*(char *)(lVar3 + 5) != -9)) goto LAB_001f81b8;
            uVar26 = *(byte *)(lVar3 + 3) & 0xf0;
            uVar25 = *(byte *)(lVar3 + 3) & 3;
            if (uVar26 == 0xc0) {
              uVar20 = (ulong)uVar25;
              piVar14[uVar20 * 10 + 0x1a] = piVar14[uVar20 * 10 + 0x1a] | 2;
              piVar14[uVar20 * 10 + 0x1b] = (uint)*(byte *)(lVar3 + 4);
            }
            else {
              if (uVar26 != 0xb0) goto switchD_001f80a8_caseD_7;
              uVar20 = (ulong)uVar25;
              piVar14[uVar20 * 10 + 0x1a] = piVar14[uVar20 * 10 + 0x1a] | 1;
              piVar14[uVar20 * 10 + 0x1c] = (uint)*(byte *)(lVar3 + 4);
            }
            uVar20 = (ulong)uVar25;
            if ((piVar14[uVar20 * 10 + 0x1a] & 3U) != 3) goto LAB_001f8a10;
            uVar16 = piVar14[uVar20 * 10 + 0x1b];
            uVar23 = uVar16 & 0x20;
            uVar26 = piVar14[uVar20 * 10 + 0x1c] | 0x80000000U | (uVar16 & 0xffffffdf) << 8;
            if ((uVar16 >> 5 & 1) == 0) {
              iVar15 = 0x1f;
              *(undefined4 *)param_2 = 0x1f;
              *(uint *)(param_2 + 8) = uVar25;
              *(ulong *)(param_2 + 0x10) = (ulong)uVar26;
              *(uint *)(param_2 + 0x18) = uVar23;
              uVar22 = piVar14[0xd];
              uVar16 = *(uint *)(param_2 + 4);
            }
            else {
              iVar15 = 0x1d;
              uVar23 = 0x7f;
              *(ulong *)(param_2 + 0x10) = (ulong)uVar26;
              *(undefined4 *)param_2 = 0x1d;
              *(uint *)(param_2 + 8) = uVar25;
              *(undefined4 *)(param_2 + 0x18) = 0x7f;
              uVar22 = piVar14[0xd];
              uVar16 = *(uint *)(param_2 + 4);
            }
          }
          else {
            if ((*(char *)(lVar3 + 1) != '\x04') || (*(char *)(lVar3 + 2) != '\x02'))
            goto LAB_001f81b8;
            if ((*(byte *)(lVar3 + 4) < 0x19) && (*(char *)(lVar3 + 5) == -9)) {
              uVar23 = 0;
              iVar15 = 0x1b;
              uVar20 = (ulong)*(byte *)(lVar3 + 3) & 3;
              uVar26 = 0;
              uVar25 = 0;
              piVar14[uVar20 * 10 + 0x1d] = (uint)*(byte *)(lVar3 + 4);
              piVar14[uVar20 * 10 + 0x21] = 1;
            }
            else {
LAB_001f8a10:
              uVar23 = 0;
              iVar15 = 0x1b;
              uVar26 = 0;
              uVar25 = 0;
            }
          }
        }
        else {
LAB_001f81b8:
          uVar26 = 0;
          uVar23 = 0;
          uVar25 = 0;
          iVar15 = 0x1b;
        }
        piVar14[0xd] = uVar22 + bVar8;
        goto LAB_001f7310;
      }
    }
    else if (uVar23 == 0xf0) {
      piVar14[0xd] = uVar22 + 3;
      piVar14[0xd] = (uint)*(byte *)(lVar17 + (ulong)uVar26) + uVar22 + 3;
      uVar16 = *(uint *)(param_2 + 4);
      uVar26 = 0;
      uVar25 = *(uint *)(param_2 + 8);
      uVar23 = *(uint *)(param_2 + 0x18);
      goto LAB_001f7310;
    }
    if ((uVar23 & 0xf0) == 0x10) {
      iVar15 = 0x25;
      *(undefined4 *)param_2 = 0x25;
      *(ulong *)(param_2 + 0x10) = (ulong)(byte)(uVar23 & 0xf);
      uVar26 = uVar23 & 0xf;
      uVar25 = 0;
      uVar23 = 0;
    }
    else {
      uVar26 = 0;
      uVar25 = 0;
      uVar23 = 0;
    }
    goto LAB_001f7310;
  }
  piVar14[0xd] = uVar22 + 2;
  bVar9 = *(byte *)(lVar17 + (ulong)uVar25);
  uVar24 = (uint)bVar9;
  if ((char)bVar9 < '\0') {
    piVar14[0xd] = uVar22 + 3;
    uVar24 = *(byte *)(lVar17 + (ulong)(uVar22 + 2)) + 0x80 + (bVar9 & 0x7f) * 0x80;
    if (iVar18 == 1) {
      uVar25 = (uint)(bVar8 >> 6);
      iVar18 = piVar14[(ulong)uVar25 * 10 + 0x1f];
LAB_001f7c9c:
      *(undefined4 *)(param_2 + 0x18) = 0x7f;
      *(uint *)(param_2 + 8) = uVar25;
      iVar15 = 0x1c;
      *(undefined4 *)param_2 = 0x1c;
      uVar26 = (uVar26 & 0xf) + ((bVar8 >> 4 & 3) + iVar18 + 3) * 0xc;
      if (0x7f < (int)uVar26) {
        uVar26 = 0x7f;
      }
      if ((int)uVar26 < 0) {
        uVar26 = 0;
      }
      *(long *)(param_2 + 0x10) = (long)(int)uVar26;
      piVar14[0x43d] = uVar24;
      uVar23 = 0x7f;
      goto LAB_001f7310;
    }
  }
  else if (iVar18 == 1) {
    uVar25 = (uint)(bVar8 >> 6);
    iVar18 = piVar14[(ulong)(bVar8 >> 6) * 10 + 0x1f];
    if (uVar24 == 0) {
      piVar14[0x43d] = 0;
      uVar26 = 0;
      uVar25 = 0;
      uVar23 = 0;
      goto LAB_001f7310;
    }
    goto LAB_001f7c9c;
  }
  uVar26 = uVar26 & 0xf;
  if (0xb < uVar26 - 1) goto switchD_001f80a8_caseD_7;
  uVar25 = (uint)(bVar8 >> 6);
  uVar20 = (ulong)uVar25;
  uVar22 = bVar8 >> 4 & 3;
  uVar23 = piVar14[uVar20 * 10 + 0x18];
  if (uVar23 == 0x80) {
    uVar26 = uVar26 + uVar22 * 0xc + 0x22;
LAB_001f7c48:
    if (uVar24 == 0) {
      iVar15 = 0x1b;
      piVar14[0x43d] = 0;
      uVar26 = 0;
      uVar25 = 0;
      uVar23 = 0;
    }
    else {
      uVar23 = piVar14[uVar20 * 10 + 0x1e];
      *(uint *)(param_2 + 0x18) = uVar23;
      iVar15 = 0x1c;
      *(undefined4 *)param_2 = 0x1c;
      *(uint *)(param_2 + 8) = uVar25;
      *(long *)(param_2 + 0x10) = (long)(int)uVar26;
      piVar14[0x43d] = uVar24;
    }
  }
  else {
    if (uVar23 < 0x81) {
      if (uVar23 < 2) {
        uVar26 = uVar26 + (uVar22 + piVar14[uVar20 * 10 + 0x1f] + 3) * 0xc;
        if (0x7f < (int)uVar26) {
          uVar26 = 0x7f;
        }
        if ((int)uVar26 < 0) {
          uVar26 = 0;
        }
        goto LAB_001f7c48;
      }
    }
    else if (uVar23 == 0x81) {
      uVar26 = uVar26 + uVar22 * 0xc;
      if (piVar14[0x43f] == 0x81) {
        if (uVar26 == piVar14[0x440]) goto LAB_001f7c48;
      }
      else if (piVar14[0x43f] == -1) goto switchD_001f80a8_caseD_7;
      if (piVar14[0x441] == 0x81) {
        if (uVar26 == piVar14[0x442]) goto LAB_001f7c48;
      }
      else if (piVar14[0x441] == -1) goto switchD_001f80a8_caseD_7;
      if (piVar14[0x443] == 0x81) {
        if (uVar26 == piVar14[0x444]) goto LAB_001f7c48;
      }
      else if (piVar14[0x443] == -1) goto switchD_001f80a8_caseD_7;
      if (piVar14[0x445] == 0x81) {
        if (uVar26 == piVar14[0x446]) goto LAB_001f7c48;
      }
      else if (piVar14[0x445] == -1) goto switchD_001f80a8_caseD_7;
      if (piVar14[0x447] == 0x81) {
        if (uVar26 == piVar14[0x448]) goto LAB_001f7c48;
      }
      else if (piVar14[0x447] == -1) goto switchD_001f80a8_caseD_7;
      if (piVar14[0x449] == 0x81) {
        if (uVar26 == piVar14[0x44a]) goto LAB_001f7c48;
      }
      else if (piVar14[0x449] == -1) goto switchD_001f80a8_caseD_7;
      if (piVar14[1099] == 0x81) {
        if (uVar26 == piVar14[0x44c]) goto LAB_001f7c48;
      }
      else if (piVar14[1099] == -1) goto switchD_001f80a8_caseD_7;
      if (piVar14[0x44d] == 0x81) {
        if (uVar26 == piVar14[0x44e]) goto LAB_001f7c48;
      }
      else if (piVar14[0x44d] == -1) goto switchD_001f80a8_caseD_7;
      if (piVar14[0x44f] == 0x81) {
        if (uVar26 == piVar14[0x450]) goto LAB_001f7c48;
      }
      else if (piVar14[0x44f] == -1) goto switchD_001f80a8_caseD_7;
      if (piVar14[0x451] == 0x81) {
        if (uVar26 == piVar14[0x452]) goto LAB_001f7c48;
      }
      else if (piVar14[0x451] == -1) goto switchD_001f80a8_caseD_7;
      if (piVar14[0x453] == 0x81) {
        if (uVar26 == piVar14[0x454]) goto LAB_001f7c48;
      }
      else if (piVar14[0x453] == -1) goto switchD_001f80a8_caseD_7;
      if (piVar14[0x455] == 0x81) {
        if (uVar26 == piVar14[0x456]) goto LAB_001f7c48;
      }
      else if (piVar14[0x455] == -1) goto switchD_001f80a8_caseD_7;
      if (piVar14[0x457] == 0x81) {
        if (uVar26 == piVar14[0x458]) goto LAB_001f7c48;
      }
      else if (piVar14[0x457] == -1) goto switchD_001f80a8_caseD_7;
      if (piVar14[0x459] == 0x81) {
        if (uVar26 == piVar14[0x45a]) goto LAB_001f7c48;
      }
      else if (piVar14[0x459] == -1) goto switchD_001f80a8_caseD_7;
      if (piVar14[0x45b] == 0x81) {
        if (uVar26 == piVar14[0x45c]) goto LAB_001f7c48;
      }
      else if (piVar14[0x45b] == -1) goto switchD_001f80a8_caseD_7;
      if ((piVar14[0x45d] == 0x81) && (uVar26 == piVar14[0x45e])) goto LAB_001f7c48;
    }
switchD_001f80a8_caseD_7:
    iVar15 = 0x1b;
    uVar26 = 0;
    uVar25 = 0;
    uVar23 = 0;
  }
LAB_001f7310:
  puVar2 = (uint *)(piVar14 + 0xb8);
  piVar14[0x43a] = uVar25;
  puVar12 = (uint *)(piVar14 + 0xbf);
  piVar14[0x43c] = uVar23;
  piVar14[0x438] = uVar16;
  uVar23 = 1;
  piVar14[0x439] = iVar15;
  piVar14[0x43b] = uVar26;
  piVar14[0x43e] = 1;
  uVar26 = *puVar2;
  bVar10 = 0x7fffffe < uVar26;
  if (bVar10) {
    uVar26 = 0x7ffffff;
  }
  uVar25 = -(uint)bVar10;
  do {
    uVar22 = *puVar12;
    uVar24 = puVar12[7];
    uVar21 = puVar12[0xe];
    uVar13 = puVar12[0x15];
    uVar5 = puVar12[0x1c];
    uVar16 = uVar23;
    if (uVar22 == 0xffffffff || uVar26 <= uVar22) {
      uVar16 = uVar25;
      uVar22 = uVar26;
    }
    uVar6 = puVar12[0x23];
    uVar1 = uVar23 + 4;
    uVar25 = uVar23 + 1;
    if (uVar24 == 0xffffffff || uVar22 <= uVar24) {
      uVar25 = uVar16;
      uVar24 = uVar22;
    }
    uVar22 = puVar12[0x2a];
    uVar16 = uVar23 + 5;
    if (uVar21 != 0xffffffff && uVar21 < uVar24) {
      uVar25 = uVar23 + 2;
      uVar24 = uVar21;
    }
    uVar26 = puVar12[0x31];
    uVar21 = uVar23 + 6;
    uVar4 = uVar23 + 3;
    if (uVar13 == 0xffffffff || uVar24 <= uVar13) {
      uVar4 = uVar25;
      uVar13 = uVar24;
    }
    uVar25 = uVar23 + 7;
    uVar23 = uVar23 + 8;
    if (uVar5 == 0xffffffff || uVar13 <= uVar5) {
      uVar1 = uVar4;
      uVar5 = uVar13;
    }
    puVar12 = puVar12 + 0x38;
    if (uVar6 == 0xffffffff || uVar5 <= uVar6) {
      uVar16 = uVar1;
      uVar6 = uVar5;
    }
    if (uVar22 == 0xffffffff || uVar6 <= uVar22) {
      uVar21 = uVar16;
      uVar22 = uVar6;
    }
    if (uVar26 == 0xffffffff || uVar22 <= uVar26) {
      uVar25 = uVar21;
      uVar26 = uVar22;
    }
  } while (uVar23 != 0x81);
  uVar11 = 0;
  if (uVar25 != 0xffffffff) {
    if (uVar25 == 0x80) {
      iVar18 = piVar14[0x439];
    }
    else {
      iVar27 = piVar14[(ulong)uVar25 * 7 + 0xb9];
      iVar18 = iVar27;
    }
    piVar14[0x11] = iVar27;
    uVar26 = uVar25;
    switch(iVar18) {
    case 0xd:
      piVar14[0x11] = -4;
      break;
    case 0xe:
    case 0xf:
    case 0x11:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
      break;
    case 0x10:
    case 0x12:
      piVar14[0x11] = -2;
      break;
    case 0x1c:
      uVar23 = 0;
      uVar16 = piVar14[(ulong)uVar25 * 7 + 0xba];
      puVar12 = puVar2;
      do {
        uVar22 = *puVar12;
        if (((uVar22 != 0xffffffff) && (uVar25 != uVar23)) &&
           (uVar26 = uVar23, uVar16 == puVar12[2])) {
LAB_001f78d0:
          uVar23 = piVar14[(ulong)uVar25 * 7 + 0xbd];
          if ((uint)piVar14[(ulong)uVar25 * 7 + 0xbd] < uVar22) {
            piVar14[(ulong)uVar25 * 7 + 0xbd] = uVar22;
            uVar23 = uVar22;
          }
          goto LAB_001f78f8;
        }
        uVar22 = puVar12[7];
        uVar26 = uVar23 + 1;
        if (((uVar22 != 0xffffffff) && (uVar25 != uVar26)) && (uVar16 == puVar12[9]))
        goto LAB_001f78d0;
        uVar22 = puVar12[0xe];
        uVar26 = uVar23 + 2;
        if (((uVar22 != 0xffffffff) && (uVar25 != uVar26)) && (uVar16 == puVar12[0x10]))
        goto LAB_001f78d0;
        uVar22 = puVar12[0x15];
        uVar26 = uVar23 + 3;
        if (((uVar22 != 0xffffffff) && (uVar25 != uVar26)) && (uVar16 == puVar12[0x17]))
        goto LAB_001f78d0;
        uVar23 = uVar23 + 4;
        puVar12 = puVar12 + 0x1c;
      } while (uVar23 != 0x80);
      puVar12 = puVar2;
      uVar23 = 0;
      do {
        uVar26 = uVar23;
        if ((((*puVar12 == 0xffffffff) || (uVar26 = uVar23 + 1, puVar12[7] == 0xffffffff)) ||
            ((((uVar26 = uVar23 + 2, puVar12[0xe] == 0xffffffff ||
               ((uVar26 = uVar23 + 3, puVar12[0x15] == 0xffffffff ||
                (uVar26 = uVar23 + 4, puVar12[0x1c] == 0xffffffff)))) ||
              (uVar26 = uVar23 + 5, puVar12[0x23] == 0xffffffff)) ||
             (((((uVar26 = uVar23 + 6, puVar12[0x2a] == 0xffffffff ||
                 (uVar26 = uVar23 + 7, puVar12[0x31] == 0xffffffff)) ||
                (uVar26 = uVar23 + 8, puVar12[0x38] == 0xffffffff)) ||
               ((uVar26 = uVar23 + 9, puVar12[0x3f] == 0xffffffff ||
                (uVar26 = uVar23 + 10, puVar12[0x46] == 0xffffffff)))) ||
              ((uVar26 = uVar23 + 0xb, puVar12[0x4d] == 0xffffffff ||
               ((uVar26 = uVar23 + 0xc, puVar12[0x54] == 0xffffffff ||
                (uVar26 = uVar23 + 0xd, puVar12[0x5b] == 0xffffffff)))))))))) ||
           ((uVar26 = uVar23 + 0xe, puVar12[0x62] == 0xffffffff ||
            (uVar26 = uVar23 + 0xf, puVar12[0x69] == 0xffffffff)))) break;
        uVar26 = uVar23 + 0x10;
        puVar12 = puVar12 + 0x70;
        uVar23 = uVar26;
      } while (uVar26 != 0x80);
      uVar23 = piVar14[(ulong)uVar25 * 7 + 0xbd];
LAB_001f78f8:
      uVar20 = (ulong)uVar26;
      piVar14[uVar20 * 7 + 0xb8] = uVar23;
      piVar14[uVar20 * 7 + 0xb9] = 0x1e;
      piVar14[uVar20 * 7 + 0xba] = piVar14[(ulong)uVar25 * 7 + 0xba];
      piVar14[uVar20 * 7 + 0xbb] = piVar14[(ulong)uVar25 * 7 + 0xbb];
      piVar14[uVar20 * 7 + 0xbc] = 0;
    }
    uVar20 = (ulong)uVar25;
    if (piVar14[uVar20 * 7 + 0xbe] == 0) {
      uVar23 = piVar14[0xb];
      iVar18 = piVar14[0xf];
      uVar25 = piVar14[0xc];
      iVar27 = piVar14[uVar20 * 7 + 0xb8];
      uVar16 = piVar14[uVar20 * 7 + 0xbb];
      iVar15 = piVar14[uVar20 * 7 + 0xba];
      uVar22 = 0;
      if (uVar25 != 0) {
        uVar22 = (uVar23 * iVar18) / uVar25;
      }
      iVar7 = piVar14[uVar20 * 7 + 0xbc];
      *(int *)param_2 = piVar14[uVar20 * 7 + 0xb9];
      *(int *)(param_2 + 8) = iVar15;
      *(ulong *)(param_2 + 0x10) = (ulong)uVar16;
      *(int *)(param_2 + 0x18) = iVar7;
      uVar16 = 0;
      if (uVar23 != 0) {
        uVar16 = ((uVar23 * iVar18 - uVar22 * uVar25) + uVar23 * iVar27) / uVar23;
      }
      *(uint *)(param_2 + 4) = uVar16;
    }
    else {
      iVar27 = piVar14[uVar20 * 7 + 0xb8];
    }
    piVar14[uVar20 * 7 + 0xb8] = -1;
    if ((*puVar2 != 0xffffffff) && ((piVar14[uVar20 * 7 + 0xb9] != 0x1c || (uVar26 != 0)))) {
      *puVar2 = *puVar2 - iVar27;
    }
    uVar23 = 1;
    piVar19 = piVar14 + 0xbf;
    do {
      if ((*piVar19 != -1) && ((piVar14[uVar20 * 7 + 0xb9] != 0x1c || (uVar23 != uVar26)))) {
        *piVar19 = *piVar19 - iVar27;
      }
      if ((piVar19[7] != -1) && ((piVar14[uVar20 * 7 + 0xb9] != 0x1c || (uVar23 + 1 != uVar26)))) {
        piVar19[7] = piVar19[7] - iVar27;
      }
      if ((piVar19[0xe] != -1) && ((piVar14[uVar20 * 7 + 0xb9] != 0x1c || (uVar23 + 2 != uVar26))))
      {
        piVar19[0xe] = piVar19[0xe] - iVar27;
      }
      if ((piVar19[0x15] != -1) && ((piVar14[uVar20 * 7 + 0xb9] != 0x1c || (uVar23 + 3 != uVar26))))
      {
        piVar19[0x15] = piVar19[0x15] - iVar27;
      }
      if ((piVar19[0x1c] != -1) && ((piVar14[uVar20 * 7 + 0xb9] != 0x1c || (uVar23 + 4 != uVar26))))
      {
        piVar19[0x1c] = piVar19[0x1c] - iVar27;
      }
      if ((piVar19[0x23] != -1) && ((piVar14[uVar20 * 7 + 0xb9] != 0x1c || (uVar23 + 5 != uVar26))))
      {
        piVar19[0x23] = piVar19[0x23] - iVar27;
      }
      if ((piVar19[0x2a] != -1) && ((piVar14[uVar20 * 7 + 0xb9] != 0x1c || (uVar23 + 6 != uVar26))))
      {
        piVar19[0x2a] = piVar19[0x2a] - iVar27;
      }
      if ((piVar19[0x31] != -1) && ((piVar14[uVar20 * 7 + 0xb9] != 0x1c || (uVar23 + 7 != uVar26))))
      {
        piVar19[0x31] = piVar19[0x31] - iVar27;
      }
      uVar23 = uVar23 + 8;
      piVar19 = piVar19 + 0x38;
    } while (uVar23 != 0x81);
    uVar11 = 1;
  }
  piVar14[0x43e] = 0;
  return uVar11;
}

