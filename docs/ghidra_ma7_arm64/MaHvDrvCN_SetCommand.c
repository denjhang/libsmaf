/* MaHvDrvCN_SetCommand @ 00229084 5904B */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* YAMAHA::MaHvDrvCN_SetCommand(unsigned int, unsigned int, unsigned long) */

undefined8 YAMAHA::MaHvDrvCN_SetCommand(uint param_1,uint param_2,ulong param_3)

{
  bool bVar1;
  char *pcVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  char cVar18;
  ushort uVar19;
  ulong uVar20;
  uint uVar21;
  long *plVar22;
  undefined8 uVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined4 *puVar26;
  uint uVar27;
  char *pcVar28;
  ulong uVar29;
  char *pcVar30;
  char *pcVar31;
  char cVar32;
  uint uVar33;
  uint uVar34;
  int iVar35;
  uint uVar36;
  uint uVar37;
  long lVar38;
  ushort *puVar39;
  ushort *puVar40;
  int iVar41;
  uint *puVar42;
  uint *puVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  long lVar47;
  
  bVar9 = DAT_00580208;
  plVar22 = DAT_005800b0;
  uVar44 = (uint)param_3;
  switch(param_1) {
  case 0:
    if (param_2 != 0) {
      return 0xfffffffe;
    }
    if (DAT_0057f558 != 1) {
      return 0xffffffff;
    }
    if (DAT_005800b0 == (long *)0x0) {
      return 0xffffffff;
    }
    if (param_3 == 0) {
      return 0xfffffffe;
    }
    bVar9 = *(byte *)param_3;
    if (bVar9 < 0x80) {
      DAT_0057ffa0 = 1;
      DAT_0057f580 = (ushort)bVar9 * 100 + -0x4b0;
    }
    else {
      if ((bVar9 & 0x7f) == 0) {
        DAT_0057f580 = -0x8000;
      }
      else {
        DAT_0057f580 = ((bVar9 & 0x7f) - 0x3c) * 100;
      }
      DAT_0057ffa0 = 0;
    }
    if (0x7f < *(byte *)(param_3 + 1)) {
      return 0xfffffffd;
    }
    DAT_0057f582 = (&DAT_004e8b40)[*(byte *)(param_3 + 1)];
    bVar9 = *(byte *)(param_3 + 2);
    uVar44 = (uint)bVar9;
    if (bVar9 < 0x80) {
      iVar35 = 0;
      iVar41 = 1;
    }
    else {
      bVar10 = *(byte *)(param_3 + 3);
      uVar44 = (uint)bVar10;
      iVar35 = (bVar9 - 0x80) * 0x80;
      if (bVar10 < 0x80) {
        iVar41 = 2;
      }
      else {
        bVar9 = *(byte *)(param_3 + 4);
        uVar44 = (uint)bVar9;
        iVar35 = ((bVar10 - 0x80) + iVar35) * 0x80;
        if (bVar9 < 0x80) {
          iVar41 = 3;
        }
        else {
          uVar44 = (uint)*(byte *)(param_3 + 5);
          iVar41 = 4;
          iVar35 = ((bVar9 - 0x80) + iVar35) * 0x80;
          if (0x7f < *(byte *)(param_3 + 5)) {
            return 0xfffffffd;
          }
        }
      }
    }
    DAT_0057f578 = uVar44 + iVar35;
    uVar44 = iVar41 + 2;
    DAT_0057ffa1 = DAT_0057f578 != 0;
    bVar9 = *(byte *)(param_3 + uVar44);
    uVar37 = (uint)bVar9;
    if (bVar9 < 0x80) {
      iVar41 = 1;
      iVar35 = 0;
    }
    else {
      lVar47 = param_3 + uVar44;
      iVar35 = (bVar9 - 0x80) * 0x80;
      bVar9 = *(byte *)(lVar47 + 1);
      uVar37 = (uint)bVar9;
      if (bVar9 < 0x80) {
        iVar41 = 2;
      }
      else {
        bVar10 = *(byte *)(lVar47 + 2);
        uVar37 = (uint)bVar10;
        iVar35 = ((bVar9 - 0x80) + iVar35) * 0x80;
        if (bVar10 < 0x80) {
          iVar41 = 3;
        }
        else {
          uVar37 = (uint)*(byte *)(lVar47 + 3);
          iVar41 = 4;
          iVar35 = ((bVar10 - 0x80) + iVar35) * 0x80;
          if (0x7f < *(byte *)(lVar47 + 3)) {
            return 0xfffffffd;
          }
        }
      }
    }
    uVar37 = iVar35 + uVar37;
    uVar44 = iVar41 + uVar44;
    if (uVar37 < 4) {
      uVar33 = uVar37;
      if (uVar37 == 0) {
        return 0xfffffffd;
      }
    }
    else {
      uVar33 = 4;
    }
    bVar9 = *(byte *)(param_3 + uVar44);
    uVar45 = (uint)bVar9;
    iVar35 = 0;
    uVar34 = 1;
    if (0x7f < bVar9) {
      do {
        iVar35 = (uVar45 + iVar35 + -0x80) * 0x80;
        if (uVar33 <= uVar34) {
          return 0xfffffffd;
        }
        if (3 < uVar34) {
          return 0xfffffffd;
        }
        uVar45 = (uint)*(byte *)(param_3 + uVar44 + (ulong)uVar34);
        uVar34 = uVar34 + 1;
      } while (0x7f < uVar45);
    }
    DAT_0057f57c = iVar35 + uVar45;
    uVar34 = uVar34 + uVar44;
    if ((bool)DAT_0057ffa1) {
      if (DAT_0057f578 < DAT_0057f57c) {
        return 0xfffffffd;
      }
      DAT_0057ffa4 = DAT_0057f578 - DAT_0057f57c;
    }
    else {
      DAT_0057ffa4 = 0x14;
    }
    uVar21 = DAT_0057ffa4;
    bVar9 = *(byte *)(param_3 + uVar34);
    uVar33 = uVar34 + 1;
    uVar45 = bVar9 - 1;
    if (0x7e < uVar45) {
      return 0xfffffffd;
    }
    puVar6 = &DAT_0057ffae + uVar45;
    puVar24 = &DAT_0057ffae;
    DAT_0057ffad = *(undefined1 *)(param_3 + uVar33);
    uVar29 = (ulong)uVar45 & 7;
    uVar27 = uVar34 + 2;
    DAT_0057ffac = bVar9;
    if (puVar6 != &DAT_0057ffae) {
      puVar25 = puVar24;
      if ((uVar45 & 7) != 0) {
        if (uVar29 != 1) {
          if (uVar29 != 2) {
            if (uVar29 != 3) {
              if (uVar29 != 4) {
                if (uVar29 != 5) {
                  if (uVar29 != 6) {
                    DAT_0057ffae = *(undefined1 *)(param_3 + uVar27);
                    uVar27 = uVar34 + 3;
                    puVar25 = &DAT_0057ffaf;
                  }
                  uVar29 = (ulong)uVar27;
                  uVar27 = uVar27 + 1;
                  puVar24 = puVar25 + 1;
                  *puVar25 = *(undefined1 *)(param_3 + uVar29);
                }
                uVar29 = (ulong)uVar27;
                uVar27 = uVar27 + 1;
                puVar25 = puVar24 + 1;
                *puVar24 = *(undefined1 *)(param_3 + uVar29);
              }
              uVar29 = (ulong)uVar27;
              uVar27 = uVar27 + 1;
              puVar24 = puVar25 + 1;
              *puVar25 = *(undefined1 *)(param_3 + uVar29);
            }
            uVar29 = (ulong)uVar27;
            uVar27 = uVar27 + 1;
            puVar25 = puVar24 + 1;
            *puVar24 = *(undefined1 *)(param_3 + uVar29);
          }
          uVar29 = (ulong)uVar27;
          uVar27 = uVar27 + 1;
          puVar24 = puVar25 + 1;
          *puVar25 = *(undefined1 *)(param_3 + uVar29);
        }
        uVar29 = (ulong)uVar27;
        uVar27 = uVar27 + 1;
        *puVar24 = *(undefined1 *)(param_3 + uVar29);
        puVar25 = puVar24 + 1;
        if (puVar24 + 1 == puVar6) goto LAB_0022983c;
      }
      do {
        puVar24 = puVar25 + 8;
        uVar34 = uVar27 + 2;
        uVar45 = uVar27 + 3;
        *puVar25 = *(undefined1 *)(param_3 + uVar27);
        uVar36 = uVar27 + 4;
        uVar46 = uVar27 + 5;
        uVar4 = uVar27 + 6;
        uVar5 = uVar27 + 7;
        puVar25[1] = *(undefined1 *)(param_3 + (uVar27 + 1));
        uVar27 = uVar27 + 8;
        puVar25[2] = *(undefined1 *)(param_3 + uVar34);
        puVar25[3] = *(undefined1 *)(param_3 + uVar45);
        puVar25[4] = *(undefined1 *)(param_3 + uVar36);
        puVar25[5] = *(undefined1 *)(param_3 + uVar46);
        puVar25[6] = *(undefined1 *)(param_3 + uVar4);
        puVar25[7] = *(undefined1 *)(param_3 + uVar5);
        puVar25 = puVar24;
      } while (puVar24 != puVar6);
    }
LAB_0022983c:
    uVar19 = *(ushort *)((long)plVar22 + 0x16);
    lVar38 = *plVar22;
    lVar7 = param_3 + uVar33;
    lVar47 = lVar38 + 0x18;
    if (uVar19 == 0) {
      return 0xfffffffd;
    }
    cVar18 = *(char *)(param_3 + uVar33);
    if (*(char *)(lVar38 + 0x18) == cVar18) {
      uVar29 = 1;
    }
    else {
      uVar34 = (uint)uVar19 + (uint)uVar19 * 4;
      uVar29 = 5;
      uVar45 = (uVar34 - 5) * 0xcccd & 7;
      if (uVar45 == 0) {
LAB_00229940:
        if ((uint)uVar29 == uVar34) {
          return 0xfffffffd;
        }
        while( true ) {
          uVar45 = (uint)uVar29;
          uVar27 = uVar45;
          if (((((*(char *)(lVar47 + uVar29) == cVar18) ||
                (uVar27 = uVar45 + 5, *(char *)(lVar47 + (ulong)(uVar45 + 5)) == cVar18)) ||
               (uVar27 = uVar45 + 10, *(char *)(lVar47 + (ulong)uVar27) == cVar18)) ||
              ((uVar27 = uVar45 + 0xf, *(char *)(lVar47 + (ulong)uVar27) == cVar18 ||
               (uVar27 = uVar45 + 0x14, *(char *)(lVar47 + (ulong)uVar27) == cVar18)))) ||
             ((uVar27 = uVar45 + 0x19, *(char *)(lVar47 + (ulong)uVar27) == cVar18 ||
              ((uVar27 = uVar45 + 0x1e, *(char *)(lVar47 + (ulong)uVar27) == cVar18 ||
               (uVar27 = uVar45 + 0x23, *(char *)(lVar47 + (ulong)uVar27) == cVar18)))))) break;
          uVar29 = (ulong)(uVar45 + 0x28);
          if (uVar45 + 0x28 == uVar34) {
            return 0xfffffffd;
          }
        }
      }
      else {
        uVar27 = 5;
        if (*(char *)(lVar38 + 0x1d) != cVar18) {
          uVar29 = 10;
          if (uVar45 != 1) {
            if (uVar45 != 2) {
              if (uVar45 != 3) {
                if (uVar45 != 4) {
                  if (uVar45 != 5) {
                    if (uVar45 != 6) {
                      uVar27 = 10;
                      if (*(char *)(lVar38 + 0x22) == cVar18) goto LAB_00229a24;
                      uVar29 = 0xf;
                    }
                    uVar27 = (uint)uVar29;
                    if (*(char *)(lVar47 + uVar29) == cVar18) goto LAB_00229a24;
                    uVar29 = (ulong)((uint)uVar29 + 5);
                  }
                  uVar27 = (uint)uVar29;
                  if (*(char *)(lVar47 + uVar29) == cVar18) goto LAB_00229a24;
                  uVar29 = (ulong)((uint)uVar29 + 5);
                }
                uVar27 = (uint)uVar29;
                if (*(char *)(lVar47 + uVar29) == cVar18) goto LAB_00229a24;
                uVar29 = (ulong)((uint)uVar29 + 5);
              }
              uVar27 = (uint)uVar29;
              if (*(char *)(lVar47 + uVar29) == cVar18) goto LAB_00229a24;
              uVar29 = (ulong)((uint)uVar29 + 5);
            }
            uVar27 = (uint)uVar29;
            if (*(char *)(lVar47 + uVar29) == cVar18) goto LAB_00229a24;
            uVar29 = (ulong)((uint)uVar29 + 5);
          }
          goto LAB_00229940;
        }
      }
LAB_00229a24:
      uVar29 = (ulong)(uVar27 + 1);
    }
    lVar8 = lVar47 + uVar29;
    uVar34 = (*(byte *)(lVar8 + 3) & 0x7f) +
             ((*(byte *)(lVar8 + 2) & 0x7f) +
             ((*(byte *)(lVar47 + uVar29) & 0x7f) * 0x80 + (*(byte *)(lVar8 + 1) & 0x7f)) * 0x80) *
             0x80;
    if (uVar34 == 0) {
      return 0xfffffffd;
    }
    uVar45 = *(uint *)((long)plVar22 + 0x1c);
    if (uVar45 <= uVar34) {
      return 0xfffffffd;
    }
    pcVar2 = (char *)(lVar38 + (ulong)uVar34);
    uVar36 = (~uVar34 + uVar45) / 0xe & 7;
    pcVar28 = pcVar2;
    uVar27 = uVar34;
    if (*pcVar2 != cVar18) {
      uVar46 = uVar34 + 0xe;
      pcVar31 = pcVar2 + 0xe;
      if (uVar45 <= uVar46) {
        return 0xfffffffd;
      }
      if (uVar36 != 0) {
        if (uVar36 != 1) {
          if (uVar36 != 2) {
            if (uVar36 != 3) {
              if (uVar36 != 4) {
                if (uVar36 != 5) {
                  if (uVar36 != 6) {
                    pcVar28 = pcVar31;
                    uVar27 = uVar46;
                    if (*pcVar31 == cVar18) goto LAB_00229a94;
                    uVar46 = uVar34 + 0x1c;
                    pcVar31 = pcVar2 + 0x1c;
                  }
                  pcVar28 = pcVar31;
                  uVar27 = uVar46;
                  if (*pcVar31 == cVar18) goto LAB_00229a94;
                  uVar46 = uVar46 + 0xe;
                  pcVar31 = pcVar31 + 0xe;
                }
                pcVar28 = pcVar31;
                uVar27 = uVar46;
                if (*pcVar31 == cVar18) goto LAB_00229a94;
                uVar46 = uVar46 + 0xe;
                pcVar31 = pcVar31 + 0xe;
              }
              pcVar28 = pcVar31;
              uVar27 = uVar46;
              if (*pcVar31 == cVar18) goto LAB_00229a94;
              uVar46 = uVar46 + 0xe;
              pcVar31 = pcVar31 + 0xe;
            }
            pcVar28 = pcVar31;
            uVar27 = uVar46;
            if (*pcVar31 == cVar18) goto LAB_00229a94;
            uVar46 = uVar46 + 0xe;
            pcVar31 = pcVar31 + 0xe;
          }
          pcVar28 = pcVar31;
          uVar27 = uVar46;
          if (*pcVar31 == cVar18) goto LAB_00229a94;
          uVar46 = uVar46 + 0xe;
          pcVar31 = pcVar31 + 0xe;
        }
        pcVar28 = pcVar31;
        uVar27 = uVar46;
        if (*pcVar31 == cVar18) goto LAB_00229a94;
        uVar46 = uVar46 + 0xe;
        pcVar31 = pcVar31 + 0xe;
        if (uVar45 <= uVar46) {
          return 0xfffffffd;
        }
      }
      while (pcVar28 = pcVar31, uVar27 = uVar46, *pcVar31 != cVar18) {
        pcVar28 = pcVar31 + 0xe;
        uVar27 = uVar46 + 0xe;
        if (*pcVar28 == cVar18) break;
        pcVar28 = pcVar31 + 0x1c;
        uVar27 = uVar46 + 0x1c;
        if (*pcVar28 == cVar18) break;
        uVar27 = uVar46 + 0x2a;
        pcVar28 = pcVar31 + 0x2a;
        if (pcVar31[0x2a] == cVar18) break;
        uVar27 = uVar46 + 0x38;
        pcVar28 = pcVar31 + 0x38;
        if (pcVar31[0x38] == cVar18) break;
        uVar27 = uVar46 + 0x46;
        pcVar28 = pcVar31 + 0x46;
        if (pcVar31[0x46] == cVar18) break;
        uVar27 = uVar46 + 0x54;
        pcVar28 = pcVar31 + 0x54;
        if (pcVar31[0x54] == cVar18) break;
        uVar27 = uVar46 + 0x62;
        pcVar28 = pcVar31 + 0x62;
        if (pcVar31[0x62] == cVar18) break;
        uVar46 = uVar46 + 0x70;
        pcVar31 = pcVar31 + 0x70;
        if (uVar45 <= uVar46) {
          return 0xfffffffd;
        }
      }
    }
LAB_00229a94:
    uVar34 = uVar27;
    if (bVar9 == 1) goto LAB_00229aa0;
    if (uVar27 < uVar45) {
      pcVar2 = (char *)(lVar38 + (int)uVar27);
      uVar36 = (~uVar27 + uVar45) / 0xe & 7;
      if (*pcVar2 == cVar18) {
        cVar32 = *(char *)(lVar7 + 1);
        pcVar31 = pcVar2;
        if (cVar32 == pcVar2[1]) {
LAB_00229f4c:
          if (bVar9 == 2) goto LAB_00229aa0;
          uVar45 = FUN_00226740(lVar7,bVar9,uVar34,3);
          if (uVar45 != 0xffffffff) {
            uVar34 = uVar45;
            if ((int)uVar45 < 0) {
              return 0xfffffffd;
            }
            goto LAB_00229aa0;
          }
          if (((cVar18 != '\0') && (cVar32 != '\0')) && (pcVar31[2] == '\0')) goto LAB_00229aa0;
        }
        else {
          uVar46 = uVar27 + 0xe;
          pcVar30 = pcVar2 + 0xe;
          if (uVar46 < uVar45) {
            if (uVar36 == 0) goto LAB_0022a5bc;
            if (uVar36 != 1) {
              if (uVar36 != 2) {
                if (uVar36 != 3) {
                  if (uVar36 != 4) {
                    if (uVar36 != 5) {
                      if (uVar36 != 6) {
                        if (*pcVar30 != cVar18) goto LAB_0022a164;
                        pcVar31 = pcVar30;
                        uVar34 = uVar46;
                        if (cVar32 == pcVar2[0xf]) goto LAB_00229f4c;
                        uVar46 = uVar27 + 0x1c;
                        pcVar30 = pcVar2 + 0x1c;
                      }
                      if (*pcVar30 != cVar18) goto LAB_0022a164;
                      cVar32 = *(char *)(lVar7 + 1);
                      pcVar31 = pcVar30;
                      uVar34 = uVar46;
                      if (cVar32 == pcVar30[1]) goto LAB_00229f4c;
                      uVar46 = uVar46 + 0xe;
                      pcVar30 = pcVar30 + 0xe;
                    }
                    if (*pcVar30 != cVar18) goto LAB_0022a164;
                    cVar32 = *(char *)(lVar7 + 1);
                    pcVar31 = pcVar30;
                    uVar34 = uVar46;
                    if (cVar32 == pcVar30[1]) goto LAB_00229f4c;
                    uVar46 = uVar46 + 0xe;
                    pcVar30 = pcVar30 + 0xe;
                  }
                  if (*pcVar30 != cVar18) goto LAB_0022a164;
                  cVar32 = *(char *)(lVar7 + 1);
                  pcVar31 = pcVar30;
                  uVar34 = uVar46;
                  if (cVar32 == pcVar30[1]) goto LAB_00229f4c;
                  uVar46 = uVar46 + 0xe;
                  pcVar30 = pcVar30 + 0xe;
                }
                if (*pcVar30 != cVar18) goto LAB_0022a164;
                cVar32 = *(char *)(lVar7 + 1);
                pcVar31 = pcVar30;
                uVar34 = uVar46;
                if (cVar32 == pcVar30[1]) goto LAB_00229f4c;
                uVar46 = uVar46 + 0xe;
                pcVar30 = pcVar30 + 0xe;
              }
              if (*pcVar30 != cVar18) goto LAB_0022a164;
              cVar32 = *(char *)(lVar7 + 1);
              pcVar31 = pcVar30;
              uVar34 = uVar46;
              if (cVar32 == pcVar30[1]) goto LAB_00229f4c;
              uVar46 = uVar46 + 0xe;
              pcVar30 = pcVar30 + 0xe;
            }
            if (*pcVar30 == cVar18) {
              cVar32 = *(char *)(lVar7 + 1);
              pcVar31 = pcVar30;
              uVar34 = uVar46;
              if (cVar32 == pcVar30[1]) goto LAB_00229f4c;
              pcVar30 = pcVar30 + 0xe;
              for (uVar46 = uVar46 + 0xe; uVar46 < uVar45; uVar46 = uVar46 + 0x70) {
LAB_0022a5bc:
                if (*pcVar30 != cVar18) break;
                cVar32 = *(char *)(lVar7 + 1);
                pcVar31 = pcVar30;
                uVar34 = uVar46;
                if (cVar32 == pcVar30[1]) goto LAB_00229f4c;
                pcVar31 = pcVar30 + 0xe;
                uVar34 = uVar46 + 0xe;
                if (*pcVar31 != cVar18) break;
                if (cVar32 == pcVar30[0xf]) goto LAB_00229f4c;
                pcVar31 = pcVar30 + 0x1c;
                uVar34 = uVar46 + 0x1c;
                if (*pcVar31 != cVar18) break;
                if (cVar32 == pcVar30[0x1d]) goto LAB_00229f4c;
                uVar34 = uVar46 + 0x2a;
                pcVar31 = pcVar30 + 0x2a;
                if (pcVar30[0x2a] != cVar18) break;
                if (cVar32 == pcVar30[0x2b]) goto LAB_00229f4c;
                uVar34 = uVar46 + 0x38;
                pcVar31 = pcVar30 + 0x38;
                if (pcVar30[0x38] != cVar18) break;
                if (cVar32 == pcVar30[0x39]) goto LAB_00229f4c;
                uVar34 = uVar46 + 0x46;
                pcVar31 = pcVar30 + 0x46;
                if (pcVar30[0x46] != cVar18) break;
                cVar32 = *(char *)(lVar7 + 1);
                if (cVar32 == pcVar30[0x47]) goto LAB_00229f4c;
                uVar34 = uVar46 + 0x54;
                pcVar31 = pcVar30 + 0x54;
                if (pcVar30[0x54] != cVar18) break;
                if (cVar32 == pcVar30[0x55]) goto LAB_00229f4c;
                uVar34 = uVar46 + 0x62;
                pcVar31 = pcVar30 + 0x62;
                if (pcVar30[0x62] != cVar18) break;
                if (cVar32 == pcVar30[99]) goto LAB_00229f4c;
                pcVar30 = pcVar30 + 0x70;
              }
            }
          }
        }
      }
    }
LAB_0022a164:
    if (*pcVar28 == '\0') {
      return 0xfffffffd;
    }
    uVar34 = uVar27;
    if (pcVar28[1] != '\0') {
      return 0xfffffffd;
    }
LAB_00229aa0:
    lVar47 = (long)(int)uVar34;
    uVar27 = (uint)*(byte *)(lVar38 + lVar47);
    uVar45 = (uint)bVar9;
    if (*(byte *)(lVar38 + lVar47) != 0) {
      lVar7 = lVar38 + lVar47;
      if (*(char *)(lVar7 + 1) == '\0') {
        uVar27 = 1;
      }
      else if (*(char *)(lVar7 + 2) == '\0') {
        uVar27 = 2;
      }
      else if (*(char *)(lVar7 + 3) == '\0') {
        uVar27 = 3;
      }
      else if (*(char *)(lVar7 + 4) == '\0') {
        uVar27 = 4;
      }
      else if (*(char *)(lVar7 + 5) == '\0') {
        uVar27 = 5;
      }
      else if (*(char *)(lVar7 + 6) == '\0') {
        uVar27 = 6;
      }
      else if (*(char *)(lVar7 + 7) == '\0') {
        uVar27 = 7;
      }
      else if (*(char *)(lVar7 + 8) == '\0') {
        uVar27 = 8;
      }
      else {
        uVar27 = 10;
        if (*(char *)(lVar7 + 9) == '\0') {
          uVar27 = 9;
        }
      }
      if (uVar45 < uVar27) {
        return 0xfffffffd;
      }
    }
    if ((uVar34 != 0) && (*(uint *)(plVar22 + 2) <= uVar34)) {
      return 0xfffffffd;
    }
    lVar38 = lVar38 + lVar47;
    if (uVar45 <= uVar27) {
      uVar45 = uVar27;
    }
    uVar45 = uVar45 + uVar33;
    uVar33 = uVar45 + 1;
    uVar34 = (*(byte *)(lVar38 + 0xd) & 0x7f) +
             ((*(byte *)(lVar38 + 0xc) & 0x7f) +
             ((*(byte *)(lVar38 + 10) & 0x7f) * 0x80 + (*(byte *)(lVar38 + 0xb) & 0x7f)) * 0x80) *
             0x80;
    bVar9 = *(byte *)(param_3 + uVar45);
    if (0x7f < bVar9) {
      DAT_0057ffa8 = uVar34;
      return 0xfffffffd;
    }
    DAT_0057f98c = bVar9 + 1;
    DAT_0057f990 = 0;
    DAT_0057f994 = 0x2000;
    uVar27 = uVar33;
    DAT_0057ffa8 = uVar34;
    if (1 < (byte)(bVar9 + 1)) {
      if (0x7f < *(byte *)(param_3 + uVar33)) {
        DAT_0057f990 = 0;
        DAT_0057f994 = 0x2000;
        return 0xfffffffd;
      }
      iVar35 = uVar21 * 0x102;
      DAT_0057f998 = (uint)*(byte *)(param_3 + uVar33) * iVar35 >> 0xf;
      bVar10 = *(byte *)(param_3 + (uVar45 + 2) + 1);
      bVar9 = *(byte *)(param_3 + (uVar45 + 2));
      if (0x7f < bVar10) {
        DAT_0057f990 = 0;
        DAT_0057f994 = 0x2000;
        return 0xfffffffd;
      }
      if (0x7f < bVar9) {
        DAT_0057f990 = 0;
        DAT_0057f994 = 0x2000;
        return 0xfffffffd;
      }
      uVar27 = (uVar45 - 2) + (uint)DAT_0057f98c * 3;
      puVar40 = &DAT_0057f99c;
      if ((uVar27 - uVar33 & 1) != 0) goto LAB_00229cb8;
      uVar33 = uVar45 + 4;
      DAT_0057f99c = (ushort)bVar9 | (ushort)bVar10 << 7;
      if (0x7f < *(byte *)(param_3 + uVar33)) {
        DAT_0057f990 = 0;
        DAT_0057f994 = 0x2000;
        return 0xfffffffd;
      }
      pbVar3 = (byte *)(param_3 + (uVar45 + 5));
      DAT_0057f9a0 = iVar35 * (uint)*(byte *)(param_3 + uVar33) >> 0xf;
      puVar39 = &DAT_0057f9a4;
      bVar10 = pbVar3[1];
      bVar9 = *pbVar3;
      if (0x7f < bVar10) {
        DAT_0057f990 = 0;
        DAT_0057f994 = 0x2000;
        return 0xfffffffd;
      }
      while( true ) {
        puVar40 = puVar39;
        if (0x7f < bVar9) {
          return 0xfffffffd;
        }
LAB_00229cb8:
        *puVar40 = (ushort)bVar9 | (ushort)bVar10 << 7;
        if (uVar33 + 3 == uVar27) break;
        bVar9 = *(byte *)(param_3 + (uVar33 + 3));
        if (0x7f < bVar9) {
          return 0xfffffffd;
        }
        *(uint *)(puVar40 + 2) = iVar35 * (uint)bVar9 >> 0xf;
        bVar9 = *(byte *)(param_3 + (uVar33 + 4) + 1);
        bVar10 = *(byte *)(param_3 + (uVar33 + 4));
        if (0x7f < bVar9) {
          return 0xfffffffd;
        }
        if (0x7f < bVar10) {
          return 0xfffffffd;
        }
        puVar40[4] = (ushort)bVar10 | (ushort)bVar9 << 7;
        uVar45 = uVar33 + 7;
        bVar9 = *(byte *)(param_3 + (uVar33 + 6));
        if (0x7f < bVar9) {
          return 0xfffffffd;
        }
        puVar39 = puVar40 + 8;
        *(uint *)(puVar40 + 6) = iVar35 * (uint)bVar9 >> 0xf;
        uVar33 = uVar33 + 6;
        bVar10 = *(byte *)(param_3 + uVar45 + 1);
        bVar9 = *(byte *)(param_3 + uVar45);
        if (0x7f < bVar10) {
          return 0xfffffffd;
        }
      }
    }
    bVar9 = *(byte *)(param_3 + uVar27);
    uVar33 = uVar27 + 1;
    if (0x7f < bVar9) {
      return 0xfffffffd;
    }
    DAT_0057f583 = bVar9 + 1;
    DAT_0057f584 = 0;
    DAT_0057f588 = 0;
    if (1 < (byte)(bVar9 + 1)) {
      uVar29 = (ulong)uVar33;
      if (0x7f < *(byte *)(param_3 + uVar29)) {
        DAT_0057f584 = 0;
        DAT_0057f588 = 0;
        return 0xfffffffd;
      }
      uVar33 = uVar27 + 3;
      iVar35 = uVar21 * 0x102;
      DAT_0057f58c = (uint)*(byte *)(param_3 + uVar29) * iVar35 >> 0xf;
      bVar9 = *(byte *)(param_3 + (uVar27 + 2));
      uVar29 = (ulong)bVar9;
      if (0x7f < bVar9) {
        DAT_0057f584 = 0;
        DAT_0057f588 = 0;
        return 0xfffffffd;
      }
      lVar47 = (ulong)(DAT_0057f583 - 2) + 7;
      uVar20 = lVar47 * 8 - 0x38U >> 3 & 3;
      puVar26 = (undefined4 *)&DAT_0057f590;
      if (uVar20 != 0) {
        DAT_0057f590 = *(undefined2 *)(&DAT_004e8bc0 + uVar29 * 2);
        uVar29 = (ulong)uVar33;
        if (0x7f < *(byte *)(param_3 + uVar29)) {
          DAT_0057f584 = 0;
          DAT_0057f588 = 0;
          return 0xfffffffd;
        }
        uVar33 = uVar27 + 5;
        DAT_0057f594 = (uint)*(byte *)(param_3 + uVar29) * iVar35 >> 0xf;
        puVar26 = (undefined4 *)&DAT_0057f598;
        bVar9 = *(byte *)(param_3 + (uVar27 + 4));
        uVar29 = (ulong)bVar9;
        if (0x7f < bVar9) {
          DAT_0057f584 = 0;
          DAT_0057f588 = 0;
          return 0xfffffffd;
        }
        if (uVar20 != 1) {
          if (uVar20 != 2) {
            DAT_0057f598 = *(undefined2 *)(&DAT_004e8bc0 + uVar29 * 2);
            uVar29 = (ulong)uVar33;
            if (0x7f < *(byte *)(param_3 + uVar29)) {
              DAT_0057f584 = 0;
              DAT_0057f588 = 0;
              return 0xfffffffd;
            }
            uVar33 = uVar27 + 7;
            puVar26 = (undefined4 *)&DAT_0057f5a0;
            DAT_0057f59c = (uint)*(byte *)(param_3 + uVar29) * iVar35 >> 0xf;
            bVar9 = *(byte *)(param_3 + (uVar27 + 6));
            uVar29 = (ulong)bVar9;
            if (0x7f < bVar9) {
              DAT_0057f584 = 0;
              DAT_0057f588 = 0;
              return 0xfffffffd;
            }
          }
          *(undefined2 *)puVar26 = *(undefined2 *)(&DAT_004e8bc0 + uVar29 * 2);
          uVar45 = uVar33 + 1;
          uVar29 = (ulong)uVar33;
          if (0x7f < *(byte *)(param_3 + uVar29)) {
            return 0xfffffffd;
          }
          uVar33 = uVar33 + 2;
          puVar26[1] = (uint)*(byte *)(param_3 + uVar29) * iVar35 >> 0xf;
          bVar9 = *(byte *)(param_3 + uVar45);
          uVar29 = (ulong)bVar9;
          puVar26 = puVar26 + 2;
          if (0x7f < bVar9) {
            return 0xfffffffd;
          }
        }
      }
      while (*(undefined2 *)puVar26 = *(undefined2 *)(&DAT_004e8bc0 + uVar29 * 2),
            puVar26 != &DAT_0057f558 + lVar47 * 2) {
        if (0x7f < *(byte *)(param_3 + uVar33)) {
          return 0xfffffffd;
        }
        puVar26[1] = (uint)*(byte *)(param_3 + uVar33) * iVar35 >> 0xf;
        bVar9 = *(byte *)(param_3 + (uVar33 + 1));
        if (0x7f < bVar9) {
          return 0xfffffffd;
        }
        *(undefined2 *)(puVar26 + 2) = *(undefined2 *)(&DAT_004e8bc0 + (ulong)bVar9 * 2);
        bVar9 = *(byte *)(param_3 + (uVar33 + 2));
        if (0x7f < bVar9) {
          return 0xfffffffd;
        }
        puVar26[3] = (uint)bVar9 * iVar35 >> 0xf;
        bVar9 = *(byte *)(param_3 + (uVar33 + 3));
        if (0x7f < bVar9) {
          return 0xfffffffd;
        }
        *(undefined2 *)(puVar26 + 4) = *(undefined2 *)(&DAT_004e8bc0 + (ulong)bVar9 * 2);
        bVar9 = *(byte *)(param_3 + (uVar33 + 4));
        if (0x7f < bVar9) {
          return 0xfffffffd;
        }
        puVar26[5] = (uint)bVar9 * iVar35 >> 0xf;
        bVar9 = *(byte *)(param_3 + (uVar33 + 5));
        if (0x7f < bVar9) {
          return 0xfffffffd;
        }
        uVar45 = uVar33 + 7;
        *(undefined2 *)(puVar26 + 6) = *(undefined2 *)(&DAT_004e8bc0 + (ulong)bVar9 * 2);
        bVar9 = *(byte *)(param_3 + (uVar33 + 6));
        if (0x7f < bVar9) {
          return 0xfffffffd;
        }
        uVar33 = uVar33 + 8;
        puVar26[7] = (uint)bVar9 * iVar35 >> 0xf;
        bVar9 = *(byte *)(param_3 + uVar45);
        uVar29 = (ulong)bVar9;
        puVar26 = puVar26 + 8;
        if (0x7f < bVar9) {
          return 0xfffffffd;
        }
      }
    }
    bVar9 = *(byte *)(param_3 + uVar33);
    uVar45 = uVar33 + 1;
    if (0x7f < bVar9) {
      return 0xfffffffd;
    }
    DAT_0057fd98 = bVar9;
    if (bVar9 != 0) {
      bVar10 = *(byte *)(param_3 + uVar45);
      uVar36 = (uint)bVar10;
      uVar27 = uVar33 + 2;
      if (0x7f < bVar10) {
        return 0xfffffffd;
      }
      uVar45 = uVar45 + bVar9;
      puVar43 = &DAT_0057fd9c;
      uVar4 = uVar45 - uVar27 & 3;
      iVar35 = uVar21 * 0x102;
      uVar46 = uVar27;
      if (uVar4 != 0) {
        uVar46 = uVar33 + 3;
        DAT_0057fd9c = (uint)bVar10 * iVar35 >> 0xf;
        puVar43 = &DAT_0057fda0;
        bVar10 = *(byte *)(param_3 + uVar27);
        uVar36 = (uint)bVar10;
        if (0x7f < bVar10) {
          return 0xfffffffd;
        }
        if (uVar4 != 1) {
          puVar42 = puVar43;
          uVar27 = uVar46;
          if (uVar4 != 2) {
            uVar27 = uVar33 + 4;
            DAT_0057fda0 = (uint)bVar10 * iVar35 >> 0xf;
            puVar42 = &DAT_0057fda4;
            uVar36 = (uint)*(byte *)(param_3 + uVar46);
            if (0x7f < *(byte *)(param_3 + uVar46)) {
              return 0xfffffffd;
            }
          }
          uVar46 = uVar27 + 1;
          puVar43 = puVar42 + 1;
          *puVar42 = uVar36 * iVar35 >> 0xf;
          uVar36 = (uint)*(byte *)(param_3 + uVar27);
          if (0x7f < *(byte *)(param_3 + uVar27)) {
            return 0xfffffffd;
          }
        }
      }
      *puVar43 = uVar36 * iVar35 >> 0xf;
      for (; uVar46 != uVar45; uVar46 = uVar46 + 4) {
        if (0x7f < *(byte *)(param_3 + uVar46)) {
          return 0xfffffffd;
        }
        puVar43[1] = (uint)*(byte *)(param_3 + uVar46) * iVar35 >> 0xf;
        bVar9 = *(byte *)(param_3 + (uVar46 + 1));
        if (0x7f < bVar9) {
          return 0xfffffffd;
        }
        puVar43[2] = (uint)bVar9 * iVar35 >> 0xf;
        bVar9 = *(byte *)(param_3 + (uVar46 + 2));
        if (0x7f < bVar9) {
          return 0xfffffffd;
        }
        puVar43[3] = (uint)bVar9 * iVar35 >> 0xf;
        bVar9 = *(byte *)(param_3 + (uVar46 + 3));
        if (0x7f < bVar9) {
          return 0xfffffffd;
        }
        puVar43[4] = (uint)bVar9 * iVar35 >> 0xf;
        puVar43 = puVar43 + 4;
      }
    }
    if (uVar45 != uVar44 + uVar37) {
      return 0xfffffffd;
    }
    lVar47 = *plVar22;
    DAT_005800b8 = (*(byte *)(lVar47 + (ulong)uVar34 + 1) & 0x7f) +
                   (*(byte *)(lVar47 + (ulong)uVar34) & 0x7f) * 0x80;
    DAT_005800c8 = lVar47 + (ulong)(uVar34 + 10);
    uVar44 = (*(byte *)(lVar47 + (ulong)(uVar34 + 2) + 1) & 0x7f) +
             (*(byte *)(lVar47 + (ulong)(uVar34 + 2)) & 0x7f) * 0x80;
    DAT_005800ba = (undefined2)uVar44;
    iVar35 = (*(byte *)(lVar47 + (ulong)(uVar34 + 4) + 1) & 0x7f) +
             (*(byte *)(lVar47 + (ulong)(uVar34 + 4)) & 0x7f) * 0x80;
    DAT_005800bc = (undefined2)iVar35;
    uVar37 = (*(byte *)(lVar47 + (ulong)(uVar34 + 6) + 1) & 0x7f) +
             (*(byte *)(lVar47 + (ulong)(uVar34 + 6)) & 0x7f) * 0x80;
    DAT_005800be = (undefined2)uVar37;
    DAT_005800c0 = (*(byte *)(lVar47 + (ulong)(uVar34 + 8) + 1) & 0x7f) +
                   (*(byte *)(lVar47 + (ulong)(uVar34 + 8)) & 0x7f) * 0x80;
    if (uVar44 <= uVar37) {
      uVar37 = uVar44 - 1 & 0xffff;
      DAT_005800be = (undefined2)(uVar44 - 1);
    }
    if (uVar21 <= uVar44) {
      DAT_0057f558 = 2;
      DAT_0057f55c = 0;
      DAT_0057f564 = 0;
      _DAT_0057f568 = 0;
      DAT_0057f56c = 0;
      DAT_00580030 = 0;
      DAT_00580031 = 0;
      DAT_00580034 = 0;
      DAT_00580038 = 0;
      DAT_0058003c = 0;
      DAT_005802a0 = 0;
      DAT_005802a2 = 0;
      DAT_005802a3 = 1;
      return 0;
    }
    uVar33 = uVar37 - iVar35;
    DAT_00580034 = (uVar21 - iVar35) - (uVar44 + ~uVar37);
    uVar44 = uVar33 + 1;
    if ((int)DAT_00580034 < 1) {
      DAT_00580034 = 0;
    }
    else if (0 < (int)uVar44) {
      if (uVar33 - 1 < 0x7f) {
        uVar33 = DAT_00580034 * *(int *)(&DAT_004a9af0 + (ulong)uVar33 * 4) >> 0xf;
      }
      else {
        if (uVar44 == 1) {
          DAT_0057f558 = 2;
          DAT_0057f55c = 0;
          DAT_0057f564 = 0;
          _DAT_0057f568 = 0;
          DAT_0057f56c = 0;
          DAT_00580030 = 0;
          DAT_00580031 = 0;
          DAT_00580038 = 0;
          DAT_0058003c = 0;
          DAT_005802a0 = 0;
          DAT_005802a2 = 0;
          DAT_005802a3 = 1;
          return 0;
        }
        uVar33 = 0;
        if ((0x80 < uVar44) && (uVar33 = 0, uVar44 != 0)) {
          uVar33 = DAT_00580034 / uVar44;
        }
      }
      iVar35 = DAT_00580034 - uVar33 * uVar44;
      DAT_00580034 = uVar33;
      if ((iVar35 <= (int)uVar44 && 0 < iVar35) && (iVar35 <= (int)uVar37)) {
        DAT_0057f558 = 2;
        DAT_0057f55c = 0;
        DAT_0057f564 = 0;
        _DAT_0057f568 = 0;
        DAT_0057f56c = 0;
        DAT_00580030 = 0;
        DAT_00580031 = 0;
        DAT_00580038 = (uVar37 + 1) - iVar35;
        DAT_0058003c = 0;
        DAT_005802a0 = 0;
        DAT_005802a2 = 0;
        DAT_005802a3 = 1;
        return 0;
      }
    }
    DAT_0057f558 = 2;
    DAT_0057f55c = 0;
    DAT_0057f564 = 0;
    _DAT_0057f568 = 0;
    DAT_0057f56c = 0;
    DAT_00580030 = 0;
    DAT_00580031 = 0;
    DAT_00580038 = 0;
    DAT_0058003c = 0;
    DAT_005802a0 = 0;
    DAT_005802a2 = 0;
    DAT_005802a3 = 1;
    return 0;
  case 1:
    if (param_2 == 0) {
      if (DAT_0057f558 == 2) {
        DAT_0057f558 = 1;
        DAT_0057f55c = 1;
        DAT_0057f578 = 0;
        DAT_0057f57c = 0;
        DAT_0057f580 = 0;
        DAT_0057f582 = 0;
        DAT_0057f583 = 0;
        DAT_0057f98c = 0;
        DAT_0057fd98 = 0;
        DAT_0057ffa0 = 1;
        DAT_0057ffa1 = 1;
        DAT_0057ffa4 = 0;
        DAT_0057ffac = 0;
        return 0;
      }
      return 0xffffffff;
    }
    break;
  case 2:
    if (DAT_0057f558 != 1) {
      return 0xffffffff;
    }
    if (param_2 - 0x80 < 0x10) {
      if (2 < *(byte *)param_3) {
        return 0xfffffffd;
      }
      if ((*(byte *)param_3 == 2) && (DAT_00580090 == 0)) {
        return 0xfffffffb;
      }
      if (0x7f < *(byte *)(param_3 + 2)) {
        return 0xfffffffd;
      }
      if (0x7f < *(byte *)(param_3 + 1)) {
        return 0xfffffffd;
      }
      if (0x7f < *(byte *)(param_3 + 4)) {
        return 0xfffffffd;
      }
      if (0x7f < *(byte *)(param_3 + 3)) {
        return 0xfffffffd;
      }
      if (*(char *)(param_3 + 0x13) < '\0') {
        return 0xfffffffd;
      }
      bVar10 = *(byte *)(param_3 + 0x1b);
      if ((bVar10 - 0xf & 0xf7) == 0) {
        return 0xfffffffd;
      }
      if (0x1e < bVar10) {
        return 0xfffffffd;
      }
      if (0x7f < *(byte *)(param_3 + 6)) {
        DAT_005800f4 = bVar10;
        return 0xfffffffd;
      }
      if (0x7f < *(byte *)(param_3 + 5)) {
        DAT_005800f4 = bVar10;
        return 0xfffffffd;
      }
      if (*(char *)(param_3 + 0x14) < '\0') {
        DAT_005800f4 = bVar10;
        return 0xfffffffd;
      }
      bVar11 = *(byte *)(param_3 + 0x1c);
      if ((bVar11 - 0xf & 0xf7) == 0) {
        DAT_005800f4 = bVar10;
        return 0xfffffffd;
      }
      if (0x1e < bVar11) {
        DAT_005800f4 = bVar10;
        return 0xfffffffd;
      }
      if (0x7f < *(byte *)(param_3 + 8)) {
        DAT_005800f4 = bVar10;
        DAT_005800f5 = bVar11;
        return 0xfffffffd;
      }
      if (0x7f < *(byte *)(param_3 + 7)) {
        DAT_005800f4 = bVar10;
        DAT_005800f5 = bVar11;
        return 0xfffffffd;
      }
      if (*(char *)(param_3 + 0x15) < '\0') {
        DAT_005800f4 = bVar10;
        DAT_005800f5 = bVar11;
        return 0xfffffffd;
      }
      bVar12 = *(byte *)(param_3 + 0x1d);
      if ((bVar12 - 0xf & 0xf7) == 0) {
        DAT_005800f4 = bVar10;
        DAT_005800f5 = bVar11;
        return 0xfffffffd;
      }
      if (0x1e < bVar12) {
        DAT_005800f4 = bVar10;
        DAT_005800f5 = bVar11;
        return 0xfffffffd;
      }
      if (0x7f < *(byte *)(param_3 + 10)) {
        DAT_005800f4 = bVar10;
        DAT_005800f5 = bVar11;
        DAT_005800f6 = bVar12;
        return 0xfffffffd;
      }
      if (0x7f < *(byte *)(param_3 + 9)) {
        DAT_005800f4 = bVar10;
        DAT_005800f5 = bVar11;
        DAT_005800f6 = bVar12;
        return 0xfffffffd;
      }
      if (*(char *)(param_3 + 0x16) < '\0') {
        DAT_005800f4 = bVar10;
        DAT_005800f5 = bVar11;
        DAT_005800f6 = bVar12;
        return 0xfffffffd;
      }
      bVar13 = *(byte *)(param_3 + 0x1e);
      if ((bVar13 - 0xf & 0xf7) == 0) {
        DAT_005800f4 = bVar10;
        DAT_005800f5 = bVar11;
        DAT_005800f6 = bVar12;
        return 0xfffffffd;
      }
      if (0x1e < bVar13) {
        DAT_005800f4 = bVar10;
        DAT_005800f5 = bVar11;
        DAT_005800f6 = bVar12;
        return 0xfffffffd;
      }
      if (0x7f < *(byte *)(param_3 + 0xc)) {
        DAT_005800f4 = bVar10;
        DAT_005800f5 = bVar11;
        DAT_005800f6 = bVar12;
        DAT_005800f7 = bVar13;
        return 0xfffffffd;
      }
      if (0x7f < *(byte *)(param_3 + 0xb)) {
        DAT_005800f4 = bVar10;
        DAT_005800f5 = bVar11;
        DAT_005800f6 = bVar12;
        DAT_005800f7 = bVar13;
        return 0xfffffffd;
      }
      if (*(char *)(param_3 + 0x17) < '\0') {
        DAT_005800f4 = bVar10;
        DAT_005800f5 = bVar11;
        DAT_005800f6 = bVar12;
        DAT_005800f7 = bVar13;
        return 0xfffffffd;
      }
      bVar14 = *(byte *)(param_3 + 0x1f);
      if ((bVar14 - 0xf & 0xf7) == 0) {
        DAT_005800f4 = bVar10;
        DAT_005800f5 = bVar11;
        DAT_005800f6 = bVar12;
        DAT_005800f7 = bVar13;
        return 0xfffffffd;
      }
      if (0x1e < bVar14) {
        DAT_005800f4 = bVar10;
        DAT_005800f5 = bVar11;
        DAT_005800f6 = bVar12;
        DAT_005800f7 = bVar13;
        return 0xfffffffd;
      }
      if (0x7f < *(byte *)(param_3 + 0xe)) {
        DAT_005800f4 = bVar10;
        DAT_005800f5 = bVar11;
        DAT_005800f6 = bVar12;
        DAT_005800f7 = bVar13;
        DAT_005800f8 = bVar14;
        return 0xfffffffd;
      }
      if (0x7f < *(byte *)(param_3 + 0xd)) {
        DAT_005800f4 = bVar10;
        DAT_005800f5 = bVar11;
        DAT_005800f6 = bVar12;
        DAT_005800f7 = bVar13;
        DAT_005800f8 = bVar14;
        return 0xfffffffd;
      }
      if (-1 < *(char *)(param_3 + 0x18)) {
        bVar15 = *(byte *)(param_3 + 0x20);
        if ((bVar15 - 0xf & 0xf7) == 0) {
          DAT_005800f4 = bVar10;
          DAT_005800f5 = bVar11;
          DAT_005800f6 = bVar12;
          DAT_005800f7 = bVar13;
          DAT_005800f8 = bVar14;
          return 0xfffffffd;
        }
        if (0x1e < bVar15) {
          DAT_005800f4 = bVar10;
          DAT_005800f5 = bVar11;
          DAT_005800f6 = bVar12;
          DAT_005800f7 = bVar13;
          DAT_005800f8 = bVar14;
          return 0xfffffffd;
        }
        if (0x7f < *(byte *)(param_3 + 0x10)) {
          DAT_005800f4 = bVar10;
          DAT_005800f5 = bVar11;
          DAT_005800f6 = bVar12;
          DAT_005800f7 = bVar13;
          DAT_005800f8 = bVar14;
          DAT_005800f9 = bVar15;
          return 0xfffffffd;
        }
        if (0x7f < *(byte *)(param_3 + 0xf)) {
          DAT_005800f4 = bVar10;
          DAT_005800f5 = bVar11;
          DAT_005800f6 = bVar12;
          DAT_005800f7 = bVar13;
          DAT_005800f8 = bVar14;
          DAT_005800f9 = bVar15;
          return 0xfffffffd;
        }
        if (*(char *)(param_3 + 0x19) < '\0') {
          DAT_005800f4 = bVar10;
          DAT_005800f5 = bVar11;
          DAT_005800f6 = bVar12;
          DAT_005800f7 = bVar13;
          DAT_005800f8 = bVar14;
          DAT_005800f9 = bVar15;
          return 0xfffffffd;
        }
        bVar16 = *(byte *)(param_3 + 0x21);
        if ((bVar16 - 0xf & 0xf7) == 0) {
          DAT_005800f4 = bVar10;
          DAT_005800f5 = bVar11;
          DAT_005800f6 = bVar12;
          DAT_005800f7 = bVar13;
          DAT_005800f8 = bVar14;
          DAT_005800f9 = bVar15;
          return 0xfffffffd;
        }
        if (0x1e < bVar16) {
          DAT_005800f4 = bVar10;
          DAT_005800f5 = bVar11;
          DAT_005800f6 = bVar12;
          DAT_005800f7 = bVar13;
          DAT_005800f8 = bVar14;
          DAT_005800f9 = bVar15;
          return 0xfffffffd;
        }
        if (0x7f < *(byte *)(param_3 + 0x12)) {
          DAT_005800f4 = bVar10;
          DAT_005800f5 = bVar11;
          DAT_005800f6 = bVar12;
          DAT_005800f7 = bVar13;
          DAT_005800f8 = bVar14;
          DAT_005800f9 = bVar15;
          DAT_005800fa = bVar16;
          return 0xfffffffd;
        }
        if (0x7f < *(byte *)(param_3 + 0x11)) {
          DAT_005800f4 = bVar10;
          DAT_005800f5 = bVar11;
          DAT_005800f6 = bVar12;
          DAT_005800f7 = bVar13;
          DAT_005800f8 = bVar14;
          DAT_005800f9 = bVar15;
          DAT_005800fa = bVar16;
          return 0xfffffffd;
        }
        if (*(char *)(param_3 + 0x1a) < '\0') {
          DAT_005800f4 = bVar10;
          DAT_005800f5 = bVar11;
          DAT_005800f6 = bVar12;
          DAT_005800f7 = bVar13;
          DAT_005800f8 = bVar14;
          DAT_005800f9 = bVar15;
          DAT_005800fa = bVar16;
          return 0xfffffffd;
        }
        bVar17 = *(byte *)(param_3 + 0x22);
        if ((bVar17 - 0xf & 0xf7) == 0) {
          DAT_005800f4 = bVar10;
          DAT_005800f5 = bVar11;
          DAT_005800f6 = bVar12;
          DAT_005800f7 = bVar13;
          DAT_005800f8 = bVar14;
          DAT_005800f9 = bVar15;
          DAT_005800fa = bVar16;
          return 0xfffffffd;
        }
        if (0x1e < bVar17) {
          DAT_005800f4 = bVar10;
          DAT_005800f5 = bVar11;
          DAT_005800f6 = bVar12;
          DAT_005800f7 = bVar13;
          DAT_005800f8 = bVar14;
          DAT_005800f9 = bVar15;
          DAT_005800fa = bVar16;
          return 0xfffffffd;
        }
        if (0x7f < *(byte *)(param_3 + 0x24)) {
          DAT_005800f4 = bVar10;
          DAT_005800f5 = bVar11;
          DAT_005800f6 = bVar12;
          DAT_005800f7 = bVar13;
          DAT_005800f8 = bVar14;
          DAT_005800f9 = bVar15;
          DAT_005800fa = bVar16;
          DAT_005800fb = bVar17;
          return 0xfffffffd;
        }
        if (0x7f < *(byte *)(param_3 + 0x23)) {
          DAT_005800f4 = bVar10;
          DAT_005800f5 = bVar11;
          DAT_005800f6 = bVar12;
          DAT_005800f7 = bVar13;
          DAT_005800f8 = bVar14;
          DAT_005800f9 = bVar15;
          DAT_005800fa = bVar16;
          DAT_005800fb = bVar17;
          return 0xfffffffd;
        }
        if (1 < *(byte *)(param_3 + 0x25)) {
          DAT_005800f4 = bVar10;
          DAT_005800f5 = bVar11;
          DAT_005800f6 = bVar12;
          DAT_005800f7 = bVar13;
          DAT_005800f8 = bVar14;
          DAT_005800f9 = bVar15;
          DAT_005800fa = bVar16;
          DAT_005800fb = bVar17;
          return 0xfffffffd;
        }
        DAT_005800f4 = bVar10;
        DAT_005800f5 = bVar11;
        DAT_005800f6 = bVar12;
        DAT_005800f7 = bVar13;
        DAT_005800f8 = bVar14;
        DAT_005800f9 = bVar15;
        DAT_005800fa = bVar16;
        DAT_005800fb = bVar17;
        (&DAT_00580108)[param_2 - 0x70] = param_3;
        if (param_2 != bVar9) {
          return 0;
        }
        FUN_00226cac();
        return 0;
      }
      DAT_005800f4 = bVar10;
      DAT_005800f5 = bVar11;
      DAT_005800f6 = bVar12;
      DAT_005800f7 = bVar13;
      DAT_005800f8 = bVar14;
      return 0xfffffffd;
    }
    break;
  case 3:
    if (param_2 == 0) {
      uVar23 = FUN_00226cac(param_3 & 0xffffffff);
      return uVar23;
    }
    break;
  case 4:
    if (param_2 == 0) {
      if (1 < DAT_0057f558 - 1U) {
        return 0xffffffff;
      }
      if (uVar44 < 0x4000) {
        if (uVar44 < 0x4000) {
          iVar35 = uVar44 - 0x2000;
        }
        else {
          iVar35 = -0x2000;
          if (0x3fff < (int)uVar44) {
            iVar35 = 0x1fff;
          }
        }
        iVar41 = 1;
        iVar35 = DAT_00580040 * iVar35;
        if (iVar35 < 0) {
          iVar35 = -iVar35;
          iVar41 = -1;
        }
        DAT_00580044 = (iVar35 >> 0xd) * iVar41;
        if ((0x12c0 < DAT_00580044 + 0x960U) &&
           (bVar1 = 0x960 < DAT_00580044, DAT_00580044 = -0x960, bVar1)) {
          DAT_00580044 = 0x960;
        }
        return 0;
      }
    }
    break;
  case 5:
    if (param_2 == 0) {
      if (1 < DAT_0057f558 - 1U) {
        return 0xffffffff;
      }
      if (0x18 < uVar44) {
        return 0xfffffffe;
      }
      DAT_00580040 = (short)param_3 * 100;
      return 0;
    }
    break;
  case 6:
    if (param_2 == 0) {
      if (1 < DAT_0057f558 - 1U) {
        return 0xffffffff;
      }
      if (0x3c < uVar44) {
        return 0xfffffffe;
      }
      DAT_00580048 = (short)param_3 * 100;
      return 0;
    }
  }
  return 0xfffffffe;
}

