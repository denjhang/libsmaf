/* MaS2PCnvJP_Convert @ 001fd5b8 17740B */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* YAMAHA::MaS2PCnvJP_Convert(unsigned char*, unsigned int, void*) */

void YAMAHA::MaS2PCnvJP_Convert(uchar *param_1,uint param_2,void *param_3)

{
  short *psVar1;
  undefined1 *puVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  char cVar7;
  short sVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  ulong uVar26;
  long lVar27;
  uint uVar28;
  ulong uVar29;
  int *piVar30;
  byte *pbVar31;
  uint uVar32;
  short *psVar33;
  short *psVar34;
  uint uVar35;
  uint uVar36;
  uchar *puVar37;
  uint uVar38;
  long lVar39;
  undefined1 *puVar40;
  undefined1 *puVar41;
  byte bVar42;
  byte *pbVar43;
  uint uVar44;
  int *piVar45;
  byte bVar46;
  uint uVar47;
  uint uVar48;
  long lVar49;
  byte bVar50;
  byte *pbVar51;
  long lVar52;
  long lVar53;
  uchar uVar54;
  undefined **ppuVar55;
  long lVar56;
  long lVar57;
  int iVar58;
  uint uVar59;
  byte bVar60;
  uint uVar61;
  uint local_20;
  byte local_10 [2];
  uchar local_e;
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (DAT_0057c580 != 1) {
    uVar21 = 0xffffffff;
    goto LAB_001fd62c;
  }
  if ((param_1 == (uchar *)0x0) || (param_2 == 0)) {
    uVar21 = 0xfffffffe;
    goto LAB_001fd62c;
  }
  uVar21 = 0;
  if (DAT_0057c590 == 0) goto LAB_001fd62c;
  uVar44 = (uint)DAT_0057c5ad;
  if ((DAT_0057c5ad == 0) || (DAT_0057c5ad < DAT_0057d24c)) {
    uVar21 = 0;
    uVar26 = (ulong)DAT_0057c598;
    if (DAT_0057c59c <= DAT_0057c598) goto LAB_001fd62c;
    DAT_0057c5b0 = 0;
    DAT_0057c5ad = 0;
    DAT_0057c5ac = '\0';
    DAT_0057c5a8 = 4;
    DAT_0057d23a = 1;
    DAT_0057d23b = 1;
    DAT_0057d238 = '\0';
    DAT_0057d23c = 0;
    DAT_0057d248 = 7;
    DAT_0057d249 = 0;
    DAT_0057d24a = 7;
    DAT_0057d24b = 0;
    DAT_0057d240 = &DAT_0057c5b8;
    DAT_0057d24c = 0;
    DAT_0057d250 = 0;
    DAT_0057d254 = 0;
    DAT_0057d258 = 0;
    DAT_0057d25a = '\0';
    DAT_0057d25c = 0;
    DAT_0057d264 = 0;
    DAT_0057c5bc = DAT_0057c5b4;
    DAT_0057c5bd = DAT_0057c5a9;
    DAT_0057c5c0 = 0;
    DAT_0057c5b8 = 0;
    DAT_0057c5c4 = 0xa5;
    DAT_0057c5c8 = 0;
    DAT_0057c5cc = 7;
    DAT_0057c5cd = 0;
    DAT_0057c5ce = 7;
    DAT_0057c5cf = 0;
    DAT_0057c5d0 = 1;
    DAT_0057c5d1 = 1;
    DAT_0057c5d4 = 0;
    uVar21 = uVar26;
    if (DAT_0057c5a4 == '\0') {
      do {
        uVar21 = uVar26;
        if (99 < DAT_0057d23c) break;
        iVar18 = (int)uVar26;
        if ((DAT_0057c59c - iVar18 < 2) ||
           ((bVar42 = *(byte *)(DAT_0057c590 + uVar26) & 0xe0, bVar42 != 0x80 && (bVar42 != 0xe0))))
        {
          DAT_0057c598 = iVar18 + 1;
          uVar21 = (ulong)DAT_0057c598;
          DAT_0057d23c = DAT_0057d23c + 1;
          if (*(char *)(DAT_0057c590 + uVar26) == ']') goto LAB_001fdae4;
        }
        else {
          DAT_0057c598 = iVar18 + 2;
          uVar21 = (ulong)DAT_0057c598;
          DAT_0057d23c = DAT_0057d23c + 2;
          if ((*(char *)(DAT_0057c590 + uVar26 + 1) == 'n') &&
             (*(char *)(DAT_0057c590 + uVar26) == -0x7f)) {
LAB_001fdae4:
            DAT_0057c5a4 = '\x01';
            break;
          }
        }
        uVar26 = uVar21;
      } while ((uint)uVar21 < DAT_0057c59c);
    }
    uVar61 = DAT_0057c59c - (int)uVar21;
    if ((0 < (int)uVar61) && (DAT_0057d23c < 100)) {
      uVar44 = 0;
      uVar24 = DAT_0057d23c;
      uVar48 = DAT_0057c59c;
      do {
        uVar6 = DAT_0057c5a9;
        lVar27 = DAT_0057c590;
        uVar23 = (uint)uVar21;
        iVar18 = uVar23 + 1;
        DAT_0057c5a0 = iVar18;
        if (uVar61 == 1) {
          pbVar31 = (byte *)(DAT_0057c590 + uVar21);
LAB_001fd870:
          DAT_0057c598 = (int)uVar21 + 2;
          if ((uVar48 < DAT_0057c598) ||
             (((*pbVar31 & 0xe0) != 0x80 && ((*pbVar31 & 0xe0) != 0xe0)))) {
            DAT_0057c598 = (int)uVar21 + 1;
            DAT_0057d23c = uVar24 + 1;
            uVar44 = *pbVar31 - 0x20;
            if (uVar44 < 0x5f) {
              ppuVar55 = &PTR_FUN_00563ed0;
            }
            else {
              uVar44 = *pbVar31 - 0xa1;
              if (0xf < uVar44) goto LAB_001fdcc8;
              ppuVar55 = &PTR_FUN_00563dc0;
            }
            ppuVar55 = ppuVar55 + (long)(int)uVar44 * 2;
            cVar4 = *(char *)(ppuVar55 + 1);
            if (cVar4 == '\0') {
LAB_001fdcc8:
              uVar21 = (ulong)DAT_0057c598;
            }
            else {
              if ((cVar4 == '\x06') || (cVar4 == '\v')) {
                DAT_0057d23c = uVar24 + 2;
              }
LAB_001fd8c0:
              if (((code *)*ppuVar55 == (code *)0x0) ||
                 (iVar18 = (*(code *)*ppuVar55)(*(undefined *)((long)ppuVar55 + 9)), -1 < iVar18)) {
                if (((*(char *)(ppuVar55 + 1) - 10U & 0xfd) != 0) &&
                   (*(char *)(ppuVar55 + 1) != '\x0e')) goto LAB_001fd7fc;
                uVar44 = (uint)DAT_0057c5ad;
                break;
              }
              uVar21 = (ulong)DAT_0057c598;
              uVar48 = DAT_0057c59c;
            }
          }
          else {
            DAT_0057d23c = uVar24 + 2;
            if (*pbVar31 == 0x81) {
              uVar44 = pbVar31[1] - 0x40;
              ppuVar55 = (undefined **)&UNK_00563840;
              if (0x57 < uVar44) goto LAB_001fdcc8;
LAB_001fdcf4:
              ppuVar55 = ppuVar55 + (long)(int)uVar44 * 2;
              if (*(char *)(ppuVar55 + 1) != '\0') goto LAB_001fd8c0;
              uVar21 = (ulong)DAT_0057c598;
            }
            else {
              if ((*pbVar31 == 0x82) &&
                 (uVar44 = pbVar31[1] - 0x60, ppuVar55 = &PTR_FUN_00563490, uVar44 < 0x3b))
              goto LAB_001fdcf4;
LAB_001fd7fc:
              uVar21 = (ulong)DAT_0057c598;
              uVar48 = DAT_0057c59c;
            }
          }
          uVar61 = uVar48 - (int)uVar21;
          uVar44 = (uint)DAT_0057c5ad;
        }
        else {
          pbVar31 = (byte *)(DAT_0057c590 + uVar21);
          if (((0x52 < (pbVar31[1] - 0x829f) + (uint)*(byte *)(DAT_0057c590 + uVar21) * 0x100) ||
              (uVar61 < 2)) || (uVar47 = pbVar31[1] - 0x9f, 0x52 < uVar47)) goto LAB_001fd870;
          lVar52 = (ulong)uVar47 * 0x10;
          uVar47 = (uint)(byte)(&DAT_00565db0)[lVar52];
          if ((&DAT_00565db0)[lVar52] == 6) {
            lVar52 = 6;
            if (3 < uVar61) {
              if (pbVar31[2] == 0x81) {
                lVar52 = 6;
                if (pbVar31[3] == 0x4a) {
                  if (((uVar61 < 6) || (pbVar31[4] != 0x82)) ||
                     ((bVar42 = pbVar31[5], 8 < (byte)(bVar42 + 0x61) ||
                      (bVar46 = *PTR_ga2ndCharTbl5_005676b8, bVar46 == 0)))) {
LAB_001fe798:
                    lVar52 = 7;
                    uVar47 = 7;
                  }
                  else {
                    if (PTR_ga2ndCharTbl5_005676b8[1] == bVar42) {
                      iVar58 = 0;
                    }
                    else {
                      if (bVar46 < 2) goto LAB_001fe798;
                      if (PTR_ga2ndCharTbl5_005676b8[2] == bVar42) {
                        iVar58 = 1;
                      }
                      else {
                        if (bVar46 == 2) goto LAB_001fe798;
                        if (PTR_ga2ndCharTbl5_005676b8[3] == bVar42) {
                          iVar58 = 2;
                        }
                        else {
                          if (bVar46 == 3) goto LAB_001fe798;
                          if (PTR_ga2ndCharTbl5_005676b8[4] == bVar42) {
                            iVar58 = 3;
                          }
                          else {
                            if (bVar46 == 4) goto LAB_001fe798;
                            if (PTR_ga2ndCharTbl5_005676b8[5] == bVar42) {
                              iVar58 = 4;
                            }
                            else {
                              if (bVar46 == 5) goto LAB_001fe798;
                              lVar52 = 7;
                              uVar47 = 7;
                              if (PTR_ga2ndCharTbl5_005676b8[6] != bVar42) goto LAB_001fdb40;
                              iVar58 = 5;
                            }
                          }
                        }
                      }
                    }
                    uVar47 = iVar58 + 8;
                    lVar52 = (long)(int)uVar47;
                  }
                }
              }
              else {
                lVar52 = 6;
                if ((pbVar31[2] == 0x82) && (bVar42 = pbVar31[3], (byte)(bVar42 + 0x5f) < 7)) {
                  bVar46 = *PTR_ga2ndCharTbl9_00567698;
                  if (bVar46 == 0) {
LAB_00201a9c:
                    lVar52 = 6;
                  }
                  else {
                    if (PTR_ga2ndCharTbl9_00567698[1] == bVar42) {
                      iVar58 = 0;
                    }
                    else {
                      if (bVar46 < 2) goto LAB_00201a9c;
                      if (PTR_ga2ndCharTbl9_00567698[2] == bVar42) {
                        iVar58 = 1;
                      }
                      else {
                        if (bVar46 == 2) goto LAB_00201a9c;
                        if (PTR_ga2ndCharTbl9_00567698[3] == bVar42) {
                          iVar58 = 2;
                        }
                        else {
                          if (bVar46 == 3) goto LAB_00201a9c;
                          if (PTR_ga2ndCharTbl9_00567698[4] == bVar42) {
                            iVar58 = 3;
                          }
                          else {
                            if (bVar46 == 4) goto LAB_00201a9c;
                            if (PTR_ga2ndCharTbl9_00567698[5] == bVar42) {
                              iVar58 = 4;
                            }
                            else {
                              if (bVar46 == 5) goto LAB_00201a9c;
                              lVar52 = 6;
                              if (PTR_ga2ndCharTbl9_00567698[6] != bVar42) goto LAB_001fdb40;
                              iVar58 = 5;
                            }
                          }
                        }
                      }
                    }
                    uVar47 = iVar58 + 0xc;
                    lVar52 = (long)(int)uVar47;
                  }
                }
              }
            }
          }
          else {
            pbVar43 = *(byte **)(&DAT_00565db8 + lVar52);
            if ((((3 < uVar61) && (pbVar43 != (byte *)0x0)) && (pbVar31[2] == 0x82)) &&
               ((bVar42 = pbVar31[3], (byte)(bVar42 + 0x61) < 0x53 && (*pbVar43 != 0)))) {
              if (pbVar43[1] == bVar42) {
                uVar28 = 0;
              }
              else {
                uVar28 = 0;
                pbVar51 = pbVar43 + 2;
                do {
                  uVar28 = uVar28 + 1;
                  if (uVar28 == *pbVar43) goto LAB_001fdb34;
                  bVar46 = *pbVar51;
                  pbVar51 = pbVar51 + 1;
                } while (bVar46 != bVar42);
              }
              uVar47 = uVar47 + 1 + uVar28;
            }
LAB_001fdb34:
            if (0xa4 < uVar47) goto LAB_001fd870;
            lVar52 = (long)(int)uVar47;
          }
LAB_001fdb40:
          bVar42 = (&DAT_00490058)[lVar52 * 10];
          if ((uVar61 < bVar42) || (0x7fffffff - bVar42 < uVar23)) goto LAB_001fd870;
          lVar49 = (long)(int)uVar44;
          lVar56 = lVar49 + 2;
          lVar39 = lVar49 * 0x20;
          lVar53 = lVar56 * 0x20;
          uVar23 = uVar23 + bVar42;
          uVar21 = (ulong)uVar23;
          uVar24 = uVar24 + bVar42;
          DAT_0057d240 = &DAT_0057c5b8 + lVar49 * 8;
          bVar17 = DAT_0057d239 == '\x01';
          uVar28 = 0xa0;
          DAT_0057c598 = uVar23;
          DAT_0057d23c = uVar24;
          (&DAT_0057c5bc)[lVar39] = DAT_0057c5b4;
          (&DAT_0057c5bd)[lVar39] = uVar6;
          (&DAT_0057c5b8)[lVar49 * 8] = 0;
          (&DAT_0057c5c4)[lVar39] = 0xa5;
          (&DAT_0057c588)[lVar56 * 8] = 0;
          (&DAT_0057c58c)[lVar53] = 7;
          (&DAT_0057c58d)[lVar53] = 0;
          (&DAT_0057c58e)[lVar53] = 7;
          (&DAT_0057c58f)[lVar53] = 0;
          *(undefined1 *)(&DAT_0057c590 + lVar56 * 4) = 1;
          *(undefined1 *)((long)&DAT_0057c590 + lVar53 + 1) = 1;
          *(undefined4 *)((long)&DAT_0057c590 + lVar53 + 4) = 0;
          uVar61 = DAT_0057c5b0;
          if (bVar17) {
            uVar28 = (uint)*(ushort *)(&DAT_00490056 + lVar52 * 10);
          }
          uVar59 = uVar28 + (int)DAT_0057c5ae;
          if ((int)(uVar28 + (int)DAT_0057c5ae) < (int)DAT_0057c584) {
            uVar59 = DAT_0057c584;
          }
          (&DAT_0057c5c0)[lVar49 * 8] = uVar59;
          if (0x7fffffff - uVar59 < uVar61) {
            pbVar31 = (byte *)(lVar27 + (ulong)uVar23);
            goto LAB_001fd870;
          }
          uVar24 = uVar44 + 1;
          lVar27 = (lVar49 + 2) * 0x20;
          DAT_0057c5b0 = uVar59 + uVar61;
          uVar44 = uVar24 & 0xff;
          DAT_0057c5ac = DAT_0057c5ac + '\x01';
          DAT_0057d238 = DAT_0057d238 + '\x01';
          (&DAT_0057c5c4)[lVar49 * 0x20] = (char)uVar47;
          uVar61 = uVar48 - uVar23;
          *(int *)((long)&DAT_0057c590 + lVar27 + 4) = iVar18;
          (&DAT_0057c58c)[lVar27] = DAT_0057d248;
          (&DAT_0057c58d)[lVar27] = DAT_0057d249;
          (&DAT_0057c58e)[lVar27] = DAT_0057d24a;
          (&DAT_0057c58f)[lVar27] = DAT_0057d24b;
          *(undefined1 *)(&DAT_0057c590 + (lVar49 + 2) * 4) = DAT_0057d23a;
          *(undefined1 *)((long)&DAT_0057c590 + lVar27 + 1) = DAT_0057d23b;
          DAT_0057d248 = 7;
          DAT_0057d249 = 0;
          DAT_0057d24a = 7;
          DAT_0057d24b = 0;
          DAT_0057d23a = 1;
          DAT_0057d23b = 1;
          DAT_0057c5ad = (byte)uVar24;
        }
        if ((int)uVar61 < 1) break;
        if (99 < uVar44) goto LAB_001fd670;
        uVar24 = DAT_0057d23c;
      } while (DAT_0057d23c < 100);
      if (uVar44 != 0) goto LAB_001fd670;
    }
LAB_001fd90c:
    DAT_0057d24c = DAT_0057d24c + 1;
    if (DAT_0057d260 == 0) {
      DAT_0057d260 = 1;
    }
    DAT_0057d268 = DAT_0057c598;
    if (4 < param_2) {
      if (DAT_0057c584 == 0) {
        uVar44 = 0;
LAB_001fdfc8:
        bVar42 = (byte)uVar44;
        lVar52 = 1;
        lVar53 = 0;
        uVar21 = 3;
        lVar27 = 2;
      }
      else {
        if (DAT_0057d260 < 0x1ffff) {
          if (DAT_0057c584 == 0x14) {
            uVar21 = (ulong)(DAT_0057d260 * 0x666 >> 0xf);
          }
          else {
            uVar44 = DAT_0057d260 * DAT_0057c588 >> 0xf;
            uVar21 = (ulong)uVar44;
            if ((DAT_0057d260 * DAT_0057c588 >> 0xe & 1) != 0) {
              uVar21 = (ulong)(uVar44 + 1);
            }
          }
          uVar44 = (int)uVar21 * DAT_0057c584;
          if (uVar44 < DAT_0057d260) {
LAB_001fdd18:
            iVar18 = 0;
            do {
              iVar58 = (int)uVar21;
              uVar21 = (ulong)(iVar58 + 1);
              if (DAT_0057d260 <= uVar44 + iVar18 + DAT_0057c584) break;
              iVar18 = iVar18 + DAT_0057c584 + DAT_0057c584;
              uVar21 = (ulong)(iVar58 + 2);
              if (DAT_0057d260 <= uVar44 + iVar18) break;
              iVar18 = iVar18 + DAT_0057c584;
              uVar21 = (ulong)(iVar58 + 3);
              if (DAT_0057d260 <= uVar44 + iVar18) break;
              iVar18 = iVar18 + DAT_0057c584;
              uVar21 = (ulong)(iVar58 + 4);
              if (DAT_0057d260 <= uVar44 + iVar18) break;
              iVar18 = iVar18 + DAT_0057c584;
              uVar21 = (ulong)(iVar58 + 5);
              if (DAT_0057d260 <= uVar44 + iVar18) break;
              iVar18 = iVar18 + DAT_0057c584;
              uVar21 = (ulong)(iVar58 + 6);
              if (DAT_0057d260 <= uVar44 + iVar18) break;
              iVar18 = iVar18 + DAT_0057c584;
              uVar21 = (ulong)(iVar58 + 7);
              if (DAT_0057d260 <= uVar44 + iVar18) break;
              iVar18 = iVar18 + DAT_0057c584;
              uVar21 = (ulong)(iVar58 + 8);
              if (DAT_0057d260 <= uVar44 + iVar18) break;
              iVar18 = iVar18 + DAT_0057c584;
              uVar21 = (ulong)(iVar58 + 9);
              if (DAT_0057d260 <= uVar44 + iVar18) break;
              iVar18 = iVar18 + DAT_0057c584;
              uVar21 = (ulong)(iVar58 + 10);
              if (DAT_0057d260 <= uVar44 + iVar18) break;
              iVar18 = iVar18 + DAT_0057c584;
              uVar21 = (ulong)(iVar58 + 0xb);
              if (DAT_0057d260 <= uVar44 + iVar18) break;
              iVar18 = iVar18 + DAT_0057c584;
              uVar21 = (ulong)(iVar58 + 0xc);
              if (DAT_0057d260 <= uVar44 + iVar18) break;
              iVar18 = iVar18 + DAT_0057c584;
              uVar21 = (ulong)(iVar58 + 0xd);
              if (DAT_0057d260 <= uVar44 + iVar18) break;
              iVar18 = iVar18 + DAT_0057c584;
              uVar21 = (ulong)(iVar58 + 0xe);
              if (DAT_0057d260 <= uVar44 + iVar18) break;
              iVar18 = iVar18 + DAT_0057c584;
              uVar21 = (ulong)(iVar58 + 0xf);
              if (DAT_0057d260 <= uVar44 + iVar18) break;
              iVar18 = iVar18 + DAT_0057c584;
              uVar21 = (ulong)(iVar58 + 0x10);
            } while (uVar44 + iVar18 < DAT_0057d260);
            goto LAB_001fde60;
          }
LAB_001fd970:
          uVar44 = (uint)uVar21;
          if (0x3fff < uVar44) {
            bVar50 = (byte)(uVar21 >> 0xe) & 0x7f | 0x80;
            bVar46 = (byte)(uVar21 >> 7) & 0x7f | 0x80;
            bVar42 = (byte)uVar21 & 0x7f;
            goto LAB_001fde78;
          }
          if (uVar44 < 0x80) goto LAB_001fdfc8;
          bVar42 = (byte)uVar21 & 0x7f;
          bVar46 = (byte)(uVar21 >> 7) & 0x7f | 0x80;
          lVar52 = 2;
          lVar53 = 1;
          uVar21 = 4;
          lVar27 = 3;
          lVar56 = 0;
        }
        else {
          uVar44 = 0;
          if (DAT_0057c584 != 0) {
            uVar44 = DAT_0057d260 / DAT_0057c584;
          }
          uVar21 = (ulong)uVar44;
          uVar44 = DAT_0057c584 * uVar44;
          if (uVar44 < DAT_0057d260) goto LAB_001fdd18;
LAB_001fde60:
          if ((uint)uVar21 < 0x200000) goto LAB_001fd970;
          bVar46 = 0xff;
          bVar42 = 0x7f;
          bVar50 = 0xff;
LAB_001fde78:
          *param_1 = bVar50;
          lVar52 = 3;
          lVar53 = 2;
          uVar21 = 5;
          lVar27 = 4;
          lVar56 = 1;
        }
        param_1[lVar56] = bVar46;
      }
      param_1[lVar53] = bVar42;
      param_1[lVar52] = 0xff;
      param_1[lVar27] = '\0';
      DAT_0057d260 = 0;
      DAT_0057d264 = 0;
      goto LAB_001fd62c;
    }
  }
  else {
    if (DAT_0057c5ad != DAT_0057d24c) {
LAB_001fd670:
      uVar26 = (ulong)DAT_0057d24c;
      if (DAT_0057d24c < uVar44) {
        uVar61 = (uint)DAT_0057d24c;
        do {
          bVar42 = DAT_0057c5a8;
          iVar18 = (int)uVar26;
          lVar27 = (long)iVar18;
          lVar52 = (long)iVar18;
          uVar24 = (&DAT_0057c5b8)[lVar27 * 8];
          bVar46 = DAT_005dddc8;
          bVar50 = DAT_005dddc9;
          bVar60 = DAT_005dddca;
          bVar10 = DAT_005dddcb;
          bVar11 = DAT_005dddce;
          bVar12 = DAT_005ddfd0;
          bVar13 = DAT_005de1d2;
          bVar14 = DAT_005de258;
          bVar15 = DAT_005de259;
          bVar16 = DAT_005dea5c;
          if (uVar24 != 1) {
            if (uVar24 == 2) {
              if (DAT_0057d260 < 0x7fffffff - (&DAT_0057c5c0)[lVar27 * 8]) {
                DAT_0057d260 = (&DAT_0057c5c0)[lVar27 * 8] + DAT_0057d260;
              }
              goto LAB_001fda3c;
            }
            uVar48 = iVar18 + 1;
            DAT_0057d24c = (byte)uVar48;
            if (uVar24 == 0) {
              uVar26 = (ulong)DAT_0057d24c;
              bVar5 = (&DAT_0057c5c4)[lVar52 * 0x20];
              bVar9 = 0;
              DAT_005dddc8 = 0;
              DAT_005dddc9 = 0;
              DAT_005dddca = 0;
              DAT_005dddcb = 0;
              DAT_005ddfd0 = 0;
              DAT_005dddce = 0;
              DAT_005de1d2 = 0;
              DAT_005de259 = 0;
              DAT_005dea5c = 0;
              DAT_005de258 = 0;
              DAT_005dddc0 = 0;
              DAT_0057d25c = uVar24;
              DAT_005dddc4 = uVar24;
              bVar46 = bVar9;
              bVar50 = bVar9;
              bVar60 = bVar9;
              bVar10 = bVar9;
              bVar11 = bVar9;
              bVar12 = bVar9;
              bVar13 = bVar9;
              bVar14 = bVar9;
              bVar15 = bVar9;
              bVar16 = bVar9;
              if (bVar5 < 0xa5) {
                uVar24 = (&DAT_0057c5c0)[lVar52 * 8];
                lVar53 = (long)(int)(uint)bVar5 * 10;
                uVar23 = uVar48 & 0xff;
                if (((((&DAT_00490050)[lVar53] != 'S') || ((&DAT_00490051)[lVar53] != 'O')) ||
                    ((&DAT_00490052)[lVar53] != 'K')) || ((&DAT_00490053)[lVar53] != 'U')) {
                  lVar53 = lVar52 * 0x20;
                  DAT_005dddc8 = (&DAT_0057c5bd)[lVar53];
                  DAT_005dddc9 = (&DAT_0057c5bc)[lVar53];
                  DAT_005dddcb = (&DAT_00490059)[(long)(int)(uint)bVar5 * 10];
                  local_20 = (uint)DAT_005dddc9;
                  uVar47 = (uint)DAT_005dddcb;
                  DAT_005dddca = 1;
                  DAT_005de258 = 1;
                  uVar28 = (uint)DAT_0057c5a8;
                  if ((&DAT_0057c5d0)[lVar53] == '\0') {
                    if (uVar28 == 5) {
                      bVar46 = 1;
                      lVar53 = 0;
                    }
                    else {
                      DAT_005de260 = 0;
                      bVar46 = 2;
                      lVar53 = 1;
                      DAT_005de259 = 1;
                      DAT_005de25c = 0;
                      DAT_005de268 = 0;
                    }
                  }
                  else {
                    bVar46 = 1;
                    lVar53 = 0;
                  }
                  bVar17 = (&DAT_0057c5d1)[lVar52 * 0x20] != '\0';
                  if (bVar17) {
                    bVar50 = 1;
                  }
                  else {
                    bVar50 = 2;
                    DAT_005dea64 = 0;
                    DAT_005dea60 = 0;
                    DAT_005dea6c = 0;
                  }
                  DAT_005dea5c = !bVar17;
                  lVar56 = (lVar52 + 2) * 0x20;
                  DAT_005dddcc = bVar5;
                  DAT_005dddc0 = uVar24;
                  if ((byte)(&DAT_0057c58c)[lVar56] < 7) {
                    uVar6 = (&DAT_0057c58d)[lVar56];
                    (&DAT_005de25c)[lVar53 * 0x10] = (&DAT_0057c58c)[lVar56];
                    (&DAT_005de268)[lVar53 * 0x10] = uVar6;
                    (&DAT_005de260)[lVar53 * 4] = 0;
                    (&DAT_005de264)[lVar53 * 4] = uVar24;
                    DAT_005de259 = bVar46;
                  }
                  if (uVar28 == 5) {
                    lVar56 = (ulong)(uVar44 + uVar23 & 0x1f) * 2;
                    bVar42 = 5;
                    DAT_005de259 = bVar46;
                    (&DAT_005de260)[lVar53 * 4] = 0;
                    (&DAT_005de264)[lVar53 * 4] = uVar24;
                    uVar6 = (&DAT_004907e1)[lVar56];
                    (&DAT_005de25c)[lVar53 * 0x10] = (&DAT_004907e0)[lVar56];
                    (&DAT_005de268)[lVar53 * 0x10] = uVar6;
                  }
                  lVar52 = (lVar52 + 2) * 0x20;
                  if ((byte)(&DAT_0057c58e)[lVar52] < 7) {
                    lVar53 = (ulong)!bVar17 + 0x80;
                    uVar6 = (&DAT_0057c58f)[lVar52];
                    DAT_005dea5c = bVar50;
                    *(undefined *)(&DAT_005de260 + lVar53 * 4) = (&DAT_0057c58e)[lVar52];
                    (&DAT_005de26c)[lVar53 * 0x10] = uVar6;
                    *(uint *)(&DAT_005de268 + lVar53 * 0x10) = uVar24;
                    (&DAT_005de264)[lVar53 * 4] = 0;
                  }
                  uVar48 = uVar48 & 0xff;
                  cVar4 = DAT_0057d25a + '\x01';
                  DAT_0057d25a = cVar4;
                  if (uVar23 < uVar44) {
                    iVar18 = (&DAT_0057c5b8)[uVar26 * 8];
                    if (iVar18 == 0) {
                      bVar46 = 1;
LAB_001fed78:
                      lVar52 = (ulong)(byte)(&DAT_0057c5c4)[uVar26 * 0x20] * 10;
                      cVar7 = (&DAT_00490050)[lVar52];
                      if (cVar7 == 'a') {
                        if (((((&DAT_00490051)[lVar52] == '\0') && ((&DAT_00490052)[lVar52] == '\0')
                             ) && ((&DAT_00490053)[lVar52] == '\0')) &&
                           (uVar21 = (ulong)(byte)(&DAT_00490054)[lVar52],
                           (&DAT_00490054)[lVar52] == 0)) goto LAB_001fedc0;
                      }
                      else if (cVar7 == 'i') {
                        if ((((&DAT_00490051)[lVar52] == '\0') && ((&DAT_00490052)[lVar52] == '\0'))
                           && (((&DAT_00490053)[lVar52] == '\0' && ((&DAT_00490054)[lVar52] == '\0')
                               ))) {
                          uVar21 = 1;
                          goto LAB_001fedc0;
                        }
                      }
                      else if (cVar7 == 'M') {
                        if ((((&DAT_00490051)[lVar52] == '\0') && ((&DAT_00490052)[lVar52] == '\0'))
                           && (((&DAT_00490053)[lVar52] == '\0' && ((&DAT_00490054)[lVar52] == '\0')
                               ))) {
                          uVar21 = 2;
                          goto LAB_001fedc0;
                        }
                      }
                      else if (cVar7 == 'e') {
                        if (((((&DAT_00490051)[lVar52] == '\0') && ((&DAT_00490052)[lVar52] == '\0')
                             ) && ((&DAT_00490053)[lVar52] == '\0')) &&
                           ((&DAT_00490054)[lVar52] == '\0')) {
                          uVar21 = 3;
                          goto LAB_001fedc0;
                        }
                      }
                      else if (cVar7 == 'o') {
                        if ((((&DAT_00490051)[lVar52] == '\0') && ((&DAT_00490052)[lVar52] == '\0'))
                           && (((&DAT_00490053)[lVar52] == '\0' && ((&DAT_00490054)[lVar52] == '\0')
                               ))) {
                          uVar21 = 4;
LAB_001fedc0:
                          DAT_005dddca = 2;
                          DAT_005de258 = bVar46 + 1;
                          uVar44 = uVar47 + (byte)(&DAT_00490865)[uVar21 * 6];
                          uVar47 = uVar44 & 0xff;
                          DAT_005dddcb = (byte)uVar44;
                          DAT_005dddcd = (&DAT_0057c5c4)[uVar26 * 0x20];
                          bVar46 = DAT_005de258;
                        }
                      }
                      else if ((((cVar7 == 'N') && ((&DAT_00490051)[lVar52] == '\\')) &&
                               ((&DAT_00490052)[lVar52] == '\0')) &&
                              (((&DAT_00490053)[lVar52] == '\0' && ((&DAT_00490054)[lVar52] == '\0')
                               ))) {
                        uVar21 = 5;
                        goto LAB_001fedc0;
                      }
                    }
                    else {
                      bVar46 = 1;
                      uVar35 = (uint)DAT_005de259;
                      uVar38 = (uint)DAT_005de1d2;
                      uVar59 = uVar23 + uVar44 + 1;
                      uVar32 = (uint)DAT_005dea5c;
                      uVar21 = uVar26;
                      bVar50 = bVar46;
                      do {
                        if (iVar18 == 1) {
                          DAT_005de258 = bVar46 + 1;
                          iVar18 = (&DAT_0057c5c0)[uVar21 * 8];
                          uVar36 = uVar35;
                          if (((bVar42 != 5) && ((&DAT_0057c5d0)[uVar21 * 0x20] == '\0')) &&
                             (uVar35 >> 7 == 0)) {
                            lVar52 = (long)(int)uVar35 * 0x10;
                            uVar36 = uVar35 + 1 & 0xff;
                            (&DAT_005de25c)[lVar52] = 0;
                            (&DAT_005de268)[lVar52] = 0;
                            (&DAT_005de260)[(long)(int)uVar35 * 4] = uVar24;
                          }
                          if (((&DAT_0057c5d1)[uVar21 * 0x20] == '\0') && (uVar32 >> 7 == 0)) {
                            lVar52 = (long)(int)uVar32;
                            lVar53 = lVar52 * 0x10;
                            (&DAT_005dea60)[lVar53] = 0;
                            (&DAT_005dea6c)[lVar53] = 0;
                            uVar32 = uVar32 + 1 & 0xff;
                            (&DAT_005dea64)[lVar52 * 4] = uVar24;
                          }
                          lVar52 = (uVar21 + 2) * 0x20;
                          if (((byte)(&DAT_0057c58c)[lVar52] < 7) && (uVar36 >> 7 == 0)) {
                            lVar53 = (long)(int)uVar36;
                            uVar6 = (&DAT_0057c58d)[lVar52];
                            (&DAT_005de25c)[lVar53 * 0x10] = (&DAT_0057c58c)[lVar52];
                            (&DAT_005de268)[lVar53 * 0x10] = uVar6;
                            (&DAT_005de260)[lVar53 * 4] = uVar24;
                            (&DAT_005de264)[lVar53 * 4] = iVar18;
                            uVar35 = uVar36 + 1 & 0xff;
                            if (bVar42 == 5) {
LAB_002003c0:
                              lVar53 = (long)(int)uVar36;
                              lVar52 = (ulong)(uVar59 & 0x1f) * 2;
                              uVar6 = (&DAT_004907e1)[lVar52];
                              (&DAT_005de25c)[lVar53 * 0x10] = (&DAT_004907e0)[lVar52];
                              (&DAT_005de268)[lVar53 * 0x10] = uVar6;
                              (&DAT_005de260)[lVar53 * 4] = uVar24;
                              (&DAT_005de264)[lVar53 * 4] = iVar18;
                              uVar35 = uVar36 + 1 & 0xff;
                            }
                          }
                          else {
                            uVar35 = uVar36;
                            if ((bVar42 == 5) && (uVar36 >> 7 == 0)) goto LAB_002003c0;
                          }
                          lVar52 = (uVar21 + 2) * 0x20;
                          if (((byte)(&DAT_0057c58e)[lVar52] < 7) && (uVar32 >> 7 == 0)) {
                            uVar6 = (&DAT_0057c58f)[lVar52];
                            lVar53 = (long)(int)uVar32;
                            (&DAT_005dea60)[lVar53 * 0x10] = (&DAT_0057c58e)[lVar52];
                            (&DAT_005dea6c)[lVar53 * 0x10] = uVar6;
                            uVar32 = uVar32 + 1 & 0xff;
                            (&DAT_005dea64)[lVar53 * 4] = uVar24;
                            (&DAT_005dea68)[lVar53 * 4] = iVar18;
                          }
                          bVar60 = bVar50;
                          if (uVar38 >> 7 == 0) {
                            if ((&DAT_0057c5bd)[uVar21 * 0x20] == '\x01') {
                              bVar60 = 0;
                              if (bVar50 != 0) {
                                bVar60 = 0;
                                (&DAT_005df260)[(int)uVar38] = uVar24;
                                uVar38 = uVar38 + 1 & 0xff;
                              }
                            }
                            else if ((&DAT_0057c5bd)[uVar21 * 0x20] == '\0') {
                              if (bVar50 == 0) {
                                bVar60 = 1;
                                (&DAT_005df260)[(int)uVar38] = uVar24;
                                uVar38 = uVar38 + 1 & 0xff;
                              }
                              else {
                                bVar60 = 1;
                              }
                            }
                          }
                          uVar24 = uVar24 + iVar18;
                          uVar29 = (ulong)((int)uVar21 + 1);
                          DAT_005dddc0 = uVar24;
                          bVar46 = DAT_005de258;
                          bVar50 = bVar60;
                        }
                        else {
                          uVar36 = (int)uVar21 + 1;
                          uVar29 = (ulong)uVar36;
                          uVar22 = (ulong)(ushort)uVar36;
                          if (((uVar36 & 0xffff) < uVar44) && ((&DAT_0057c5b8)[uVar22 * 8] != 0)) {
                            if ((&DAT_0057c5b8)[uVar22 * 8] == 1) {
LAB_00200390:
                              if (iVar18 == 2) {
                                iVar18 = (&DAT_0057c5c0)[uVar21 * 8];
                                DAT_005de258 = bVar46 + 1;
                                if (uVar32 >> 7 == 0) {
                                  lVar52 = (long)(int)uVar32;
                                  (&DAT_005dea60)[lVar52 * 0x10] = 4;
                                  (&DAT_005dea6c)[lVar52 * 0x10] = 1;
                                  uVar32 = uVar32 + 1 & 0xff;
                                  (&DAT_005dea64)[lVar52 * 4] = uVar24;
                                  (&DAT_005dea68)[lVar52 * 4] = iVar18;
                                }
                                uVar24 = uVar24 + iVar18;
                                (&DAT_0057c5c0)[uVar21 * 8] = 0;
                                DAT_005dddc0 = uVar24;
                                bVar46 = DAT_005de258;
                              }
                              else {
                                (&DAT_0057c5c0)[uVar21 * 8] = uVar24;
                              }
                            }
                            else {
                              uVar3 = ~(uVar36 & 0xffff) + uVar44 & 3;
                              if (uVar3 == 0) goto LAB_001febac;
                              uVar20 = (uVar36 & 0xffff) + 1;
                              uVar22 = (ulong)uVar20;
                              if ((uVar20 < uVar44) && ((&DAT_0057c5b8)[uVar22 * 8] != 0)) {
                                if ((&DAT_0057c5b8)[uVar22 * 8] == 1) goto LAB_00200390;
                                if (uVar3 == 1) goto LAB_001febac;
                                if (uVar3 != 2) {
                                  uVar20 = (uVar36 & 0xffff) + 2;
                                  if ((&DAT_0057c5b8)[(ulong)uVar20 * 8] == 0) goto LAB_001fec14;
                                  if ((&DAT_0057c5b8)[(ulong)uVar20 * 8] == 1) goto LAB_00200390;
                                }
                                uVar22 = (ulong)(uVar20 + 1);
                                iVar58 = (&DAT_0057c5b8)[uVar22 * 8];
                                while (iVar58 != 0) {
                                  if (iVar58 == 1) goto LAB_00200390;
LAB_001febac:
                                  iVar58 = (int)uVar22;
                                  if ((uVar44 <= iVar58 + 1U) ||
                                     ((&DAT_0057c5b8)[(ulong)(iVar58 + 1U) * 8] == 0)) break;
                                  if ((&DAT_0057c5b8)[(ulong)(iVar58 + 1U) * 8] == 1)
                                  goto LAB_00200390;
                                  if ((&DAT_0057c5b8)[(ulong)(iVar58 + 2) * 8] == 0) break;
                                  if ((&DAT_0057c5b8)[(ulong)(iVar58 + 2) * 8] == 1)
                                  goto LAB_00200390;
                                  if ((&DAT_0057c5b8)[(ulong)(iVar58 + 3) * 8] == 0) break;
                                  if ((&DAT_0057c5b8)[(ulong)(iVar58 + 3) * 8] == 1)
                                  goto LAB_00200390;
                                  uVar22 = (ulong)(iVar58 + 4);
                                  iVar58 = (&DAT_0057c5b8)[uVar22 * 8];
                                }
                              }
                            }
                          }
                        }
LAB_001fec14:
                        if (uVar44 <= (uint)uVar29) break;
                        uVar59 = uVar59 + 1;
                        iVar18 = (&DAT_0057c5b8)[uVar29 * 8];
                        uVar21 = uVar29;
                      } while (iVar18 != 0);
                      DAT_005de1d2 = (byte)uVar38;
                      DAT_005de259 = (byte)uVar35;
                      iVar18 = (&DAT_0057c5b8)[uVar26 * 8];
                      DAT_005dea5c = (byte)uVar32;
                      if (iVar18 == 0) goto LAB_001fed78;
                      if ((iVar18 != 5) && (iVar18 != 2)) {
                        uVar59 = ~uVar23 + uVar44 & 3;
                        if (uVar59 == 0) goto LAB_001fecf8;
                        uVar48 = uVar23 + 1;
                        if (uVar48 < uVar44) {
                          uVar26 = (ulong)uVar48;
                          iVar18 = (&DAT_0057c5b8)[uVar26 * 8];
                          if (iVar18 != 0) {
                            if ((iVar18 == 5) || (iVar18 == 2)) goto LAB_001fee04;
                            if (uVar59 == 1) goto LAB_001fecf8;
                            if (uVar59 != 2) {
                              uVar48 = uVar23 + 2;
                              uVar26 = (ulong)uVar48;
                              iVar18 = (&DAT_0057c5b8)[uVar26 * 8];
                              if (iVar18 == 0) goto LAB_001fed78;
                              if ((iVar18 == 5) || (iVar18 == 2)) goto LAB_001fee04;
                            }
                            uVar26 = (ulong)(uVar48 + 1);
                            iVar18 = (&DAT_0057c5b8)[uVar26 * 8];
                            while (iVar18 != 0) {
                              uVar48 = (uint)uVar26;
                              if ((iVar18 == 5) || (iVar18 == 2)) goto LAB_001fee04;
LAB_001fecf8:
                              if (uVar44 <= uVar48 + 1) goto LAB_001fee04;
                              uVar26 = (ulong)(uVar48 + 1);
                              iVar18 = (&DAT_0057c5b8)[uVar26 * 8];
                              if (iVar18 == 0) break;
                              if ((iVar18 == 5) || (iVar18 == 2)) goto LAB_001fee04;
                              uVar26 = (ulong)(uVar48 + 2);
                              iVar18 = (&DAT_0057c5b8)[uVar26 * 8];
                              if (iVar18 == 0) break;
                              if ((iVar18 == 5) || (iVar18 == 2)) goto LAB_001fee04;
                              uVar26 = (ulong)(uVar48 + 3);
                              iVar18 = (&DAT_0057c5b8)[uVar26 * 8];
                              if (iVar18 == 0) break;
                              if ((iVar18 == 5) || (iVar18 == 2)) goto LAB_001fee04;
                              uVar26 = (ulong)(uVar48 + 4);
                              iVar18 = (&DAT_0057c5b8)[uVar26 * 8];
                            }
                          }
                          goto LAB_001fed78;
                        }
                      }
                    }
LAB_001fee04:
                    if (bVar46 != 0) goto LAB_001fee0c;
                    uVar44 = 0;
                    bVar42 = 0;
                    bVar46 = 0;
                    uVar23 = 0;
                  }
                  else {
LAB_001fee0c:
                    lVar52 = (long)(int)uVar28;
                    if (5 < bVar42) {
                      lVar52 = 4;
                      DAT_0057c5a8 = 4;
                    }
                    if (cVar4 == '\x01') {
                      iVar18 = (int)*(short *)(&UNK_00490820 + lVar52 * 6);
                    }
                    else if (DAT_0057d238 == cVar4) {
                      iVar18 = (int)*(short *)(&UNK_00490824 + lVar52 * 6);
                    }
                    else {
                      iVar18 = (int)*(short *)(&UNK_00490822 + lVar52 * 6);
                    }
                    DAT_005dddd0 = 0;
                    iVar58 = iVar18 + DAT_0057d254;
                    if (iVar58 < -0x2000) {
                      iVar58 = -0x2000;
                    }
                    if (0x1fff < iVar58) {
                      iVar58 = 0x1fff;
                    }
                    DAT_005dddd2 = (undefined2)iVar58;
                    uVar44 = (uint)DAT_005de259;
                    if (uVar44 == 0) {
                      uVar21 = 1;
LAB_001ff2b0:
                      uVar48 = (uint)uVar21;
                      if ((&DAT_005dddd0)[(ulong)(uVar48 - 1) * 4] != '\x7f') {
                        iVar18 = iVar18 + DAT_0057d254;
                        if (iVar18 < -0x2000) {
                          iVar18 = -0x2000;
                        }
                        if (0x1fff < iVar18) {
                          iVar18 = 0x1fff;
                        }
                        uVar48 = uVar48 + 1;
                        *(undefined1 *)(&DAT_005dddc0 + uVar21 + 4) = 0x7f;
                        *(short *)((long)&DAT_005dddc0 + (uVar21 + 4) * 4 + 2) = (short)iVar18;
                      }
                    }
                    else {
                      piVar30 = &DAT_005de260;
                      uVar48 = 1;
                      do {
                        bVar50 = *(byte *)(piVar30 + -1);
                        iVar58 = piVar30[1];
                        bVar42 = *(byte *)(piVar30 + 2);
                        lVar52 = (ulong)bVar50 * 0x12;
                        pbVar31 = &DAT_004906da + lVar52;
                        bVar46 = (&DAT_004906d8)[lVar52];
                        if (bVar46 != 0) {
                          iVar19 = *piVar30 * 0x7f;
                          uVar23 = (uint)bVar42;
                          if (uVar24 == 0) {
                            uVar28 = bVar46 - 1;
                            if (bVar50 == 0) {
                              psVar34 = (short *)(&DAT_004906e0 + (ulong)uVar28 * 4);
                              if (uVar48 < 0x80) {
                                iVar58 = iVar18 + (int)_DAT_004906dc * uVar23;
                                if (iVar58 < -0x10eb4) {
                                  iVar58 = -0x10eb4;
                                }
                                lVar52 = (ulong)(uVar48 - 1) + 4;
                                if (0x10eb4 < iVar58) {
                                  iVar58 = 0x10eb4;
                                }
                                iVar58 = DAT_0057d254 + iVar58;
                                if (iVar58 < -0x2000) {
                                  iVar58 = -0x2000;
                                }
                                if (0x1fff < iVar58) {
                                  iVar58 = 0x1fff;
                                }
                                if ((*(char *)(&DAT_005dddc0 + lVar52) != '\0') ||
                                   (*(short *)((long)&DAT_005dddc0 + lVar52 * 4 + 2) !=
                                    (short)iVar58)) {
                                  uVar21 = (ulong)uVar48;
                                  uVar48 = uVar48 + 1;
                                  *(undefined1 *)(&DAT_005dddc0 + uVar21 + 4) = 0;
                                  *(short *)((long)&DAT_005dddc0 + (uVar21 + 4) * 4 + 2) =
                                       (short)iVar58;
                                }
                              }
                              psVar33 = (short *)&DAT_004906e0;
                              DAT_0057d254 = 0;
                              if (psVar34 != (short *)&DAT_004906e0) {
                                if ((uVar28 & 1) != 0) {
                                  if (uVar48 < 0x80) {
                                    iVar58 = iVar18 + (int)_DAT_004906e0 * uVar23;
                                    lVar52 = (ulong)(uVar48 - 1) + 4;
                                    if (iVar58 < -0x10eb4) {
                                      iVar58 = -0x10eb4;
                                    }
                                    if (0x10eb4 < iVar58) {
                                      iVar58 = 0x10eb4;
                                    }
                                    if (iVar58 < -0x2000) {
                                      iVar58 = -0x2000;
                                    }
                                    if (0x1fff < iVar58) {
                                      iVar58 = 0x1fff;
                                    }
                                    if ((*(char *)(&DAT_005dddc0 + lVar52) != '\0') ||
                                       (*(short *)((long)&DAT_005dddc0 + lVar52 * 4 + 2) !=
                                        (short)iVar58)) {
                                      uVar21 = (ulong)uVar48;
                                      uVar48 = uVar48 + 1;
                                      *(undefined1 *)(&DAT_005dddc0 + uVar21 + 4) = 0;
                                      *(short *)((long)&DAT_005dddc0 + (uVar21 + 4) * 4 + 2) =
                                           (short)iVar58;
                                    }
                                  }
                                  psVar33 = (short *)&DAT_004906e4;
                                  DAT_0057d254 = 0;
                                  if (psVar34 == (short *)&DAT_004906e4) goto LAB_001ff220;
                                }
                                do {
                                  if (uVar48 < 0x80) {
                                    iVar58 = iVar18 + (int)*psVar33 * uVar23;
                                    lVar52 = (ulong)(uVar48 - 1) + 4;
                                    if (iVar58 < -0x10eb4) {
                                      iVar58 = -0x10eb4;
                                    }
                                    if (0x10eb4 < iVar58) {
                                      iVar58 = 0x10eb4;
                                    }
                                    if (iVar58 < -0x2000) {
                                      iVar58 = -0x2000;
                                    }
                                    if (0x1fff < iVar58) {
                                      iVar58 = 0x1fff;
                                    }
                                    if ((*(char *)(&DAT_005dddc0 + lVar52) != '\0') ||
                                       (*(short *)((long)&DAT_005dddc0 + lVar52 * 4 + 2) !=
                                        (short)iVar58)) {
                                      uVar21 = (ulong)uVar48;
                                      uVar48 = uVar48 + 1;
                                      *(undefined1 *)(&DAT_005dddc0 + uVar21 + 4) = 0;
                                      *(short *)((long)&DAT_005dddc0 + (uVar21 + 4) * 4 + 2) =
                                           (short)iVar58;
                                    }
                                  }
                                  if (uVar48 < 0x80) {
                                    iVar58 = iVar18 + (int)psVar33[2] * uVar23;
                                    lVar52 = (ulong)(uVar48 - 1) + 4;
                                    if (iVar58 < -0x10eb4) {
                                      iVar58 = -0x10eb4;
                                    }
                                    if (0x10eb4 < iVar58) {
                                      iVar58 = 0x10eb4;
                                    }
                                    if (iVar58 < -0x2000) {
                                      iVar58 = -0x2000;
                                    }
                                    if (0x1fff < iVar58) {
                                      iVar58 = 0x1fff;
                                    }
                                    if ((*(char *)(&DAT_005dddc0 + lVar52) != '\0') ||
                                       (*(short *)((long)&DAT_005dddc0 + lVar52 * 4 + 2) !=
                                        (short)iVar58)) {
                                      uVar21 = (ulong)uVar48;
                                      uVar48 = uVar48 + 1;
                                      *(undefined1 *)(&DAT_005dddc0 + uVar21 + 4) = 0;
                                      *(short *)((long)&DAT_005dddc0 + (uVar21 + 4) * 4 + 2) =
                                           (short)iVar58;
                                    }
                                  }
                                  psVar33 = psVar33 + 4;
                                  DAT_0057d254 = 0;
                                } while (psVar33 != psVar34);
                              }
                            }
                            else {
                              pbVar43 = pbVar31 + (ulong)uVar28 * 4 + 6;
                              if (uVar48 < 0x80) {
                                iVar58 = iVar18 + (int)*(short *)(&DAT_004906dc + lVar52) * uVar23;
                                if (iVar58 < -0x10eb4) {
                                  iVar58 = -0x10eb4;
                                }
                                lVar53 = (ulong)(uVar48 - 1) + 4;
                                if (0x10eb4 < iVar58) {
                                  iVar58 = 0x10eb4;
                                }
                                iVar58 = DAT_0057d254 + iVar58;
                                if (iVar58 < -0x2000) {
                                  iVar58 = -0x2000;
                                }
                                if (0x1fff < iVar58) {
                                  iVar58 = 0x1fff;
                                }
                                if ((*(char *)(&DAT_005dddc0 + lVar53) != '\0') ||
                                   (*(short *)((long)&DAT_005dddc0 + lVar53 * 4 + 2) !=
                                    (short)iVar58)) {
                                  uVar21 = (ulong)uVar48;
                                  uVar48 = uVar48 + 1;
                                  *(undefined1 *)(&DAT_005dddc0 + uVar21 + 4) = 0;
                                  *(short *)((long)&DAT_005dddc0 + (uVar21 + 4) * 4 + 2) =
                                       (short)iVar58;
                                }
                              }
                              pbVar51 = &DAT_004906e0 + lVar52;
                              if (pbVar51 != pbVar43) {
                                if (((ulong)(pbVar43 + (-4 - (long)(&DAT_004906dc + lVar52))) >> 2 &
                                    1) != 0) {
                                  if (uVar48 < 0x80) {
                                    iVar58 = iVar18 + (int)*(short *)(&DAT_004906e0 + lVar52) *
                                                      uVar23;
                                    if (iVar58 < -0x10eb4) {
                                      iVar58 = -0x10eb4;
                                    }
                                    lVar53 = (ulong)(uVar48 - 1) + 4;
                                    if (0x10eb4 < iVar58) {
                                      iVar58 = 0x10eb4;
                                    }
                                    iVar58 = DAT_0057d254 + iVar58;
                                    if (iVar58 < -0x2000) {
                                      iVar58 = -0x2000;
                                    }
                                    if (0x1fff < iVar58) {
                                      iVar58 = 0x1fff;
                                    }
                                    if ((*(char *)(&DAT_005dddc0 + lVar53) != '\0') ||
                                       (*(short *)((long)&DAT_005dddc0 + lVar53 * 4 + 2) !=
                                        (short)iVar58)) {
                                      uVar21 = (ulong)uVar48;
                                      uVar48 = uVar48 + 1;
                                      *(undefined1 *)(&DAT_005dddc0 + uVar21 + 4) = 0;
                                      *(short *)((long)&DAT_005dddc0 + (uVar21 + 4) * 4 + 2) =
                                           (short)iVar58;
                                    }
                                  }
                                  pbVar51 = &DAT_004906e4 + lVar52;
                                  if (pbVar51 == pbVar43) goto LAB_001ff220;
                                }
                                do {
                                  if (uVar48 < 0x80) {
                                    iVar58 = iVar18 + (int)*(short *)pbVar51 * uVar23;
                                    if (iVar58 < -0x10eb4) {
                                      iVar58 = -0x10eb4;
                                    }
                                    lVar52 = (ulong)(uVar48 - 1) + 4;
                                    if (0x10eb4 < iVar58) {
                                      iVar58 = 0x10eb4;
                                    }
                                    iVar58 = DAT_0057d254 + iVar58;
                                    if (iVar58 < -0x2000) {
                                      iVar58 = -0x2000;
                                    }
                                    if (0x1fff < iVar58) {
                                      iVar58 = 0x1fff;
                                    }
                                    if ((*(char *)(&DAT_005dddc0 + lVar52) != '\0') ||
                                       (*(short *)((long)&DAT_005dddc0 + lVar52 * 4 + 2) !=
                                        (short)iVar58)) {
                                      uVar21 = (ulong)uVar48;
                                      uVar48 = uVar48 + 1;
                                      *(undefined1 *)(&DAT_005dddc0 + uVar21 + 4) = 0;
                                      *(short *)((long)&DAT_005dddc0 + (uVar21 + 4) * 4 + 2) =
                                           (short)iVar58;
                                    }
                                  }
                                  if (uVar48 < 0x80) {
                                    iVar58 = iVar18 + (int)*(short *)(pbVar51 + 4) * uVar23;
                                    if (iVar58 < -0x10eb4) {
                                      iVar58 = -0x10eb4;
                                    }
                                    lVar52 = (ulong)(uVar48 - 1) + 4;
                                    if (0x10eb4 < iVar58) {
                                      iVar58 = 0x10eb4;
                                    }
                                    iVar58 = DAT_0057d254 + iVar58;
                                    if (iVar58 < -0x2000) {
                                      iVar58 = -0x2000;
                                    }
                                    if (0x1fff < iVar58) {
                                      iVar58 = 0x1fff;
                                    }
                                    if ((*(char *)(&DAT_005dddc0 + lVar52) != '\0') ||
                                       (*(short *)((long)&DAT_005dddc0 + lVar52 * 4 + 2) !=
                                        (short)iVar58)) {
                                      uVar21 = (ulong)uVar48;
                                      uVar48 = uVar48 + 1;
                                      *(undefined1 *)(&DAT_005dddc0 + uVar21 + 4) = 0;
                                      *(short *)((long)&DAT_005dddc0 + (uVar21 + 4) * 4 + 2) =
                                           (short)iVar58;
                                    }
                                  }
                                  pbVar51 = pbVar51 + 8;
                                } while (pbVar51 != pbVar43);
                              }
                            }
                          }
                          else if (bVar50 == 0) {
                            uVar28 = bVar46 - 1;
                            psVar34 = (short *)(&DAT_004906e0 + (ulong)uVar28 * 4);
                            uVar59 = 0;
                            if (uVar24 != 0) {
                              uVar59 = (iVar19 + (uint)DAT_004906da * iVar58) / uVar24;
                            }
                            if (0x7f < uVar59) {
                              uVar59 = 0x7f;
                            }
                            if (uVar48 < 0x80) {
                              iVar25 = iVar18 + (int)_DAT_004906dc * uVar23;
                              if (iVar25 < -0x10eb4) {
                                iVar25 = -0x10eb4;
                              }
                              lVar52 = NEON_shl((ulong)(uVar48 - 1) + 4,2);
                              if (0x10eb4 < iVar25) {
                                iVar25 = 0x10eb4;
                              }
                              iVar25 = DAT_0057d254 + iVar25;
                              if (iVar25 < -0x2000) {
                                iVar25 = -0x2000;
                              }
                              if (0x1fff < iVar25) {
                                iVar25 = 0x1fff;
                              }
                              if (((uint)*(byte *)((long)&DAT_005dddc0 + lVar52) != (uVar59 & 0xff))
                                 || (*(short *)((long)&DAT_005dddc0 + lVar52 + 2) != (short)iVar25))
                              {
                                uVar21 = (ulong)uVar48;
                                uVar48 = uVar48 + 1;
                                *(char *)(&DAT_005dddc0 + uVar21 + 4) = (char)uVar59;
                                *(short *)((long)&DAT_005dddc0 + (uVar21 + 4) * 4 + 2) =
                                     (short)iVar25;
                              }
                            }
                            psVar33 = (short *)&DAT_004906e0;
                            DAT_0057d254 = 0;
                            if (psVar34 != (short *)&DAT_004906e0) {
                              if ((uVar28 & 1) != 0) {
                                uVar59 = 0;
                                if (uVar24 != 0) {
                                  uVar59 = (iVar19 + (uint)DAT_004906de * iVar58) / uVar24;
                                }
                                if (0x7f < uVar59) {
                                  uVar59 = 0x7f;
                                }
                                if (uVar48 < 0x80) {
                                  iVar25 = iVar18 + (int)_DAT_004906e0 * uVar23;
                                  lVar52 = NEON_shl((ulong)(uVar48 - 1) + 4,2);
                                  if (iVar25 < -0x10eb4) {
                                    iVar25 = -0x10eb4;
                                  }
                                  if (0x10eb4 < iVar25) {
                                    iVar25 = 0x10eb4;
                                  }
                                  if (iVar25 < -0x2000) {
                                    iVar25 = -0x2000;
                                  }
                                  if (0x1fff < iVar25) {
                                    iVar25 = 0x1fff;
                                  }
                                  if (((uint)*(byte *)((long)&DAT_005dddc0 + lVar52) !=
                                       (uVar59 & 0xff)) ||
                                     (*(short *)((long)&DAT_005dddc0 + lVar52 + 2) != (short)iVar25)
                                     ) {
                                    uVar21 = (ulong)uVar48;
                                    uVar48 = uVar48 + 1;
                                    *(char *)(&DAT_005dddc0 + uVar21 + 4) = (char)uVar59;
                                    *(short *)((long)&DAT_005dddc0 + (uVar21 + 4) * 4 + 2) =
                                         (short)iVar25;
                                  }
                                }
                                psVar33 = (short *)&DAT_004906e4;
                                DAT_0057d254 = 0;
                                if (psVar34 == (short *)&DAT_004906e4) goto LAB_001ff220;
                              }
                              do {
                                uVar59 = 0;
                                if (uVar24 != 0) {
                                  uVar59 = (iVar19 + (uint)*(byte *)(psVar33 + -1) * iVar58) /
                                           uVar24;
                                }
                                if (0x7f < uVar59) {
                                  uVar59 = 0x7f;
                                }
                                if (uVar48 < 0x80) {
                                  iVar25 = iVar18 + (int)*psVar33 * uVar23;
                                  if (iVar25 < -0x10eb4) {
                                    iVar25 = -0x10eb4;
                                  }
                                  lVar52 = (ulong)(uVar48 - 1) + 4;
                                  if (0x10eb4 < iVar25) {
                                    iVar25 = 0x10eb4;
                                  }
                                  if (iVar25 < -0x2000) {
                                    iVar25 = -0x2000;
                                  }
                                  if (0x1fff < iVar25) {
                                    iVar25 = 0x1fff;
                                  }
                                  if (((uint)*(byte *)(&DAT_005dddc0 + lVar52) != (uVar59 & 0xff))
                                     || (*(short *)((long)&DAT_005dddc0 + lVar52 * 4 + 2) !=
                                         (short)iVar25)) {
                                    uVar21 = (ulong)uVar48;
                                    uVar48 = uVar48 + 1;
                                    *(char *)(&DAT_005dddc0 + uVar21 + 4) = (char)uVar59;
                                    *(short *)((long)&DAT_005dddc0 + (uVar21 + 4) * 4 + 2) =
                                         (short)iVar25;
                                  }
                                }
                                uVar59 = 0;
                                if (uVar24 != 0) {
                                  uVar59 = (iVar19 + (uint)*(byte *)(psVar33 + 1) * iVar58) / uVar24
                                  ;
                                }
                                if (0x7f < uVar59) {
                                  uVar59 = 0x7f;
                                }
                                if (uVar48 < 0x80) {
                                  iVar25 = iVar18 + (int)psVar33[2] * uVar23;
                                  if (iVar25 < -0x10eb4) {
                                    iVar25 = -0x10eb4;
                                  }
                                  lVar52 = (ulong)(uVar48 - 1) + 4;
                                  if (0x10eb4 < iVar25) {
                                    iVar25 = 0x10eb4;
                                  }
                                  if (iVar25 < -0x2000) {
                                    iVar25 = -0x2000;
                                  }
                                  if (0x1fff < iVar25) {
                                    iVar25 = 0x1fff;
                                  }
                                  if (((uint)*(byte *)(&DAT_005dddc0 + lVar52) != (uVar59 & 0xff))
                                     || (*(short *)((long)&DAT_005dddc0 + lVar52 * 4 + 2) !=
                                         (short)iVar25)) {
                                    uVar21 = (ulong)uVar48;
                                    uVar48 = uVar48 + 1;
                                    *(char *)(&DAT_005dddc0 + uVar21 + 4) = (char)uVar59;
                                    *(short *)((long)&DAT_005dddc0 + (uVar21 + 4) * 4 + 2) =
                                         (short)iVar25;
                                  }
                                }
                                psVar33 = psVar33 + 4;
                                DAT_0057d254 = 0;
                              } while (psVar33 != psVar34);
                            }
                          }
                          else {
                            uVar28 = bVar46 - 1;
                            pbVar43 = pbVar31 + (ulong)uVar28 * 4 + 6;
                            uVar59 = 0;
                            if (uVar24 != 0) {
                              uVar59 = (iVar19 + (uint)*pbVar31 * iVar58) / uVar24;
                            }
                            if (0x7f < uVar59) {
                              uVar59 = 0x7f;
                            }
                            if (uVar48 < 0x80) {
                              iVar25 = iVar18 + (int)*(short *)(&DAT_004906dc + lVar52) * uVar23;
                              if (iVar25 < -0x10eb4) {
                                iVar25 = -0x10eb4;
                              }
                              lVar53 = NEON_shl((ulong)(uVar48 - 1) + 4,2);
                              if (0x10eb4 < iVar25) {
                                iVar25 = 0x10eb4;
                              }
                              iVar25 = DAT_0057d254 + iVar25;
                              if (iVar25 < -0x2000) {
                                iVar25 = -0x2000;
                              }
                              if (0x1fff < iVar25) {
                                iVar25 = 0x1fff;
                              }
                              if (((uint)*(byte *)((long)&DAT_005dddc0 + lVar53) != (uVar59 & 0xff))
                                 || (*(short *)((long)&DAT_005dddc0 + lVar53 + 2) != (short)iVar25))
                              {
                                uVar21 = (ulong)uVar48;
                                uVar48 = uVar48 + 1;
                                *(char *)(&DAT_005dddc0 + uVar21 + 4) = (char)uVar59;
                                *(short *)((long)&DAT_005dddc0 + (uVar21 + 4) * 4 + 2) =
                                     (short)iVar25;
                              }
                            }
                            pbVar51 = &DAT_004906e0 + lVar52;
                            if (pbVar51 != pbVar43) {
                              if (((ulong)(pbVar43 + (-4 - (long)(&DAT_004906dc + lVar52))) >> 2 & 1
                                  ) != 0) {
                                uVar59 = 0;
                                if (uVar24 != 0) {
                                  uVar59 = (iVar19 + (uint)(&DAT_004906de)[lVar52] * iVar58) /
                                           uVar24;
                                }
                                if (0x7f < uVar59) {
                                  uVar59 = 0x7f;
                                }
                                if (uVar48 < 0x80) {
                                  iVar25 = iVar18 + (int)*(short *)(&DAT_004906e0 + lVar52) * uVar23
                                  ;
                                  if (iVar25 < -0x10eb4) {
                                    iVar25 = -0x10eb4;
                                  }
                                  if (0x10eb4 < iVar25) {
                                    iVar25 = 0x10eb4;
                                  }
                                  lVar53 = NEON_shl((ulong)(uVar48 - 1) + 4,2);
                                  iVar25 = DAT_0057d254 + iVar25;
                                  if (iVar25 < -0x2000) {
                                    iVar25 = -0x2000;
                                  }
                                  if (0x1fff < iVar25) {
                                    iVar25 = 0x1fff;
                                  }
                                  if (((uint)*(byte *)((long)&DAT_005dddc0 + lVar53) !=
                                       (uVar59 & 0xff)) ||
                                     (*(short *)((long)&DAT_005dddc0 + lVar53 + 2) != (short)iVar25)
                                     ) {
                                    uVar21 = (ulong)uVar48;
                                    uVar48 = uVar48 + 1;
                                    *(char *)(&DAT_005dddc0 + uVar21 + 4) = (char)uVar59;
                                    *(short *)((long)&DAT_005dddc0 + (uVar21 + 4) * 4 + 2) =
                                         (short)iVar25;
                                  }
                                }
                                pbVar51 = &DAT_004906e4 + lVar52;
                                if (pbVar51 == pbVar43) goto LAB_001ff220;
                              }
                              do {
                                uVar59 = 0;
                                if (uVar24 != 0) {
                                  uVar59 = (iVar19 + (uint)pbVar51[-2] * iVar58) / uVar24;
                                }
                                if (0x7f < uVar59) {
                                  uVar59 = 0x7f;
                                }
                                if (uVar48 < 0x80) {
                                  iVar25 = iVar18 + (int)*(short *)pbVar51 * (uint)bVar42;
                                  if (iVar25 < -0x10eb4) {
                                    iVar25 = -0x10eb4;
                                  }
                                  lVar52 = (ulong)(uVar48 - 1) + 4;
                                  if (0x10eb4 < iVar25) {
                                    iVar25 = 0x10eb4;
                                  }
                                  iVar25 = DAT_0057d254 + iVar25;
                                  if (iVar25 < -0x2000) {
                                    iVar25 = -0x2000;
                                  }
                                  if (0x1fff < iVar25) {
                                    iVar25 = 0x1fff;
                                  }
                                  if (((uint)*(byte *)(&DAT_005dddc0 + lVar52) != (uVar59 & 0xff))
                                     || (*(short *)((long)&DAT_005dddc0 + lVar52 * 4 + 2) !=
                                         (short)iVar25)) {
                                    uVar21 = (ulong)uVar48;
                                    uVar48 = uVar48 + 1;
                                    *(char *)(&DAT_005dddc0 + uVar21 + 4) = (char)uVar59;
                                    *(short *)((long)&DAT_005dddc0 + (uVar21 + 4) * 4 + 2) =
                                         (short)iVar25;
                                  }
                                }
                                uVar59 = 0;
                                if (uVar24 != 0) {
                                  uVar59 = (iVar19 + (uint)pbVar51[2] * iVar58) / uVar24;
                                }
                                if (0x7f < uVar59) {
                                  uVar59 = 0x7f;
                                }
                                if (uVar48 < 0x80) {
                                  iVar25 = iVar18 + (int)*(short *)(pbVar51 + 4) * (uint)bVar42;
                                  if (iVar25 < -0x10eb4) {
                                    iVar25 = -0x10eb4;
                                  }
                                  lVar52 = (ulong)(uVar48 - 1) + 4;
                                  if (0x10eb4 < iVar25) {
                                    iVar25 = 0x10eb4;
                                  }
                                  iVar25 = DAT_0057d254 + iVar25;
                                  if (iVar25 < -0x2000) {
                                    iVar25 = -0x2000;
                                  }
                                  if (0x1fff < iVar25) {
                                    iVar25 = 0x1fff;
                                  }
                                  if (((uint)*(byte *)(&DAT_005dddc0 + lVar52) != (uVar59 & 0xff))
                                     || (*(short *)((long)&DAT_005dddc0 + lVar52 * 4 + 2) !=
                                         (short)iVar25)) {
                                    uVar21 = (ulong)uVar48;
                                    uVar48 = uVar48 + 1;
                                    *(char *)(&DAT_005dddc0 + uVar21 + 4) = (char)uVar59;
                                    *(short *)((long)&DAT_005dddc0 + (uVar21 + 4) * 4 + 2) =
                                         (short)iVar25;
                                  }
                                }
                                pbVar51 = pbVar51 + 8;
                              } while (pbVar51 != pbVar43);
                            }
                          }
LAB_001ff220:
                          iVar58 = uVar23 * (int)*(short *)(pbVar31 + (ulong)uVar28 * 4 + 2);
                          if ((int)(uVar23 * (int)*(short *)(pbVar31 + (ulong)uVar28 * 4 + 2)) <
                              -0x10eb4) {
                            iVar58 = -0x10eb4;
                          }
                          if (0x10eb4 < iVar58) {
                            iVar58 = 0x10eb4;
                          }
                          iVar19 = DAT_0057d254 + iVar58;
                          if (DAT_0057d254 + iVar58 < -0x10eb4) {
                            iVar19 = -0x10eb4;
                          }
                          DAT_0057d254 = iVar19;
                          if (0x10eb4 < iVar19) {
                            DAT_0057d254 = 0x10eb4;
                          }
                        }
                        piVar30 = piVar30 + 4;
                      } while (piVar30 != &DAT_005de270 + (ulong)(uVar44 - 1) * 4);
                      uVar21 = (ulong)uVar48;
                      if (uVar48 < 0x7f) goto LAB_001ff2b0;
                    }
                    iVar58 = (int)DAT_0057d258;
                    iVar18 = DAT_0057d258 + 0x60;
                    uVar44 = uVar48 & 0xff;
                    bVar42 = (byte)uVar48;
                    if (iVar18 < 0) {
                      iVar18 = 0;
                    }
                    DAT_005ddfd2 = 0;
                    if (0x7f < iVar18) {
                      iVar18 = 0x7f;
                    }
                    DAT_005ddfd4 = (undefined2)iVar18;
                    uVar48 = (uint)DAT_005dea5c;
                    DAT_005dddce = bVar42;
                    if (uVar48 == 0) {
                      uVar21 = 1;
LAB_001ff48c:
                      uVar23 = (uint)uVar21;
                      if ((&DAT_005ddfd2)[(ulong)(uVar23 - 1) * 4] != '\x7f') {
                        iVar18 = DAT_0057d258 + 0x60;
                        if (iVar18 < 0) {
                          iVar18 = 0;
                        }
                        if (0x7f < iVar18) {
                          iVar18 = 0x7f;
                        }
                        local_20 = (uint)DAT_005dddc9;
                        uVar47 = (uint)DAT_005dddcb;
                        uVar23 = uVar23 + 1;
                        *(undefined1 *)((long)&DAT_005dddc0 + (uVar21 + 0x84) * 4 + 2) = 0x7f;
                        *(short *)(&DAT_005dddc4 + uVar21 + 0x84) = (short)iVar18;
                      }
                    }
                    else {
                      piVar30 = &DAT_005dea64;
                      uVar21 = 1;
                      do {
                        bVar50 = *(byte *)(piVar30 + -1);
                        iVar18 = *piVar30;
                        iVar19 = piVar30[1];
                        lVar52 = (ulong)bVar50 * 0x12;
                        bVar46 = (&DAT_00490758)[lVar52];
                        if (bVar46 != 0) {
                          uVar23 = (uint)*(byte *)(piVar30 + 2);
                          if (uVar24 == 0) {
                            uVar28 = (uint)uVar21;
                            if (bVar50 == 0) {
                              uVar59 = bVar46 - 1;
                              iVar18 = (int)_DAT_0049075c * uVar23;
                              if (iVar18 < -99) {
                                iVar18 = -99;
                              }
                              if (99 < iVar18) {
                                iVar18 = 99;
                              }
                              if (uVar28 < 0x80) {
                                lVar53 = (ulong)(uVar28 - 1) + 0x84;
                                iVar18 = iVar58 + iVar18 + 0x60;
                                if (iVar18 < 0) {
                                  iVar18 = 0;
                                }
                                if (0x7f < iVar18) {
                                  iVar18 = 0x7f;
                                }
                                if ((*(char *)((long)&DAT_005dddc0 + lVar53 * 4 + 2) != '\0') ||
                                   (*(short *)(&DAT_005dddc4 + lVar53) != iVar18)) {
                                  *(undefined1 *)((long)&DAT_005dddc0 + (uVar21 + 0x84) * 4 + 2) = 0
                                  ;
                                  *(short *)(&DAT_005dddc4 + uVar21 + 0x84) = (short)iVar18;
                                  uVar21 = (ulong)(uVar28 + 1);
                                }
                              }
                              psVar34 = (short *)&DAT_00490760;
                              iVar58 = 0;
                              if (&DAT_00490760 + (ulong)uVar59 * 4 != &DAT_00490760) {
                                if ((uVar59 & 1) == 0) goto LAB_001ffdf4;
                                iVar18 = (int)_DAT_00490760 * uVar23;
                                if (iVar18 < -99) {
                                  iVar18 = -99;
                                }
                                if (99 < iVar18) {
                                  iVar18 = 99;
                                }
                                uVar28 = (uint)uVar21;
                                if (0x7f < uVar28) goto LAB_001ffde4;
                                iVar18 = iVar18 + 0x60;
                                if (iVar18 < 0) {
                                  iVar18 = 0;
                                }
                                do {
                                  lVar53 = (ulong)(uVar28 - 1) + 0x84;
                                  if (0x7f < iVar18) {
                                    iVar18 = 0x7f;
                                  }
                                  if ((*(char *)((long)&DAT_005dddc0 + lVar53 * 4 + 2) != '\0') ||
                                     (*(short *)(&DAT_005dddc4 + lVar53) != iVar18)) {
                                    *(undefined1 *)((long)&DAT_005dddc0 + (uVar21 + 0x84) * 4 + 2) =
                                         0;
                                    *(short *)(&DAT_005dddc4 + uVar21 + 0x84) = (short)iVar18;
                                    uVar21 = (ulong)((int)uVar21 + 1);
                                  }
LAB_001ffde4:
                                  do {
                                    psVar34 = psVar34 + 2;
                                    iVar58 = 0;
                                    if (psVar34 == (short *)(&DAT_00490760 + (ulong)uVar59 * 4))
                                    goto LAB_001ff440;
LAB_001ffdf4:
                                    iVar18 = (int)*psVar34 * uVar23;
                                    if (iVar18 < -99) {
                                      iVar18 = -99;
                                    }
                                    if (99 < iVar18) {
                                      iVar18 = 99;
                                    }
                                    uVar28 = (uint)uVar21;
                                    if (uVar28 < 0x80) {
                                      iVar18 = iVar18 + 0x60;
                                      lVar53 = (ulong)(uVar28 - 1) + 0x84;
                                      if (iVar18 < 0) {
                                        iVar18 = 0;
                                      }
                                      if (0x7f < iVar18) {
                                        iVar18 = 0x7f;
                                      }
                                      if ((*(char *)((long)&DAT_005dddc0 + lVar53 * 4 + 2) != '\0')
                                         || (*(short *)(&DAT_005dddc4 + lVar53) != iVar18)) {
                                        *(undefined1 *)
                                         ((long)&DAT_005dddc0 + (uVar21 + 0x84) * 4 + 2) = 0;
                                        *(short *)(&DAT_005dddc4 + uVar21 + 0x84) = (short)iVar18;
                                        uVar21 = (ulong)(uVar28 + 1);
                                      }
                                    }
                                    psVar33 = psVar34 + 2;
                                    psVar34 = psVar34 + 2;
                                    iVar18 = (int)*psVar33 * uVar23;
                                    if (iVar18 < -99) {
                                      iVar18 = -99;
                                    }
                                    if (99 < iVar18) {
                                      iVar18 = 99;
                                    }
                                    uVar28 = (uint)uVar21;
                                  } while (0x7f < uVar28);
                                  iVar18 = iVar18 + 0x60;
                                  if (iVar18 < 0) {
                                    iVar18 = 0;
                                  }
                                } while( true );
                              }
                            }
                            else {
                              uVar59 = bVar46 - 1;
                              psVar34 = (short *)(&DAT_0049075a + (ulong)uVar59 * 4 + 6 + lVar52);
                              iVar18 = (int)*(short *)(&DAT_0049075c + lVar52) * uVar23;
                              if (iVar18 < -99) {
                                iVar18 = -99;
                              }
                              if (99 < iVar18) {
                                iVar18 = 99;
                              }
                              if (uVar28 < 0x80) {
                                lVar53 = (ulong)(uVar28 - 1) + 0x84;
                                iVar18 = iVar58 + iVar18 + 0x60;
                                if (iVar18 < 0) {
                                  iVar18 = 0;
                                }
                                if (0x7f < iVar18) {
                                  iVar18 = 0x7f;
                                }
                                if ((*(char *)((long)&DAT_005dddc0 + lVar53 * 4 + 2) != '\0') ||
                                   (*(short *)(&DAT_005dddc4 + lVar53) != iVar18)) {
                                  *(undefined1 *)((long)&DAT_005dddc0 + (uVar21 + 0x84) * 4 + 2) = 0
                                  ;
                                  *(short *)(&DAT_005dddc4 + uVar21 + 0x84) = (short)iVar18;
                                  uVar21 = (ulong)(uVar28 + 1);
                                }
                              }
                              psVar33 = (short *)(&DAT_00490760 + lVar52);
                              if (psVar33 != psVar34) {
                                if (((ulong)((long)psVar34 + (-4 - (long)(&DAT_0049075c + lVar52)))
                                     >> 2 & 1) == 0) goto LAB_001ff67c;
                                iVar18 = (int)*(short *)(&DAT_00490760 + lVar52) * uVar23;
                                if (iVar18 < -99) {
                                  iVar18 = -99;
                                }
                                if (99 < iVar18) {
                                  iVar18 = 99;
                                }
                                if (0x7f < (uint)uVar21) goto LAB_001ff670;
                                iVar18 = iVar58 + iVar18 + 0x60;
                                if (iVar18 < 0) {
                                  iVar18 = 0;
                                }
                                lVar53 = ((ulong)((uint)uVar21 - 1) + 0x84) * 4;
                                if (0x7f < iVar18) {
                                  iVar18 = 0x7f;
                                }
                                if (*(char *)((long)&DAT_005dddc0 + lVar53 + 2) == '\0')
                                goto LAB_001ff728;
                                do {
                                  *(undefined1 *)((long)&DAT_005dddc0 + (uVar21 + 0x84) * 4 + 2) = 0
                                  ;
                                  *(short *)(&DAT_005dddc4 + uVar21 + 0x84) = (short)iVar18;
                                  uVar21 = (ulong)((int)uVar21 + 1);
LAB_001ff670:
                                  do {
                                    do {
                                      psVar33 = psVar33 + 2;
                                      if (psVar33 == psVar34) goto LAB_001ff440;
LAB_001ff67c:
                                      iVar18 = (int)*psVar33 * uVar23;
                                      if (iVar18 < -99) {
                                        iVar18 = -99;
                                      }
                                      if (99 < iVar18) {
                                        iVar18 = 99;
                                      }
                                      uVar28 = (uint)uVar21;
                                      if (uVar28 < 0x80) {
                                        lVar53 = (ulong)(uVar28 - 1) + 0x84;
                                        iVar18 = iVar58 + iVar18 + 0x60;
                                        if (iVar18 < 0) {
                                          iVar18 = 0;
                                        }
                                        if (0x7f < iVar18) {
                                          iVar18 = 0x7f;
                                        }
                                        if ((*(char *)((long)&DAT_005dddc0 + lVar53 * 4 + 2) != '\0'
                                            ) || (*(short *)(&DAT_005dddc4 + lVar53) != iVar18)) {
                                          *(undefined1 *)
                                           ((long)&DAT_005dddc0 + (uVar21 + 0x84) * 4 + 2) = 0;
                                          *(short *)(&DAT_005dddc4 + uVar21 + 0x84) = (short)iVar18;
                                          uVar21 = (ulong)(uVar28 + 1);
                                        }
                                      }
                                      psVar1 = psVar33 + 2;
                                      psVar33 = psVar33 + 2;
                                      iVar18 = (int)*psVar1 * uVar23;
                                      if (iVar18 < -99) {
                                        iVar18 = -99;
                                      }
                                      if (99 < iVar18) {
                                        iVar18 = 99;
                                      }
                                    } while (0x7f < (uint)uVar21);
                                    iVar18 = iVar58 + iVar18 + 0x60;
                                    if (iVar18 < 0) {
                                      iVar18 = 0;
                                    }
                                    lVar53 = ((ulong)((uint)uVar21 - 1) + 0x84) * 4;
                                    if (0x7f < iVar18) {
                                      iVar18 = 0x7f;
                                    }
                                    if (*(char *)((long)&DAT_005dddc0 + lVar53 + 2) != '\0') break;
LAB_001ff728:
                                  } while (*(short *)((long)&DAT_005dddc4 + lVar53) == iVar18);
                                } while( true );
                              }
                            }
                          }
                          else {
                            uVar59 = bVar46 - 1;
                            if (bVar50 == 0) {
                              psVar34 = (short *)&DAT_0049075c;
                              iVar25 = iVar58;
                              do {
                                iVar58 = (int)*psVar34 * uVar23;
                                uVar28 = 0;
                                if (uVar24 != 0) {
                                  uVar28 = (iVar18 * 0x7f + (uint)*(byte *)(psVar34 + -1) * iVar19)
                                           / uVar24;
                                }
                                if (0x7f < uVar28) {
                                  uVar28 = 0x7f;
                                }
                                if (iVar58 < -99) {
                                  iVar58 = -99;
                                }
                                if (99 < iVar58) {
                                  iVar58 = 99;
                                }
                                uVar35 = (uint)uVar21;
                                if (uVar35 < 0x80) {
                                  lVar53 = (ulong)(uVar35 - 1) + 0x84;
                                  iVar58 = iVar25 + iVar58 + 0x60;
                                  if (iVar58 < 0) {
                                    iVar58 = 0;
                                  }
                                  if (0x7f < iVar58) {
                                    iVar58 = 0x7f;
                                  }
                                  if ((*(byte *)((long)&DAT_005dddc0 + lVar53 * 4 + 2) != uVar28) ||
                                     (*(short *)(&DAT_005dddc4 + lVar53) != iVar58)) {
                                    *(char *)((long)&DAT_005dddc0 + (uVar21 + 0x84) * 4 + 2) =
                                         (char)uVar28;
                                    *(short *)(&DAT_005dddc4 + uVar21 + 0x84) = (short)iVar58;
                                    uVar21 = (ulong)(uVar35 + 1);
                                  }
                                }
                                psVar34 = psVar34 + 2;
                                iVar25 = 0;
                                iVar58 = 0;
                              } while (psVar34 != (short *)(&DAT_00490760 + (ulong)uVar59 * 4));
                            }
                            else {
                              psVar34 = (short *)(&DAT_0049075c + lVar52);
                              do {
                                iVar25 = (int)*psVar34 * uVar23;
                                uVar28 = 0;
                                if (uVar24 != 0) {
                                  uVar28 = (iVar18 * 0x7f + (uint)*(byte *)(psVar34 + -1) * iVar19)
                                           / uVar24;
                                }
                                if (0x7f < uVar28) {
                                  uVar28 = 0x7f;
                                }
                                if (iVar25 < -99) {
                                  iVar25 = -99;
                                }
                                if (99 < iVar25) {
                                  iVar25 = 99;
                                }
                                uVar35 = (uint)uVar21;
                                if (uVar35 < 0x80) {
                                  lVar53 = (ulong)(uVar35 - 1) + 0x84;
                                  iVar25 = iVar58 + iVar25 + 0x60;
                                  if (iVar25 < 0) {
                                    iVar25 = 0;
                                  }
                                  if (0x7f < iVar25) {
                                    iVar25 = 0x7f;
                                  }
                                  if ((*(byte *)((long)&DAT_005dddc0 + lVar53 * 4 + 2) != uVar28) ||
                                     (*(short *)(&DAT_005dddc4 + lVar53) != iVar25)) {
                                    *(char *)((long)&DAT_005dddc0 + (uVar21 + 0x84) * 4 + 2) =
                                         (char)uVar28;
                                    *(short *)(&DAT_005dddc4 + uVar21 + 0x84) = (short)iVar25;
                                    uVar21 = (ulong)(uVar35 + 1);
                                  }
                                }
                                psVar34 = psVar34 + 2;
                              } while (psVar34 !=
                                       (short *)(&DAT_0049075a + (ulong)uVar59 * 4 + 6 + lVar52));
                            }
                          }
LAB_001ff440:
                          iVar18 = uVar23 * (int)*(short *)(&DAT_0049075a +
                                                           (ulong)uVar59 * 4 + lVar52 + 2);
                          if (iVar18 < -99) {
                            iVar18 = -99;
                          }
                          if (99 < iVar18) {
                            iVar18 = 99;
                          }
                          iVar58 = iVar58 + iVar18;
                          if (iVar58 < -99) {
                            iVar58 = -99;
                          }
                          if (99 < iVar58) {
                            iVar58 = 99;
                          }
                          iVar58 = (int)(short)iVar58;
                        }
                        uVar23 = (uint)uVar21;
                        piVar30 = piVar30 + 4;
                      } while (piVar30 != &DAT_005dea74 + (ulong)(uVar48 - 1) * 4);
                      DAT_0057d258 = (short)iVar58;
                      if (uVar23 < 0x7f) goto LAB_001ff48c;
                    }
                    DAT_005ddfd0 = (byte)uVar23;
                    uVar23 = uVar23 & 0xff;
                    bVar46 = DAT_005ddfd0;
                  }
                  bVar50 = DAT_005de1d2;
                  if (uVar24 == 0) {
                    DAT_005de1d2 = 0;
                    uVar48 = 0;
                  }
                  else {
                    if (DAT_005de1d2 != 0) {
                      uVar28 = DAT_005de1d2 - 1;
                      puVar2 = &DAT_005de1d4 + uVar28;
                      piVar30 = &DAT_005df264;
                      uVar21 = (ulong)uVar28 & 3;
                      uVar48 = 0;
                      if (uVar24 != 0) {
                        uVar48 = (uint)(DAT_005df260 * 0x7f) / uVar24;
                      }
                      if (0x7f < uVar48) {
                        uVar48 = 0x7f;
                      }
                      puVar40 = &DAT_005de1d4;
                      DAT_005de1d3 = (undefined1)uVar48;
                      if (puVar2 != &DAT_005de1d4) {
                        puVar41 = puVar40;
                        if ((uVar28 & 3) != 0) {
                          if (uVar21 != 1) {
                            piVar45 = piVar30;
                            if (uVar21 != 2) {
                              piVar45 = &DAT_005df268;
                              puVar41 = &DAT_005de1d5;
                              uVar48 = 0;
                              if (uVar24 != 0) {
                                uVar48 = (uint)(DAT_005df264 * 0x7f) / uVar24;
                              }
                              if (0x7f < uVar48) {
                                uVar48 = 0x7f;
                              }
                              DAT_005de1d4 = (undefined1)uVar48;
                            }
                            piVar30 = piVar45 + 1;
                            uVar48 = 0;
                            if (uVar24 != 0) {
                              uVar48 = (uint)(*piVar45 * 0x7f) / uVar24;
                            }
                            if (0x7f < uVar48) {
                              uVar48 = 0x7f;
                            }
                            puVar40 = puVar41 + 1;
                            *puVar41 = (char)uVar48;
                          }
                          uVar48 = 0;
                          if (uVar24 != 0) {
                            uVar48 = (uint)(*piVar30 * 0x7f) / uVar24;
                          }
                          if (0x7f < uVar48) {
                            uVar48 = 0x7f;
                          }
                          *puVar40 = (char)uVar48;
                          puVar41 = puVar40 + 1;
                          piVar30 = piVar30 + 1;
                          if (puVar40 + 1 == puVar2) goto LAB_00200ac0;
                        }
                        do {
                          iVar18 = piVar30[3];
                          puVar40 = puVar41 + 4;
                          iVar58 = piVar30[2];
                          uVar48 = 0;
                          if (uVar24 != 0) {
                            uVar48 = (uint)(piVar30[1] * 0x7f) / uVar24;
                          }
                          uVar28 = 0;
                          if (uVar24 != 0) {
                            uVar28 = (uint)(*piVar30 * 0x7f) / uVar24;
                          }
                          if (0x7f < uVar28) {
                            uVar28 = 0x7f;
                          }
                          *puVar41 = (char)uVar28;
                          if (0x7f < uVar48) {
                            uVar48 = 0x7f;
                          }
                          puVar41[1] = (char)uVar48;
                          uVar48 = 0;
                          if (uVar24 != 0) {
                            uVar48 = (uint)(iVar58 * 0x7f) / uVar24;
                          }
                          if (0x7f < uVar48) {
                            uVar48 = 0x7f;
                          }
                          puVar41[2] = (char)uVar48;
                          uVar48 = 0;
                          if (uVar24 != 0) {
                            uVar48 = (uint)(iVar18 * 0x7f) / uVar24;
                          }
                          if (0x7f < uVar48) {
                            uVar48 = 0x7f;
                          }
                          puVar41[3] = (char)uVar48;
                          puVar41 = puVar40;
                          piVar30 = piVar30 + 4;
                        } while (puVar40 != puVar2);
                      }
                    }
LAB_00200ac0:
                    uVar48 = (uint)bVar50;
                  }
                  if (uVar47 >> 7 != 0) {
                    uVar47 = 0x7f;
                    DAT_005dddcb = 0x7f;
                  }
                  if ((char)bVar42 < '\0') {
                    iVar18 = 0x17d;
                    DAT_005dddce = 0x7f;
                  }
                  else {
                    iVar18 = uVar44 * 3;
                  }
                  if ((char)bVar46 < '\0') {
                    iVar58 = 0xfe;
                    DAT_005ddfd0 = 0x7f;
                  }
                  else {
                    iVar58 = uVar23 << 1;
                  }
                  if (local_20 >> 7 != 0) {
                    DAT_005dddc9 = 0x7f;
                  }
                  iVar18 = uVar47 + iVar18 + iVar58 + uVar48;
                  if (iVar18 + 0x13U < param_2) {
                    if (DAT_0057c584 == 0) {
                      uVar44 = 0;
LAB_002016d0:
                      lVar39 = 4;
                      bVar42 = (byte)uVar44;
                      lVar57 = 1;
                      lVar53 = 0;
                      lVar49 = 3;
                      iVar58 = 4;
                      lVar52 = 2;
                    }
                    else {
                      if (DAT_0057d260 < 0x1ffff) {
                        if (DAT_0057c584 == 0x14) {
                          uVar21 = (ulong)(DAT_0057d260 * 0x666 >> 0xf);
                        }
                        else {
                          uVar44 = DAT_0057d260 * DAT_0057c588 >> 0xf;
                          uVar21 = (ulong)uVar44;
                          if ((DAT_0057d260 * DAT_0057c588 >> 0xe & 1) != 0) {
                            uVar21 = (ulong)(uVar44 + 1);
                          }
                        }
                        uVar44 = (int)uVar21 * DAT_0057c584;
                        if (uVar44 < DAT_0057d260) {
LAB_00200b20:
                          iVar58 = 0;
                          do {
                            iVar19 = (int)uVar21;
                            uVar21 = (ulong)(iVar19 + 1);
                            if (DAT_0057d260 <= iVar58 + DAT_0057c584 + uVar44) break;
                            iVar58 = iVar58 + DAT_0057c584 + DAT_0057c584;
                            uVar21 = (ulong)(iVar19 + 2);
                            if (DAT_0057d260 <= iVar58 + uVar44) break;
                            iVar58 = iVar58 + DAT_0057c584;
                            uVar21 = (ulong)(iVar19 + 3);
                            if (DAT_0057d260 <= iVar58 + uVar44) break;
                            iVar58 = iVar58 + DAT_0057c584;
                            uVar21 = (ulong)(iVar19 + 4);
                            if (DAT_0057d260 <= iVar58 + uVar44) break;
                            iVar58 = iVar58 + DAT_0057c584;
                            uVar21 = (ulong)(iVar19 + 5);
                            if (DAT_0057d260 <= iVar58 + uVar44) break;
                            iVar58 = iVar58 + DAT_0057c584;
                            uVar21 = (ulong)(iVar19 + 6);
                            if (DAT_0057d260 <= iVar58 + uVar44) break;
                            iVar58 = iVar58 + DAT_0057c584;
                            uVar21 = (ulong)(iVar19 + 7);
                            if (DAT_0057d260 <= iVar58 + uVar44) break;
                            iVar58 = iVar58 + DAT_0057c584;
                            uVar21 = (ulong)(iVar19 + 8);
                            if (DAT_0057d260 <= iVar58 + uVar44) break;
                            iVar58 = iVar58 + DAT_0057c584;
                            uVar21 = (ulong)(iVar19 + 9);
                            if (DAT_0057d260 <= iVar58 + uVar44) break;
                            iVar58 = iVar58 + DAT_0057c584;
                            uVar21 = (ulong)(iVar19 + 10);
                            if (DAT_0057d260 <= iVar58 + uVar44) break;
                            iVar58 = iVar58 + DAT_0057c584;
                            uVar21 = (ulong)(iVar19 + 0xb);
                            if (DAT_0057d260 <= iVar58 + uVar44) break;
                            iVar58 = iVar58 + DAT_0057c584;
                            uVar21 = (ulong)(iVar19 + 0xc);
                            if (DAT_0057d260 <= iVar58 + uVar44) break;
                            iVar58 = iVar58 + DAT_0057c584;
                            uVar21 = (ulong)(iVar19 + 0xd);
                            if (DAT_0057d260 <= iVar58 + uVar44) break;
                            iVar58 = iVar58 + DAT_0057c584;
                            uVar21 = (ulong)(iVar19 + 0xe);
                            if (DAT_0057d260 <= iVar58 + uVar44) break;
                            iVar58 = iVar58 + DAT_0057c584;
                            uVar21 = (ulong)(iVar19 + 0xf);
                            if (DAT_0057d260 <= iVar58 + uVar44) break;
                            iVar58 = iVar58 + DAT_0057c584;
                            uVar21 = (ulong)(iVar19 + 0x10);
                          } while (iVar58 + uVar44 < DAT_0057d260);
                          goto LAB_00200c68;
                        }
LAB_00201734:
                        uVar44 = (uint)uVar21;
                        if (0x3fff < uVar44) {
                          bVar50 = (byte)(uVar21 >> 0xe) & 0x7f | 0x80;
                          bVar46 = (byte)(uVar21 >> 7) & 0x7f | 0x80;
                          bVar42 = (byte)uVar21 & 0x7f;
                          goto LAB_00200c80;
                        }
                        if (uVar44 < 0x80) goto LAB_002016d0;
                        lVar39 = 5;
                        bVar46 = (byte)(uVar21 >> 7) & 0x7f | 0x80;
                        bVar42 = (byte)uVar21 & 0x7f;
                        lVar57 = 2;
                        lVar53 = 1;
                        lVar49 = 4;
                        iVar58 = 5;
                        lVar52 = 3;
                        lVar56 = 0;
                      }
                      else {
                        uVar44 = 0;
                        if (DAT_0057c584 != 0) {
                          uVar44 = DAT_0057d260 / DAT_0057c584;
                        }
                        uVar21 = (ulong)uVar44;
                        uVar44 = DAT_0057c584 * uVar44;
                        if (uVar44 < DAT_0057d260) goto LAB_00200b20;
LAB_00200c68:
                        if ((uint)uVar21 < 0x200000) goto LAB_00201734;
                        bVar46 = 0xff;
                        bVar42 = 0x7f;
                        bVar50 = 0xff;
LAB_00200c80:
                        lVar39 = 6;
                        *param_1 = bVar50;
                        lVar57 = 3;
                        lVar53 = 2;
                        lVar49 = 5;
                        iVar58 = 6;
                        lVar52 = 4;
                        lVar56 = 1;
                      }
                      param_1[lVar56] = bVar46;
                    }
                    param_1[lVar53] = bVar42;
                    param_1[lVar57] = 0x90;
                    bVar42 = DAT_005dddc8;
                    if (0x7f < DAT_005dddc8) {
                      bVar42 = 0x7f;
                    }
                    param_1[lVar52] = bVar42 | 0x80;
                    bVar42 = DAT_005dddc9;
                    if (0x7f < DAT_005dddc9) {
                      bVar42 = 0x7f;
                    }
                    param_1[lVar49] = bVar42;
                    if (DAT_0057c584 == 0) {
                      uVar44 = 0;
LAB_0020167c:
                      lVar52 = 1;
                      bVar42 = (byte)uVar44;
                      lVar56 = 0;
                      iVar19 = 1;
                    }
                    else {
                      if (DAT_005dddc0 < 0x1ffff) {
                        if (DAT_0057c584 == 0x14) {
                          uVar21 = (ulong)(DAT_005dddc0 * 0x666 >> 0xf);
                        }
                        else {
                          uVar44 = DAT_005dddc0 * DAT_0057c588 >> 0xf;
                          uVar21 = (ulong)uVar44;
                          if ((DAT_005dddc0 * DAT_0057c588 >> 0xe & 1) != 0) {
                            uVar21 = (ulong)(uVar44 + 1);
                          }
                        }
                        uVar44 = (int)uVar21 * DAT_0057c584;
                        if (uVar44 < DAT_005dddc0) {
LAB_00200d18:
                          iVar19 = 0;
                          do {
                            iVar25 = (int)uVar21;
                            uVar21 = (ulong)(iVar25 + 1);
                            if (DAT_005dddc0 <= iVar19 + DAT_0057c584 + uVar44) break;
                            iVar19 = iVar19 + DAT_0057c584 + DAT_0057c584;
                            uVar21 = (ulong)(iVar25 + 2);
                            if (DAT_005dddc0 <= iVar19 + uVar44) break;
                            iVar19 = iVar19 + DAT_0057c584;
                            uVar21 = (ulong)(iVar25 + 3);
                            if (DAT_005dddc0 <= iVar19 + uVar44) break;
                            iVar19 = iVar19 + DAT_0057c584;
                            uVar21 = (ulong)(iVar25 + 4);
                            if (DAT_005dddc0 <= iVar19 + uVar44) break;
                            iVar19 = iVar19 + DAT_0057c584;
                            uVar21 = (ulong)(iVar25 + 5);
                            if (DAT_005dddc0 <= iVar19 + uVar44) break;
                            iVar19 = iVar19 + DAT_0057c584;
                            uVar21 = (ulong)(iVar25 + 6);
                            if (DAT_005dddc0 <= iVar19 + uVar44) break;
                            iVar19 = iVar19 + DAT_0057c584;
                            uVar21 = (ulong)(iVar25 + 7);
                            if (DAT_005dddc0 <= iVar19 + uVar44) break;
                            iVar19 = iVar19 + DAT_0057c584;
                            uVar21 = (ulong)(iVar25 + 8);
                            if (DAT_005dddc0 <= iVar19 + uVar44) break;
                            iVar19 = iVar19 + DAT_0057c584;
                            uVar21 = (ulong)(iVar25 + 9);
                            if (DAT_005dddc0 <= iVar19 + uVar44) break;
                            iVar19 = iVar19 + DAT_0057c584;
                            uVar21 = (ulong)(iVar25 + 10);
                            if (DAT_005dddc0 <= iVar19 + uVar44) break;
                            iVar19 = iVar19 + DAT_0057c584;
                            uVar21 = (ulong)(iVar25 + 0xb);
                            if (DAT_005dddc0 <= iVar19 + uVar44) break;
                            iVar19 = iVar19 + DAT_0057c584;
                            uVar21 = (ulong)(iVar25 + 0xc);
                            if (DAT_005dddc0 <= iVar19 + uVar44) break;
                            iVar19 = iVar19 + DAT_0057c584;
                            uVar21 = (ulong)(iVar25 + 0xd);
                            if (DAT_005dddc0 <= iVar19 + uVar44) break;
                            iVar19 = iVar19 + DAT_0057c584;
                            uVar21 = (ulong)(iVar25 + 0xe);
                            if (DAT_005dddc0 <= iVar19 + uVar44) break;
                            iVar19 = iVar19 + DAT_0057c584;
                            uVar21 = (ulong)(iVar25 + 0xf);
                            if (DAT_005dddc0 <= iVar19 + uVar44) break;
                            iVar19 = iVar19 + DAT_0057c584;
                            uVar21 = (ulong)(iVar25 + 0x10);
                          } while (iVar19 + uVar44 < DAT_005dddc0);
                          goto LAB_0020103c;
                        }
LAB_00201858:
                        uVar44 = (uint)uVar21;
                        if (0x3fff < uVar44) {
                          bVar50 = (byte)(uVar21 >> 0xe) & 0x7f | 0x80;
                          bVar46 = (byte)(uVar21 >> 7) & 0x7f | 0x80;
                          bVar42 = (byte)uVar21 & 0x7f;
                          goto LAB_00201058;
                        }
                        if (uVar44 < 0x80) goto LAB_0020167c;
                        lVar52 = 2;
                        bVar46 = (byte)(uVar21 >> 7) & 0x7f | 0x80;
                        bVar42 = (byte)uVar21 & 0x7f;
                        lVar56 = 1;
                        iVar19 = 2;
                        lVar53 = 0;
                      }
                      else {
                        uVar44 = 0;
                        if (DAT_0057c584 != 0) {
                          uVar44 = DAT_005dddc0 / DAT_0057c584;
                        }
                        uVar21 = (ulong)uVar44;
                        uVar44 = DAT_0057c584 * uVar44;
                        if (uVar44 < DAT_005dddc0) goto LAB_00200d18;
LAB_0020103c:
                        if ((uint)uVar21 < 0x200000) goto LAB_00201858;
                        bVar46 = 0xff;
                        bVar42 = 0x7f;
                        bVar50 = 0xff;
LAB_00201058:
                        lVar52 = 3;
                        param_1[lVar39] = bVar50;
                        lVar56 = 2;
                        iVar19 = 3;
                        lVar53 = 1;
                      }
                      param_1[lVar53 + lVar39] = bVar46;
                    }
                    param_1[lVar56 + lVar39] = bVar42;
                    uVar44 = iVar19 + iVar58;
                    param_1[lVar52 + lVar39] = '\0';
                    DAT_0057d264 = DAT_005dddc0;
                    if (DAT_0057c584 == 0) {
                      uVar24 = 0;
LAB_002016b4:
                      lVar52 = 1;
                      bVar42 = (byte)uVar24;
                      lVar56 = 0;
                      iVar58 = 1;
                    }
                    else {
                      if (DAT_005dddc4 < 0x1ffff) {
                        if (DAT_0057c584 == 0x14) {
                          uVar21 = (ulong)(DAT_005dddc4 * 0x666 >> 0xf);
                        }
                        else {
                          uVar24 = DAT_005dddc4 * DAT_0057c588 >> 0xf;
                          uVar21 = (ulong)uVar24;
                          if ((DAT_005dddc4 * DAT_0057c588 >> 0xe & 1) != 0) {
                            uVar21 = (ulong)(uVar24 + 1);
                          }
                        }
                        uVar24 = (int)uVar21 * DAT_0057c584;
                        if (uVar24 < DAT_005dddc4) {
LAB_002010c4:
                          iVar58 = 0;
                          do {
                            iVar19 = (int)uVar21;
                            uVar21 = (ulong)(iVar19 + 1);
                            if (DAT_005dddc4 <= uVar24 + iVar58 + DAT_0057c584) break;
                            iVar58 = iVar58 + DAT_0057c584 + DAT_0057c584;
                            uVar21 = (ulong)(iVar19 + 2);
                            if (DAT_005dddc4 <= uVar24 + iVar58) break;
                            iVar58 = iVar58 + DAT_0057c584;
                            uVar21 = (ulong)(iVar19 + 3);
                            if (DAT_005dddc4 <= uVar24 + iVar58) break;
                            iVar58 = iVar58 + DAT_0057c584;
                            uVar21 = (ulong)(iVar19 + 4);
                            if (DAT_005dddc4 <= uVar24 + iVar58) break;
                            iVar58 = iVar58 + DAT_0057c584;
                            uVar21 = (ulong)(iVar19 + 5);
                            if (DAT_005dddc4 <= uVar24 + iVar58) break;
                            iVar58 = iVar58 + DAT_0057c584;
                            uVar21 = (ulong)(iVar19 + 6);
                            if (DAT_005dddc4 <= uVar24 + iVar58) break;
                            iVar58 = iVar58 + DAT_0057c584;
                            uVar21 = (ulong)(iVar19 + 7);
                            if (DAT_005dddc4 <= uVar24 + iVar58) break;
                            iVar58 = iVar58 + DAT_0057c584;
                            uVar21 = (ulong)(iVar19 + 8);
                            if (DAT_005dddc4 <= uVar24 + iVar58) break;
                            iVar58 = iVar58 + DAT_0057c584;
                            uVar21 = (ulong)(iVar19 + 9);
                            if (DAT_005dddc4 <= uVar24 + iVar58) break;
                            iVar58 = iVar58 + DAT_0057c584;
                            uVar21 = (ulong)(iVar19 + 10);
                            if (DAT_005dddc4 <= uVar24 + iVar58) break;
                            iVar58 = iVar58 + DAT_0057c584;
                            uVar21 = (ulong)(iVar19 + 0xb);
                            if (DAT_005dddc4 <= uVar24 + iVar58) break;
                            iVar58 = iVar58 + DAT_0057c584;
                            uVar21 = (ulong)(iVar19 + 0xc);
                            if (DAT_005dddc4 <= uVar24 + iVar58) break;
                            iVar58 = iVar58 + DAT_0057c584;
                            uVar21 = (ulong)(iVar19 + 0xd);
                            if (DAT_005dddc4 <= uVar24 + iVar58) break;
                            iVar58 = iVar58 + DAT_0057c584;
                            uVar21 = (ulong)(iVar19 + 0xe);
                            if (DAT_005dddc4 <= uVar24 + iVar58) break;
                            iVar58 = iVar58 + DAT_0057c584;
                            uVar21 = (ulong)(iVar19 + 0xf);
                            if (DAT_005dddc4 <= uVar24 + iVar58) break;
                            iVar58 = iVar58 + DAT_0057c584;
                            uVar21 = (ulong)(iVar19 + 0x10);
                          } while (uVar24 + iVar58 < DAT_005dddc4);
                          goto LAB_00201220;
                        }
LAB_00201700:
                        uVar24 = (uint)uVar21;
                        if (0x3fff < uVar24) {
                          local_10[0] = (byte)(uVar21 >> 0xe) & 0x7f | 0x80;
                          bVar46 = (byte)(uVar21 >> 7) & 0x7f | 0x80;
                          bVar42 = (byte)uVar21 & 0x7f;
                          goto LAB_00201238;
                        }
                        if (uVar24 < 0x80) goto LAB_002016b4;
                        lVar52 = 2;
                        bVar46 = (byte)(uVar21 >> 7) & 0x7f | 0x80;
                        bVar42 = (byte)uVar21 & 0x7f;
                        lVar56 = 1;
                        iVar58 = 2;
                        lVar53 = 0;
                      }
                      else {
                        uVar24 = 0;
                        if (DAT_0057c584 != 0) {
                          uVar24 = DAT_005dddc4 / DAT_0057c584;
                        }
                        uVar21 = (ulong)uVar24;
                        uVar24 = DAT_0057c584 * uVar24;
                        if (uVar24 < DAT_005dddc4) goto LAB_002010c4;
LAB_00201220:
                        if ((uint)uVar21 < 0x200000) goto LAB_00201700;
                        bVar46 = 0xff;
                        bVar42 = 0x7f;
                        local_10[0] = 0xff;
LAB_00201238:
                        lVar52 = 3;
                        lVar56 = 2;
                        iVar58 = 3;
                        lVar53 = 1;
                      }
                      local_10[lVar53] = bVar46;
                    }
                    local_10[lVar56] = bVar42;
                    uVar24 = iVar58 + iVar18 + 4;
                    local_10[lVar52] = 0;
                    bVar17 = 0x7f < uVar24;
                    if (bVar17) {
                      uVar48 = uVar24 >> 7;
                      lVar52 = 2;
                      iVar18 = 2;
                      uVar24 = uVar24 & 0x7f;
                      param_1[uVar44] = (byte)uVar48 | 0x80;
                    }
                    else {
                      lVar52 = 1;
                      iVar18 = 1;
                    }
                    uVar48 = iVar18 + uVar44;
                    param_1[(ulong)bVar17 + (ulong)uVar44] = (uchar)uVar24;
                    param_1[lVar52 + (ulong)uVar44] = '\0';
                    uVar44 = uVar48 + 1;
                    param_1[uVar48] = local_10[0];
                    if (iVar58 != 1) {
                      uVar21 = (ulong)uVar44;
                      uVar44 = uVar48 + 2;
                      param_1[uVar21] = local_10[1];
                      if (iVar58 != 2) {
                        uVar21 = (ulong)uVar44;
                        uVar44 = uVar48 + 3;
                        param_1[uVar21] = local_e;
                      }
                    }
                    uVar24 = uVar44 + 1;
                    param_1[uVar44] = DAT_005dddcb;
                    uVar44 = (uint)DAT_005dddca;
                    if (DAT_005dddca != 0) {
                      uVar48 = 0;
                      pbVar31 = &DAT_005dddcc;
                      uVar23 = 0;
                      do {
                        bVar42 = *pbVar31;
                        bVar46 = (&DAT_00490059)[(ulong)bVar42 * 10];
                        if ((uVar48 < 0x80) && (bVar46 != 0)) {
                          uVar21 = 0;
                          do {
                            lVar52 = uVar21 + (ulong)bVar42 * 10;
                            uVar44 = (int)uVar21 + 1;
                            uVar21 = (ulong)uVar44;
                            param_1[uVar24] = (&DAT_00490050)[lVar52];
                            uVar24 = uVar24 + 1;
                            uVar48 = uVar48 + 1;
                            if (bVar46 < uVar44 || bVar46 == uVar44) break;
                          } while (uVar48 < 0x80);
                          uVar44 = (uint)DAT_005dddca;
                        }
                        uVar23 = uVar23 + 1;
                        pbVar31 = pbVar31 + 1;
                      } while (uVar23 < uVar44);
                    }
                    uVar44 = uVar24 + 1;
                    param_1[uVar24] = DAT_005dddce;
                    if (DAT_005dddce != 0) {
                      puVar37 = &DAT_005dddd0;
                      uVar24 = 0;
                      do {
                        uVar54 = *puVar37;
                        if ((char)uVar54 < '\0') {
                          *puVar37 = '\x7f';
                          uVar54 = '\x7f';
                        }
                        param_1[uVar44] = uVar54;
                        uVar48 = uVar44 + 1;
                        uVar24 = uVar24 + 1;
                        uVar44 = uVar44 + 3;
                        uVar23 = (int)*(short *)(puVar37 + 2) + 0x2000;
                        puVar37 = puVar37 + 4;
                        if ((int)uVar23 < 0) {
                          uVar23 = 0;
                        }
                        if (0x3fff < (int)uVar23) {
                          uVar23 = 0x3fff;
                        }
                        uVar54 = (uchar)(uVar23 >> 7);
                        if ((int)uVar23 < 0x80) {
                          uVar54 = '\0';
                        }
                        param_1[(ulong)uVar48 + 1] = uVar54;
                        param_1[uVar48] = (byte)uVar23 & 0x7f;
                      } while (uVar24 < DAT_005dddce);
                    }
                    uVar24 = uVar44 + 1;
                    param_1[uVar44] = DAT_005ddfd0;
                    if (DAT_005ddfd0 != 0) {
                      uVar44 = 0;
                      puVar37 = &DAT_005ddfd2;
                      do {
                        uVar54 = *puVar37;
                        if ((char)uVar54 < '\0') {
                          *puVar37 = '\x7f';
                          uVar54 = '\x7f';
                        }
                        param_1[uVar24] = uVar54;
                        uVar48 = uVar24 + 1;
                        uVar44 = uVar44 + 1;
                        sVar8 = *(short *)(puVar37 + 2);
                        uVar24 = uVar24 + 2;
                        if (sVar8 < 0) {
                          sVar8 = 0;
                        }
                        if (0x7f < sVar8) {
                          sVar8 = 0x7f;
                        }
                        param_1[uVar48] = (uchar)sVar8;
                        puVar37 = puVar37 + 4;
                      } while (uVar44 < DAT_005ddfd0);
                    }
                    uVar21 = (ulong)(uVar24 + 1);
                    param_1[uVar24] = DAT_005de1d2;
                    if (DAT_005de1d2 != 0) {
                      uVar44 = 0;
                      puVar37 = &DAT_005de1d3;
                      do {
                        uVar54 = *puVar37;
                        if ((char)uVar54 < '\0') {
                          *puVar37 = '\x7f';
                          uVar54 = '\x7f';
                        }
                        param_1[uVar21] = uVar54;
                        uVar44 = uVar44 + 1;
                        uVar21 = (ulong)((int)uVar21 + 1);
                        puVar37 = puVar37 + 1;
                      } while (uVar44 < DAT_005de1d2);
                    }
                    DAT_0057d260 = DAT_005dddc0;
                    if (DAT_0057d250 < 0x7fffffff - DAT_005dddc0) goto LAB_00200ef8;
                  }
                  else {
                    DAT_0057d260 = uVar24;
                    if (0x7fffffff - uVar24 <= DAT_0057d250) {
                      DAT_005dddcb = 0;
                      goto LAB_001ff568;
                    }
                    uVar21 = 0;
LAB_00200ef8:
                    DAT_0057d250 = DAT_0057d250 + DAT_0057d260;
                  }
                  DAT_005dddcb = 0;
                  if ((int)uVar21 == 0) goto LAB_001ff568;
                  goto LAB_0020088c;
                }
                if (DAT_0057d260 < 0x7fffffff - uVar24) {
                  DAT_0057d260 = DAT_0057d260 + uVar24;
                }
                if (DAT_0057d250 < 0x7fffffff - uVar24) {
                  DAT_0057d250 = DAT_0057d250 + uVar24;
                }
                lVar53 = (lVar52 + 2) * 0x20;
                if ((byte)(&DAT_0057c58c)[lVar53] < 7) {
                  lVar56 = (ulong)(byte)(&DAT_0057c58c)[lVar53] * 0x12;
                  DAT_0057d254 = DAT_0057d254 +
                                 (int)*(short *)(&DAT_004906dc +
                                                lVar56 + (long)(int)((byte)(&DAT_004906d8)[lVar56] -
                                                                    1) * 4) *
                                 (uint)(byte)(&DAT_0057c58d)[lVar53];
                  if (DAT_0057d254 < -0x10eb4) {
                    DAT_0057d254 = -0x10eb4;
                  }
                  if (0x10eb4 < DAT_0057d254) {
                    DAT_0057d254 = 0x10eb4;
                  }
                }
                lVar53 = (lVar52 + 2) * 0x20;
                if ((byte)(&DAT_0057c58e)[lVar53] < 7) {
                  lVar56 = (ulong)(byte)(&DAT_0057c58e)[lVar53] * 0x12;
                  iVar18 = (int)DAT_0057d258 +
                           (int)*(short *)(&DAT_0049075c +
                                          lVar56 + (long)(int)((byte)(&DAT_00490758)[lVar56] - 1) *
                                                   4) * (uint)(byte)(&DAT_0057c58f)[lVar53];
                  if (iVar18 < -99) {
                    iVar18 = -99;
                  }
                  if (99 < iVar18) {
                    iVar18 = 99;
                  }
                  DAT_0057d258 = (short)iVar18;
                }
                if ((&DAT_0057c5d0)[lVar52 * 0x20] == '\0') {
                  DAT_0057d254 = 0;
                }
                if ((&DAT_0057c5d1)[lVar52 * 0x20] == '\0') {
                  DAT_0057d258 = 0;
                }
                DAT_0057d25a = DAT_0057d25a + '\x01';
                bVar50 = DAT_005dddc9;
                bVar60 = DAT_005dddca;
                bVar10 = DAT_005dddcb;
                bVar11 = DAT_005dddce;
                bVar12 = DAT_005ddfd0;
                bVar13 = DAT_005de1d2;
                bVar14 = DAT_005de258;
                bVar15 = DAT_005de259;
                bVar16 = DAT_005dea5c;
                if (((uVar48 & 0xff) < uVar44) &&
                   (iVar18 = (&DAT_0057c5b8)[uVar26 * 8], bVar46 = DAT_005dddc8, iVar18 != 0)) {
                  lVar52 = (long)(int)uVar23 + 2;
                  iVar58 = (int)DAT_0057d258;
                  lVar53 = lVar52 * 0x20;
                  uVar21 = uVar26;
                  DAT_005dddc8 = bVar9;
                  do {
                    if (iVar18 == 1) {
                      iVar18 = (&DAT_0057c5c0)[(long)(int)uVar23 * 8];
                      uVar24 = DAT_0057d260 + iVar18;
                      if (0x7fffffffU - iVar18 <= DAT_0057d260) {
                        uVar24 = DAT_0057d260;
                      }
                      uVar48 = DAT_0057d250 + iVar18;
                      if (0x7fffffffU - iVar18 <= DAT_0057d250) {
                        uVar48 = DAT_0057d250;
                      }
                      if ((byte)(&DAT_0057c58c)[lVar53] < 7) {
                        lVar56 = (ulong)(byte)(&DAT_0057c58c)[lVar53] * 0x12;
                        DAT_0057d254 = DAT_0057d254 +
                                       (int)*(short *)(&DAT_004906dc +
                                                      lVar56 + (long)(int)((byte)(&DAT_004906d8)
                                                                                 [lVar56] - 1) * 4)
                                       * (uint)(byte)(&DAT_0057c58d)[lVar53];
                        if (DAT_0057d254 < -0x10eb4) {
                          DAT_0057d254 = -0x10eb4;
                        }
                        if (0x10eb4 < DAT_0057d254) {
                          DAT_0057d254 = 0x10eb4;
                        }
                      }
                      if ((byte)(&DAT_0057c58e)[lVar53] < 7) {
                        lVar56 = (ulong)(byte)(&DAT_0057c58e)[lVar53] * 0x12;
                        iVar58 = iVar58 + (int)*(short *)(&DAT_0049075c +
                                                         lVar56 + (long)(int)((byte)(&DAT_00490758)
                                                                                    [lVar56] - 1) *
                                                                  4) *
                                          (uint)(byte)(&DAT_0057c58f)[lVar53];
                        if (iVar58 < -99) {
                          iVar58 = -99;
                        }
                        if (99 < iVar58) {
                          iVar58 = 99;
                        }
                        iVar58 = (int)(short)iVar58;
                      }
                      if (*(char *)(&DAT_0057c590 + lVar52 * 4) == '\0') {
                        DAT_0057d254 = 0;
                      }
                      if (*(char *)((long)&DAT_0057c590 + lVar53 + 1) == '\0') {
                        iVar58 = 0;
                      }
                      uVar29 = (ulong)((int)uVar21 + 1);
                      DAT_0057d260 = uVar24;
                      DAT_0057d250 = uVar48;
                    }
                    else {
                      uVar24 = (int)uVar21 + 1;
                      uVar29 = (ulong)uVar24;
                      uVar22 = (ulong)(ushort)uVar24;
                      if (((uVar24 & 0xffff) < uVar44) && ((&DAT_0057c5b8)[uVar22 * 8] != 0)) {
                        if ((&DAT_0057c5b8)[uVar22 * 8] == 1) {
LAB_001fe754:
                          if (iVar18 != 2) {
                            (&DAT_0057c5c0)[uVar21 * 8] = 0;
                          }
                        }
                        else {
                          uVar48 = ~(uVar24 & 0xffff) + uVar44 & 3;
                          if (uVar48 == 0) goto LAB_001fe4a8;
                          uVar47 = (uVar24 & 0xffff) + 1;
                          uVar22 = (ulong)uVar47;
                          if ((uVar47 < uVar44) && ((&DAT_0057c5b8)[uVar22 * 8] != 0)) {
                            if ((&DAT_0057c5b8)[uVar22 * 8] == 1) goto LAB_001fe754;
                            if (uVar48 == 1) goto LAB_001fe4a8;
                            if (uVar48 != 2) {
                              uVar47 = (uVar24 & 0xffff) + 2;
                              if ((&DAT_0057c5b8)[(ulong)uVar47 * 8] == 0) goto LAB_001fe510;
                              if ((&DAT_0057c5b8)[(ulong)uVar47 * 8] == 1) goto LAB_001fe754;
                            }
                            uVar22 = (ulong)(uVar47 + 1);
                            iVar19 = (&DAT_0057c5b8)[uVar22 * 8];
                            while (iVar19 != 0) {
                              if (iVar19 == 1) goto LAB_001fe754;
LAB_001fe4a8:
                              iVar19 = (int)uVar22;
                              if ((uVar44 <= iVar19 + 1U) ||
                                 ((&DAT_0057c5b8)[(ulong)(iVar19 + 1U) * 8] == 0)) break;
                              if ((&DAT_0057c5b8)[(ulong)(iVar19 + 1U) * 8] == 1) goto LAB_001fe754;
                              if ((&DAT_0057c5b8)[(ulong)(iVar19 + 2) * 8] == 0) break;
                              if ((&DAT_0057c5b8)[(ulong)(iVar19 + 2) * 8] == 1) goto LAB_001fe754;
                              if ((&DAT_0057c5b8)[(ulong)(iVar19 + 3) * 8] == 0) break;
                              if ((&DAT_0057c5b8)[(ulong)(iVar19 + 3) * 8] == 1) goto LAB_001fe754;
                              uVar22 = (ulong)(iVar19 + 4);
                              iVar19 = (&DAT_0057c5b8)[uVar22 * 8];
                            }
                          }
                        }
                      }
                    }
LAB_001fe510:
                  } while (((uint)uVar29 < uVar44) &&
                          (iVar18 = (&DAT_0057c5b8)[uVar29 * 8], uVar21 = uVar29, iVar18 != 0));
                  DAT_0057d258 = (short)iVar58;
                  bVar46 = DAT_005dddc8;
                  bVar50 = DAT_005dddc9;
                  bVar60 = DAT_005dddca;
                  bVar10 = DAT_005dddcb;
                  bVar11 = DAT_005dddce;
                  bVar12 = DAT_005ddfd0;
                  bVar13 = DAT_005de1d2;
                  bVar14 = DAT_005de258;
                  bVar15 = DAT_005de259;
                  bVar16 = DAT_005dea5c;
                }
              }
              goto LAB_001fd9f8;
            }
            if (uVar24 == 3) {
              if (5 < param_2) {
                uVar44 = (&DAT_0057c5c0)[lVar27 * 8];
                if (uVar44 == 0) {
                  DAT_0057d264 = 0;
                  uVar24 = DAT_0057d260;
                  DAT_0057d260 = 0;
                }
                else {
                  uVar24 = uVar44 - DAT_0057d25c;
                  DAT_0057d260 = (DAT_0057d25c + DAT_0057d260) - uVar44;
                  DAT_0057d25c = uVar44;
                  if (uVar24 < DAT_0057d264) {
                    DAT_0057d264 = DAT_0057d264 - uVar24;
                  }
                  else {
                    DAT_0057d264 = 0;
                  }
                }
                if (DAT_0057c584 == 0) {
                  uVar44 = 0;
LAB_0020162c:
                  bVar42 = (byte)uVar44;
                  lVar52 = 1;
                  lVar56 = 0;
                  uVar21 = 4;
                  lVar53 = 3;
                  lVar49 = 2;
                }
                else {
                  if (uVar24 < 0x1ffff) {
                    if (DAT_0057c584 == 0x14) {
                      uVar21 = (ulong)(uVar24 * 0x666 >> 0xf);
                    }
                    else {
                      uVar44 = uVar24 * DAT_0057c588 >> 0xf;
                      uVar21 = (ulong)uVar44;
                      if ((uVar24 * DAT_0057c588 >> 0xe & 1) != 0) {
                        uVar21 = (ulong)(uVar44 + 1);
                      }
                    }
                    uVar44 = (int)uVar21 * DAT_0057c584;
                    if (uVar44 < uVar24) {
LAB_001fe824:
                      iVar18 = 0;
                      do {
                        iVar58 = (int)uVar21;
                        uVar21 = (ulong)(iVar58 + 1);
                        if (uVar24 <= uVar44 + iVar18 + DAT_0057c584) break;
                        iVar18 = iVar18 + DAT_0057c584 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 2);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 3);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 4);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 5);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 6);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 7);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 8);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 9);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 10);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 0xb);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 0xc);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 0xd);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 0xe);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 0xf);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 0x10);
                      } while (uVar44 + iVar18 < uVar24);
                      goto LAB_00200e84;
                    }
LAB_002018e0:
                    uVar44 = (uint)uVar21;
                    if (0x3fff < uVar44) {
                      bVar50 = (byte)(uVar21 >> 0xe) & 0x7f | 0x80;
                      bVar46 = (byte)(uVar21 >> 7) & 0x7f | 0x80;
                      bVar42 = (byte)uVar21 & 0x7f;
                      goto LAB_00200e9c;
                    }
                    if (uVar44 < 0x80) goto LAB_0020162c;
                    bVar42 = (byte)uVar21 & 0x7f;
                    bVar46 = (byte)(uVar21 >> 7) & 0x7f | 0x80;
                    lVar52 = 2;
                    lVar56 = 1;
                    uVar21 = 5;
                    lVar53 = 4;
                    lVar49 = 3;
                    lVar39 = 0;
                  }
                  else {
                    uVar44 = 0;
                    if (DAT_0057c584 != 0) {
                      uVar44 = uVar24 / DAT_0057c584;
                    }
                    uVar21 = (ulong)uVar44;
                    uVar44 = DAT_0057c584 * uVar44;
                    if (uVar44 < uVar24) goto LAB_001fe824;
LAB_00200e84:
                    if ((uint)uVar21 < 0x200000) goto LAB_002018e0;
                    bVar46 = 0xff;
                    bVar42 = 0x7f;
                    bVar50 = 0xff;
LAB_00200e9c:
                    *param_1 = bVar50;
                    lVar52 = 3;
                    lVar56 = 2;
                    uVar21 = 6;
                    lVar53 = 5;
                    lVar49 = 4;
                    lVar39 = 1;
                  }
                  param_1[lVar39] = bVar46;
                }
                param_1[lVar56] = bVar42;
                param_1[lVar52] = 0xb0;
                param_1[lVar49] = '\x16';
                bVar42 = (&DAT_0057c5bd)[lVar27 * 0x20];
                if (9 < (byte)(&DAT_0057c5bd)[lVar27 * 0x20]) {
                  (&DAT_0057c5bd)[lVar27 * 0x20] = 9;
                  bVar42 = 9;
                }
LAB_00200888:
                param_1[lVar53] = bVar42;
                goto LAB_0020088c;
              }
LAB_001ff568:
              uVar24 = (uint)DAT_0057d24c;
              uVar21 = 0xfffffffd;
              if (DAT_0057d24c == uVar61) goto LAB_001fdf9c;
LAB_001fdfb0:
              DAT_0057d268 = (&DAT_0057c5d4)[lVar27 * 8];
            }
            else {
              if (uVar24 == 4) {
                if (param_2 < 6) goto LAB_001ff568;
                uVar44 = (&DAT_0057c5c0)[lVar27 * 8];
                if (uVar44 == 0) {
                  DAT_0057d264 = 0;
                  uVar24 = DAT_0057d260;
                  DAT_0057d260 = 0;
                }
                else {
                  uVar24 = uVar44 - DAT_0057d25c;
                  DAT_0057d260 = (DAT_0057d25c + DAT_0057d260) - uVar44;
                  DAT_0057d25c = uVar44;
                  if (uVar24 < DAT_0057d264) {
                    DAT_0057d264 = DAT_0057d264 - uVar24;
                  }
                  else {
                    DAT_0057d264 = 0;
                  }
                }
                if (DAT_0057c584 == 0) {
                  uVar44 = 0;
LAB_00201694:
                  bVar42 = (byte)uVar44;
                  lVar49 = 1;
                  lVar56 = 0;
                  uVar21 = 4;
                  lVar53 = 3;
                  lVar52 = 2;
                }
                else {
                  if (uVar24 < 0x1ffff) {
                    if (DAT_0057c584 == 0x14) {
                      uVar21 = (ulong)(uVar24 * 0x666 >> 0xf);
                    }
                    else {
                      uVar44 = uVar24 * DAT_0057c588 >> 0xf;
                      uVar21 = (ulong)uVar44;
                      if ((uVar24 * DAT_0057c588 >> 0xe & 1) != 0) {
                        uVar21 = (ulong)(uVar44 + 1);
                      }
                    }
                    uVar44 = (int)uVar21 * DAT_0057c584;
                    if (uVar44 < uVar24) {
LAB_002004e8:
                      iVar18 = 0;
                      do {
                        iVar58 = (int)uVar21;
                        uVar21 = (ulong)(iVar58 + 1);
                        if (uVar24 <= uVar44 + iVar18 + DAT_0057c584) break;
                        iVar18 = iVar18 + DAT_0057c584 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 2);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 3);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 4);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 5);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 6);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 7);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 8);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 9);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 10);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 0xb);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 0xc);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 0xd);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 0xe);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 0xf);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 0x10);
                      } while (uVar44 + iVar18 < uVar24);
                      goto LAB_00200f7c;
                    }
LAB_0020198c:
                    uVar44 = (uint)uVar21;
                    if (0x3fff < uVar44) {
                      bVar46 = (byte)(uVar21 >> 0xe) & 0x7f | 0x80;
                      bVar50 = (byte)(uVar21 >> 7) & 0x7f | 0x80;
                      bVar42 = (byte)uVar21 & 0x7f;
                      goto LAB_00200f94;
                    }
                    if (uVar44 < 0x80) goto LAB_00201694;
                    bVar42 = (byte)uVar21 & 0x7f;
                    bVar50 = (byte)(uVar21 >> 7) & 0x7f | 0x80;
                    lVar49 = 2;
                    lVar56 = 1;
                    uVar21 = 5;
                    lVar53 = 4;
                    lVar52 = 3;
                    lVar39 = 0;
                  }
                  else {
                    uVar44 = 0;
                    if (DAT_0057c584 != 0) {
                      uVar44 = uVar24 / DAT_0057c584;
                    }
                    uVar21 = (ulong)uVar44;
                    uVar44 = DAT_0057c584 * uVar44;
                    if (uVar44 < uVar24) goto LAB_002004e8;
LAB_00200f7c:
                    if ((uint)uVar21 < 0x200000) goto LAB_0020198c;
                    bVar50 = 0xff;
                    bVar42 = 0x7f;
                    bVar46 = 0xff;
LAB_00200f94:
                    *param_1 = bVar46;
                    lVar49 = 3;
                    lVar56 = 2;
                    uVar21 = 6;
                    lVar53 = 5;
                    lVar52 = 4;
                    lVar39 = 1;
                  }
                  param_1[lVar39] = bVar50;
                }
                param_1[lVar56] = bVar42;
                param_1[lVar49] = 0xb0;
                param_1[lVar52] = '\x14';
                uVar26 = 4;
                bVar42 = (&DAT_0057c5bd)[lVar27 * 0x20];
                if (bVar42 < 6) {
                  if (bVar42 == 0) {
                    uVar26 = 0;
                  }
                  else {
                    uVar26 = (ulong)(byte)(bVar42 - 1);
                  }
                }
                param_1[lVar53] = (uchar)*(undefined2 *)(&DAT_00490850 + uVar26 * 2);
              }
              else {
                if (uVar24 != 5) {
                  uVar26 = (ulong)DAT_0057d24c;
                  goto LAB_001fd9f8;
                }
                if (param_2 < 5) goto LAB_001ff568;
                uVar44 = (&DAT_0057c5c0)[lVar27 * 8];
                if (uVar44 == 0) {
                  DAT_0057d264 = 0;
                  uVar24 = DAT_0057d260;
                  DAT_0057d260 = 0;
                }
                else {
                  uVar24 = uVar44 - DAT_0057d25c;
                  DAT_0057d260 = (DAT_0057d25c + DAT_0057d260) - uVar44;
                  DAT_0057d25c = uVar44;
                  if (uVar24 < DAT_0057d264) {
                    DAT_0057d264 = DAT_0057d264 - uVar24;
                  }
                  else {
                    DAT_0057d264 = 0;
                  }
                }
                if (DAT_0057c584 == 0) {
                  uVar44 = 0;
LAB_0020165c:
                  bVar42 = (byte)uVar44;
                  lVar56 = 1;
                  lVar52 = 0;
                  uVar21 = 3;
                  lVar53 = 2;
                }
                else {
                  if (uVar24 < 0x1ffff) {
                    if (DAT_0057c584 == 0x14) {
                      uVar21 = (ulong)(uVar24 * 0x666 >> 0xf);
                    }
                    else {
                      uVar44 = uVar24 * DAT_0057c588 >> 0xf;
                      uVar21 = (ulong)uVar44;
                      if ((uVar24 * DAT_0057c588 >> 0xe & 1) != 0) {
                        uVar21 = (ulong)(uVar44 + 1);
                      }
                    }
                    uVar44 = (int)uVar21 * DAT_0057c584;
                    if (uVar44 < uVar24) goto LAB_002006f0;
LAB_002018bc:
                    uVar44 = (uint)uVar21;
                    if (0x3fff < uVar44) {
                      bVar46 = (byte)(uVar21 >> 0xe) & 0x7f | 0x80;
                      bVar50 = (byte)(uVar21 >> 7) & 0x7f | 0x80;
                      bVar42 = (byte)uVar21 & 0x7f;
                      goto LAB_00200850;
                    }
                    if (uVar44 < 0x80) goto LAB_0020165c;
                    bVar42 = (byte)uVar21 & 0x7f;
                    bVar50 = (byte)(uVar21 >> 7) & 0x7f | 0x80;
                    lVar56 = 2;
                    lVar52 = 1;
                    uVar21 = 4;
                    lVar53 = 3;
                    lVar39 = 0;
                  }
                  else {
                    uVar44 = 0;
                    if (DAT_0057c584 != 0) {
                      uVar44 = uVar24 / DAT_0057c584;
                    }
                    uVar21 = (ulong)uVar44;
                    uVar44 = DAT_0057c584 * uVar44;
                    if (uVar44 < uVar24) {
LAB_002006f0:
                      iVar18 = 0;
                      do {
                        iVar58 = (int)uVar21;
                        uVar21 = (ulong)(iVar58 + 1);
                        if (uVar24 <= uVar44 + iVar18 + DAT_0057c584) break;
                        iVar18 = iVar18 + DAT_0057c584 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 2);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 3);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 4);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 5);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 6);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 7);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 8);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 9);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 10);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 0xb);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 0xc);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 0xd);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 0xe);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 0xf);
                        if (uVar24 <= uVar44 + iVar18) break;
                        iVar18 = iVar18 + DAT_0057c584;
                        uVar21 = (ulong)(iVar58 + 0x10);
                      } while (uVar44 + iVar18 < uVar24);
                    }
                    if ((uint)uVar21 < 0x200000) goto LAB_002018bc;
                    bVar50 = 0xff;
                    bVar42 = 0x7f;
                    bVar46 = 0xff;
LAB_00200850:
                    *param_1 = bVar46;
                    lVar56 = 3;
                    lVar52 = 2;
                    uVar21 = 5;
                    lVar53 = 4;
                    lVar39 = 1;
                  }
                  param_1[lVar39] = bVar50;
                }
                param_1[lVar52] = bVar42;
                param_1[lVar56] = 0xc0;
                bVar42 = (&DAT_0057c5bd)[lVar27 * 0x20];
                if (-1 < (char)bVar42) {
                  if (99 < bVar42) {
                    bVar42 = 99;
                  }
                  goto LAB_00200888;
                }
                if (0xe3 < bVar42) {
                  bVar42 = 0xe3;
                }
                param_1[lVar53] = bVar42;
              }
LAB_0020088c:
              uVar24 = (uint)DAT_0057d24c;
              if (DAT_0057d24c == uVar61) goto LAB_001fdf9c;
              DAT_0057d268 = (&DAT_0057c5d4)[lVar27 * 8];
            }
            goto LAB_001fd62c;
          }
LAB_001fda3c:
          DAT_0057d24c = (char)uVar26 + 1;
          uVar26 = (ulong)DAT_0057d24c;
LAB_001fd9f8:
          DAT_005dea5c = bVar16;
          DAT_005de259 = bVar15;
          DAT_005de258 = bVar14;
          DAT_005de1d2 = bVar13;
          DAT_005ddfd0 = bVar12;
          DAT_005dddce = bVar11;
          DAT_005dddcb = bVar10;
          DAT_005dddca = bVar60;
          DAT_005dddc9 = bVar50;
          DAT_005dddc8 = bVar46;
          uVar24 = (uint)uVar26;
          if (uVar61 == uVar24) {
            uVar21 = 0;
LAB_001fdf9c:
            DAT_0057d24c = (byte)(uVar24 + 1);
            uVar26 = (ulong)DAT_0057d24c;
            uVar24 = uVar24 + 1 & 0xff;
            if ((int)uVar21 != 0) goto LAB_001fdfb0;
          }
          uVar44 = (uint)DAT_0057c5ad;
          uVar61 = uVar24;
        } while ((uint)uVar26 < uVar44);
      }
      goto LAB_001fd90c;
    }
    DAT_0057d24c = DAT_0057c5ad + 1;
    if (DAT_0057d260 == 0) {
      DAT_0057d260 = 1;
    }
    DAT_0057d268 = DAT_0057c598;
    if (4 < param_2) {
      if (DAT_0057c584 == 0) {
        uVar26 = 0;
LAB_001fe558:
        bVar42 = (byte)uVar26;
        lVar52 = 1;
        lVar53 = 0;
        uVar21 = 3;
        lVar27 = 2;
      }
      else {
        if (DAT_0057d260 < 0x1ffff) {
          if (DAT_0057c584 == 0x14) {
            uVar26 = (ulong)(DAT_0057d260 * 0x666 >> 0xf);
          }
          else {
            uVar44 = DAT_0057d260 * DAT_0057c588 >> 0xf;
            uVar26 = (ulong)uVar44;
            if ((DAT_0057d260 * DAT_0057c588 >> 0xe & 1) != 0) {
              uVar26 = (ulong)(uVar44 + 1);
            }
          }
          uVar44 = (int)uVar26 * DAT_0057c584;
          if (uVar44 < DAT_0057d260) {
LAB_001fe070:
            iVar18 = 0;
            do {
              iVar58 = (int)uVar26;
              uVar26 = (ulong)(iVar58 + 1);
              if (DAT_0057d260 <= uVar44 + iVar18 + DAT_0057c584) break;
              iVar18 = iVar18 + DAT_0057c584 + DAT_0057c584;
              uVar26 = (ulong)(iVar58 + 2);
              if (DAT_0057d260 <= uVar44 + iVar18) break;
              iVar18 = iVar18 + DAT_0057c584;
              uVar26 = (ulong)(iVar58 + 3);
              if (DAT_0057d260 <= uVar44 + iVar18) break;
              iVar18 = iVar18 + DAT_0057c584;
              uVar26 = (ulong)(iVar58 + 4);
              if (DAT_0057d260 <= uVar44 + iVar18) break;
              iVar18 = iVar18 + DAT_0057c584;
              uVar26 = (ulong)(iVar58 + 5);
              if (DAT_0057d260 <= uVar44 + iVar18) break;
              iVar18 = iVar18 + DAT_0057c584;
              uVar26 = (ulong)(iVar58 + 6);
              if (DAT_0057d260 <= uVar44 + iVar18) break;
              iVar18 = iVar18 + DAT_0057c584;
              uVar26 = (ulong)(iVar58 + 7);
              if (DAT_0057d260 <= uVar44 + iVar18) break;
              iVar18 = iVar18 + DAT_0057c584;
              uVar26 = (ulong)(iVar58 + 8);
              if (DAT_0057d260 <= uVar44 + iVar18) break;
              iVar18 = iVar18 + DAT_0057c584;
              uVar26 = (ulong)(iVar58 + 9);
              if (DAT_0057d260 <= uVar44 + iVar18) break;
              iVar18 = iVar18 + DAT_0057c584;
              uVar26 = (ulong)(iVar58 + 10);
              if (DAT_0057d260 <= uVar44 + iVar18) break;
              iVar18 = iVar18 + DAT_0057c584;
              uVar26 = (ulong)(iVar58 + 0xb);
              if (DAT_0057d260 <= uVar44 + iVar18) break;
              iVar18 = iVar18 + DAT_0057c584;
              uVar26 = (ulong)(iVar58 + 0xc);
              if (DAT_0057d260 <= uVar44 + iVar18) break;
              iVar18 = iVar18 + DAT_0057c584;
              uVar26 = (ulong)(iVar58 + 0xd);
              if (DAT_0057d260 <= uVar44 + iVar18) break;
              iVar18 = iVar18 + DAT_0057c584;
              uVar26 = (ulong)(iVar58 + 0xe);
              if (DAT_0057d260 <= uVar44 + iVar18) break;
              iVar18 = iVar18 + DAT_0057c584;
              uVar26 = (ulong)(iVar58 + 0xf);
              if (DAT_0057d260 <= uVar44 + iVar18) break;
              iVar18 = iVar18 + DAT_0057c584;
              uVar26 = (ulong)(iVar58 + 0x10);
            } while (uVar44 + iVar18 < DAT_0057d260);
            goto LAB_001fe1b8;
          }
LAB_001fe59c:
          if ((uint)uVar26 < 0x4000) {
            if ((uint)uVar26 < 0x80) goto LAB_001fe558;
            bVar42 = (byte)uVar26 & 0x7f;
            lVar52 = 2;
            lVar53 = 1;
            uVar21 = 4;
            lVar27 = 3;
            *param_1 = (byte)(uVar26 >> 7) & 0x7f | 0x80;
            goto LAB_001fe56c;
          }
          bVar46 = (byte)(uVar26 >> 0xe) & 0x7f | 0x80;
          bVar50 = (byte)(uVar26 >> 7) & 0x7f | 0x80;
          bVar42 = (byte)uVar26 & 0x7f;
        }
        else {
          uVar44 = 0;
          if (DAT_0057c584 != 0) {
            uVar44 = DAT_0057d260 / DAT_0057c584;
          }
          uVar26 = (ulong)uVar44;
          uVar44 = DAT_0057c584 * uVar44;
          if (uVar44 < DAT_0057d260) goto LAB_001fe070;
LAB_001fe1b8:
          if ((uint)uVar26 < 0x200000) goto LAB_001fe59c;
          bVar50 = 0xff;
          bVar42 = 0x7f;
          bVar46 = 0xff;
        }
        *param_1 = bVar46;
        lVar52 = 3;
        lVar53 = 2;
        uVar21 = 5;
        lVar27 = 4;
        param_1[1] = bVar50;
      }
LAB_001fe56c:
      param_1[lVar53] = bVar42;
      param_1[lVar52] = 0xff;
      param_1[lVar27] = '\0';
      DAT_0057d260 = 0;
      DAT_0057d264 = 0;
      goto LAB_001fd62c;
    }
  }
  uVar21 = 0xfffffffd;
  DAT_0057d260 = 0;
  DAT_0057d268 = DAT_0057c598;
LAB_001fd62c:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar21);
}

