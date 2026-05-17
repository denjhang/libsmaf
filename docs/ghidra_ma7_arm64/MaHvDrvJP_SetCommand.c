/* MaHvDrvJP_SetCommand @ 00223c00 6996B */


/* WARNING: Type propagation algorithm not settling */
/* YAMAHA::MaHvDrvJP_SetCommand(unsigned int, unsigned int, unsigned long) */

undefined8 YAMAHA::MaHvDrvJP_SetCommand(uint param_1,uint param_2,ulong param_3)

{
  byte *pbVar1;
  undefined1 *puVar2;
  char *pcVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  char cVar13;
  long *plVar14;
  bool bVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  char *pcVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined4 *puVar24;
  uint *puVar25;
  uint *puVar26;
  char cVar27;
  uint uVar28;
  char cVar29;
  uint uVar30;
  ulong uVar31;
  long lVar32;
  char cVar33;
  ushort uVar34;
  uint uVar35;
  char *pcVar36;
  char *pcVar37;
  char cVar38;
  int iVar39;
  char *pcVar40;
  char *pcVar41;
  int iVar42;
  long lVar43;
  uint uVar44;
  uint uVar45;
  long lVar46;
  long lVar47;
  char cVar48;
  uint uVar49;
  uint uVar50;
  ushort *puVar51;
  long lVar52;
  uint uVar53;
  long lVar54;
  
  bVar4 = DAT_0057f4b8;
  plVar14 = DAT_0057f360;
  uVar53 = (uint)param_3;
  switch(param_1) {
  case 0:
    if (param_2 != 0) {
      return 0xfffffffe;
    }
    if (DAT_0057e810 != 1) {
      return 0xffffffff;
    }
    if (DAT_0057f360 == (long *)0x0) {
      return 0xffffffff;
    }
    if (param_3 == 0) {
      return 0xfffffffe;
    }
    bVar4 = *(byte *)param_3;
    if (bVar4 < 0x80) {
      DAT_0057f258 = 1;
      DAT_0057e838 = (ushort)bVar4 * 100 + -0x4b0;
    }
    else {
      if ((bVar4 & 0x7f) == 0) {
        DAT_0057e838 = -0x8000;
      }
      else {
        DAT_0057e838 = ((bVar4 & 0x7f) - 0x3c) * 100;
      }
      DAT_0057f258 = 0;
    }
    if (0x7f < *(byte *)(param_3 + 1)) {
      return 0xfffffffd;
    }
    DAT_0057e83a = (&DAT_004a9170)[*(byte *)(param_3 + 1)];
    bVar4 = *(byte *)(param_3 + 2);
    uVar53 = (uint)bVar4;
    if (bVar4 < 0x80) {
      iVar39 = 0;
      iVar42 = 1;
    }
    else {
      bVar5 = *(byte *)(param_3 + 3);
      uVar53 = (uint)bVar5;
      iVar39 = (bVar4 - 0x80) * 0x80;
      if (bVar5 < 0x80) {
        iVar42 = 2;
      }
      else {
        bVar4 = *(byte *)(param_3 + 4);
        uVar53 = (uint)bVar4;
        iVar39 = ((bVar5 - 0x80) + iVar39) * 0x80;
        if (bVar4 < 0x80) {
          iVar42 = 3;
        }
        else {
          uVar53 = (uint)*(byte *)(param_3 + 5);
          iVar42 = 4;
          iVar39 = ((bVar4 - 0x80) + iVar39) * 0x80;
          if (0x7f < *(byte *)(param_3 + 5)) {
            return 0xfffffffd;
          }
        }
      }
    }
    DAT_0057e830 = uVar53 + iVar39;
    uVar53 = iVar42 + 2;
    bVar15 = DAT_0057e830 != 0;
    bVar4 = *(byte *)(param_3 + uVar53);
    uVar16 = (uint)bVar4;
    if (bVar4 < 0x80) {
      iVar39 = 0;
      iVar42 = 1;
    }
    else {
      lVar32 = param_3 + uVar53;
      iVar39 = (bVar4 - 0x80) * 0x80;
      bVar4 = *(byte *)(lVar32 + 1);
      uVar16 = (uint)bVar4;
      if (bVar4 < 0x80) {
        iVar42 = 2;
      }
      else {
        bVar5 = *(byte *)(lVar32 + 2);
        uVar16 = (uint)bVar5;
        iVar39 = ((bVar4 - 0x80) + iVar39) * 0x80;
        if (bVar5 < 0x80) {
          iVar42 = 3;
        }
        else {
          uVar16 = (uint)*(byte *)(lVar32 + 3);
          iVar42 = 4;
          iVar39 = ((bVar5 - 0x80) + iVar39) * 0x80;
          if (0x7f < *(byte *)(lVar32 + 3)) {
            DAT_0057f259 = bVar15;
            return 0xfffffffd;
          }
        }
      }
    }
    uVar16 = uVar16 + iVar39;
    uVar53 = iVar42 + uVar53;
    if (uVar16 < 4) {
      uVar35 = uVar16;
      if (uVar16 == 0) {
        DAT_0057f259 = bVar15;
        return 0xfffffffd;
      }
    }
    else {
      uVar35 = 4;
    }
    bVar4 = *(byte *)(param_3 + uVar53);
    uVar49 = (uint)bVar4;
    iVar39 = 0;
    uVar28 = 1;
    if (0x7f < bVar4) {
      do {
        iVar39 = (iVar39 + uVar49 + -0x80) * 0x80;
        if (uVar35 <= uVar28) {
          DAT_0057f259 = bVar15;
          return 0xfffffffd;
        }
        if (3 < uVar28) {
          DAT_0057f259 = bVar15;
          return 0xfffffffd;
        }
        uVar49 = (uint)*(byte *)(param_3 + uVar53 + (ulong)uVar28);
        uVar28 = uVar28 + 1;
      } while (0x7f < uVar49);
    }
    DAT_0057e834 = iVar39 + uVar49;
    uVar28 = uVar28 + uVar53;
    if (DAT_0057e830 < DAT_0057e834) {
      if (bVar15) {
        DAT_0057f259 = bVar15;
        return 0xfffffffd;
      }
    }
    else {
      DAT_0057f25c = DAT_0057e830 - DAT_0057e834;
    }
    bVar4 = *(byte *)(param_3 + uVar28);
    uVar35 = uVar28 + 1;
    uVar49 = bVar4 - 1;
    if (0x7e < uVar49) {
      DAT_0057f259 = bVar15;
      return 0xfffffffd;
    }
    puVar2 = &DAT_0057f26e + uVar49;
    puVar18 = &DAT_0057f26e;
    DAT_0057f26d = *(undefined1 *)(param_3 + uVar35);
    uVar31 = (ulong)uVar49 & 7;
    uVar30 = uVar28 + 2;
    DAT_0057f259 = bVar15;
    DAT_0057f26c = bVar4;
    if (puVar2 != &DAT_0057f26e) {
      puVar19 = puVar18;
      if ((uVar49 & 7) != 0) {
        if (uVar31 != 1) {
          if (uVar31 != 2) {
            if (uVar31 != 3) {
              if (uVar31 != 4) {
                if (uVar31 != 5) {
                  if (uVar31 != 6) {
                    DAT_0057f26e = *(undefined1 *)(param_3 + uVar30);
                    uVar30 = uVar28 + 3;
                    puVar19 = &DAT_0057f26f;
                  }
                  uVar31 = (ulong)uVar30;
                  uVar30 = uVar30 + 1;
                  puVar18 = puVar19 + 1;
                  *puVar19 = *(undefined1 *)(param_3 + uVar31);
                }
                uVar31 = (ulong)uVar30;
                uVar30 = uVar30 + 1;
                puVar19 = puVar18 + 1;
                *puVar18 = *(undefined1 *)(param_3 + uVar31);
              }
              uVar31 = (ulong)uVar30;
              uVar30 = uVar30 + 1;
              puVar18 = puVar19 + 1;
              *puVar19 = *(undefined1 *)(param_3 + uVar31);
            }
            uVar31 = (ulong)uVar30;
            uVar30 = uVar30 + 1;
            puVar19 = puVar18 + 1;
            *puVar18 = *(undefined1 *)(param_3 + uVar31);
          }
          uVar31 = (ulong)uVar30;
          uVar30 = uVar30 + 1;
          puVar18 = puVar19 + 1;
          *puVar19 = *(undefined1 *)(param_3 + uVar31);
        }
        uVar31 = (ulong)uVar30;
        uVar30 = uVar30 + 1;
        *puVar18 = *(undefined1 *)(param_3 + uVar31);
        puVar19 = puVar18 + 1;
        if (puVar18 + 1 == puVar2) goto LAB_002243d4;
      }
      do {
        puVar18 = puVar19 + 8;
        uVar28 = uVar30 + 2;
        uVar49 = uVar30 + 3;
        *puVar19 = *(undefined1 *)(param_3 + uVar30);
        uVar22 = uVar30 + 4;
        uVar23 = uVar30 + 5;
        uVar21 = uVar30 + 6;
        uVar50 = uVar30 + 7;
        puVar19[1] = *(undefined1 *)(param_3 + (uVar30 + 1));
        uVar30 = uVar30 + 8;
        puVar19[2] = *(undefined1 *)(param_3 + uVar28);
        puVar19[3] = *(undefined1 *)(param_3 + uVar49);
        puVar19[4] = *(undefined1 *)(param_3 + uVar22);
        puVar19[5] = *(undefined1 *)(param_3 + uVar23);
        puVar19[6] = *(undefined1 *)(param_3 + uVar21);
        puVar19[7] = *(undefined1 *)(param_3 + uVar50);
        puVar19 = puVar18;
      } while (puVar18 != puVar2);
    }
LAB_002243d4:
    lVar32 = 0;
    uVar28 = 0;
    cVar33 = '\0';
    DAT_0057f260 = '\0';
    uVar49 = (uint)bVar4;
    do {
      pcVar20 = (char *)(param_3 + uVar35);
      uVar34 = *(ushort *)((long)plVar14 + 0x16);
      lVar52 = *plVar14;
      lVar54 = lVar52 + 0x18;
      if (uVar34 == 0) {
        return 0xfffffffd;
      }
      cVar13 = *pcVar20;
      if (*(char *)(lVar52 + 0x18) == cVar13) {
        lVar43 = 4;
        lVar46 = 3;
        lVar47 = 2;
        uVar31 = 1;
      }
      else {
        uVar30 = (uint)uVar34 + (uint)uVar34 * 4;
        uVar31 = 5;
        uVar22 = (uVar30 - 5) * 0xcccd & 7;
        if (uVar22 == 0) {
LAB_002244ec:
          if ((uint)uVar31 == uVar30) {
            return 0xfffffffd;
          }
          while( true ) {
            uVar22 = (uint)uVar31;
            uVar23 = uVar22;
            if ((((((*(char *)(lVar54 + uVar31) == cVar13) ||
                   (uVar23 = uVar22 + 5, *(char *)(lVar54 + (ulong)(uVar22 + 5)) == cVar13)) ||
                  (uVar23 = uVar22 + 10, *(char *)(lVar54 + (ulong)uVar23) == cVar13)) ||
                 ((uVar23 = uVar22 + 0xf, *(char *)(lVar54 + (ulong)uVar23) == cVar13 ||
                  (uVar23 = uVar22 + 0x14, *(char *)(lVar54 + (ulong)uVar23) == cVar13)))) ||
                (uVar23 = uVar22 + 0x19, *(char *)(lVar54 + (ulong)uVar23) == cVar13)) ||
               ((uVar23 = uVar22 + 0x1e, *(char *)(lVar54 + (ulong)uVar23) == cVar13 ||
                (uVar23 = uVar22 + 0x23, *(char *)(lVar54 + (ulong)uVar23) == cVar13)))) break;
            uVar31 = (ulong)(uVar22 + 0x28);
            if (uVar22 + 0x28 == uVar30) {
              return 0xfffffffd;
            }
          }
        }
        else {
          uVar23 = 5;
          if (*(char *)(lVar52 + 0x1d) != cVar13) {
            uVar31 = 10;
            if (uVar22 != 1) {
              if (uVar22 != 2) {
                if (uVar22 != 3) {
                  if (uVar22 != 4) {
                    if (uVar22 != 5) {
                      if (uVar22 != 6) {
                        uVar23 = 10;
                        if (*(char *)(lVar52 + 0x22) == cVar13) goto LAB_00224588;
                        uVar31 = 0xf;
                      }
                      uVar23 = (uint)uVar31;
                      if (*(char *)(lVar54 + uVar31) == cVar13) goto LAB_00224588;
                      uVar31 = (ulong)((uint)uVar31 + 5);
                    }
                    uVar23 = (uint)uVar31;
                    if (*(char *)(lVar54 + uVar31) == cVar13) goto LAB_00224588;
                    uVar31 = (ulong)((uint)uVar31 + 5);
                  }
                  uVar23 = (uint)uVar31;
                  if (*(char *)(lVar54 + uVar31) == cVar13) goto LAB_00224588;
                  uVar31 = (ulong)((uint)uVar31 + 5);
                }
                uVar23 = (uint)uVar31;
                if (*(char *)(lVar54 + uVar31) == cVar13) goto LAB_00224588;
                uVar31 = (ulong)((uint)uVar31 + 5);
              }
              uVar23 = (uint)uVar31;
              if (*(char *)(lVar54 + uVar31) == cVar13) goto LAB_00224588;
              uVar31 = (ulong)((uint)uVar31 + 5);
            }
            goto LAB_002244ec;
          }
        }
LAB_00224588:
        uVar31 = (ulong)(uVar23 + 1);
        lVar47 = uVar31 + 1;
        lVar46 = uVar31 + 2;
        lVar43 = uVar31 + 3;
      }
      uVar30 = (*(byte *)(lVar54 + lVar43) & 0x7f) +
               ((*(byte *)(lVar54 + lVar46) & 0x7f) +
               ((*(byte *)(lVar54 + uVar31) & 0x7f) * 0x80 + (*(byte *)(lVar54 + lVar47) & 0x7f)) *
               0x80) * 0x80;
      if (uVar30 == 0) {
        return 0xfffffffd;
      }
      if (uVar49 == 0) {
        return 0xfffffffd;
      }
      uVar22 = *(uint *)((long)plVar14 + 0x1c);
      if (uVar22 <= uVar30) {
        return 0xfffffffd;
      }
      uVar31 = (ulong)uVar30;
      lVar54 = lVar52 + uVar31;
      uVar21 = (~uVar30 + uVar22) / 0xe & 7;
      uVar23 = uVar30;
      if (*(char *)(lVar52 + uVar31) != cVar13) {
        uVar50 = uVar30 + 0xe;
        lVar47 = uVar31 + 0xe;
        if (uVar22 <= uVar50) {
          return 0xfffffffd;
        }
        if (uVar21 != 0) {
          if (uVar21 != 1) {
            if (uVar21 != 2) {
              if (uVar21 != 3) {
                if (uVar21 != 4) {
                  if (uVar21 != 5) {
                    if (uVar21 != 6) {
                      lVar54 = lVar52 + lVar47;
                      uVar23 = uVar50;
                      if (*(char *)(lVar52 + lVar47) == cVar13) goto LAB_00224608;
                      uVar50 = uVar30 + 0x1c;
                      lVar47 = uVar31 + 0x1c;
                    }
                    lVar54 = lVar52 + lVar47;
                    uVar23 = uVar50;
                    if (*(char *)(lVar52 + lVar47) == cVar13) goto LAB_00224608;
                    uVar50 = uVar50 + 0xe;
                    lVar47 = lVar47 + 0xe;
                  }
                  lVar54 = lVar52 + lVar47;
                  uVar23 = uVar50;
                  if (*(char *)(lVar52 + lVar47) == cVar13) goto LAB_00224608;
                  uVar50 = uVar50 + 0xe;
                  lVar47 = lVar47 + 0xe;
                }
                lVar54 = lVar52 + lVar47;
                uVar23 = uVar50;
                if (*(char *)(lVar52 + lVar47) == cVar13) goto LAB_00224608;
                uVar50 = uVar50 + 0xe;
                lVar47 = lVar47 + 0xe;
              }
              lVar54 = lVar52 + lVar47;
              uVar23 = uVar50;
              if (*(char *)(lVar52 + lVar47) == cVar13) goto LAB_00224608;
              uVar50 = uVar50 + 0xe;
              lVar47 = lVar47 + 0xe;
            }
            lVar54 = lVar52 + lVar47;
            uVar23 = uVar50;
            if (*(char *)(lVar52 + lVar47) == cVar13) goto LAB_00224608;
            uVar50 = uVar50 + 0xe;
            lVar47 = lVar47 + 0xe;
          }
          lVar54 = lVar52 + lVar47;
          uVar23 = uVar50;
          if (*(char *)(lVar52 + lVar47) == cVar13) goto LAB_00224608;
          uVar50 = uVar50 + 0xe;
          lVar47 = lVar47 + 0xe;
          if (uVar22 <= uVar50) {
            return 0xfffffffd;
          }
        }
        cVar38 = *(char *)(lVar52 + lVar47);
        while (lVar54 = lVar52 + lVar47, uVar23 = uVar50, cVar38 != cVar13) {
          uVar23 = uVar50 + 0xe;
          lVar54 = lVar52 + lVar47 + 0xe;
          if (*(char *)(lVar52 + lVar47 + 0xe) == cVar13) break;
          uVar23 = uVar50 + 0x1c;
          lVar54 = lVar52 + lVar47 + 0x1c;
          if (*(char *)(lVar52 + lVar47 + 0x1c) == cVar13) break;
          uVar23 = uVar50 + 0x2a;
          lVar54 = lVar52 + lVar47 + 0x2a;
          if (*(char *)(lVar52 + lVar47 + 0x2a) == cVar13) break;
          uVar23 = uVar50 + 0x38;
          lVar54 = lVar52 + lVar47 + 0x38;
          if (*(char *)(lVar52 + lVar47 + 0x38) == cVar13) break;
          uVar23 = uVar50 + 0x46;
          lVar54 = lVar52 + lVar47 + 0x46;
          if (*(char *)(lVar52 + lVar47 + 0x46) == cVar13) break;
          uVar23 = uVar50 + 0x54;
          lVar54 = lVar52 + lVar47 + 0x54;
          if (*(char *)(lVar52 + lVar47 + 0x54) == cVar13) break;
          uVar23 = uVar50 + 0x62;
          lVar54 = lVar52 + lVar47 + 0x62;
          if (*(char *)(lVar52 + lVar47 + 0x62) == cVar13) break;
          uVar50 = uVar50 + 0x70;
          lVar47 = lVar47 + 0x70;
          if (uVar22 <= uVar50) {
            return 0xfffffffd;
          }
          cVar38 = *(char *)(lVar52 + lVar47);
        }
      }
LAB_00224608:
      if (uVar49 == 1) {
        if (cVar13 != '\0') goto LAB_00224858;
        uVar30 = 0;
LAB_002248b8:
        if (*(uint *)(plVar14 + 2) <= uVar23) {
          return 0xfffffffd;
        }
      }
      else {
        if (uVar23 < uVar22) {
          pcVar3 = (char *)(lVar52 + (int)uVar23);
          uVar30 = (~uVar23 + uVar22) / 0xe & 7;
          if (*(char *)(lVar52 + (int)uVar23) != cVar13) goto LAB_00224b8c;
          cVar38 = pcVar3[1];
          pcVar37 = pcVar3;
          uVar21 = uVar23;
          if (pcVar20[1] != cVar38) {
            uVar50 = uVar23 + 0xe;
            pcVar36 = pcVar3 + 0xe;
            if (uVar50 < uVar22) {
              if (uVar30 == 0) goto LAB_00224a78;
              if (uVar30 != 1) {
                if (uVar30 != 2) {
                  if (uVar30 != 3) {
                    if (uVar30 != 4) {
                      if (uVar30 != 5) {
                        if (uVar30 != 6) {
                          if (*pcVar36 != cVar13) goto LAB_00224b8c;
                          cVar38 = pcVar3[0xf];
                          pcVar37 = pcVar36;
                          uVar21 = uVar50;
                          if (pcVar20[1] == cVar38) goto LAB_0022483c;
                          uVar50 = uVar23 + 0x1c;
                          pcVar36 = pcVar3 + 0x1c;
                        }
                        if (*pcVar36 != cVar13) goto LAB_00224b8c;
                        cVar38 = pcVar36[1];
                        pcVar37 = pcVar36;
                        uVar21 = uVar50;
                        if (pcVar20[1] == cVar38) goto LAB_0022483c;
                        uVar50 = uVar50 + 0xe;
                        pcVar36 = pcVar36 + 0xe;
                      }
                      if (*pcVar36 != cVar13) goto LAB_00224b8c;
                      cVar38 = pcVar36[1];
                      pcVar37 = pcVar36;
                      uVar21 = uVar50;
                      if (pcVar20[1] == cVar38) goto LAB_0022483c;
                      uVar50 = uVar50 + 0xe;
                      pcVar36 = pcVar36 + 0xe;
                    }
                    if (*pcVar36 != cVar13) goto LAB_00224b8c;
                    cVar38 = pcVar36[1];
                    pcVar37 = pcVar36;
                    uVar21 = uVar50;
                    if (pcVar20[1] == cVar38) goto LAB_0022483c;
                    uVar50 = uVar50 + 0xe;
                    pcVar36 = pcVar36 + 0xe;
                  }
                  if (*pcVar36 != cVar13) goto LAB_00224b8c;
                  cVar38 = pcVar36[1];
                  pcVar37 = pcVar36;
                  uVar21 = uVar50;
                  if (pcVar20[1] == cVar38) goto LAB_0022483c;
                  uVar50 = uVar50 + 0xe;
                  pcVar36 = pcVar36 + 0xe;
                }
                if (*pcVar36 != cVar13) goto LAB_00224b8c;
                cVar38 = pcVar36[1];
                pcVar37 = pcVar36;
                uVar21 = uVar50;
                if (pcVar20[1] == cVar38) goto LAB_0022483c;
                uVar50 = uVar50 + 0xe;
                pcVar36 = pcVar36 + 0xe;
              }
              if (*pcVar36 == cVar13) {
                cVar38 = pcVar36[1];
                pcVar37 = pcVar36;
                uVar21 = uVar50;
                if (pcVar20[1] == cVar38) goto LAB_0022483c;
                pcVar36 = pcVar36 + 0xe;
                for (uVar50 = uVar50 + 0xe; uVar50 < uVar22; uVar50 = uVar50 + 0x70) {
LAB_00224a78:
                  if (*pcVar36 != cVar13) break;
                  cVar38 = pcVar36[1];
                  cVar29 = pcVar20[1];
                  pcVar37 = pcVar36;
                  uVar21 = uVar50;
                  if (cVar29 == cVar38) goto LAB_0022483c;
                  pcVar37 = pcVar36 + 0xe;
                  uVar21 = uVar50 + 0xe;
                  if (*pcVar37 != cVar13) break;
                  cVar38 = pcVar36[0xf];
                  if (cVar29 == cVar38) goto LAB_0022483c;
                  pcVar37 = pcVar36 + 0x1c;
                  uVar21 = uVar50 + 0x1c;
                  if (*pcVar37 != cVar13) break;
                  cVar38 = pcVar36[0x1d];
                  if (cVar29 == cVar38) goto LAB_0022483c;
                  uVar21 = uVar50 + 0x2a;
                  pcVar37 = pcVar36 + 0x2a;
                  if (pcVar36[0x2a] != cVar13) break;
                  cVar38 = pcVar36[0x2b];
                  if (cVar29 == cVar38) goto LAB_0022483c;
                  uVar21 = uVar50 + 0x38;
                  pcVar37 = pcVar36 + 0x38;
                  if (pcVar36[0x38] != cVar13) break;
                  cVar38 = pcVar36[0x39];
                  if (cVar29 == cVar38) goto LAB_0022483c;
                  uVar21 = uVar50 + 0x46;
                  pcVar37 = pcVar36 + 0x46;
                  if (pcVar36[0x46] != cVar13) break;
                  cVar38 = pcVar36[0x47];
                  cVar29 = pcVar20[1];
                  if (cVar29 == cVar38) goto LAB_0022483c;
                  uVar21 = uVar50 + 0x54;
                  pcVar37 = pcVar36 + 0x54;
                  if (pcVar36[0x54] != cVar13) break;
                  cVar38 = pcVar36[0x55];
                  if (cVar29 == cVar38) goto LAB_0022483c;
                  uVar21 = uVar50 + 0x62;
                  pcVar37 = pcVar36 + 0x62;
                  if (pcVar36[0x62] != cVar13) break;
                  cVar38 = pcVar36[99];
                  if (cVar29 == cVar38) goto LAB_0022483c;
                  pcVar36 = pcVar36 + 0x70;
                }
              }
            }
            goto LAB_00224b8c;
          }
LAB_0022483c:
          if (uVar49 != 2) {
            if (uVar21 < uVar22) {
              pcVar3 = (char *)(lVar52 + (int)uVar21);
              uVar30 = (~uVar21 + uVar22) / 0xe & 3;
              if (*(char *)(lVar52 + (int)uVar21) != cVar13) goto LAB_00225508;
              if (pcVar3[1] != cVar38) {
LAB_00225378:
                uVar44 = uVar21 + 0xe;
                pcVar40 = pcVar3 + 0xe;
                if (uVar44 < uVar22) {
                  if (uVar30 == 0) goto LAB_002254fc;
                  if (uVar30 != 1) {
                    if (uVar30 != 2) {
                      if (*pcVar40 != cVar13) goto LAB_00225508;
                      if (pcVar3[0xf] == cVar38) {
                        cVar29 = pcVar3[0x10];
                        cVar48 = pcVar20[2];
                        pcVar36 = pcVar40;
                        uVar50 = uVar44;
                        if (cVar48 == cVar29) goto LAB_00225148;
                      }
                      uVar44 = uVar21 + 0x1c;
                      pcVar40 = pcVar3 + 0x1c;
                    }
                    if (*pcVar40 != cVar13) goto LAB_00225508;
                    if (pcVar40[1] == cVar38) {
                      cVar29 = pcVar40[2];
                      cVar48 = pcVar20[2];
                      pcVar36 = pcVar40;
                      uVar50 = uVar44;
                      if (cVar48 == cVar29) goto LAB_00225148;
                    }
                    uVar44 = uVar44 + 0xe;
                    pcVar40 = pcVar40 + 0xe;
                  }
                  if (*pcVar40 == cVar13) {
                    if (pcVar40[1] == cVar38) {
                      cVar29 = pcVar40[2];
                      cVar48 = pcVar20[2];
                      pcVar36 = pcVar40;
                      uVar50 = uVar44;
                      if (cVar48 == cVar29) goto LAB_00225148;
                    }
                    pcVar40 = pcVar40 + 0xe;
                    for (uVar44 = uVar44 + 0xe; uVar44 < uVar22; uVar44 = uVar44 + 0x38) {
LAB_002254fc:
                      if (*pcVar40 != cVar13) break;
                      if (pcVar40[1] == cVar38) {
                        cVar29 = pcVar40[2];
                        cVar48 = pcVar20[2];
                        pcVar36 = pcVar40;
                        uVar50 = uVar44;
                        if (cVar48 == cVar29) goto LAB_00225148;
                      }
                      pcVar36 = pcVar40 + 0xe;
                      uVar50 = uVar44 + 0xe;
                      if (*pcVar36 != cVar13) break;
                      if (pcVar40[0xf] == cVar38) {
                        cVar29 = pcVar40[0x10];
                        cVar48 = pcVar20[2];
                        if (cVar48 == cVar29) goto LAB_00225148;
                      }
                      uVar50 = uVar44 + 0x1c;
                      pcVar36 = pcVar40 + 0x1c;
                      if (pcVar40[0x1c] != cVar13) break;
                      if (pcVar40[0x1d] == cVar38) {
                        cVar29 = pcVar40[0x1e];
                        cVar48 = pcVar20[2];
                        if (cVar48 == cVar29) goto LAB_00225148;
                      }
                      uVar50 = uVar44 + 0x2a;
                      pcVar36 = pcVar40 + 0x2a;
                      if (pcVar40[0x2a] != cVar13) break;
                      if (pcVar40[0x2b] == cVar38) {
                        cVar29 = pcVar40[0x2c];
                        cVar48 = pcVar20[2];
                        if (cVar48 == cVar29) goto LAB_00225148;
                      }
                      pcVar40 = pcVar40 + 0x38;
                    }
                  }
                }
                goto LAB_00225508;
              }
              cVar29 = pcVar3[2];
              cVar48 = pcVar20[2];
              pcVar36 = pcVar3;
              uVar50 = uVar21;
              if (cVar48 != cVar29) goto LAB_00225378;
LAB_00225148:
              uVar30 = uVar50;
              if (uVar49 == 3) goto LAB_00225154;
              if (uVar22 <= uVar50) {
LAB_00225710:
                if (cVar13 == '\0') {
                  return 0xfffffffd;
                }
LAB_00225284:
                if (cVar38 == '\0') goto LAB_00224b90;
                if ((cVar48 != '\0') && (uVar30 = uVar50, pcVar36[3] == '\0')) {
LAB_00225154:
                  uVar21 = uVar30;
                  if ((int)uVar30 < 0) {
                    return 0xfffffffd;
                  }
                  goto LAB_00224848;
                }
                goto LAB_00225294;
              }
              pcVar3 = (char *)(lVar52 + (int)uVar50);
              uVar30 = (~uVar50 + uVar22) / 0xe & 3;
              if (*(char *)(lVar52 + (int)uVar50) != cVar13) goto LAB_00225710;
              if (((pcVar3[1] != cVar38) || (pcVar3[2] != cVar48)) ||
                 (cVar27 = pcVar20[3], pcVar40 = pcVar3, uVar44 = uVar50, cVar27 != pcVar3[3])) {
                uVar45 = uVar50 + 0xe;
                pcVar41 = pcVar3 + 0xe;
                if (uVar45 < uVar22) {
                  if (uVar30 == 0) goto LAB_00225704;
                  if (uVar30 != 1) {
                    if (uVar30 != 2) {
                      if (*pcVar41 != cVar13) goto LAB_00225710;
                      if (((pcVar3[0xf] == cVar38) && (pcVar3[0x10] == cVar48)) &&
                         (cVar27 = pcVar20[3], pcVar40 = pcVar41, uVar44 = uVar45,
                         cVar27 == pcVar3[0x11])) goto LAB_002251c4;
                      uVar45 = uVar50 + 0x1c;
                      pcVar41 = pcVar3 + 0x1c;
                    }
                    if (*pcVar41 != cVar13) goto LAB_00225710;
                    if (((pcVar41[1] == cVar38) && (pcVar41[2] == cVar48)) &&
                       (cVar27 = pcVar20[3], pcVar40 = pcVar41, uVar44 = uVar45,
                       cVar27 == pcVar41[3])) goto LAB_002251c4;
                    uVar45 = uVar45 + 0xe;
                    pcVar41 = pcVar41 + 0xe;
                  }
                  if (*pcVar41 == cVar13) {
                    if (((pcVar41[1] == cVar38) && (pcVar41[2] == cVar48)) &&
                       (cVar27 = pcVar20[3], pcVar40 = pcVar41, uVar44 = uVar45,
                       cVar27 == pcVar41[3])) goto LAB_002251c4;
                    pcVar41 = pcVar41 + 0xe;
                    for (uVar45 = uVar45 + 0xe; uVar45 < uVar22; uVar45 = uVar45 + 0x38) {
LAB_00225704:
                      if (*pcVar41 != cVar13) break;
                      if (((pcVar41[1] == cVar38) && (pcVar41[2] == cVar48)) &&
                         (cVar27 = pcVar20[3], pcVar40 = pcVar41, uVar44 = uVar45,
                         cVar27 == pcVar41[3])) goto LAB_002251c4;
                      pcVar40 = pcVar41 + 0xe;
                      uVar44 = uVar45 + 0xe;
                      if (*pcVar40 != cVar13) break;
                      if (((pcVar41[0xf] == cVar38) && (pcVar41[0x10] == cVar48)) &&
                         (cVar27 = pcVar20[3], cVar27 == pcVar41[0x11])) goto LAB_002251c4;
                      uVar44 = uVar45 + 0x1c;
                      pcVar40 = pcVar41 + 0x1c;
                      if (pcVar41[0x1c] != cVar13) break;
                      if (((pcVar41[0x1d] == cVar38) && (pcVar41[0x1e] == cVar48)) &&
                         (cVar27 = pcVar20[3], cVar27 == pcVar41[0x1f])) goto LAB_002251c4;
                      uVar44 = uVar45 + 0x2a;
                      pcVar40 = pcVar41 + 0x2a;
                      if (pcVar41[0x2a] != cVar13) break;
                      if (((pcVar41[0x2b] == cVar38) && (pcVar41[0x2c] == cVar48)) &&
                         (cVar27 = pcVar20[3], cVar27 == pcVar41[0x2d])) goto LAB_002251c4;
                      pcVar41 = pcVar41 + 0x38;
                    }
                  }
                }
                goto LAB_00225710;
              }
LAB_002251c4:
              uVar30 = uVar44;
              if ((uVar49 == 4) ||
                 (uVar30 = FUN_002213f8(pcVar20,uVar49,uVar44,5), uVar30 != 0xffffffff))
              goto LAB_00225154;
              if (cVar13 == '\0') {
                return 0xfffffffd;
              }
              if (cVar38 != '\0') {
                if (((cVar29 != '\0') && (cVar27 != '\0')) && (uVar30 = uVar44, pcVar40[4] == '\0'))
                goto LAB_00225154;
                goto LAB_00225284;
              }
            }
            else {
LAB_00225508:
              if (cVar13 == '\0') {
                return 0xfffffffd;
              }
LAB_00225294:
              if ((cVar38 != '\0') && (pcVar37[2] == '\0')) goto LAB_00224848;
            }
            goto LAB_00224b90;
          }
LAB_00224848:
          uVar23 = uVar21;
          bVar5 = *(byte *)(lVar52 + (int)uVar23);
          uVar30 = (uint)bVar5;
          if (bVar5 != 0) {
            lVar54 = lVar52 + (int)uVar23;
            goto LAB_00224858;
          }
        }
        else {
LAB_00224b8c:
          if (cVar13 == '\0') {
            return 0xfffffffd;
          }
LAB_00224b90:
          if (*(char *)(lVar54 + 1) != '\0') {
            return 0xfffffffd;
          }
LAB_00224858:
          if (*(char *)(lVar54 + 1) == '\0') {
            uVar30 = 1;
            uVar22 = 1;
          }
          else if (*(char *)(lVar54 + 2) == '\0') {
            uVar30 = 2;
            uVar22 = 2;
          }
          else if (*(char *)(lVar54 + 3) == '\0') {
            uVar30 = 3;
            uVar22 = 3;
          }
          else if (*(char *)(lVar54 + 4) == '\0') {
            uVar30 = 4;
            uVar22 = 4;
          }
          else if (*(char *)(lVar54 + 5) == '\0') {
            uVar30 = 5;
            uVar22 = 5;
          }
          else if (*(char *)(lVar54 + 6) == '\0') {
            uVar30 = 6;
            uVar22 = 6;
          }
          else if (*(char *)(lVar54 + 7) == '\0') {
            uVar30 = 7;
            uVar22 = 7;
          }
          else if (*(char *)(lVar54 + 8) == '\0') {
            uVar30 = 8;
            uVar22 = 8;
          }
          else if (*(char *)(lVar54 + 9) == '\0') {
            uVar30 = 9;
            uVar22 = 9;
          }
          else {
            uVar30 = 10;
            uVar22 = 10;
          }
          if (uVar49 < uVar22) {
            return 0xfffffffd;
          }
        }
        if (0 < (int)uVar23) goto LAB_002248b8;
        if (uVar23 != 0) {
          return 0xfffffffd;
        }
      }
      lVar52 = lVar52 + (int)uVar23;
      cVar33 = cVar33 + '\x01';
      uVar35 = uVar35 + uVar30;
      uVar28 = uVar28 + uVar30;
      (&DAT_0057f264)[lVar32] =
           (*(byte *)(lVar52 + 0xd) & 0x7f) +
           ((*(byte *)(lVar52 + 0xc) & 0x7f) +
           ((*(byte *)(lVar52 + 10) & 0x7f) * 0x80 + (*(byte *)(lVar52 + 0xb) & 0x7f)) * 0x80) *
           0x80;
      DAT_0057f260 = cVar33;
      if (lVar32 != 0) {
        uVar35 = (uVar35 + bVar4) - uVar28;
LAB_00224be4:
        if (!bVar15) {
          DAT_0057f25c = 8;
        }
        bVar4 = *(byte *)(param_3 + uVar35);
        uVar28 = uVar35 + 1;
        if (0x7f < bVar4) {
          return 0xfffffffd;
        }
        DAT_0057ec44 = bVar4 + 1;
        DAT_0057ec48 = 0;
        DAT_0057ec4c = 0x2000;
        uVar49 = uVar28;
        if (1 < (byte)(bVar4 + 1)) {
          if (0x7f < *(byte *)(param_3 + uVar28)) {
            DAT_0057ec48 = 0;
            DAT_0057ec4c = 0x2000;
            return 0xfffffffd;
          }
          iVar39 = DAT_0057f25c * 0x102;
          DAT_0057ec50 = (uint)*(byte *)(param_3 + uVar28) * iVar39 >> 0xf;
          bVar4 = *(byte *)(param_3 + (uVar35 + 2) + 1);
          uVar34 = (ushort)bVar4;
          bVar5 = *(byte *)(param_3 + (uVar35 + 2));
          if (0x7f < bVar4) {
            DAT_0057ec48 = 0;
            DAT_0057ec4c = 0x2000;
            return 0xfffffffd;
          }
          if (0x7f < bVar5) {
            DAT_0057ec48 = 0;
            DAT_0057ec4c = 0x2000;
            return 0xfffffffd;
          }
          uVar49 = (uVar35 - 2) + (uint)DAT_0057ec44 * 3;
          puVar51 = &DAT_0057ec54;
          if ((uVar49 - uVar28 & 1) == 0) {
            uVar28 = uVar35 + 4;
            DAT_0057ec54 = (ushort)bVar5 | (ushort)bVar4 << 7;
            if (0x7f < *(byte *)(param_3 + uVar28)) {
              DAT_0057ec48 = 0;
              DAT_0057ec4c = 0x2000;
              return 0xfffffffd;
            }
            pbVar1 = (byte *)(param_3 + (uVar35 + 5));
            DAT_0057ec58 = (uint)*(byte *)(param_3 + uVar28) * iVar39 >> 0xf;
            puVar51 = &DAT_0057ec5c;
            bVar5 = *pbVar1;
            uVar34 = (ushort)pbVar1[1];
            if (0x7f < uVar34) {
              DAT_0057ec48 = 0;
              DAT_0057ec4c = 0x2000;
              return 0xfffffffd;
            }
            if (0x7f < bVar5) {
              DAT_0057ec48 = 0;
              DAT_0057ec4c = 0x2000;
              return 0xfffffffd;
            }
          }
          *puVar51 = (ushort)bVar5 | uVar34 << 7;
          uVar35 = uVar28 + 3;
          while (uVar35 != uVar49) {
            if (0x7f < *(byte *)(param_3 + uVar35)) {
              return 0xfffffffd;
            }
            *(uint *)(puVar51 + 2) = (uint)*(byte *)(param_3 + uVar35) * iVar39 >> 0xf;
            bVar4 = *(byte *)(param_3 + (uVar28 + 4) + 1);
            bVar5 = *(byte *)(param_3 + (uVar28 + 4));
            if (0x7f < bVar4) {
              return 0xfffffffd;
            }
            if (0x7f < bVar5) {
              return 0xfffffffd;
            }
            puVar51[4] = (ushort)bVar5 | (ushort)bVar4 << 7;
            bVar4 = *(byte *)(param_3 + (uVar28 + 6));
            if (0x7f < bVar4) {
              return 0xfffffffd;
            }
            *(uint *)(puVar51 + 6) = (uint)bVar4 * iVar39 >> 0xf;
            bVar4 = *(byte *)(param_3 + (uVar28 + 7) + 1);
            bVar5 = *(byte *)(param_3 + (uVar28 + 7));
            if (0x7f < bVar4) {
              return 0xfffffffd;
            }
            if (0x7f < bVar5) {
              return 0xfffffffd;
            }
            puVar51[8] = (ushort)bVar5 | (ushort)bVar4 << 7;
            uVar35 = uVar28 + 9;
            puVar51 = puVar51 + 8;
            uVar28 = uVar28 + 6;
          }
        }
        bVar4 = *(byte *)(param_3 + uVar49);
        uVar35 = uVar49 + 1;
        if (0x7f < bVar4) {
          return 0xfffffffd;
        }
        DAT_0057e83b = bVar4 + 1;
        DAT_0057e83c = 0;
        DAT_0057e840 = 0;
        uVar28 = (uint)DAT_0057e83b;
        if (1 < (byte)(bVar4 + 1)) {
          uVar31 = (ulong)uVar35;
          if (0x7f < *(byte *)(param_3 + uVar31)) {
            DAT_0057e83c = 0;
            DAT_0057e840 = 0;
            return 0xfffffffd;
          }
          uVar35 = uVar49 + 3;
          iVar39 = DAT_0057f25c * 0x102;
          DAT_0057e844 = (uint)*(byte *)(param_3 + uVar31) * iVar39 >> 0xf;
          bVar4 = *(byte *)(param_3 + (uVar49 + 2));
          if (0x7f < bVar4) {
            DAT_0057e83c = 0;
            DAT_0057e840 = 0;
            return 0xfffffffd;
          }
          puVar24 = (undefined4 *)&DAT_0057e848;
          if (((int)(&DAT_0057e810 + ((ulong)(uVar28 - 2) + 7) * 2) - 0x57e848U >> 3 & 1) == 0)
          goto LAB_00224e60;
          DAT_0057e848 = *(undefined2 *)(&DAT_004a91f0 + (ulong)bVar4 * 2);
          uVar31 = (ulong)uVar35;
          if (0x7f < *(byte *)(param_3 + uVar31)) {
            DAT_0057e83c = 0;
            DAT_0057e840 = 0;
            return 0xfffffffd;
          }
          uVar35 = uVar49 + 5;
          DAT_0057e84c = (uint)*(byte *)(param_3 + uVar31) * iVar39 >> 0xf;
          bVar4 = *(byte *)(param_3 + (uVar49 + 4));
          puVar24 = (undefined4 *)&DAT_0057e850;
          while( true ) {
            if (0x7f < bVar4) {
              return 0xfffffffd;
            }
LAB_00224e60:
            *(undefined2 *)puVar24 = *(undefined2 *)(&DAT_004a91f0 + (ulong)bVar4 * 2);
            if (puVar24 == &DAT_0057e810 + ((ulong)(uVar28 - 2) + 7) * 2) break;
            if (0x7f < *(byte *)(param_3 + uVar35)) {
              return 0xfffffffd;
            }
            puVar24[1] = (uint)*(byte *)(param_3 + uVar35) * iVar39 >> 0xf;
            bVar4 = *(byte *)(param_3 + (uVar35 + 1));
            if (0x7f < bVar4) {
              return 0xfffffffd;
            }
            uVar49 = uVar35 + 3;
            *(undefined2 *)(puVar24 + 2) = *(undefined2 *)(&DAT_004a91f0 + (ulong)bVar4 * 2);
            bVar4 = *(byte *)(param_3 + (uVar35 + 2));
            if (0x7f < bVar4) {
              return 0xfffffffd;
            }
            uVar35 = uVar35 + 4;
            puVar24[3] = (uint)bVar4 * iVar39 >> 0xf;
            bVar4 = *(byte *)(param_3 + uVar49);
            puVar24 = puVar24 + 4;
          }
        }
        bVar4 = *(byte *)(param_3 + uVar35);
        uVar28 = uVar35 + 1;
        if (0x7f < bVar4) {
          return 0xfffffffd;
        }
        DAT_0057f050 = bVar4;
        if (bVar4 != 0) {
          bVar5 = *(byte *)(param_3 + uVar28);
          uVar30 = (uint)bVar5;
          uVar49 = uVar35 + 2;
          if (0x7f < bVar5) {
            return 0xfffffffd;
          }
          uVar28 = uVar28 + bVar4;
          uVar23 = uVar28 - uVar49 & 3;
          iVar39 = DAT_0057f25c * 0x102;
          puVar26 = &DAT_0057f054;
          uVar22 = uVar49;
          if (uVar23 != 0) {
            uVar22 = uVar35 + 3;
            DAT_0057f054 = (uint)bVar5 * iVar39 >> 0xf;
            puVar25 = &DAT_0057f058;
            bVar5 = *(byte *)(param_3 + uVar49);
            uVar30 = (uint)bVar5;
            if (0x7f < bVar5) {
              return 0xfffffffd;
            }
            puVar26 = puVar25;
            if (uVar23 != 1) {
              uVar49 = uVar22;
              if (uVar23 != 2) {
                uVar49 = uVar35 + 4;
                DAT_0057f058 = (uint)bVar5 * iVar39 >> 0xf;
                puVar25 = &DAT_0057f05c;
                uVar30 = (uint)*(byte *)(param_3 + uVar22);
                if (0x7f < *(byte *)(param_3 + uVar22)) {
                  return 0xfffffffd;
                }
              }
              uVar22 = uVar49 + 1;
              puVar26 = puVar25 + 1;
              *puVar25 = uVar30 * iVar39 >> 0xf;
              uVar30 = (uint)*(byte *)(param_3 + uVar49);
              if (0x7f < *(byte *)(param_3 + uVar49)) {
                return 0xfffffffd;
              }
            }
          }
          for (; *puVar26 = uVar30 * iVar39 >> 0xf, uVar22 != uVar28; uVar22 = uVar22 + 4) {
            if (0x7f < *(byte *)(param_3 + uVar22)) {
              return 0xfffffffd;
            }
            puVar26[1] = (uint)*(byte *)(param_3 + uVar22) * iVar39 >> 0xf;
            bVar4 = *(byte *)(param_3 + (uVar22 + 1));
            if (0x7f < bVar4) {
              return 0xfffffffd;
            }
            puVar26[2] = (uint)bVar4 * iVar39 >> 0xf;
            bVar4 = *(byte *)(param_3 + (uVar22 + 2));
            if (0x7f < bVar4) {
              return 0xfffffffd;
            }
            puVar26[3] = (uint)bVar4 * iVar39 >> 0xf;
            bVar4 = *(byte *)(param_3 + (uVar22 + 3));
            uVar30 = (uint)bVar4;
            if (0x7f < bVar4) {
              return 0xfffffffd;
            }
            puVar26 = puVar26 + 4;
          }
        }
        if (uVar28 != uVar53 + uVar16) {
          return 0xfffffffd;
        }
        lVar32 = *plVar14;
        DAT_0057f378 = lVar32 + (ulong)(DAT_0057f264 + 10);
        DAT_0057f368 = (*(byte *)(lVar32 + (ulong)DAT_0057f264 + 1) & 0x7f) +
                       (*(byte *)(lVar32 + (ulong)DAT_0057f264) & 0x7f) * 0x80;
        DAT_0057f36a = (*(byte *)(lVar32 + (ulong)(DAT_0057f264 + 2) + 1) & 0x7f) +
                       (*(byte *)(lVar32 + (ulong)(DAT_0057f264 + 2)) & 0x7f) * 0x80;
        iVar39 = (*(byte *)(lVar32 + (ulong)(DAT_0057f264 + 4) + 1) & 0x7f) +
                 (*(byte *)(lVar32 + (ulong)(DAT_0057f264 + 4)) & 0x7f) * 0x80;
        DAT_0057f36c = (undefined2)iVar39;
        DAT_0057f36e = (*(byte *)(lVar32 + (ulong)(DAT_0057f264 + 6) + 1) & 0x7f) +
                       (*(byte *)(lVar32 + (ulong)(DAT_0057f264 + 6)) & 0x7f) * 0x80;
        DAT_0057f370 = (*(byte *)(lVar32 + (ulong)(DAT_0057f264 + 8) + 1) & 0x7f) +
                       (*(byte *)(lVar32 + (ulong)(DAT_0057f264 + 8)) & 0x7f) * 0x80;
        DAT_0057e824 = 0;
        if ((DAT_0057f368 == 0) && (DAT_0057e824 = iVar39, DAT_0057f2f2 == '\0')) {
          DAT_0057e824 = 0;
        }
        if (cVar33 == '\x01') {
          DAT_0057e810 = 2;
          DAT_0057e814 = 0;
          DAT_0057e81c = 0;
          DAT_0057e820 = 0;
          DAT_0057f2f0 = 0;
          DAT_0057f2f1 = 0;
          DAT_0057f2f2 = 0;
          DAT_0057f550 = 0;
          DAT_0057f552 = 0;
          DAT_0057f553 = 1;
          return 0;
        }
        DAT_0057e810 = 2;
        DAT_0057e814 = 0;
        DAT_0057e81c = 0;
        DAT_0057e820 = 0;
        DAT_0057f2f0 = 0;
        DAT_0057f2f1 = 0;
        DAT_0057f2f2 = 1;
        DAT_0057f550 = 0;
        DAT_0057f552 = 0;
        DAT_0057f553 = 1;
        return 0;
      }
      if (bVar4 <= uVar28) goto LAB_00224be4;
      uVar49 = bVar4 - uVar28;
      cVar33 = '\x01';
      lVar32 = 1;
    } while( true );
  case 1:
    if (param_2 == 0) {
      if (DAT_0057e810 != 2) {
        return 0xffffffff;
      }
      DAT_0057e810 = 1;
      DAT_0057e814 = 1;
      DAT_0057e830 = 0;
      DAT_0057e834 = 0;
      DAT_0057e838 = 0;
      DAT_0057e83a = 0;
      DAT_0057e83b = 0;
      DAT_0057ec44 = 0;
      DAT_0057f050 = 0;
      DAT_0057f258 = 1;
      DAT_0057f259 = 1;
      DAT_0057f25c = 0;
      DAT_0057f260 = 0;
      DAT_0057f26c = 0;
      return 0;
    }
    break;
  case 2:
    if (DAT_0057e810 != 1) {
      return 0xffffffff;
    }
    if (param_2 - 0x80 < 0x10) {
      if (2 < *(byte *)param_3) {
        return 0xfffffffd;
      }
      if ((*(byte *)param_3 == 2) && (DAT_0057f340 == 0)) {
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
      bVar5 = *(byte *)(param_3 + 0x1b);
      if ((bVar5 - 0xf & 0xf7) == 0) {
        return 0xfffffffd;
      }
      if (0x1e < bVar5) {
        return 0xfffffffd;
      }
      if (0x7f < *(byte *)(param_3 + 6)) {
        DAT_0057f3a4 = bVar5;
        return 0xfffffffd;
      }
      if (0x7f < *(byte *)(param_3 + 5)) {
        DAT_0057f3a4 = bVar5;
        return 0xfffffffd;
      }
      if (*(char *)(param_3 + 0x14) < '\0') {
        DAT_0057f3a4 = bVar5;
        return 0xfffffffd;
      }
      bVar6 = *(byte *)(param_3 + 0x1c);
      if ((bVar6 - 0xf & 0xf7) == 0) {
        DAT_0057f3a4 = bVar5;
        return 0xfffffffd;
      }
      if (0x1e < bVar6) {
        DAT_0057f3a4 = bVar5;
        return 0xfffffffd;
      }
      if (0x7f < *(byte *)(param_3 + 8)) {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        return 0xfffffffd;
      }
      if (0x7f < *(byte *)(param_3 + 7)) {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        return 0xfffffffd;
      }
      if (*(char *)(param_3 + 0x15) < '\0') {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        return 0xfffffffd;
      }
      bVar7 = *(byte *)(param_3 + 0x1d);
      if ((bVar7 - 0xf & 0xf7) == 0) {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        return 0xfffffffd;
      }
      if (0x1e < bVar7) {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        return 0xfffffffd;
      }
      if (0x7f < *(byte *)(param_3 + 10)) {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        DAT_0057f3a6 = bVar7;
        return 0xfffffffd;
      }
      if (0x7f < *(byte *)(param_3 + 9)) {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        DAT_0057f3a6 = bVar7;
        return 0xfffffffd;
      }
      if (*(char *)(param_3 + 0x16) < '\0') {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        DAT_0057f3a6 = bVar7;
        return 0xfffffffd;
      }
      bVar8 = *(byte *)(param_3 + 0x1e);
      if ((bVar8 - 0xf & 0xf7) == 0) {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        DAT_0057f3a6 = bVar7;
        return 0xfffffffd;
      }
      if (0x1e < bVar8) {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        DAT_0057f3a6 = bVar7;
        return 0xfffffffd;
      }
      if (0x7f < *(byte *)(param_3 + 0xc)) {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        DAT_0057f3a6 = bVar7;
        DAT_0057f3a7 = bVar8;
        return 0xfffffffd;
      }
      if (0x7f < *(byte *)(param_3 + 0xb)) {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        DAT_0057f3a6 = bVar7;
        DAT_0057f3a7 = bVar8;
        return 0xfffffffd;
      }
      if (*(char *)(param_3 + 0x17) < '\0') {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        DAT_0057f3a6 = bVar7;
        DAT_0057f3a7 = bVar8;
        return 0xfffffffd;
      }
      bVar9 = *(byte *)(param_3 + 0x1f);
      if ((bVar9 - 0xf & 0xf7) == 0) {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        DAT_0057f3a6 = bVar7;
        DAT_0057f3a7 = bVar8;
        return 0xfffffffd;
      }
      if (0x1e < bVar9) {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        DAT_0057f3a6 = bVar7;
        DAT_0057f3a7 = bVar8;
        return 0xfffffffd;
      }
      if (0x7f < *(byte *)(param_3 + 0xe)) {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        DAT_0057f3a6 = bVar7;
        DAT_0057f3a7 = bVar8;
        DAT_0057f3a8 = bVar9;
        return 0xfffffffd;
      }
      if (0x7f < *(byte *)(param_3 + 0xd)) {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        DAT_0057f3a6 = bVar7;
        DAT_0057f3a7 = bVar8;
        DAT_0057f3a8 = bVar9;
        return 0xfffffffd;
      }
      if (*(char *)(param_3 + 0x18) < '\0') {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        DAT_0057f3a6 = bVar7;
        DAT_0057f3a7 = bVar8;
        DAT_0057f3a8 = bVar9;
        return 0xfffffffd;
      }
      bVar10 = *(byte *)(param_3 + 0x20);
      if ((bVar10 - 0xf & 0xf7) == 0) {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        DAT_0057f3a6 = bVar7;
        DAT_0057f3a7 = bVar8;
        DAT_0057f3a8 = bVar9;
        return 0xfffffffd;
      }
      if (0x1e < bVar10) {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        DAT_0057f3a6 = bVar7;
        DAT_0057f3a7 = bVar8;
        DAT_0057f3a8 = bVar9;
        return 0xfffffffd;
      }
      if (0x7f < *(byte *)(param_3 + 0x10)) {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        DAT_0057f3a6 = bVar7;
        DAT_0057f3a7 = bVar8;
        DAT_0057f3a8 = bVar9;
        DAT_0057f3a9 = bVar10;
        return 0xfffffffd;
      }
      if (0x7f < *(byte *)(param_3 + 0xf)) {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        DAT_0057f3a6 = bVar7;
        DAT_0057f3a7 = bVar8;
        DAT_0057f3a8 = bVar9;
        DAT_0057f3a9 = bVar10;
        return 0xfffffffd;
      }
      if (*(char *)(param_3 + 0x19) < '\0') {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        DAT_0057f3a6 = bVar7;
        DAT_0057f3a7 = bVar8;
        DAT_0057f3a8 = bVar9;
        DAT_0057f3a9 = bVar10;
        return 0xfffffffd;
      }
      bVar11 = *(byte *)(param_3 + 0x21);
      if ((bVar11 - 0xf & 0xf7) == 0) {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        DAT_0057f3a6 = bVar7;
        DAT_0057f3a7 = bVar8;
        DAT_0057f3a8 = bVar9;
        DAT_0057f3a9 = bVar10;
        return 0xfffffffd;
      }
      if (0x1e < bVar11) {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        DAT_0057f3a6 = bVar7;
        DAT_0057f3a7 = bVar8;
        DAT_0057f3a8 = bVar9;
        DAT_0057f3a9 = bVar10;
        return 0xfffffffd;
      }
      if (0x7f < *(byte *)(param_3 + 0x12)) {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        DAT_0057f3a6 = bVar7;
        DAT_0057f3a7 = bVar8;
        DAT_0057f3a8 = bVar9;
        DAT_0057f3a9 = bVar10;
        DAT_0057f3aa = bVar11;
        return 0xfffffffd;
      }
      if (0x7f < *(byte *)(param_3 + 0x11)) {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        DAT_0057f3a6 = bVar7;
        DAT_0057f3a7 = bVar8;
        DAT_0057f3a8 = bVar9;
        DAT_0057f3a9 = bVar10;
        DAT_0057f3aa = bVar11;
        return 0xfffffffd;
      }
      if (*(char *)(param_3 + 0x1a) < '\0') {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        DAT_0057f3a6 = bVar7;
        DAT_0057f3a7 = bVar8;
        DAT_0057f3a8 = bVar9;
        DAT_0057f3a9 = bVar10;
        DAT_0057f3aa = bVar11;
        return 0xfffffffd;
      }
      bVar12 = *(byte *)(param_3 + 0x22);
      if ((bVar12 - 0xf & 0xf7) == 0) {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        DAT_0057f3a6 = bVar7;
        DAT_0057f3a7 = bVar8;
        DAT_0057f3a8 = bVar9;
        DAT_0057f3a9 = bVar10;
        DAT_0057f3aa = bVar11;
        return 0xfffffffd;
      }
      if (0x1e < bVar12) {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        DAT_0057f3a6 = bVar7;
        DAT_0057f3a7 = bVar8;
        DAT_0057f3a8 = bVar9;
        DAT_0057f3a9 = bVar10;
        DAT_0057f3aa = bVar11;
        return 0xfffffffd;
      }
      if (0x7f < *(byte *)(param_3 + 0x24)) {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        DAT_0057f3a6 = bVar7;
        DAT_0057f3a7 = bVar8;
        DAT_0057f3a8 = bVar9;
        DAT_0057f3a9 = bVar10;
        DAT_0057f3aa = bVar11;
        DAT_0057f3ab = bVar12;
        return 0xfffffffd;
      }
      if (0x7f < *(byte *)(param_3 + 0x23)) {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        DAT_0057f3a6 = bVar7;
        DAT_0057f3a7 = bVar8;
        DAT_0057f3a8 = bVar9;
        DAT_0057f3a9 = bVar10;
        DAT_0057f3aa = bVar11;
        DAT_0057f3ab = bVar12;
        return 0xfffffffd;
      }
      if (1 < *(byte *)(param_3 + 0x25)) {
        DAT_0057f3a4 = bVar5;
        DAT_0057f3a5 = bVar6;
        DAT_0057f3a6 = bVar7;
        DAT_0057f3a7 = bVar8;
        DAT_0057f3a8 = bVar9;
        DAT_0057f3a9 = bVar10;
        DAT_0057f3aa = bVar11;
        DAT_0057f3ab = bVar12;
        return 0xfffffffd;
      }
      DAT_0057f3a4 = bVar5;
      DAT_0057f3a5 = bVar6;
      DAT_0057f3a6 = bVar7;
      DAT_0057f3a7 = bVar8;
      DAT_0057f3a8 = bVar9;
      DAT_0057f3a9 = bVar10;
      DAT_0057f3aa = bVar11;
      DAT_0057f3ab = bVar12;
      (&DAT_0057f3b8)[param_2 - 0x70] = param_3;
      if (param_2 == bVar4) {
        FUN_00221964();
        return 0;
      }
      return 0;
    }
    break;
  case 3:
    if (param_2 == 0) {
      uVar17 = FUN_00221964(param_3 & 0xffffffff);
      return uVar17;
    }
    break;
  case 4:
    if (param_2 == 0) {
      if (1 < DAT_0057e810 - 1U) {
        return 0xffffffff;
      }
      if (uVar53 < 0x4000) {
        if ((int)uVar53 < 0) {
          uVar53 = 0;
        }
        if (0x3fff < (int)uVar53) {
          uVar53 = 0x3fff;
        }
        iVar39 = (uVar53 - 0x2000) * (int)DAT_0057f2f4;
        if (iVar39 < 0) {
          DAT_0057f2f8 = -(-iVar39 >> 0xd);
          if (DAT_0057f2f8 < -0x960) {
            DAT_0057f2f8 = -0x960;
          }
          if (0x960 < DAT_0057f2f8) {
            DAT_0057f2f8 = 0x960;
          }
        }
        else {
          DAT_0057f2f8 = iVar39 >> 0xd;
          if (0x960 < DAT_0057f2f8) {
            DAT_0057f2f8 = 0x960;
          }
        }
        return 0;
      }
    }
    break;
  case 5:
    if (param_2 == 0) {
      if (1 < DAT_0057e810 - 1U) {
        return 0xffffffff;
      }
      if (uVar53 < 0x19) {
        DAT_0057f2f4 = (short)param_3 * 100;
        return 0;
      }
      return 0xfffffffe;
    }
    break;
  case 6:
    if (param_2 == 0) {
      if (1 < DAT_0057e810 - 1U) {
        return 0xffffffff;
      }
      if (uVar53 < 0x3d) {
        DAT_0057f2fc = (short)param_3 * 100;
        return 0;
      }
      return 0xfffffffe;
    }
  }
  return 0xfffffffe;
}

