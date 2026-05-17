/* malib_GetContentsData @ 00095b04 5068B */


/* WARNING: Type propagation algorithm not settling */
/* YAMAHA::malib_GetContentsData(_MALIBGETCINFO*) */

undefined1 * YAMAHA::malib_GetContentsData(_MALIBGETCINFO *param_1)

{
  _MALIBGETCINFO *p_Var1;
  byte bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ushort uVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint uVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  uint local_30;
  uint local_2c [2];
  
  puVar7 = *(undefined1 **)(param_1 + 0x14);
  if (((puVar7 == (undefined1 *)0x0) || (*(int *)(param_1 + 0x18) == 0)) ||
     (puVar9 = *(undefined1 **)param_1, puVar9 == (undefined1 *)0x0)) {
    puVar21 = (undefined1 *)0xfffffffe;
  }
  else {
    switch(CONCAT11(param_1[0x12],param_1[0x13])) {
    case 0x4330:
      *puVar7 = *puVar9;
      return (undefined1 *)0x1;
    case 0x4331:
      *puVar7 = puVar9[1];
      return (undefined1 *)0x1;
    case 0x4332:
      *puVar7 = puVar9[3];
      return (undefined1 *)0x1;
    case 0x4333:
      puVar21 = (undefined1 *)0x1;
      *puVar7 = puVar9[4];
      break;
    default:
      if ((byte)puVar9[1] < 0x30) {
        uVar6 = (ushort)(byte)puVar9[2];
        uVar8 = *(int *)(param_1 + 4) - 5;
        bVar27 = (undefined1 *)0xfffffffa < puVar9;
        if (puVar9 != (undefined1 *)0xfffffffb) {
          bVar27 = 2 < uVar8;
        }
        if ((bVar27 && (puVar9 != (undefined1 *)0xfffffffb && uVar8 != 3)) &&
           ((*(ushort *)(param_1 + 0x10) == 0xff || (*(ushort *)(param_1 + 0x10) == uVar6)))) {
          uVar3 = 0;
LAB_00095ba0:
          uVar18 = uVar3;
          uVar20 = uVar18 + 4;
          if (uVar20 <= uVar8) {
            if ((*(_MALIBGETCINFO *)(puVar9 + uVar18 + 5) != param_1[0x12]) ||
               (*(_MALIBGETCINFO *)(puVar9 + uVar18 + 6) != param_1[0x13])) {
              uVar3 = uVar18 + 3;
              if (uVar6 != 0x23) {
                if (uVar6 != 0) {
                  bVar26 = false;
                  uVar15 = uVar8 - uVar3 & 3;
                  bVar25 = false;
                  puVar21 = puVar9 + uVar18;
                  uVar20 = uVar3;
                  puVar7 = puVar21;
                  bVar27 = false;
                  if (uVar15 != 0) {
                    uVar20 = uVar18 + 4;
                    if (uVar8 < uVar20) goto LAB_00095ba0;
                    bVar25 = puVar21[8] == ',';
                    if ((!bVar25) && (puVar21[8] == '\\')) {
                      bVar26 = puVar21[9] == '\\' || puVar21[9] == ',';
                    }
                    puVar7 = puVar21 + 1;
                    bVar27 = bVar26;
                    if (uVar15 != 1) {
                      uVar16 = uVar20;
                      if (uVar15 != 2) {
                        uVar16 = uVar18 + 5;
                        uVar3 = uVar20;
                        if (bVar25) goto LAB_00095ba0;
                        if (bVar26) {
                          bVar26 = false;
                        }
                        else if (puVar21[9] == ',') {
                          bVar25 = true;
                        }
                        else if (puVar21[9] == '\\') {
                          bVar26 = puVar21[10] == '\\' || puVar21[10] == ',';
                        }
                        puVar7 = puVar21 + 2;
                      }
                      uVar20 = uVar16 + 1;
                      uVar3 = uVar16;
                      if (bVar25) goto LAB_00095ba0;
                      bVar25 = false;
                      if (bVar26) {
                        bVar27 = false;
                      }
                      else {
                        bVar27 = false;
                        if (puVar7[8] == ',') {
                          bVar25 = true;
                        }
                        else if (puVar7[8] == '\\') {
                          bVar27 = puVar7[9] == '\\' || puVar7[9] == ',';
                        }
                      }
                      puVar7 = puVar7 + 1;
                    }
                  }
                  while ((uVar3 = uVar20, uVar20 + 1 <= uVar8 && (!bVar25))) {
                    if (bVar27) {
                      bVar27 = false;
                    }
                    else if (puVar7[8] == ',') {
                      bVar25 = true;
                    }
                    else if (puVar7[8] == '\\') {
                      bVar27 = puVar7[9] == '\\' || puVar7[9] == ',';
                    }
                    uVar3 = uVar20 + 1;
                    if (bVar25) break;
                    if (bVar27) {
                      bVar27 = false;
                    }
                    else if (puVar7[9] == ',') {
                      bVar25 = true;
                    }
                    else if (puVar7[9] == '\\') {
                      bVar27 = puVar7[10] == '\\' || puVar7[10] == ',';
                    }
                    uVar3 = uVar20 + 2;
                    if (bVar25) break;
                    if (bVar27) {
                      bVar27 = false;
                    }
                    else if (puVar7[10] == ',') {
                      bVar25 = true;
                    }
                    else if (puVar7[10] == '\\') {
                      bVar27 = puVar7[0xb] == '\\' || puVar7[0xb] == ',';
                    }
                    uVar3 = uVar20 + 3;
                    if (bVar25) break;
                    if (bVar27) {
                      bVar27 = false;
                    }
                    else if (puVar7[0xb] == ',') {
                      bVar25 = true;
                    }
                    else if (puVar7[0xb] == '\\') {
                      bVar27 = puVar7[0xc] == '\\' || puVar7[0xc] == ',';
                    }
                    puVar7 = puVar7 + 4;
                    uVar20 = uVar20 + 4;
                  }
                  goto LAB_00095ba0;
                }
                puVar21 = puVar9 + uVar18;
                uVar15 = uVar8 - uVar3 & 3;
                bVar27 = false;
                uVar20 = uVar3;
                puVar7 = puVar21;
                cVar12 = bVar27;
                if (uVar15 != 0) {
                  uVar20 = uVar18 + 4;
                  if (uVar8 < uVar20) goto LAB_00095ba0;
                  cVar13 = puVar21[8];
                  if (cVar13 == ',') {
                    bVar27 = true;
                  }
                  else if (cVar13 == '\\') {
                    cVar12 = puVar21[9] == '\\' || puVar21[9] == ',';
                  }
                  else {
                    bVar2 = cVar13 + 0x7f;
                    bVar25 = 0x1d < bVar2;
                    bVar26 = bVar2 == 0x1e;
                    if (0x1e < bVar2) {
                      bVar25 = 0x1b < (byte)(cVar13 + 0x20U);
                      bVar26 = (byte)(cVar13 + 0x20U) == 0x1c;
                    }
                    if (!bVar25 || bVar26) {
                      cVar12 = true;
                    }
                  }
                  puVar7 = puVar21 + 1;
                  if (uVar15 != 1) {
                    uVar16 = uVar20;
                    if (uVar15 != 2) {
                      uVar16 = uVar18 + 5;
                      uVar3 = uVar20;
                      if (bVar27 != false) goto LAB_00095ba0;
                      cVar13 = puVar21[9];
                      if ((bool)cVar12 == false) {
                        if (cVar13 == ',') {
                          bVar27 = true;
                        }
                        else if (cVar13 == '\\') {
                          cVar12 = puVar21[10] == '\\' || puVar21[10] == ',';
                        }
                        else {
                          bVar2 = cVar13 + 0x7f;
                          bVar25 = 0x1d < bVar2;
                          bVar26 = bVar2 == 0x1e;
                          if (0x1e < bVar2) {
                            bVar25 = 0x1b < (byte)(cVar13 + 0x20U);
                            bVar26 = (byte)(cVar13 + 0x20U) == 0x1c;
                          }
                          if (!bVar25 || bVar26) {
                            cVar12 = '\x02';
                            goto LAB_00096188;
                          }
                        }
                      }
                      else {
                        cVar12 = '\x01';
LAB_00096188:
                        cVar12 = cVar12 + -1;
                      }
                      puVar7 = puVar21 + 2;
                    }
                    uVar20 = uVar16 + 1;
                    uVar3 = uVar16;
                    if (bVar27 != false) goto LAB_00095ba0;
                    cVar13 = puVar7[8];
                    bVar27 = false;
                    if (cVar12 == '\0') {
                      cVar12 = '\0';
                      if (cVar13 == ',') {
                        bVar27 = true;
                      }
                      else if (cVar13 == '\\') {
                        cVar12 = puVar7[9] == '\\' || puVar7[9] == ',';
                      }
                      else {
                        bVar2 = cVar13 + 0x7f;
                        bVar25 = 0x1d < bVar2;
                        bVar26 = bVar2 == 0x1e;
                        if (0x1e < bVar2) {
                          bVar25 = 0x1b < (byte)(cVar13 + 0x20U);
                          bVar26 = (byte)(cVar13 + 0x20U) == 0x1c;
                        }
                        if (!bVar25 || bVar26) {
                          cVar12 = '\x02';
                          goto LAB_000961aa;
                        }
                      }
                    }
                    else {
                      cVar12 = '\x01';
LAB_000961aa:
                      cVar12 = cVar12 + -1;
                    }
                    puVar7 = puVar7 + 1;
                  }
                }
                while ((uVar3 = uVar20, uVar20 + 1 <= uVar8 && (bVar27 == false))) {
                  cVar13 = puVar7[8];
                  if (cVar12 == '\0') {
                    if (cVar13 == ',') {
                      bVar27 = true;
                    }
                    else if (cVar13 == '\\') {
                      cVar12 = puVar7[9] == '\\' || puVar7[9] == ',';
                    }
                    else {
                      bVar2 = cVar13 + 0x7f;
                      bVar25 = 0x1d < bVar2;
                      bVar26 = bVar2 == 0x1e;
                      if (0x1e < bVar2) {
                        bVar25 = 0x1b < (byte)(cVar13 + 0x20U);
                        bVar26 = (byte)(cVar13 + 0x20U) == 0x1c;
                      }
                      if (!bVar25 || bVar26) {
                        cVar12 = '\x02';
                        goto LAB_000962c6;
                      }
                    }
                  }
                  else {
                    cVar12 = '\x01';
LAB_000962c6:
                    cVar12 = cVar12 + -1;
                  }
                  uVar3 = uVar20 + 1;
                  if (bVar27 != false) break;
                  cVar13 = puVar7[9];
                  if (cVar12 == '\0') {
                    if (cVar13 == ',') {
                      bVar27 = true;
                    }
                    else if (cVar13 == '\\') {
                      cVar12 = puVar7[10] == '\\' || puVar7[10] == ',';
                    }
                    else {
                      bVar2 = cVar13 + 0x7f;
                      bVar25 = 0x1d < bVar2;
                      bVar26 = bVar2 == 0x1e;
                      if (0x1e < bVar2) {
                        bVar25 = 0x1b < (byte)(cVar13 + 0x20U);
                        bVar26 = (byte)(cVar13 + 0x20U) == 0x1c;
                      }
                      if (!bVar25 || bVar26) {
                        cVar12 = '\x02';
                        goto LAB_000962d2;
                      }
                    }
                  }
                  else {
                    cVar12 = '\x01';
LAB_000962d2:
                    cVar12 = cVar12 + -1;
                  }
                  uVar3 = uVar20 + 2;
                  if (bVar27 != false) break;
                  cVar13 = puVar7[10];
                  if (cVar12 == '\0') {
                    if (cVar13 == ',') {
                      bVar27 = true;
                    }
                    else if (cVar13 == '\\') {
                      cVar12 = puVar7[0xb] == '\\' || puVar7[0xb] == ',';
                    }
                    else {
                      bVar2 = cVar13 + 0x7f;
                      bVar25 = 0x1d < bVar2;
                      bVar26 = bVar2 == 0x1e;
                      if (0x1e < bVar2) {
                        bVar25 = 0x1b < (byte)(cVar13 + 0x20U);
                        bVar26 = (byte)(cVar13 + 0x20U) == 0x1c;
                      }
                      if (!bVar25 || bVar26) {
                        cVar12 = '\x02';
                        goto LAB_000962de;
                      }
                    }
                  }
                  else {
                    cVar12 = '\x01';
LAB_000962de:
                    cVar12 = cVar12 + -1;
                  }
                  uVar3 = uVar20 + 3;
                  if (bVar27 != false) break;
                  cVar13 = puVar7[0xb];
                  if (cVar12 == '\0') {
                    if (cVar13 == ',') {
                      bVar27 = true;
                    }
                    else if (cVar13 == '\\') {
                      cVar12 = puVar7[0xc] == '\\' || puVar7[0xc] == ',';
                    }
                    else {
                      bVar2 = cVar13 + 0x7f;
                      bVar25 = 0x1d < bVar2;
                      bVar26 = bVar2 == 0x1e;
                      if (0x1e < bVar2) {
                        bVar25 = 0x1b < (byte)(cVar13 + 0x20U);
                        bVar26 = (byte)(cVar13 + 0x20U) == 0x1c;
                      }
                      if (!bVar25 || bVar26) {
                        cVar12 = '\x02';
                        goto LAB_000962e6;
                      }
                    }
                    puVar7 = puVar7 + 4;
                    uVar20 = uVar20 + 4;
                  }
                  else {
                    cVar12 = '\x01';
LAB_000962e6:
                    cVar12 = cVar12 + -1;
                    puVar7 = puVar7 + 4;
                    uVar20 = uVar20 + 4;
                  }
                }
                goto LAB_00095ba0;
              }
              cVar12 = '\0';
              uVar15 = uVar8 - uVar3 & 3;
              bVar27 = false;
              puVar21 = puVar9 + uVar18;
              uVar20 = uVar3;
              puVar7 = puVar21;
              cVar13 = cVar12;
              if (uVar15 != 0) {
                uVar20 = uVar18 + 4;
                if (uVar8 < uVar20) goto LAB_00095ba0;
                cVar13 = puVar21[8];
                if (cVar13 == ',') {
                  bVar27 = true;
                }
                else if (cVar13 == '\\') {
                  cVar12 = puVar21[9] == '\\' || puVar21[9] == ',';
                }
                else {
                  if ((byte)(cVar13 + 0x40U) < 0x20) {
                    cVar11 = '\x02';
                  }
                  else {
                    cVar11 = '\0';
                  }
                  if ((byte)(cVar13 + 0x20U) < 0x1d) {
                    cVar11 = '\x03';
                  }
                  else {
                    cVar12 = '\0';
                    if (cVar11 == '\0') goto LAB_00095c1a;
                  }
                  cVar12 = cVar11 + -1;
                }
LAB_00095c1a:
                puVar7 = puVar21 + 1;
                cVar13 = cVar12;
                if (uVar15 != 1) {
                  uVar16 = uVar20;
                  if (uVar15 != 2) {
                    uVar16 = uVar18 + 5;
                    uVar3 = uVar20;
                    if (bVar27) goto LAB_00095ba0;
                    cVar13 = puVar21[9];
                    cVar11 = cVar12;
                    if (cVar12 != '\0') goto LAB_00095c3c;
                    if (cVar13 == ',') {
                      bVar27 = true;
                    }
                    else if (cVar13 == '\\') {
                      cVar12 = puVar21[10] == '\\' || puVar21[10] == ',';
                    }
                    else {
                      if ((byte)(cVar13 + 0x40U) < 0x20) {
                        cVar11 = '\x02';
                      }
                      else {
                        cVar11 = '\0';
                      }
                      if ((byte)(cVar13 + 0x20U) < 0x1d) {
                        cVar11 = '\x03';
                      }
                      else {
                        cVar12 = '\0';
                        if (cVar11 == '\0') goto LAB_00095c40;
                      }
LAB_00095c3c:
                      cVar12 = cVar11 + -1;
                    }
LAB_00095c40:
                    puVar7 = puVar21 + 2;
                  }
                  uVar20 = uVar16 + 1;
                  uVar3 = uVar16;
                  if (bVar27) goto LAB_00095ba0;
                  cVar13 = puVar7[8];
                  bVar27 = false;
                  if (cVar12 != '\0') goto LAB_00095c58;
                  if (cVar13 == ',') {
                    bVar27 = true;
                    cVar13 = '\0';
                  }
                  else if (cVar13 == '\\') {
                    cVar13 = puVar7[9] == '\\' || puVar7[9] == ',';
                  }
                  else {
                    if ((byte)(cVar13 + 0x40U) < 0x20) {
                      cVar12 = '\x02';
                    }
                    else {
                      cVar12 = '\0';
                    }
                    if ((byte)(cVar13 + 0x20U) < 0x1d) {
                      cVar12 = '\x03';
                    }
                    else {
                      cVar13 = '\0';
                      if (cVar12 == '\0') goto LAB_00095c5c;
                    }
LAB_00095c58:
                    cVar13 = cVar12 + -1;
                  }
LAB_00095c5c:
                  puVar7 = puVar7 + 1;
                }
              }
              while ((uVar3 = uVar20, uVar20 + 1 <= uVar8 && (!bVar27))) {
                cVar12 = puVar7[8];
                if (cVar13 != '\0') goto LAB_00095c94;
                if (cVar12 == ',') {
                  bVar27 = true;
                }
                else if (cVar12 == '\\') {
                  cVar13 = puVar7[9] == '\\' || puVar7[9] == ',';
                }
                else {
                  if ((byte)(cVar12 + 0x40U) < 0x20) {
                    cVar13 = '\x02';
                  }
                  else {
                    cVar13 = '\0';
                  }
                  if ((byte)(cVar12 + 0x20U) < 0x1d) {
                    cVar13 = '\x03';
                  }
                  else if (cVar13 == '\0') goto LAB_00095c98;
LAB_00095c94:
                  cVar13 = cVar13 + -1;
                }
LAB_00095c98:
                uVar3 = uVar20 + 1;
                if (bVar27) break;
                cVar12 = puVar7[9];
                if (cVar13 != '\0') goto LAB_00095caa;
                if (cVar12 == ',') {
                  bVar27 = true;
                }
                else if (cVar12 == '\\') {
                  cVar13 = puVar7[10] == '\\' || puVar7[10] == ',';
                }
                else {
                  if ((byte)(cVar12 + 0x40U) < 0x20) {
                    cVar13 = '\x02';
                  }
                  else {
                    cVar13 = '\0';
                  }
                  if ((byte)(cVar12 + 0x20U) < 0x1d) {
                    cVar13 = '\x03';
                  }
                  else if (cVar13 == '\0') goto LAB_00095cae;
LAB_00095caa:
                  cVar13 = cVar13 + -1;
                }
LAB_00095cae:
                uVar3 = uVar20 + 2;
                if (bVar27) break;
                cVar12 = puVar7[10];
                if (cVar13 != '\0') goto LAB_00095cc2;
                if (cVar12 == ',') {
                  bVar27 = true;
                }
                else if (cVar12 == '\\') {
                  cVar13 = puVar7[0xb] == '\\' || puVar7[0xb] == ',';
                }
                else {
                  if ((byte)(cVar12 + 0x40U) < 0x20) {
                    cVar13 = '\x02';
                  }
                  else {
                    cVar13 = '\0';
                  }
                  if ((byte)(cVar12 + 0x20U) < 0x1d) {
                    cVar13 = '\x03';
                  }
                  else if (cVar13 == '\0') goto LAB_00095cca;
LAB_00095cc2:
                  cVar13 = cVar13 + -1;
                }
LAB_00095cca:
                uVar3 = uVar20 + 3;
                if (bVar27) break;
                cVar12 = puVar7[0xb];
                if (cVar13 != '\0') goto LAB_00095cde;
                if (cVar12 == ',') {
                  bVar27 = true;
                }
                else if (cVar12 == '\\') {
                  cVar13 = puVar7[0xc] == '\\' || puVar7[0xc] == ',';
                }
                else {
                  if ((byte)(cVar12 + 0x40U) < 0x20) {
                    cVar13 = '\x02';
                  }
                  else {
                    cVar13 = '\0';
                  }
                  if ((byte)(cVar12 + 0x20U) < 0x1d) {
                    cVar13 = '\x03';
                  }
                  else if (cVar13 == '\0') goto LAB_00095ce6;
LAB_00095cde:
                  cVar13 = cVar13 + -1;
                }
LAB_00095ce6:
                puVar7 = puVar7 + 4;
                uVar20 = uVar20 + 4;
              }
              goto LAB_00095ba0;
            }
            if ((ushort)(*(short *)(param_1 + 0x12) + 0xcdb4U) < 2) {
              **(undefined1 **)(param_1 + 0x14) = puVar9[uVar18 + 8];
              return (undefined1 *)0x1;
            }
            uVar3 = uVar18 + 3;
            if (uVar6 == 0x23) {
              bVar2 = 0;
              uVar15 = uVar8 - uVar3 & 3;
              puVar22 = puVar9 + uVar18;
              puVar7 = (undefined1 *)0x0;
              puVar21 = puVar22;
              if (uVar15 != 0) {
                cVar12 = puVar22[8];
                if (cVar12 == ',') {
                  return (undefined1 *)0x0;
                }
                if (cVar12 == '\\') {
                  bVar2 = puVar22[9] == '\\' || puVar22[9] == ',';
                }
                else {
                  if ((byte)(cVar12 + 0x40U) < 0x20) {
                    cVar13 = '\x02';
                  }
                  else {
                    cVar13 = '\0';
                  }
                  if ((byte)(cVar12 + 0x20U) < 0x1d) {
                    **(char **)(param_1 + 0x14) = cVar12;
                    cVar13 = '\x03';
                    if (*(int *)(param_1 + 0x18) == 1) {
                      return (undefined1 *)0x1;
                    }
                  }
                  else {
                    **(char **)(param_1 + 0x14) = cVar12;
                    puVar7 = (undefined1 *)0x1;
                    if (*(int *)(param_1 + 0x18) == 1) {
                      return (undefined1 *)0x1;
                    }
                    bVar2 = 0;
                    if (cVar13 == '\0') goto LAB_00095f7e;
                  }
                  puVar7 = (undefined1 *)0x1;
                  bVar2 = cVar13 - 1;
                }
LAB_00095f7e:
                puVar21 = puVar22 + 1;
                uVar3 = uVar20;
                if (uVar15 != 1) {
                  puVar5 = puVar7;
                  if (uVar15 != 2) {
                    uVar20 = uVar18 + 5;
                    cVar12 = puVar22[9];
                    if (bVar2 == 0) {
                      if (cVar12 == ',') {
                        return puVar7;
                      }
                      if (cVar12 != '\\') {
                        if ((byte)(cVar12 + 0x40U) < 0x20) {
                          bVar2 = 2;
                        }
                        else {
                          bVar2 = 0;
                        }
                        if ((byte)(cVar12 + 0x20U) < 0x1d) {
                          bVar2 = 3;
                          goto LAB_00095f9e;
                        }
                        puVar7[*(int *)(param_1 + 0x14)] = cVar12;
                        puVar5 = puVar7 + 1;
                        if (*(undefined1 **)(param_1 + 0x18) == puVar5) {
                          return puVar5;
                        }
                        bVar14 = 0;
                        if (bVar2 == 0) goto LAB_00095fb2;
                        goto LAB_00095fae;
                      }
                      bVar14 = puVar22[10] == '\\' || puVar22[10] == ',';
                    }
                    else {
LAB_00095f9e:
                      puVar7[*(int *)(param_1 + 0x14)] = cVar12;
                      if (*(undefined1 **)(param_1 + 0x18) == puVar7 + 1) {
                        return puVar7 + 1;
                      }
LAB_00095fae:
                      puVar5 = puVar7 + 1;
                      bVar14 = bVar2 - 1;
                    }
LAB_00095fb2:
                    bVar2 = bVar14;
                    puVar21 = puVar22 + 2;
                  }
                  uVar3 = uVar20 + 1;
                  cVar12 = puVar21[8];
                  if (bVar2 == 0) {
                    if (cVar12 == ',') {
                      return puVar5;
                    }
                    if (cVar12 != '\\') {
                      if ((byte)(cVar12 + 0x40U) < 0x20) {
                        bVar2 = 2;
                      }
                      else {
                        bVar2 = 0;
                      }
                      if ((byte)(cVar12 + 0x20U) < 0x1d) {
                        bVar2 = 3;
                        goto LAB_00095fc6;
                      }
                      puVar5[*(int *)(param_1 + 0x14)] = cVar12;
                      puVar7 = puVar5 + 1;
                      if (*(undefined1 **)(param_1 + 0x18) == puVar7) {
                        return puVar7;
                      }
                      bVar14 = 0;
                      if (bVar2 == 0) goto LAB_00095fde;
                      goto LAB_00095fd6;
                    }
                    puVar7 = puVar5;
                    bVar14 = puVar21[9] == '\\' || puVar21[9] == ',';
                  }
                  else {
LAB_00095fc6:
                    puVar5[*(int *)(param_1 + 0x14)] = cVar12;
                    if (*(undefined1 **)(param_1 + 0x18) == puVar5 + 1) {
                      return puVar5 + 1;
                    }
LAB_00095fd6:
                    puVar7 = puVar5 + 1;
                    bVar14 = bVar2 - 1;
                  }
LAB_00095fde:
                  bVar2 = bVar14;
                  puVar21 = puVar21 + 1;
                }
              }
              for (uVar20 = uVar3 + 1; uVar20 <= uVar8; uVar20 = uVar20 + 4) {
                cVar12 = puVar21[8];
                if (bVar2 == 0) {
                  if (cVar12 == ',') {
                    return puVar7;
                  }
                  if (cVar12 != '\\') {
                    if ((byte)(cVar12 + 0x40U) < 0x20) {
                      bVar2 = 2;
                    }
                    else {
                      bVar2 = 0;
                    }
                    if ((byte)(cVar12 + 0x20U) < 0x1d) {
                      bVar2 = 3;
                      goto LAB_00095ff6;
                    }
                    puVar7[*(int *)(param_1 + 0x14)] = cVar12;
                    puVar22 = puVar7 + 1;
                    if (*(undefined1 **)(param_1 + 0x18) == puVar22) {
                      return puVar22;
                    }
                    bVar14 = 0;
                    if (bVar2 == 0) goto LAB_0009600a;
                    goto LAB_00096006;
                  }
                  bVar14 = puVar21[9] == '\\' || puVar21[9] == ',';
                  puVar22 = puVar7;
                }
                else {
LAB_00095ff6:
                  puVar7[*(int *)(param_1 + 0x14)] = cVar12;
                  if (*(undefined1 **)(param_1 + 0x18) == puVar7 + 1) {
                    return puVar7 + 1;
                  }
LAB_00096006:
                  bVar14 = bVar2 - 1;
                  puVar22 = puVar7 + 1;
                }
LAB_0009600a:
                cVar12 = puVar21[9];
                if (bVar14 == 0) {
                  if (cVar12 == ',') {
                    return puVar22;
                  }
                  if (cVar12 != '\\') {
                    if ((byte)(cVar12 + 0x40U) < 0x20) {
                      bVar14 = 2;
                    }
                    else {
                      bVar14 = 0;
                    }
                    if ((byte)(cVar12 + 0x20U) < 0x1d) {
                      bVar14 = 3;
                      goto LAB_00096018;
                    }
                    puVar22[*(int *)(param_1 + 0x14)] = cVar12;
                    puVar7 = puVar22 + 1;
                    if (*(undefined1 **)(param_1 + 0x18) == puVar7) {
                      return puVar7;
                    }
                    bVar2 = 0;
                    if (bVar14 == 0) goto LAB_00096030;
                    goto LAB_00096028;
                  }
                  bVar2 = puVar21[10] == '\\' || puVar21[10] == ',';
                  puVar7 = puVar22;
                }
                else {
LAB_00096018:
                  puVar22[*(int *)(param_1 + 0x14)] = cVar12;
                  if (*(undefined1 **)(param_1 + 0x18) == puVar22 + 1) {
                    return puVar22 + 1;
                  }
LAB_00096028:
                  bVar2 = bVar14 - 1;
                  puVar7 = puVar22 + 1;
                }
LAB_00096030:
                cVar12 = puVar21[10];
                if (bVar2 == 0) {
                  if (cVar12 == ',') {
                    return puVar7;
                  }
                  if (cVar12 != '\\') {
                    if ((byte)(cVar12 + 0x40U) < 0x20) {
                      bVar2 = 2;
                    }
                    else {
                      bVar2 = 0;
                    }
                    if ((byte)(cVar12 + 0x20U) < 0x1d) {
                      bVar2 = 3;
                      goto LAB_0009603e;
                    }
                    puVar7[*(int *)(param_1 + 0x14)] = cVar12;
                    puVar22 = puVar7 + 1;
                    if (*(undefined1 **)(param_1 + 0x18) == puVar22) {
                      return puVar22;
                    }
                    bVar14 = 0;
                    if (bVar2 == 0) goto LAB_00096056;
                    goto LAB_0009604e;
                  }
                  bVar14 = puVar21[0xb] == '\\' || puVar21[0xb] == ',';
                  puVar22 = puVar7;
                }
                else {
LAB_0009603e:
                  puVar7[*(int *)(param_1 + 0x14)] = cVar12;
                  if (*(undefined1 **)(param_1 + 0x18) == puVar7 + 1) {
                    return puVar7 + 1;
                  }
LAB_0009604e:
                  bVar14 = bVar2 - 1;
                  puVar22 = puVar7 + 1;
                }
LAB_00096056:
                cVar12 = puVar21[0xb];
                if (bVar14 == 0) {
                  if (cVar12 == ',') {
                    return puVar22;
                  }
                  if (cVar12 != '\\') {
                    if ((byte)(cVar12 + 0x40U) < 0x20) {
                      bVar14 = 2;
                    }
                    else {
                      bVar14 = 0;
                    }
                    if ((byte)(cVar12 + 0x20U) < 0x1d) {
                      bVar14 = 3;
                      goto LAB_00096064;
                    }
                    puVar22[*(int *)(param_1 + 0x14)] = cVar12;
                    puVar7 = puVar22 + 1;
                    if (*(undefined1 **)(param_1 + 0x18) == puVar7) {
                      return puVar7;
                    }
                    bVar2 = 0;
                    if (bVar14 == 0) goto LAB_0009607c;
                    goto LAB_00096074;
                  }
                  bVar2 = puVar21[0xc] == '\\' || puVar21[0xc] == ',';
                  puVar7 = puVar22;
                }
                else {
LAB_00096064:
                  puVar22[*(int *)(param_1 + 0x14)] = cVar12;
                  if (*(undefined1 **)(param_1 + 0x18) == puVar22 + 1) {
                    return puVar22 + 1;
                  }
LAB_00096074:
                  bVar2 = bVar14 - 1;
                  puVar7 = puVar22 + 1;
                }
LAB_0009607c:
                uVar3 = uVar20 + 3;
                puVar21 = puVar21 + 4;
              }
            }
            else if (uVar6 == 0) {
              puVar22 = puVar9 + uVar18;
              uVar20 = uVar8 - uVar3 & 3;
              cVar12 = '\0';
              puVar7 = (undefined1 *)0x0;
              puVar21 = puVar22;
              if (uVar20 != 0) {
                cVar12 = puVar22[8];
                uVar3 = uVar18 + 4;
                if (cVar12 == ',') {
                  return (undefined1 *)0x0;
                }
                if (cVar12 == '\\') {
                  cVar12 = puVar22[9] == '\\' || puVar22[9] == ',';
                }
                else {
                  puVar7 = (undefined1 *)0x1;
                  **(char **)(param_1 + 0x14) = cVar12;
                  bVar2 = cVar12 + 0x7f;
                  bVar26 = 0x1d < bVar2;
                  bVar27 = bVar2 == 0x1e;
                  if (0x1e < bVar2) {
                    bVar26 = 0x1b < (byte)(cVar12 + 0x20U);
                    bVar27 = (byte)(cVar12 + 0x20U) == 0x1c;
                  }
                  if (bVar26 && !bVar27) {
                    cVar13 = '\0';
                  }
                  else {
                    cVar13 = '\x02';
                  }
                  if (*(int *)(param_1 + 0x18) == 1) {
                    return (undefined1 *)0x1;
                  }
                  cVar12 = '\0';
                  if (cVar13 != '\0') {
                    cVar12 = cVar13 + -1;
                  }
                }
                puVar21 = puVar22 + 1;
                if (uVar20 != 1) {
                  puVar5 = puVar7;
                  if (uVar20 != 2) {
                    uVar3 = uVar18 + 5;
                    cVar13 = puVar22[9];
                    if (cVar12 == '\0') {
                      if (cVar13 == ',') {
                        return puVar7;
                      }
                      if (cVar13 == '\\') {
                        cVar12 = puVar22[10] == '\\' || puVar22[10] == ',';
                      }
                      else {
                        bVar2 = cVar13 + 0x7f;
                        puVar7[*(int *)(param_1 + 0x14)] = cVar13;
                        bVar26 = 0x1d < bVar2;
                        bVar27 = bVar2 == 0x1e;
                        if (0x1e < bVar2) {
                          bVar26 = 0x1b < (byte)(cVar13 + 0x20U);
                          bVar27 = (byte)(cVar13 + 0x20U) == 0x1c;
                        }
                        puVar5 = puVar7 + 1;
                        if (bVar26 && !bVar27) {
                          cVar13 = '\0';
                        }
                        else {
                          cVar13 = '\x02';
                        }
                        if (*(undefined1 **)(param_1 + 0x18) == puVar5) {
                          return puVar5;
                        }
                        cVar12 = '\0';
                        if (cVar13 != '\0') goto LAB_000969d2;
                      }
                    }
                    else {
                      puVar7[*(int *)(param_1 + 0x14)] = cVar13;
                      if (*(undefined1 **)(param_1 + 0x18) == puVar7 + 1) {
                        return puVar7 + 1;
                      }
                      cVar13 = '\x01';
LAB_000969d2:
                      cVar12 = cVar13 + -1;
                      puVar5 = puVar7 + 1;
                    }
                    puVar21 = puVar22 + 2;
                  }
                  uVar3 = uVar3 + 1;
                  cVar13 = puVar21[8];
                  if (cVar12 == '\0') {
                    if (cVar13 == ',') {
                      return puVar5;
                    }
                    if (cVar13 == '\\') {
                      cVar12 = puVar21[9] == '\\' || puVar21[9] == ',';
                      puVar7 = puVar5;
                    }
                    else {
                      puVar5[*(int *)(param_1 + 0x14)] = cVar13;
                      bVar2 = cVar13 + 0x7f;
                      bVar26 = 0x1d < bVar2;
                      bVar27 = bVar2 == 0x1e;
                      if (0x1e < bVar2) {
                        bVar26 = 0x1b < (byte)(cVar13 + 0x20U);
                        bVar27 = (byte)(cVar13 + 0x20U) == 0x1c;
                      }
                      puVar7 = puVar5 + 1;
                      if (bVar26 && !bVar27) {
                        cVar13 = '\0';
                      }
                      else {
                        cVar13 = '\x02';
                      }
                      if (*(undefined1 **)(param_1 + 0x18) == puVar7) {
                        return puVar7;
                      }
                      cVar12 = '\0';
                      if (cVar13 != '\0') goto LAB_000969fe;
                    }
                  }
                  else {
                    puVar5[*(int *)(param_1 + 0x14)] = cVar13;
                    if (*(undefined1 **)(param_1 + 0x18) == puVar5 + 1) {
                      return puVar5 + 1;
                    }
                    cVar13 = '\x01';
LAB_000969fe:
                    cVar12 = cVar13 + -1;
                    puVar7 = puVar5 + 1;
                  }
                  puVar21 = puVar21 + 1;
                }
              }
              for (; uVar3 + 1 <= uVar8; uVar3 = uVar3 + 4) {
                cVar13 = puVar21[8];
                if (cVar12 == '\0') {
                  if (cVar13 == ',') {
                    return puVar7;
                  }
                  if (cVar13 == '\\') {
                    cVar13 = puVar21[9] == '\\' || puVar21[9] == ',';
                    puVar22 = puVar7;
                  }
                  else {
                    puVar7[*(int *)(param_1 + 0x14)] = cVar13;
                    bVar2 = cVar13 + 0x7f;
                    bVar26 = 0x1d < bVar2;
                    bVar27 = bVar2 == 0x1e;
                    if (0x1e < bVar2) {
                      bVar26 = 0x1b < (byte)(cVar13 + 0x20U);
                      bVar27 = (byte)(cVar13 + 0x20U) == 0x1c;
                    }
                    puVar22 = puVar7 + 1;
                    if (bVar26 && !bVar27) {
                      cVar12 = '\0';
                    }
                    else {
                      cVar12 = '\x02';
                    }
                    if (*(undefined1 **)(param_1 + 0x18) == puVar22) {
                      return puVar22;
                    }
                    cVar13 = '\0';
                    if (cVar12 != '\0') goto LAB_00096a1a;
                  }
                }
                else {
                  puVar7[*(int *)(param_1 + 0x14)] = cVar13;
                  if (*(undefined1 **)(param_1 + 0x18) == puVar7 + 1) {
                    return puVar7 + 1;
                  }
                  cVar12 = '\x01';
LAB_00096a1a:
                  cVar13 = cVar12 + -1;
                  puVar22 = puVar7 + 1;
                }
                cVar12 = puVar21[9];
                if (cVar13 == '\0') {
                  if (cVar12 == ',') {
                    return puVar22;
                  }
                  if (cVar12 == '\\') {
                    cVar12 = puVar21[10] == '\\' || puVar21[10] == ',';
                    puVar7 = puVar22;
                  }
                  else {
                    puVar22[*(int *)(param_1 + 0x14)] = cVar12;
                    bVar2 = cVar12 + 0x7f;
                    bVar26 = 0x1d < bVar2;
                    bVar27 = bVar2 == 0x1e;
                    if (0x1e < bVar2) {
                      bVar26 = 0x1b < (byte)(cVar12 + 0x20U);
                      bVar27 = (byte)(cVar12 + 0x20U) == 0x1c;
                    }
                    puVar7 = puVar22 + 1;
                    if (bVar26 && !bVar27) {
                      cVar13 = '\0';
                    }
                    else {
                      cVar13 = '\x02';
                    }
                    if (*(undefined1 **)(param_1 + 0x18) == puVar7) {
                      return puVar7;
                    }
                    cVar12 = '\0';
                    if (cVar13 != '\0') goto LAB_00096a3e;
                  }
                }
                else {
                  puVar22[*(int *)(param_1 + 0x14)] = cVar12;
                  if (*(undefined1 **)(param_1 + 0x18) == puVar22 + 1) {
                    return puVar22 + 1;
                  }
                  cVar13 = '\x01';
LAB_00096a3e:
                  cVar12 = cVar13 + -1;
                  puVar7 = puVar22 + 1;
                }
                cVar13 = puVar21[10];
                if (cVar12 == '\0') {
                  if (cVar13 == ',') {
                    return puVar7;
                  }
                  if (cVar13 == '\\') {
                    cVar12 = puVar21[0xb] == '\\' || puVar21[0xb] == ',';
                    puVar22 = puVar7;
                  }
                  else {
                    puVar7[*(int *)(param_1 + 0x14)] = cVar13;
                    bVar2 = cVar13 + 0x7f;
                    bVar26 = 0x1d < bVar2;
                    bVar27 = bVar2 == 0x1e;
                    if (0x1e < bVar2) {
                      bVar26 = 0x1b < (byte)(cVar13 + 0x20U);
                      bVar27 = (byte)(cVar13 + 0x20U) == 0x1c;
                    }
                    puVar22 = puVar7 + 1;
                    if (bVar26 && !bVar27) {
                      cVar13 = '\0';
                    }
                    else {
                      cVar13 = '\x02';
                    }
                    if (*(undefined1 **)(param_1 + 0x18) == puVar22) {
                      return puVar22;
                    }
                    cVar12 = '\0';
                    if (cVar13 != '\0') goto LAB_00096a66;
                  }
                }
                else {
                  puVar7[*(int *)(param_1 + 0x14)] = cVar13;
                  if (*(undefined1 **)(param_1 + 0x18) == puVar7 + 1) {
                    return puVar7 + 1;
                  }
                  cVar13 = '\x01';
LAB_00096a66:
                  cVar12 = cVar13 + -1;
                  puVar22 = puVar7 + 1;
                }
                cVar13 = puVar21[0xb];
                if (cVar12 == '\0') {
                  if (cVar13 == ',') {
                    return puVar22;
                  }
                  if (cVar13 == '\\') {
                    cVar12 = puVar21[0xc] == '\\' || puVar21[0xc] == ',';
                    puVar7 = puVar22;
                  }
                  else {
                    puVar22[*(int *)(param_1 + 0x14)] = cVar13;
                    bVar2 = cVar13 + 0x7f;
                    bVar26 = 0x1d < bVar2;
                    bVar27 = bVar2 == 0x1e;
                    if (0x1e < bVar2) {
                      bVar26 = 0x1b < (byte)(cVar13 + 0x20U);
                      bVar27 = (byte)(cVar13 + 0x20U) == 0x1c;
                    }
                    puVar7 = puVar22 + 1;
                    if (bVar26 && !bVar27) {
                      cVar13 = '\0';
                    }
                    else {
                      cVar13 = '\x02';
                    }
                    if (*(undefined1 **)(param_1 + 0x18) == puVar7) {
                      return puVar7;
                    }
                    cVar12 = '\0';
                    if (cVar13 != '\0') goto LAB_00096a8c;
                  }
                }
                else {
                  puVar22[*(int *)(param_1 + 0x14)] = cVar13;
                  if (*(undefined1 **)(param_1 + 0x18) == puVar22 + 1) {
                    return puVar22 + 1;
                  }
                  cVar13 = '\x01';
LAB_00096a8c:
                  cVar12 = cVar13 + -1;
                  puVar7 = puVar22 + 1;
                }
                puVar21 = puVar21 + 4;
              }
            }
            else {
              puVar21 = (undefined1 *)0x0;
              uVar20 = uVar8 - uVar3 & 3;
              bVar27 = false;
              puVar22 = puVar9 + uVar18;
              puVar7 = puVar22;
              if (uVar20 != 0) {
                cVar12 = puVar22[8];
                uVar3 = uVar18 + 4;
                if (cVar12 == ',') {
                  return (undefined1 *)0x0;
                }
                if (cVar12 == '\\') {
                  bVar27 = puVar22[9] == '\\' || puVar22[9] == ',';
                }
                else {
                  puVar21 = (undefined1 *)0x1;
                  **(char **)(param_1 + 0x14) = cVar12;
                  if (*(int *)(param_1 + 0x18) == 1) {
                    return (undefined1 *)0x1;
                  }
                }
                puVar7 = puVar22 + 1;
                if (uVar20 != 1) {
                  if (uVar20 != 2) {
                    uVar3 = uVar18 + 5;
                    cVar12 = puVar22[9];
                    if (bVar27) {
                      puVar21[*(int *)(param_1 + 0x14)] = cVar12;
                      puVar21 = puVar21 + 1;
                      if (*(undefined1 **)(param_1 + 0x18) == puVar21) {
                        return puVar21;
                      }
                      bVar27 = false;
                    }
                    else {
                      if (cVar12 == ',') {
                        return puVar21;
                      }
                      if (cVar12 == '\\') {
                        bVar27 = puVar22[10] == '\\' || puVar22[10] == ',';
                      }
                      else {
                        puVar21[*(int *)(param_1 + 0x14)] = cVar12;
                        puVar21 = puVar21 + 1;
                        if (*(undefined1 **)(param_1 + 0x18) == puVar21) {
                          return puVar21;
                        }
                      }
                    }
                    puVar7 = puVar22 + 2;
                  }
                  uVar3 = uVar3 + 1;
                  cVar12 = puVar7[8];
                  if (bVar27) {
                    puVar21[*(int *)(param_1 + 0x14)] = cVar12;
                    puVar21 = puVar21 + 1;
                    if (*(undefined1 **)(param_1 + 0x18) == puVar21) {
                      return puVar21;
                    }
                    bVar27 = false;
                  }
                  else {
                    if (cVar12 == ',') {
                      return puVar21;
                    }
                    if (cVar12 == '\\') {
                      bVar27 = puVar7[9] == '\\' || puVar7[9] == ',';
                    }
                    else {
                      puVar21[*(int *)(param_1 + 0x14)] = cVar12;
                      puVar21 = puVar21 + 1;
                      if (*(undefined1 **)(param_1 + 0x18) == puVar21) {
                        return puVar21;
                      }
                    }
                  }
                  puVar7 = puVar7 + 1;
                }
              }
              for (; uVar3 + 1 <= uVar8; uVar3 = uVar3 + 4) {
                cVar12 = puVar7[8];
                if (bVar27) {
                  puVar21[*(int *)(param_1 + 0x14)] = cVar12;
                  puVar21 = puVar21 + 1;
                  if (*(undefined1 **)(param_1 + 0x18) == puVar21) {
                    return puVar21;
                  }
                  bVar27 = false;
                }
                else {
                  if (cVar12 == ',') {
                    return puVar21;
                  }
                  if (cVar12 == '\\') {
                    bVar27 = puVar7[9] == '\\' || puVar7[9] == ',';
                  }
                  else {
                    puVar21[*(int *)(param_1 + 0x14)] = cVar12;
                    puVar21 = puVar21 + 1;
                    if (*(undefined1 **)(param_1 + 0x18) == puVar21) {
                      return puVar21;
                    }
                  }
                }
                cVar12 = puVar7[9];
                if (bVar27) {
                  puVar21[*(int *)(param_1 + 0x14)] = cVar12;
                  puVar21 = puVar21 + 1;
                  if (*(undefined1 **)(param_1 + 0x18) == puVar21) {
                    return puVar21;
                  }
                  bVar27 = false;
                }
                else {
                  if (cVar12 == ',') {
                    return puVar21;
                  }
                  if (cVar12 == '\\') {
                    bVar27 = puVar7[10] == '\\' || puVar7[10] == ',';
                  }
                  else {
                    puVar21[*(int *)(param_1 + 0x14)] = cVar12;
                    puVar21 = puVar21 + 1;
                    if (*(undefined1 **)(param_1 + 0x18) == puVar21) {
                      return puVar21;
                    }
                  }
                }
                cVar12 = puVar7[10];
                if (bVar27) {
                  puVar21[*(int *)(param_1 + 0x14)] = cVar12;
                  puVar21 = puVar21 + 1;
                  if (*(undefined1 **)(param_1 + 0x18) == puVar21) {
                    return puVar21;
                  }
                  bVar27 = false;
                }
                else {
                  if (cVar12 == ',') {
                    return puVar21;
                  }
                  if (cVar12 == '\\') {
                    bVar27 = puVar7[0xb] == '\\' || puVar7[0xb] == ',';
                  }
                  else {
                    puVar21[*(int *)(param_1 + 0x14)] = cVar12;
                    puVar21 = puVar21 + 1;
                    if (*(undefined1 **)(param_1 + 0x18) == puVar21) {
                      return puVar21;
                    }
                  }
                }
                cVar12 = puVar7[0xb];
                if (bVar27) {
                  puVar21[*(int *)(param_1 + 0x14)] = cVar12;
                  puVar21 = puVar21 + 1;
                  if (*(undefined1 **)(param_1 + 0x18) == puVar21) {
                    return puVar21;
                  }
                  bVar27 = false;
                }
                else {
                  if (cVar12 == ',') {
                    return puVar21;
                  }
                  if (cVar12 == '\\') {
                    bVar27 = puVar7[0xc] == '\\' || puVar7[0xc] == ',';
                  }
                  else {
                    puVar21[*(int *)(param_1 + 0x14)] = cVar12;
                    puVar21 = puVar21 + 1;
                    if (*(undefined1 **)(param_1 + 0x18) == puVar21) {
                      return puVar21;
                    }
                  }
                }
                puVar7 = puVar7 + 4;
              }
            }
            goto LAB_00095ba0;
          }
        }
      }
      else {
        iVar17 = *(int *)(param_1 + 8);
        puVar7 = *(undefined1 **)(param_1 + 0xc);
        if ((iVar17 != 0) && (&DAT_0000000b < puVar7)) {
          puVar9 = (undefined1 *)0x0;
          puVar22 = (undefined1 *)0x0;
          puVar5 = (undefined1 *)0x0;
          puVar21 = (undefined1 *)0x8;
          do {
            puVar4 = (undefined1 *)
                     malib_NextChunk(puVar5 + iVar17,(int)puVar7 - (int)puVar5,5,local_2c,&local_30)
            ;
            puVar5 = puVar4 + (int)puVar21;
            if ((int)puVar4 < 0) {
              return (undefined1 *)0xffffffff;
            }
            if ((local_2c[0] == 0x20) && (*(ushort *)(param_1 + 0x10) == local_30)) {
              puVar22 = puVar21 + iVar17;
              puVar9 = puVar4;
            }
            puVar21 = puVar5 + 8;
          } while (puVar21 < puVar7);
          if (puVar22 != (undefined1 *)0x0 && (undefined1 *)0x3 < puVar9) {
            puVar5 = (undefined1 *)0x0;
            puVar7 = puVar5;
            puVar21 = puVar5;
            while( true ) {
              puVar4 = puVar7 + 4;
              puVar23 = puVar22 + (int)puVar7;
              if (puVar9 < puVar4) break;
              puVar19 = (undefined1 *)((uint)(byte)puVar23[3] + (uint)(byte)puVar23[2] * 0x100);
              puVar10 = puVar19 + 4 + (int)puVar7;
              if (puVar9 < puVar10) {
                return (undefined1 *)0xffffffff;
              }
              p_Var1 = (_MALIBGETCINFO *)(puVar22 + (int)puVar7);
              puVar7 = puVar10;
              if ((*p_Var1 == param_1[0x12]) && (*(_MALIBGETCINFO *)(puVar23 + 1) == param_1[0x13]))
              {
                puVar5 = puVar22 + (int)puVar4;
                puVar21 = puVar19;
              }
            }
            if (puVar5 != (undefined1 *)0x0) {
              puVar7 = *(undefined1 **)(param_1 + 0x18);
              if (puVar21 < *(undefined1 **)(param_1 + 0x18)) {
                puVar7 = puVar21;
              }
              if (puVar7 == (undefined1 *)0x0) {
                return (undefined1 *)0x0;
              }
              puVar9 = (undefined1 *)0x1;
              puVar21 = *(undefined1 **)(param_1 + 0x14);
              uVar8 = (uint)(puVar7 + -1) & 7;
              *puVar21 = *puVar5;
              if (puVar7 == (undefined1 *)0x1) {
                return (undefined1 *)0x1;
              }
              if (uVar8 != 0) {
                if (uVar8 != 1) {
                  if (uVar8 != 2) {
                    if (uVar8 != 3) {
                      if (uVar8 != 4) {
                        if (uVar8 != 5) {
                          bVar27 = uVar8 != 6;
                          if (bVar27) {
                            puVar21 = (undefined1 *)(uint)(byte)puVar5[1];
                            puVar9 = (undefined1 *)0x2;
                            uVar8 = *(uint *)(param_1 + 0x14);
                          }
                          if (bVar27) {
                            *(char *)(uVar8 + 1) = (char)puVar21;
                          }
                          puVar9[*(int *)(param_1 + 0x14)] = puVar5[(int)puVar9];
                          puVar9 = puVar9 + 1;
                        }
                        puVar9[*(int *)(param_1 + 0x14)] = puVar5[(int)puVar9];
                        puVar9 = puVar9 + 1;
                      }
                      puVar9[*(int *)(param_1 + 0x14)] = puVar5[(int)puVar9];
                      puVar9 = puVar9 + 1;
                    }
                    puVar9[*(int *)(param_1 + 0x14)] = puVar5[(int)puVar9];
                    puVar9 = puVar9 + 1;
                  }
                  puVar9[*(int *)(param_1 + 0x14)] = puVar5[(int)puVar9];
                  puVar9 = puVar9 + 1;
                }
                puVar9[*(int *)(param_1 + 0x14)] = puVar5[(int)puVar9];
                puVar9 = puVar9 + 1;
                if (puVar9 == puVar7) {
                  return puVar7;
                }
              }
              do {
                puVar10 = puVar9 + 1;
                puVar23 = puVar9 + 2;
                puVar24 = puVar9 + 3;
                puVar19 = puVar9 + 4;
                puVar4 = puVar9 + 5;
                puVar21 = puVar9 + 6;
                puVar9[*(int *)(param_1 + 0x14)] = puVar5[(int)puVar9];
                puVar22 = puVar9 + 7;
                puVar9 = puVar9 + 8;
                puVar10[*(int *)(param_1 + 0x14)] = puVar5[(int)puVar10];
                puVar23[*(int *)(param_1 + 0x14)] = puVar5[(int)puVar23];
                puVar24[*(int *)(param_1 + 0x14)] = puVar5[(int)puVar24];
                puVar19[*(int *)(param_1 + 0x14)] = puVar5[(int)puVar19];
                puVar4[*(int *)(param_1 + 0x14)] = puVar5[(int)puVar4];
                puVar21[*(int *)(param_1 + 0x14)] = puVar5[(int)puVar21];
                puVar22[*(int *)(param_1 + 0x14)] = puVar5[(int)puVar22];
              } while (puVar9 != puVar7);
              return puVar7;
            }
          }
        }
      }
      puVar21 = (undefined1 *)0xffffffeb;
    }
  }
  return puVar21;
}

