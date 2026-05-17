/* MaMmfCnv_ReqVoice @ 000b5f04 8788B */


/* YAMAHA::MaMmfCnv_ReqVoice(_MACNV_SEQ_INFO*) */

void YAMAHA::MaMmfCnv_ReqVoice(_MACNV_SEQ_INFO *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  uint uVar50;
  undefined4 uVar51;
  uchar *puVar52;
  char cVar53;
  uint uVar54;
  byte *pbVar55;
  uint uVar56;
  byte bVar57;
  int iVar58;
  uchar *puVar59;
  int iVar60;
  int iVar61;
  byte *pbVar62;
  uint uVar63;
  byte *pbVar64;
  int iVar65;
  byte bVar66;
  int *piVar67;
  int iVar68;
  int iVar69;
  uint uVar70;
  char cVar71;
  uint uVar72;
  undefined1 uVar73;
  int iVar74;
  uint uVar75;
  byte *pbVar76;
  undefined1 *puVar77;
  byte bVar78;
  int iVar79;
  uint uVar80;
  int iVar81;
  int iVar82;
  uint uVar83;
  int iVar84;
  int iVar85;
  undefined4 *puVar86;
  int iVar87;
  byte *pbVar88;
  int iVar89;
  undefined1 *puVar90;
  byte bVar91;
  int iVar92;
  byte *pbVar93;
  undefined1 *puVar94;
  uint uVar95;
  int iVar96;
  int iVar97;
  int iVar98;
  int iVar99;
  byte *pbVar100;
  int iVar101;
  bool bVar102;
  uint local_d8;
  uint local_cc;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a0;
  uint local_78 [2];
  uint local_70 [2];
  byte local_68;
  byte local_67;
  byte local_66 [58];
  int local_2c;
  
  piVar67 = *(int **)(DAT_000b6a38 + 0xb5f14);
  local_2c = *piVar67;
  if ((param_1 == (_MACNV_SEQ_INFO *)0x0) || (iVar79 = *(int *)(param_1 + 4), iVar79 == 0)) {
    uVar51 = 0xfffffffe;
    goto LAB_000b613e;
  }
  if (*(char *)(iVar79 + 8) == '\x02') {
    *(undefined4 *)(iVar79 + 0x1cb4) = 0;
    *(undefined4 *)(iVar79 + 0x1cb8) = 0;
    *(undefined1 *)(iVar79 + 0x1cb0) = 0xff;
    *(undefined1 *)(iVar79 + 0x1cc0) = 0xff;
    *(undefined4 *)(iVar79 + 0x1cc4) = 0;
    *(undefined4 *)(iVar79 + 0x1cc8) = 0;
    iVar68 = 2;
    puVar86 = (undefined4 *)(iVar79 + 0x1cd8);
    do {
      iVar68 = iVar68 + 10;
      *(undefined1 *)(puVar86 + -2) = 0xff;
      puVar86[-1] = 0;
      iVar89 = 0xff;
      *puVar86 = 0;
      *(undefined1 *)(puVar86 + 2) = 0xff;
      puVar86[3] = 0;
      puVar86[4] = 0;
      *(undefined1 *)(puVar86 + 6) = 0xff;
      puVar86[7] = 0;
      puVar86[8] = 0;
      *(undefined1 *)(puVar86 + 10) = 0xff;
      puVar86[0xb] = 0;
      puVar86[0xc] = 0;
      *(undefined1 *)(puVar86 + 0xe) = 0xff;
      puVar86[0xf] = 0;
      puVar86[0x10] = 0;
      *(undefined1 *)(puVar86 + 0x12) = 0xff;
      puVar86[0x13] = 0;
      puVar86[0x14] = 0;
      *(undefined1 *)(puVar86 + 0x16) = 0xff;
      puVar86[0x17] = 0;
      puVar86[0x18] = 0;
      *(undefined1 *)(puVar86 + 0x1a) = 0xff;
      puVar86[0x1b] = 0;
      puVar86[0x1c] = 0;
      *(undefined1 *)(puVar86 + 0x1e) = 0xff;
      puVar86[0x1f] = 0;
      puVar86[0x20] = 0;
      *(undefined1 *)(puVar86 + 0x22) = 0xff;
      puVar86[0x23] = 0;
      puVar86[0x24] = 0;
      puVar86 = puVar86 + 0x28;
    } while (iVar68 != 0x3e);
    *(undefined1 *)(iVar79 + 0x2090) = 0xff;
    *(undefined1 *)(iVar79 + 0x2093) = 0xff;
    *(undefined1 *)(iVar79 + 0x2096) = 0xff;
    *(undefined1 *)(iVar79 + 0x2099) = 0xff;
    *(undefined1 *)(iVar79 + 0x209c) = 0xff;
    *(undefined1 *)(iVar79 + 0x209f) = 0xff;
    *(undefined1 *)(iVar79 + 0x20a2) = 0xff;
    *(undefined1 *)(iVar79 + 0x20a5) = 0xff;
    *(undefined1 *)(iVar79 + 0x20a8) = 0xff;
    *(undefined1 *)(iVar79 + 0x20ab) = 0xff;
    *(undefined1 *)(iVar79 + 0x20ae) = 0xff;
    *(undefined1 *)(iVar79 + 0x20b1) = 0xff;
    *(undefined1 *)(iVar79 + 0x20b4) = 0xff;
    *(undefined1 *)(iVar79 + 0x20b7) = 0xff;
    *(undefined1 *)(iVar79 + 0x20ba) = 0xff;
    *(undefined1 *)(iVar79 + 0x20bd) = 0xff;
    *(undefined1 *)(iVar79 + 0x20c0) = 0xff;
    *(undefined1 *)(iVar79 + 0x20c3) = 0xff;
    *(undefined1 *)(iVar79 + 0x20c6) = 0xff;
    *(undefined1 *)(iVar79 + 0x20c9) = 0xff;
    *(undefined1 *)(iVar79 + 0x20cc) = 0xff;
    *(undefined1 *)(iVar79 + 0x20cf) = 0xff;
    *(undefined1 *)(iVar79 + 0x20d2) = 0xff;
    *(undefined1 *)(iVar79 + 0x20d5) = 0xff;
    *(undefined1 *)(iVar79 + 0x20d8) = 0xff;
    *(undefined1 *)(iVar79 + 0x20db) = 0xff;
    *(undefined1 *)(iVar79 + 0x20de) = 0xff;
    *(undefined1 *)(iVar79 + 0x20e1) = 0xff;
    *(undefined1 *)(iVar79 + 0x20e4) = 0xff;
    *(undefined1 *)(iVar79 + 0x20e7) = 0xff;
    *(undefined1 *)(iVar79 + 0x20ea) = 0xff;
    *(undefined1 *)(iVar79 + 0x20ed) = 0xff;
    if ((iVar79 + 0x20f0U & 3) == 0) {
      *(undefined4 *)(iVar79 + 0x20f0) = 0xffffffff;
      *(undefined4 *)(iVar79 + 0x20f4) = 0xffffffff;
      *(undefined4 *)(iVar79 + 0x20f8) = 0xffffffff;
      *(undefined4 *)(iVar79 + 0x20fc) = 0xffffffff;
      *(undefined4 *)(iVar79 + 0x2100) = 0xffffffff;
      *(undefined4 *)(iVar79 + 0x2104) = 0xffffffff;
      *(undefined4 *)(iVar79 + 0x2108) = 0xffffffff;
      *(undefined4 *)(iVar79 + 0x210c) = 0xffffffff;
    }
    else {
      *(undefined1 *)(iVar79 + 0x20f0) = 0xff;
      *(undefined1 *)(iVar79 + 0x20f1) = 0xff;
      *(undefined1 *)(iVar79 + 0x20f2) = 0xff;
      *(undefined1 *)(iVar79 + 0x20f3) = 0xff;
      *(undefined1 *)(iVar79 + 0x20f4) = 0xff;
      *(undefined1 *)(iVar79 + 0x20f5) = 0xff;
      *(undefined1 *)(iVar79 + 0x20f6) = 0xff;
      *(undefined1 *)(iVar79 + 0x20f7) = 0xff;
      *(undefined1 *)(iVar79 + 0x20f8) = 0xff;
      *(undefined1 *)(iVar79 + 0x20f9) = 0xff;
      *(undefined1 *)(iVar79 + 0x20fa) = 0xff;
      *(undefined1 *)(iVar79 + 0x20fb) = 0xff;
      *(undefined1 *)(iVar79 + 0x20fc) = 0xff;
      *(undefined1 *)(iVar79 + 0x20fd) = 0xff;
      *(undefined1 *)(iVar79 + 0x20fe) = 0xff;
      *(undefined1 *)(iVar79 + 0x20ff) = 0xff;
      *(undefined1 *)(iVar79 + 0x2100) = 0xff;
      *(undefined1 *)(iVar79 + 0x2101) = 0xff;
      *(undefined1 *)(iVar79 + 0x2102) = 0xff;
      *(undefined1 *)(iVar79 + 0x2103) = 0xff;
      *(undefined1 *)(iVar79 + 0x2104) = 0xff;
      *(undefined1 *)(iVar79 + 0x2105) = 0xff;
      *(undefined1 *)(iVar79 + 0x2106) = 0xff;
      *(undefined1 *)(iVar79 + 0x2107) = 0xff;
      *(undefined1 *)(iVar79 + 0x2108) = 0xff;
      *(undefined1 *)(iVar79 + 0x2109) = 0xff;
      *(undefined1 *)(iVar79 + 0x210a) = 0xff;
      *(undefined1 *)(iVar79 + 0x210b) = 0xff;
      *(undefined1 *)(iVar79 + 0x210c) = 0xff;
      *(undefined1 *)(iVar79 + 0x210d) = 0xff;
      *(undefined1 *)(iVar79 + 0x210e) = 0xff;
      *(undefined1 *)(iVar79 + 0x210f) = 0xff;
    }
    memset((void *)(iVar79 + 0x2110),0,0x80);
    uVar50 = *(int *)(iVar79 + 0xc2c) - 1;
    if (uVar50 < 7) {
      uVar50 = 1 << (uVar50 & 0xff);
      if ((uVar50 & 0x54) == 0) {
        if ((uVar50 & 3) == 0) goto LAB_000b6d28;
        iVar79 = *(int *)(param_1 + 4);
        if (*(int *)(iVar79 + 0xc2c) == 2) {
          iVar68 = *(int *)(iVar79 + 0x234);
          puVar90 = (undefined1 *)(iVar79 + 0x1cb0);
          if (iVar68 != 0) {
            uVar50 = *(uint *)(iVar79 + 0x238);
            if (*(char *)(iVar68 + 2) == '\x10') {
              uVar51 = 4000;
            }
            else {
              uVar51 = 8000;
            }
            if (0xe < uVar50) {
              uVar70 = 0xe;
              iVar79 = 6;
              do {
                iVar79 = malib_NextChunk((uchar *)(iVar68 + iVar79),uVar50 - iVar79,4,local_78,
                                         local_70);
                if (((local_78[0] == 0x43) && (uVar95 = local_70[0] - 1, uVar95 < 0x3e)) &&
                   (local_70[0] = uVar95, *(int *)(puVar90 + uVar95 * 0x10 + 4) == 0)) {
                  *(int *)(puVar90 + uVar95 * 0x10 + 8) = iVar79;
                  *(undefined4 *)(puVar90 + uVar95 * 0x10 + 0xc) = uVar51;
                  *(uint *)(puVar90 + uVar95 * 0x10 + 4) = iVar68 + uVar70;
                }
                iVar79 = iVar79 + uVar70;
                uVar70 = iVar79 + 8;
              } while (uVar70 < uVar50);
              puVar90 = (undefined1 *)(*(int *)(param_1 + 4) + 0x1cb0);
            }
          }
          uVar50 = 0;
          if (*(uchar **)(puVar90 + 4) != (uchar *)0x0) {
            iVar79 = MaSndDrv_SetStream(param_1,0,0x20,*(uint *)(puVar90 + 0xc),0,
                                        *(uchar **)(puVar90 + 4),*(uint *)(puVar90 + 8));
            bVar102 = -1 < iVar79;
            if (bVar102) {
              *puVar90 = 0;
            }
            else {
              *(undefined4 *)(puVar90 + 4) = 0;
            }
            uVar50 = (uint)bVar102;
            if (!bVar102) {
              *(uint *)(puVar90 + 8) = uVar50;
            }
          }
          if (*(uchar **)(puVar90 + 0x14) != (uchar *)0x0) {
            iVar79 = MaSndDrv_SetStream(param_1,uVar50,0x20,*(uint *)(puVar90 + 0x1c),0,
                                        *(uchar **)(puVar90 + 0x14),*(uint *)(puVar90 + 0x18));
            if (iVar79 < 0) {
              *(undefined4 *)(puVar90 + 0x14) = 0;
              *(undefined4 *)(puVar90 + 0x18) = 0;
            }
            else {
              uVar70 = uVar50 + 1;
              puVar90[0x10] = (char)uVar50;
              uVar50 = uVar70;
              cVar71 = '\x01';
              if (0x1f < uVar70) {
LAB_000b6f96:
                uVar50 = (uint)(byte)(cVar71 + 1U);
                if (uVar50 == 0x3e) {
                  iVar79 = *(int *)(param_1 + 4);
                  goto LAB_000b60ce;
                }
                uVar70 = uVar50 + 1 & 0xff;
                *(undefined4 *)(puVar90 + uVar50 * 0x10 + 4) = 0;
                *(undefined4 *)(puVar90 + uVar50 * 0x10 + 8) = 0;
                if (uVar70 != 0x3e) {
                  puVar77 = (undefined1 *)(int)(char)(0x3d - (cVar71 + 1U) & 7);
                  uVar50 = uVar70;
                  if (puVar77 != (undefined1 *)0x0) {
                    if (puVar77 != (undefined1 *)0x1) {
                      if (puVar77 != (undefined1 *)0x2) {
                        if (puVar77 != (undefined1 *)0x3) {
                          if (puVar77 != &DAT_00000004) {
                            if (puVar77 != &DAT_00000005) {
                              bVar102 = puVar77 != (undefined1 *)0x6;
                              if (bVar102) {
                                puVar77 = puVar90 + uVar70 * 0x10;
                                uVar50 = uVar70 + 1 & 0xff;
                              }
                              if (bVar102) {
                                *(undefined4 *)(puVar77 + 4) = 0;
                                *(undefined4 *)(puVar77 + 8) = 0;
                              }
                              uVar70 = uVar50 + 1 & 0xff;
                              *(undefined4 *)(puVar90 + uVar50 * 0x10 + 4) = 0;
                              *(undefined4 *)(puVar90 + uVar50 * 0x10 + 8) = 0;
                            }
                            uVar50 = uVar70 + 1 & 0xff;
                            *(undefined4 *)(puVar90 + uVar70 * 0x10 + 4) = 0;
                            *(undefined4 *)(puVar90 + uVar70 * 0x10 + 8) = 0;
                          }
                          uVar70 = uVar50 + 1 & 0xff;
                          *(undefined4 *)(puVar90 + uVar50 * 0x10 + 4) = 0;
                          *(undefined4 *)(puVar90 + uVar50 * 0x10 + 8) = 0;
                        }
                        uVar50 = uVar70 + 1 & 0xff;
                        *(undefined4 *)(puVar90 + uVar70 * 0x10 + 4) = 0;
                        *(undefined4 *)(puVar90 + uVar70 * 0x10 + 8) = 0;
                      }
                      uVar70 = uVar50 + 1 & 0xff;
                      *(undefined4 *)(puVar90 + uVar50 * 0x10 + 4) = 0;
                      *(undefined4 *)(puVar90 + uVar50 * 0x10 + 8) = 0;
                    }
                    uVar50 = uVar70 + 1 & 0xff;
                    *(undefined4 *)(puVar90 + uVar70 * 0x10 + 4) = 0;
                    *(undefined4 *)(puVar90 + uVar70 * 0x10 + 8) = 0;
                    if (uVar50 == 0x3e) goto LAB_000b70de;
                  }
                  do {
                    uVar70 = uVar50 + 1 & 0xff;
                    *(undefined4 *)(puVar90 + uVar50 * 0x10 + 4) = 0;
                    *(undefined4 *)(puVar90 + uVar50 * 0x10 + 8) = 0;
                    uVar50 = uVar70 + 1 & 0xff;
                    *(undefined4 *)(puVar90 + uVar70 * 0x10 + 4) = 0;
                    *(undefined4 *)(puVar90 + uVar70 * 0x10 + 8) = 0;
                    uVar70 = uVar50 + 1 & 0xff;
                    *(undefined4 *)(puVar90 + uVar50 * 0x10 + 4) = 0;
                    *(undefined4 *)(puVar90 + uVar50 * 0x10 + 8) = 0;
                    uVar50 = uVar70 + 1 & 0xff;
                    *(undefined4 *)(puVar90 + uVar70 * 0x10 + 4) = 0;
                    *(undefined4 *)(puVar90 + uVar70 * 0x10 + 8) = 0;
                    uVar70 = uVar50 + 1 & 0xff;
                    *(undefined4 *)(puVar90 + uVar50 * 0x10 + 4) = 0;
                    *(undefined4 *)(puVar90 + uVar50 * 0x10 + 8) = 0;
                    uVar50 = uVar70 + 1 & 0xff;
                    *(undefined4 *)(puVar90 + uVar70 * 0x10 + 4) = 0;
                    *(undefined4 *)(puVar90 + uVar70 * 0x10 + 8) = 0;
                    uVar70 = uVar50 + 1 & 0xff;
                    *(undefined4 *)(puVar90 + uVar50 * 0x10 + 4) = 0;
                    *(undefined4 *)(puVar90 + uVar50 * 0x10 + 8) = 0;
                    uVar50 = uVar70 + 1 & 0xff;
                    *(undefined4 *)(puVar90 + uVar70 * 0x10 + 4) = 0;
                    *(undefined4 *)(puVar90 + uVar70 * 0x10 + 8) = 0;
                  } while (uVar50 != 0x3e);
                }
LAB_000b70de:
                iVar79 = *(int *)(param_1 + 4);
                goto LAB_000b60ce;
              }
            }
          }
          puVar94 = puVar90 + 0x28;
          puVar77 = puVar90 + 0x20;
          cVar53 = '\x02';
          do {
            if (*(uchar **)(puVar94 + -4) != (uchar *)0x0) {
              iVar79 = MaSndDrv_SetStream(param_1,uVar50,0x20,*(uint *)(puVar77 + 0xc),0,
                                          *(uchar **)(puVar94 + -4),*(uint *)(puVar77 + 8));
              if (iVar79 < 0) {
                *(undefined4 *)(puVar94 + -4) = 0;
                *(undefined4 *)(puVar77 + 8) = 0;
              }
              else {
                puVar94[-8] = (char)uVar50;
                uVar50 = uVar50 + 1 & 0xff;
                cVar71 = cVar53;
                if (0x1f < uVar50) goto LAB_000b6f96;
              }
            }
            cVar71 = cVar53 + '\x01';
            if (*(uchar **)(puVar94 + 0xc) != (uchar *)0x0) {
              iVar79 = MaSndDrv_SetStream(param_1,uVar50,0x20,*(uint *)(puVar77 + 0x1c),0,
                                          *(uchar **)(puVar94 + 0xc),*(uint *)(puVar77 + 0x18));
              if (iVar79 < 0) {
                *(undefined4 *)(puVar94 + 0xc) = 0;
                *(undefined4 *)(puVar77 + 0x18) = 0;
              }
              else {
                puVar94[8] = (char)uVar50;
                uVar50 = uVar50 + 1 & 0xff;
                if (0x1f < uVar50) goto LAB_000b6f96;
              }
            }
            cVar71 = cVar53 + '\x02';
            if (*(uchar **)(puVar94 + 0x1c) != (uchar *)0x0) {
              iVar79 = MaSndDrv_SetStream(param_1,uVar50,0x20,*(uint *)(puVar77 + 0x2c),0,
                                          *(uchar **)(puVar94 + 0x1c),*(uint *)(puVar77 + 0x28));
              if (iVar79 < 0) {
                *(undefined4 *)(puVar94 + 0x1c) = 0;
                *(undefined4 *)(puVar77 + 0x28) = 0;
              }
              else {
                puVar94[0x18] = (char)uVar50;
                uVar50 = uVar50 + 1 & 0xff;
                if (0x1f < uVar50) goto LAB_000b6f96;
              }
            }
            cVar53 = cVar53 + '\x03';
            puVar77 = puVar77 + 0x30;
            puVar94 = puVar94 + 0x30;
          } while (cVar53 != '>');
          iVar79 = *(int *)(param_1 + 4);
        }
LAB_000b60ce:
        iVar89 = DAT_000b6a48;
        iVar68 = DAT_000b6a44;
        cVar71 = '\x05';
        iVar58 = DAT_000b6a3c + 0xb60e4;
        iVar69 = DAT_000b6a40 + 0xb60ea;
        local_d8 = 0;
        do {
          if ((*(int *)(iVar79 + 0x3c) != 0) && (iVar74 = *(int *)(iVar79 + 0x4c), iVar74 != 0)) {
            uVar50 = *(uint *)(iVar79 + 0x50);
            iVar60 = 0;
LAB_000b610e:
            if (iVar60 + 0x15U <= uVar50) {
              do {
                if (*(char *)(iVar74 + iVar60) == -1) {
                  iVar92 = iVar74 + iVar60;
                  if (*(char *)(iVar92 + 1) == -0x10) {
                    uVar70 = (uint)*(byte *)(iVar74 + iVar60 + 2);
                    if (uVar70 < 0x12) goto LAB_000b6126;
                    iVar85 = iVar60 + 3;
                    if ((*(char *)(iVar74 + iVar85) == 'C') && (*(byte *)(iVar92 + 4) - 2 < 2))
                    goto code_r0x000b6196;
                    iVar60 = iVar85 + uVar70;
                  }
                  else {
                    iVar60 = iVar60 + 3 + (uint)*(byte *)(iVar92 + 2);
                  }
                }
                else {
                  uVar70 = (uint)*(byte *)(iVar74 + iVar60 + 2);
LAB_000b6126:
                  iVar60 = iVar60 + 3 + uVar70;
                }
                if (uVar50 < iVar60 + 0x15U) break;
              } while( true );
            }
          }
          cVar71 = cVar71 + -1;
          iVar79 = iVar79 + 0x48;
        } while (cVar71 != '\0');
      }
      else {
        iVar79 = *(int *)(param_1 + 4);
        local_cc = *(int *)(iVar79 + 0xc2c);
        if (local_cc == 3) {
          local_c0 = iVar79 + 0x1a4;
        }
        else if (local_cc == 5) {
          local_c0 = iVar79 + 0x1ec;
        }
        else {
          local_c0 = iVar79 + 0x234;
        }
        if ((*(int *)(local_c0 + 0x20) != 0) && (*(char *)(iVar79 + 0x1c74) != '\0')) {
          if (local_cc == 3) {
            local_d8 = *(int *)(iVar79 + 0x1c4);
            uVar50 = *(uint *)(iVar79 + 0x1c8);
          }
          else if (local_cc == 5) {
            local_d8 = *(int *)(iVar79 + 0x20c);
            uVar50 = *(uint *)(iVar79 + 0x210);
          }
          else {
            local_d8 = *(int *)(iVar79 + 0x254);
            uVar50 = *(uint *)(iVar79 + 600);
          }
          iVar89 = 0x51eb851f;
          iVar68 = 0;
          while (uVar70 = iVar68 + 8, uVar70 < uVar50) {
            puVar52 = (uchar *)(local_d8 + iVar68);
            iVar58 = malib_NextChunk(puVar52,uVar50 - iVar68,6,local_78,local_70);
            if (iVar58 < 0) break;
            if (((local_78[0] != 0x3f) || (0x1f < local_70[0] - 1)) || (iVar58 < 4))
            goto switchD_000b6ed0_caseD_2;
            bVar57 = *(byte *)(local_d8 + uVar70);
            uVar95 = bVar57 & 0xffffff80;
            uVar56 = (uint)CONCAT11(puVar52[9],puVar52[10]);
            switch(bVar57 & 0x77) {
            case 1:
              if ((bVar57 & 0x80) != 0) {
                uVar75 = 0xc3;
                uVar95 = 0x43;
                uVar63 = uVar56 / 0x19;
                goto LAB_000b8182;
              }
              uVar95 = 3;
              uVar75 = 0x83;
              uVar63 = uVar56 / 0x32;
LAB_000b81ea:
              if (iVar58 + -3 <= (int)uVar63) break;
              goto LAB_000b8196;
            case 3:
              if (*(int *)(iVar79 + 0xc2c) == 7) {
                if ((bVar57 & 0x80) == 0) {
                  uVar95 = 1;
                  uVar75 = 0x81;
                  uVar63 = uVar56 / 0x19;
                  goto LAB_000b81ea;
                }
                uVar95 = 0x41;
                uVar75 = 0xc1;
                uVar63 = (uint)((ulonglong)((longlong)(int)(uVar56 << 2) * 0x51eb851f) >> 0x24);
                goto LAB_000b8182;
              }
              break;
            case 0x11:
              if ((bVar57 & 0x80) == 0) {
                uVar95 = 2;
                uVar75 = 0x82;
                uVar63 = uVar56 / 0x32;
                goto LAB_000b81ea;
              }
              uVar95 = 0x42;
              uVar75 = 0xc2;
              uVar63 = uVar56 / 0x19;
              goto LAB_000b8182;
            case 0x20:
              if ((bVar57 & 0x80) == 0) {
                uVar75 = 0x80;
                uVar63 = uVar56 / 100;
                goto LAB_000b81ea;
              }
              uVar75 = 0xc0;
              uVar95 = 0x40;
              uVar63 = uVar56 / 0x32;
LAB_000b8182:
              if (((int)uVar63 < iVar58 + -3) && (*(int *)(iVar79 + 0xc2c) != 3)) {
LAB_000b8196:
                if ((((bVar57 & 8) == 0) || (uVar95 = uVar75, *(int *)(iVar79 + 0xc2c) == 7)) &&
                   (iVar68 = MaSndDrv_SetStream(param_1,local_70[0] - 1,uVar95,uVar56,0,
                                                (uchar *)(iVar68 + 0xb + local_d8),iVar58 - 3),
                   -1 < iVar68)) {
                  *(undefined1 *)(local_70[0] * 3 + iVar79 + 0x208d) = 0;
                }
              }
            }
switchD_000b6ed0_caseD_2:
            iVar68 = iVar58 + uVar70;
          }
          iVar79 = *(int *)(param_1 + 4);
        }
        if (*(int *)(local_c0 + 0x10) != 0) {
          if (*(int *)(iVar79 + 0xc2c) == 3) {
            iVar68 = *(int *)(iVar79 + 0x1b4);
            uVar50 = 1;
            uVar70 = *(uint *)(iVar79 + 0x1b8);
            cVar71 = '\f';
            cVar53 = '\x06';
          }
          else if (*(int *)(iVar79 + 0xc2c) == 5) {
            iVar68 = *(int *)(iVar79 + 0x1fc);
            uVar50 = 0;
            uVar70 = *(uint *)(iVar79 + 0x200);
            cVar71 = '\f';
            cVar53 = '\a';
          }
          else {
            iVar68 = *(int *)(iVar79 + 0x244);
            uVar50 = 0;
            uVar70 = *(uint *)(iVar79 + 0x248);
            cVar71 = ',';
            cVar53 = '\b';
          }
          iVar79 = 0x1fffff;
          iVar58 = 0;
          while (iVar101 = iVar58, iVar61 = DAT_000b7d80, iVar85 = DAT_000b7d7c,
                iVar92 = DAT_000b7d78, iVar60 = DAT_000b6a5c, iVar74 = DAT_000b6a54,
                iVar69 = DAT_000b6a50, iVar58 = DAT_000b6a4c, iVar101 + 9U <= uVar70) {
            iVar65 = iVar68 + iVar101;
            if ((uVar70 - iVar101 < 6) || (*(char *)(iVar68 + iVar101) != -0x10)) break;
            uVar95 = *(byte *)(iVar65 + 1) & 0x7f;
            if ((int)((uint)*(byte *)(iVar65 + 1) << 0x18) < 0) {
              uVar95 = (*(byte *)(iVar65 + 2) & 0x7f) + uVar95 * 0x80;
              if ((int)((uint)*(byte *)(iVar65 + 2) << 0x18) < 0) {
                uVar95 = (*(byte *)(iVar65 + 3) & 0x7f) + uVar95 * 0x80;
                if ((int)((uint)*(byte *)(iVar65 + 3) << 0x18) < 0) {
                  if (((*(byte *)(iVar65 + 4) & 0x80) != 0) ||
                     (uVar95 = (uint)*(byte *)(iVar65 + 4) + uVar95 * 0x80, 0x1fffff < uVar95))
                  break;
                  iVar81 = 5;
                  iVar87 = 4;
                }
                else {
                  iVar81 = 4;
                  iVar87 = 3;
                }
              }
              else {
                iVar81 = 3;
                iVar87 = 2;
              }
            }
            else {
              iVar81 = 2;
              iVar87 = 1;
            }
            uVar95 = uVar95 + iVar81;
            if (uVar70 - iVar101 < uVar95) break;
            if ((((*(char *)(iVar65 + iVar81) == 'C') &&
                 (iVar65 = iVar65 + iVar87, *(char *)(iVar65 + 2) == 'y')) &&
                (*(char *)(iVar65 + 3) == cVar53)) && (*(char *)(iVar65 + 4) == '\x7f')) {
              iVar89 = uVar95 + iVar101;
              iVar58 = iVar89;
              if ((cVar71 == *(char *)(iVar65 + 5)) && (7 < uVar95)) {
                iVar101 = iVar101 + iVar87 + 6;
                uVar56 = (uint)*(byte *)(iVar68 + iVar101);
                if ((uVar56 & 0xef) == 0xf || uVar56 == 0x17) {
                  MaSndDrv_SetFmExtWave
                            (param_1,uVar56,uVar50,(uchar *)(iVar101 + 1 + iVar68),
                             (uVar95 - 2) - (iVar87 + 6));
                }
              }
            }
            else {
              iVar58 = iVar101 + uVar95;
            }
          }
          if (local_cc == 7) {
            uVar70 = DAT_000b7d78 + 0xb7156;
            puVar52 = (uchar *)(DAT_000b7d7c + 0xb715e);
            puVar59 = (uchar *)(DAT_000b7d80 + 0xb7167);
            iVar68 = *(int *)(*(int *)(param_1 + 4) + 0x244);
            uVar50 = *(uint *)(*(int *)(param_1 + 4) + 0x248);
            iVar79 = 0;
LAB_000b7144:
            iVar89 = iVar79;
            if (iVar89 + 0xeU < uVar50) {
              uVar95 = uVar50 - iVar89;
              if (((uVar95 < 6) || (*(char *)(iVar68 + iVar89) != -0x10)) ||
                 (uVar95 = FUN_000ace64(iVar68 + iVar89,uVar95,local_78,local_70), uVar95 == 0))
              goto LAB_000b73aa;
              uVar56 = local_70[0] & 0xff;
              iVar79 = uVar95 + iVar89;
              if (((uVar56 != 0) && ((char)local_78[0] == '!')) && (5 < uVar95)) {
                iVar89 = iVar89 + uVar56;
                iVar58 = iVar68 + iVar89;
                local_cc = (uint)*(byte *)(iVar58 + 2);
                bVar57 = *(byte *)(iVar58 + 1);
                bVar1 = *(byte *)(iVar58 + 3);
                uVar75 = (uint)bVar1;
                bVar102 = bVar57 == 9;
                if (bVar57 < 10) {
                  bVar102 = *(char *)(iVar68 + iVar89) == '|';
                }
                bVar66 = *(byte *)(iVar58 + 4);
                bVar91 = *(byte *)(iVar58 + 5);
                if (bVar102) {
                  local_c0 = (uint)(byte)(bVar57 + 1);
                }
                else {
                  if ((bVar57 != 0 || *(char *)(iVar68 + iVar89) != '}') || (9 < local_cc))
                  goto LAB_000b7144;
                  local_c0 = local_cc - 0x7f;
                  local_cc = uVar75 & 0x7f;
                  local_c0 = local_c0 & 0xff;
                }
                iVar69 = uVar95 - uVar56;
                *(undefined4 *)(iVar92 + 0xb7156) = 0;
                uVar95 = iVar69 - 7;
                *(undefined4 *)(iVar92 + 0xb715a) = 0;
                *(undefined4 *)(iVar92 + 0xb715e) = 0;
                *(undefined4 *)(iVar92 + 0xb7162) = 0;
                *(undefined4 *)(iVar92 + 0xb7166) = 0;
                *(undefined4 *)(iVar92 + 0xb716a) = 0;
                *(undefined4 *)(iVar92 + 0xb716e) = 0;
                *(undefined4 *)(iVar92 + 0xb7172) = 0;
                *(undefined4 *)(iVar92 + 0xb7176) = 0;
                *(undefined4 *)(iVar92 + 0xb717a) = 0;
                *(undefined4 *)(iVar92 + 0xb717e) = 0;
                *(undefined4 *)(iVar92 + 0xb7182) = 0;
                *(undefined4 *)(iVar92 + 0xb7186) = 0;
                *(undefined4 *)(iVar92 + 0xb718a) = 0;
                *(undefined4 *)(iVar92 + 0xb718e) = 0;
                if (uVar95 != 0) {
                  if (uVar95 < 9 ||
                      ((iVar58 + 6U & 3) != 0 ||
                      uVar70 < iVar58 + 10U && iVar58 + 6U < iVar92 + 0xb715aU)) {
                    uVar56 = 1;
                    uVar63 = iVar69 - 8U & 7;
                    uVar73 = (undefined1)uVar63;
                    *(undefined1 *)(iVar92 + 0xb7156) = *(undefined1 *)(iVar58 + 6);
                    if (uVar95 != 1) {
                      if (uVar63 != 0) {
                        if (uVar63 != 1) {
                          if (uVar63 != 2) {
                            if (uVar63 != 3) {
                              if (uVar63 != 4) {
                                if (uVar63 != 5) {
                                  if (uVar63 != 6) {
                                    uVar73 = *(undefined1 *)(iVar58 + 7);
                                    uVar56 = 2;
                                  }
                                  if (uVar63 != 6) {
                                    *(undefined1 *)(iVar92 + 0xb7157) = uVar73;
                                  }
                                  *(undefined1 *)(uVar56 + iVar92 + 0xb7156) =
                                       *(undefined1 *)(iVar58 + uVar56 + 6);
                                  uVar56 = uVar56 + 1;
                                }
                                *(undefined1 *)(uVar56 + iVar92 + 0xb7156) =
                                     *(undefined1 *)(iVar58 + uVar56 + 6);
                                uVar56 = uVar56 + 1;
                              }
                              *(undefined1 *)(uVar56 + iVar92 + 0xb7156) =
                                   *(undefined1 *)(iVar58 + uVar56 + 6);
                              uVar56 = uVar56 + 1;
                            }
                            *(undefined1 *)(uVar56 + iVar92 + 0xb7156) =
                                 *(undefined1 *)(iVar58 + uVar56 + 6);
                            uVar56 = uVar56 + 1;
                          }
                          *(undefined1 *)(uVar56 + iVar92 + 0xb7156) =
                               *(undefined1 *)(iVar58 + uVar56 + 6);
                          uVar56 = uVar56 + 1;
                        }
                        *(undefined1 *)(uVar56 + iVar92 + 0xb7156) =
                             *(undefined1 *)(iVar58 + uVar56 + 6);
                        uVar56 = uVar56 + 1;
                        if (uVar95 == uVar56) goto LAB_000b7344;
                      }
                      do {
                        iVar60 = iVar92 + 0xb7156;
                        *(undefined1 *)(uVar56 + iVar60) = *(undefined1 *)(iVar58 + uVar56 + 6);
                        *(undefined1 *)(iVar60 + uVar56 + 1) =
                             *(undefined1 *)(iVar58 + uVar56 + 1 + 6);
                        *(undefined1 *)(iVar60 + uVar56 + 2) =
                             *(undefined1 *)(iVar58 + uVar56 + 2 + 6);
                        *(undefined1 *)(iVar60 + uVar56 + 3) =
                             *(undefined1 *)(iVar58 + uVar56 + 3 + 6);
                        *(undefined1 *)(iVar60 + uVar56 + 4) =
                             *(undefined1 *)(iVar58 + uVar56 + 4 + 6);
                        iVar74 = uVar56 + 6;
                        *(undefined1 *)(iVar60 + uVar56 + 5) =
                             *(undefined1 *)(iVar58 + uVar56 + 5 + 6);
                        iVar89 = uVar56 + 7;
                        uVar56 = uVar56 + 8;
                        *(undefined1 *)(iVar60 + iVar74) = *(undefined1 *)(iVar58 + iVar74 + 6);
                        *(undefined1 *)(iVar60 + iVar89) = *(undefined1 *)(iVar58 + iVar89 + 6);
                      } while (uVar95 != uVar56);
                    }
                  }
                  else {
                    uVar56 = uVar95 >> 2;
                    uVar51 = *(undefined4 *)(iVar58 + 10);
                    uVar63 = uVar56 * 4;
                    *(undefined4 *)(iVar92 + 0xb7156) = *(undefined4 *)(iVar58 + 6);
                    *(undefined4 *)(iVar92 + 0xb715a) = uVar51;
                    if (((((uVar56 != 2) &&
                          (*(undefined4 *)(iVar92 + 0xb715e) = *(undefined4 *)(iVar58 + 0xe),
                          uVar56 != 3)) &&
                         (((*(undefined4 *)(iVar92 + 0xb7162) = *(undefined4 *)(iVar58 + 0x12),
                           uVar56 != 4 &&
                           (((*(undefined4 *)(iVar92 + 0xb7166) = *(undefined4 *)(iVar58 + 0x16),
                             uVar56 != 5 &&
                             (*(undefined4 *)(iVar92 + 0xb716a) = *(undefined4 *)(iVar58 + 0x1a),
                             uVar56 != 6)) &&
                            (*(undefined4 *)(iVar92 + 0xb716e) = *(undefined4 *)(iVar58 + 0x1e),
                            uVar56 != 7)))) &&
                          (((*(undefined4 *)(iVar92 + 0xb7172) = *(undefined4 *)(iVar58 + 0x22),
                            uVar56 != 8 &&
                            (*(undefined4 *)(iVar92 + 0xb7176) = *(undefined4 *)(iVar58 + 0x26),
                            iVar74 = DAT_000b7d84, uVar56 != 9)) &&
                           (*(undefined4 *)(DAT_000b7d84 + 0xb732c) = *(undefined4 *)(iVar58 + 0x2a)
                           , uVar56 != 10)))))) &&
                        ((*(undefined4 *)(iVar74 + 0xb7330) = *(undefined4 *)(iVar58 + 0x2e),
                         uVar56 != 0xb &&
                         (*(undefined4 *)(iVar74 + 0xb7334) = *(undefined4 *)(iVar58 + 0x32),
                         uVar56 != 0xc)))) &&
                       ((*(undefined4 *)(iVar74 + 0xb7338) = *(undefined4 *)(iVar58 + 0x36),
                        uVar56 != 0xd &&
                        (*(undefined4 *)(iVar74 + 0xb733c) = *(undefined4 *)(iVar58 + 0x3a),
                        uVar56 != 0xe)))) {
                      *(undefined4 *)(iVar74 + 0xb7340) = *(undefined4 *)(iVar58 + 0x3e);
                    }
                    if (uVar95 != uVar63) {
                      iVar58 = iVar89 + 6 + iVar68;
                      uVar80 = uVar63 + 1;
                      iVar89 = DAT_000b7d88 + 0xb731e;
                      *(undefined1 *)(iVar89 + uVar63 + 0x3c) = *(undefined1 *)(iVar58 + uVar56 * 4)
                      ;
                      if (uVar80 < uVar95) {
                        uVar63 = uVar63 + 2;
                        *(undefined1 *)(uVar80 + iVar89 + 0x3c) = *(undefined1 *)(iVar58 + uVar80);
                        if (uVar63 < uVar95) {
                          *(undefined1 *)(uVar63 + iVar89 + 0x3c) = *(undefined1 *)(iVar58 + uVar63)
                          ;
                        }
                      }
                    }
                  }
                }
LAB_000b7344:
                if ((int)((uint)bVar91 << 0x1f) < 0) {
                  uVar73 = *(undefined1 *)(DAT_000b7dc4 + 0xb7d3e);
                  uVar95 = (uint)*(byte *)(iVar69 + DAT_000b7dc4 + 0xb7d36);
                  if ((bVar1 & 0x80) == 0) {
                    uVar56 = 1;
                  }
                  else {
                    uVar56 = 3;
                  }
                  uVar5 = *(undefined1 *)(DAT_000b7dc4 + 0xb7d3f);
                  uVar63 = uVar95 & 0x7f;
                  if (-1 < (int)(uVar95 << 0x18)) {
                    FUN_000ad2a0(param_1,uVar63);
                    uVar63 = uVar63 + 0x80;
                  }
                  *(byte *)(iVar85 + 0xb715f) = *(byte *)(iVar85 + 0xb715f) & 0xef;
                  MaSndDrv_SetVoice(param_1,local_c0,local_cc,uVar56,(uint)CONCAT11(uVar73,uVar5),
                                    uVar63,uVar75 & 0x7f,bVar66 & 0x7f,puVar52,iVar69 - 9);
                }
                else if ((bVar91 & 4) == 0) {
                  *(byte *)(iVar61 + 0xb7168) = *(byte *)(iVar61 + 0xb7168) & 0xef;
                  if ((bVar1 & 0x80) == 0) {
                    uVar95 = 0;
                  }
                  else {
                    uVar95 = 2;
                  }
                  MaSndDrv_SetVoice(param_1,local_c0,local_cc,uVar95,
                                    (uint)*(byte *)(iVar61 + 0xb7166),bVar91 & 4,uVar75 & 0x7f,
                                    bVar66 & 0x7f,puVar59,iVar69 - 8);
                }
              }
              goto LAB_000b7144;
            }
LAB_000b73aa:
            iVar79 = *(int *)(param_1 + 4);
          }
          else {
            uVar70 = *(uint *)(param_1 + 4);
            puVar86 = (undefined4 *)(DAT_000b6a4c + 0xb6368);
            pbVar88 = (byte *)(DAT_000b6a50 + 0xb636e);
            pbVar62 = (byte *)(DAT_000b6a54 + 0xb6378);
            pbVar93 = (byte *)(DAT_000b6a58 + 0xb637e);
            bVar102 = *(int *)(uVar70 + 0xc2c) != 3;
            pbVar100 = (byte *)(DAT_000b6a5c + 0xb6384);
            if (bVar102) {
              iVar89 = *(int *)(uVar70 + 0x1fc);
              local_cc = 7;
              uVar50 = uVar70;
            }
            else {
              iVar79 = 6;
            }
            if (bVar102) {
              uVar50 = *(uint *)(uVar50 + 0x200);
            }
            else {
              iVar89 = *(int *)(uVar70 + 0x1b4);
              uVar50 = *(uint *)(uVar70 + 0x1b8);
              local_cc = iVar79;
            }
            uVar95 = DAT_000b6a4c + 0xb636c;
            iVar79 = 0;
            bVar57 = local_66[5];
            bVar1 = local_66[7];
            bVar66 = local_66[8];
            bVar91 = local_66[10];
            bVar3 = local_66[0xb];
            bVar4 = local_66[0xc];
            bVar6 = local_66[0xd];
            bVar7 = local_66[0xe];
            bVar8 = local_66[0xf];
            bVar9 = local_66[0x10];
            bVar10 = local_66[0x11];
            bVar11 = local_66[0x12];
            bVar12 = local_66[0x13];
            bVar13 = local_66[0x14];
            bVar14 = local_66[0x15];
            bVar15 = local_66[0x16];
            bVar16 = local_66[0x17];
            bVar17 = local_66[0x18];
            bVar18 = local_66[0x19];
            bVar19 = local_66[0x1a];
            bVar20 = local_66[0x1b];
            bVar21 = local_66[0x1c];
            bVar22 = local_66[0x1d];
            bVar23 = local_66[0x1e];
            bVar24 = local_66[0x1f];
            bVar25 = local_66[0x20];
            bVar26 = local_66[0x21];
            bVar27 = local_66[0x22];
            bVar28 = local_66[0x23];
            bVar29 = local_66[0x24];
            bVar30 = local_66[0x25];
            bVar31 = local_66[0x26];
            bVar32 = local_66[0x27];
            bVar33 = local_66[0x28];
            bVar34 = local_66[0x29];
            bVar35 = local_66[0x2a];
            bVar36 = local_66[0x2b];
            bVar37 = local_66[0x2c];
            bVar38 = local_66[0x2d];
            bVar39 = local_66[0x2e];
            bVar40 = local_66[0x2f];
            bVar41 = local_66[0x30];
            bVar42 = local_66[0x31];
            bVar43 = local_66[0x32];
            bVar44 = local_66[0x33];
            bVar45 = local_66[0x34];
            bVar46 = local_66[0x35];
            bVar47 = local_66[0x36];
            bVar48 = local_66[0x37];
LAB_000b63c4:
            local_66[0x37] = bVar48;
            local_66[0x36] = bVar47;
            local_66[0x35] = bVar46;
            local_66[0x34] = bVar45;
            local_66[0x33] = bVar44;
            local_66[0x32] = bVar43;
            local_66[0x31] = bVar42;
            local_66[0x30] = bVar41;
            local_66[0x2f] = bVar40;
            local_66[0x2e] = bVar39;
            local_66[0x2d] = bVar38;
            local_66[0x2c] = bVar37;
            local_66[0x2b] = bVar36;
            local_66[0x2a] = bVar35;
            local_66[0x29] = bVar34;
            local_66[0x28] = bVar33;
            local_66[0x27] = bVar32;
            local_66[0x26] = bVar31;
            local_66[0x25] = bVar30;
            local_66[0x24] = bVar29;
            local_66[0x23] = bVar28;
            local_66[0x22] = bVar27;
            local_66[0x21] = bVar26;
            local_66[0x20] = bVar25;
            local_66[0x1f] = bVar24;
            local_66[0x1e] = bVar23;
            local_66[0x1d] = bVar22;
            local_66[0x1c] = bVar21;
            local_66[0x1b] = bVar20;
            local_66[0x1a] = bVar19;
            local_66[0x19] = bVar18;
            local_66[0x18] = bVar17;
            local_66[0x17] = bVar16;
            local_66[0x16] = bVar15;
            local_66[0x15] = bVar14;
            local_66[0x14] = bVar13;
            local_66[0x13] = bVar12;
            local_66[0x12] = bVar11;
            local_66[0x11] = bVar10;
            local_66[0x10] = bVar9;
            local_66[0xf] = bVar8;
            local_66[0xe] = bVar7;
            local_66[0xd] = bVar6;
            local_66[0xc] = bVar4;
            local_66[0xb] = bVar3;
            local_66[10] = bVar91;
            local_66[8] = bVar66;
            local_66[7] = bVar1;
            local_66[5] = bVar57;
            iVar68 = iVar79;
            if (iVar68 + 0xdU < uVar50) {
              if (((uVar50 - iVar68 < 6) || (*(char *)(iVar89 + iVar68) != -0x10)) ||
                 (uVar56 = FUN_000acd7c(iVar89 + iVar68,uVar50 - iVar68,local_cc,local_78,local_70),
                 iVar92 = DAT_000b7da0, uVar56 == 0)) goto LAB_000b6cee;
              uVar75 = local_70[0] & 0xff;
              iVar79 = uVar56 + iVar68;
              bVar57 = local_66[5];
              bVar1 = local_66[7];
              bVar66 = local_66[8];
              bVar91 = local_66[10];
              bVar3 = local_66[0xb];
              bVar4 = local_66[0xc];
              bVar6 = local_66[0xd];
              bVar7 = local_66[0xe];
              bVar8 = local_66[0xf];
              bVar9 = local_66[0x10];
              bVar10 = local_66[0x11];
              bVar11 = local_66[0x12];
              bVar12 = local_66[0x13];
              bVar13 = local_66[0x14];
              bVar14 = local_66[0x15];
              bVar15 = local_66[0x16];
              bVar16 = local_66[0x17];
              bVar17 = local_66[0x18];
              bVar18 = local_66[0x19];
              bVar19 = local_66[0x1a];
              bVar20 = local_66[0x1b];
              bVar21 = local_66[0x1c];
              bVar22 = local_66[0x1d];
              bVar23 = local_66[0x1e];
              bVar24 = local_66[0x1f];
              bVar25 = local_66[0x20];
              bVar26 = local_66[0x21];
              bVar27 = local_66[0x22];
              bVar28 = local_66[0x23];
              bVar29 = local_66[0x24];
              bVar30 = local_66[0x25];
              bVar31 = local_66[0x26];
              bVar32 = local_66[0x27];
              bVar33 = local_66[0x28];
              bVar34 = local_66[0x29];
              bVar35 = local_66[0x2a];
              bVar36 = local_66[0x2b];
              bVar37 = local_66[0x2c];
              bVar38 = local_66[0x2d];
              bVar39 = local_66[0x2e];
              bVar40 = local_66[0x2f];
              bVar41 = local_66[0x30];
              bVar42 = local_66[0x31];
              bVar43 = local_66[0x32];
              bVar44 = local_66[0x33];
              bVar45 = local_66[0x34];
              bVar46 = local_66[0x35];
              bVar47 = local_66[0x36];
              bVar48 = local_66[0x37];
              if (((uVar75 != 0) && ((char)local_78[0] == '\x01')) && (4 < uVar56)) {
                iVar68 = iVar68 + uVar75;
                iVar85 = iVar89 + iVar68;
                bVar49 = *(byte *)(iVar85 + 1);
                local_b0 = (uint)*(byte *)(iVar85 + 3);
                bVar2 = *(byte *)(iVar85 + 4);
                bVar102 = bVar49 == 9;
                if (bVar49 < 10) {
                  bVar102 = *(char *)(iVar89 + iVar68) == '|';
                }
                uVar63 = (uint)*(byte *)(iVar85 + 2);
                if (bVar102) {
                  local_ac = (uint)(byte)(bVar49 + 1);
                  local_b0 = uVar63;
                }
                else {
                  if ((bVar49 != 0 || *(char *)(iVar89 + iVar68) != '}') || (9 < uVar63))
                  goto LAB_000b63c4;
                  local_ac = uVar63 - 0x7f & 0xff;
                }
                iVar68 = iVar68 + 5;
                uVar56 = (-6 - uVar75) + uVar56;
                if (*(int *)(uVar70 + 0xc2c) == 3) {
                  iVar68 = iVar89 + iVar68;
                  uVar75 = 0;
                  if (uVar56 != 0 && iVar68 != 0) {
                    iVar65 = DAT_000b7d90 + 0xb7c3c;
                    iVar96 = DAT_000b7d94 + 0xb7c42;
                    iVar87 = DAT_000b7d98 + 0xb7c50;
                    iVar97 = DAT_000b7d9c + 0xb7c56;
                    uVar54 = DAT_000b7da4 + 0xb7c62;
                    iVar61 = DAT_000b7da8 + 0xb7c68;
                    iVar81 = DAT_000b7dac + 0xb7c72;
                    iVar98 = DAT_000b7db0 + 0xb7c76;
                    iVar85 = DAT_000b7db4 + 0xb7c84;
                    iVar101 = DAT_000b7db8 + 0xb7c90;
                    iVar82 = DAT_000b7dbc + 0xb7c92;
                    iVar99 = DAT_000b7dc0 + 0xb7c96;
                    *(undefined4 *)(DAT_000b7da0 + 0xb7c5c) = 0;
                    *(undefined4 *)(iVar92 + 0xb7c60) = 0;
                    *(undefined4 *)(iVar92 + 0xb7c64) = 0;
                    *(undefined4 *)(iVar92 + 0xb7c68) = 0;
                    *(undefined4 *)(iVar92 + 0xb7c6c) = 0;
                    *(undefined4 *)(iVar92 + 0xb7c70) = 0;
                    *(undefined4 *)(iVar92 + 0xb7c74) = 0;
                    *(undefined4 *)(iVar92 + 0xb7c78) = 0;
                    *(undefined4 *)(iVar92 + 0xb7c7c) = 0;
                    *(undefined4 *)(iVar92 + 0xb7c80) = 0;
                    *(undefined4 *)(iVar92 + 0xb7c84) = 0;
                    *(undefined4 *)(iVar92 + 0xb7c88) = 0;
                    *(undefined4 *)(iVar92 + 0xb7c8c) = 0;
                    *(undefined4 *)(iVar92 + 0xb7c90) = 0;
                    *(undefined4 *)(iVar92 + 0xb7c94) = 0;
                    uVar63 = 0;
                    uVar80 = 0;
                    do {
                      uVar75 = uVar80;
                      if (uVar56 < uVar63 + 8) {
                        uVar72 = uVar56 - uVar63;
                        bVar49 = *(byte *)(iVar68 + uVar63);
                        if (1 < uVar72) goto LAB_000b7dce;
                      }
                      else {
                        bVar49 = *(byte *)(iVar68 + uVar63);
                        uVar72 = 8;
LAB_000b7dce:
                        if (0x3b < uVar80) break;
                        iVar92 = iVar68 + uVar63;
                        if ((bVar49 & 0x40) == 0) {
                          *(byte *)(DAT_000b8260 + 0xb7dec + uVar80) = *(byte *)(iVar92 + 1) & 0x7f;
                        }
                        else {
                          *(byte *)(DAT_000b8264 + 0xb7f36 + uVar80) = *(byte *)(iVar92 + 1) | 0x80;
                        }
                        uVar75 = uVar80 + 1;
                        if (uVar72 != 2) {
                          if (uVar75 == 0x3c) break;
                          if ((bVar49 & 0x20) == 0) {
                            bVar78 = *(byte *)(iVar92 + 2) & 0x7f;
                            iVar84 = iVar99;
                          }
                          else {
                            bVar78 = *(byte *)(iVar92 + 2) | 0x80;
                            iVar84 = iVar82;
                          }
                          *(byte *)(iVar84 + uVar75) = bVar78;
                          uVar75 = uVar80 + 2;
                          if (uVar72 != 3) {
                            if (uVar75 == 0x3c) break;
                            if ((bVar49 & 0x10) == 0) {
                              bVar78 = *(byte *)(iVar92 + 3) & 0x7f;
                              iVar84 = iVar101;
                            }
                            else {
                              bVar78 = *(byte *)(iVar92 + 3) | 0x80;
                              iVar84 = iVar98;
                            }
                            *(byte *)(iVar84 + uVar75) = bVar78;
                            uVar75 = uVar80 + 3;
                            if (uVar72 != 4) {
                              if (uVar75 == 0x3c) break;
                              if ((bVar49 & 8) == 0) {
                                bVar78 = *(byte *)(iVar92 + 4) & 0x7f;
                                iVar84 = iVar81;
                              }
                              else {
                                bVar78 = *(byte *)(iVar92 + 4) | 0x80;
                                iVar84 = iVar85;
                              }
                              *(byte *)(iVar84 + uVar75) = bVar78;
                              uVar75 = uVar80 + 4;
                              if (uVar72 != 5) {
                                if (uVar75 == 0x3c) break;
                                if ((bVar49 & 4) == 0) {
                                  bVar78 = *(byte *)(iVar92 + 5) & 0x7f;
                                  iVar84 = iVar97;
                                }
                                else {
                                  bVar78 = *(byte *)(iVar92 + 5) | 0x80;
                                  iVar84 = iVar87;
                                }
                                *(byte *)(iVar84 + uVar75) = bVar78;
                                uVar75 = uVar80 + 5;
                                if (uVar72 != 6) {
                                  if (uVar75 == 0x3c) break;
                                  if ((bVar49 & 2) == 0) {
                                    uVar83 = *(byte *)(iVar92 + 6) & 0x7f;
                                    iVar84 = iVar61;
                                  }
                                  else {
                                    uVar83 = *(byte *)(iVar92 + 6) | 0xffffff80;
                                    iVar84 = iVar96;
                                  }
                                  *(char *)(iVar84 + uVar75) = (char)uVar83;
                                  uVar75 = uVar80 + 6;
                                  if (uVar72 != 7) {
                                    if (uVar75 == 0x3c) break;
                                    bVar102 = (bVar49 & 1) != 0;
                                    if (bVar102) {
                                      bVar49 = *(byte *)(iVar92 + 7) | 0x80;
                                      *(byte *)(iVar65 + uVar75) = bVar49;
                                    }
                                    else {
                                      bVar49 = *(byte *)(iVar92 + 7) & 0x7f;
                                      uVar83 = uVar54;
                                    }
                                    if (!bVar102) {
                                      *(byte *)(uVar83 + uVar75) = bVar49;
                                    }
                                    uVar75 = uVar80 + 7;
                                    if (uVar72 != 8) break;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      uVar63 = uVar63 + uVar72;
                      uVar80 = uVar75;
                    } while (uVar63 < uVar56);
                  }
                }
                else {
                  *puVar86 = 0;
                  *(undefined4 *)(iVar58 + 0xb636c) = 0;
                  *(undefined4 *)(iVar58 + 0xb6370) = 0;
                  *(undefined4 *)(iVar58 + 0xb6374) = 0;
                  *(undefined4 *)(iVar58 + 0xb6378) = 0;
                  *(undefined4 *)(iVar58 + 0xb637c) = 0;
                  *(undefined4 *)(iVar58 + 0xb6380) = 0;
                  *(undefined4 *)(iVar58 + 0xb6384) = 0;
                  *(undefined4 *)(iVar58 + 0xb6388) = 0;
                  *(undefined4 *)(iVar58 + 0xb638c) = 0;
                  *(undefined4 *)(iVar58 + 0xb6390) = 0;
                  *(undefined4 *)(iVar58 + 0xb6394) = 0;
                  *(undefined4 *)(iVar58 + 0xb6398) = 0;
                  *(undefined4 *)(iVar58 + 0xb639c) = 0;
                  *(undefined4 *)(iVar58 + 0xb63a0) = 0;
                  iVar92 = DAT_000b7d8c;
                  uVar75 = uVar56;
                  if (uVar56 != 0) {
                    if (uVar56 < 9 ||
                        ((iVar85 + 5U & 3) != 0 ||
                        iVar85 + 5U < uVar95 && puVar86 < (undefined4 *)(iVar85 + 9))) {
                      uVar63 = 1;
                      puVar90 = (undefined1 *)(DAT_000b7d8c + 0xb750c);
                      uVar80 = uVar56 - 1 & 7;
                      uVar73 = (undefined1)uVar80;
                      *puVar90 = *(undefined1 *)(iVar85 + 5);
                      if (uVar56 != 1) {
                        if (uVar80 != 0) {
                          if (uVar80 != 1) {
                            if (uVar80 != 2) {
                              if (uVar80 != 3) {
                                if (uVar80 != 4) {
                                  if (uVar80 != 5) {
                                    if (uVar80 != 6) {
                                      uVar73 = *(undefined1 *)(iVar85 + 6);
                                      uVar63 = 2;
                                    }
                                    if (uVar80 != 6) {
                                      *(undefined1 *)(iVar92 + 0xb750d) = uVar73;
                                    }
                                    puVar90[uVar63] = *(undefined1 *)(iVar85 + uVar63 + 5);
                                    uVar63 = uVar63 + 1;
                                  }
                                  puVar90[uVar63] = *(undefined1 *)(iVar85 + uVar63 + 5);
                                  uVar63 = uVar63 + 1;
                                }
                                puVar90[uVar63] = *(undefined1 *)(iVar85 + uVar63 + 5);
                                uVar63 = uVar63 + 1;
                              }
                              puVar90[uVar63] = *(undefined1 *)(iVar85 + uVar63 + 5);
                              uVar63 = uVar63 + 1;
                            }
                            puVar90[uVar63] = *(undefined1 *)(iVar85 + uVar63 + 5);
                            uVar63 = uVar63 + 1;
                          }
                          puVar90[uVar63] = *(undefined1 *)(iVar85 + uVar63 + 5);
                          uVar63 = uVar63 + 1;
                          if (uVar63 == uVar56) goto LAB_000b65ce;
                        }
                        do {
                          puVar90[uVar63] = *(undefined1 *)(iVar85 + uVar63 + 5);
                          puVar90[uVar63 + 1] = *(undefined1 *)(iVar85 + uVar63 + 1 + 5);
                          puVar90[uVar63 + 2] = *(undefined1 *)(iVar85 + uVar63 + 2 + 5);
                          puVar90[uVar63 + 3] = *(undefined1 *)(iVar85 + uVar63 + 3 + 5);
                          puVar90[uVar63 + 4] = *(undefined1 *)(iVar85 + uVar63 + 4 + 5);
                          iVar92 = uVar63 + 6;
                          puVar90[uVar63 + 5] = *(undefined1 *)(iVar85 + uVar63 + 5 + 5);
                          iVar68 = uVar63 + 7;
                          uVar63 = uVar63 + 8;
                          puVar90[iVar92] = *(undefined1 *)(iVar85 + iVar92 + 5);
                          puVar90[iVar68] = *(undefined1 *)(iVar85 + iVar68 + 5);
                        } while (uVar63 != uVar56);
                      }
                    }
                    else {
                      uVar63 = uVar56 >> 2;
                      uVar51 = *(undefined4 *)(iVar85 + 9);
                      uVar80 = uVar63 * 4;
                      *puVar86 = *(undefined4 *)(iVar85 + 5);
                      *(undefined4 *)(iVar58 + 0xb636c) = uVar51;
                      if (((((((uVar63 != 2) &&
                              (*(undefined4 *)(iVar58 + 0xb6370) = *(undefined4 *)(iVar85 + 0xd),
                              uVar63 != 3)) &&
                             (*(undefined4 *)(iVar58 + 0xb6374) = *(undefined4 *)(iVar85 + 0x11),
                             uVar63 != 4)) &&
                            ((*(undefined4 *)(iVar58 + 0xb6378) = *(undefined4 *)(iVar85 + 0x15),
                             uVar63 != 5 &&
                             (*(undefined4 *)(iVar58 + 0xb637c) = *(undefined4 *)(iVar85 + 0x19),
                             uVar63 != 6)))) &&
                           (*(undefined4 *)(iVar58 + 0xb6380) = *(undefined4 *)(iVar85 + 0x1d),
                           uVar63 != 7)) &&
                          (((*(undefined4 *)(iVar58 + 0xb6384) = *(undefined4 *)(iVar85 + 0x21),
                            iVar92 = DAT_000b6a60, uVar63 != 8 &&
                            (*(undefined4 *)(DAT_000b6a60 + 0xb656e) =
                                  *(undefined4 *)(iVar85 + 0x25), uVar63 != 9)) &&
                           ((*(undefined4 *)(iVar92 + 0xb6572) = *(undefined4 *)(iVar85 + 0x29),
                            uVar63 != 10 &&
                            (((*(undefined4 *)(iVar92 + 0xb6576) = *(undefined4 *)(iVar85 + 0x2d),
                              uVar63 != 0xb &&
                              (*(undefined4 *)(iVar92 + 0xb657a) = *(undefined4 *)(iVar85 + 0x31),
                              uVar63 != 0xc)) &&
                             (*(undefined4 *)(iVar92 + 0xb657e) = *(undefined4 *)(iVar85 + 0x35),
                             uVar63 != 0xd)))))))) &&
                         (*(undefined4 *)(iVar92 + 0xb6582) = *(undefined4 *)(iVar85 + 0x39),
                         uVar63 != 0xe)) {
                        *(undefined4 *)(iVar92 + 0xb6586) = *(undefined4 *)(iVar85 + 0x3d);
                      }
                      if (uVar80 != uVar56) {
                        uVar54 = uVar80 + 1;
                        iVar92 = DAT_000b6a64 + 0xb65ae;
                        *(undefined1 *)(iVar92 + uVar63 * 4) =
                             *(undefined1 *)(iVar89 + uVar80 + iVar68);
                        if (uVar54 < uVar56) {
                          uVar80 = uVar80 + 2;
                          *(undefined1 *)(iVar92 + uVar54) =
                               *(undefined1 *)(iVar68 + iVar89 + uVar54);
                          if (uVar80 < uVar56) {
                            *(undefined1 *)(iVar92 + uVar80) =
                                 *(undefined1 *)(iVar68 + iVar89 + uVar80);
                          }
                        }
                      }
                    }
                  }
                }
LAB_000b65ce:
                pbVar76 = (byte *)(bVar2 & 2);
                if (((bVar2 & 2) == 0) || (*(byte *)(uVar70 + 0x1c75) < 0x10)) {
                  if ((bVar2 & 1) == 0) {
                    local_68 = 0;
                    local_66[5] = 0;
                    local_66[7] = 0;
                    local_66[8] = 0;
                    local_66[10] = 0;
                    local_66[0xb] = 0;
                    local_66[0xc] = 0;
                    local_66[0xd] = 0;
                    local_66[0xe] = 0;
                    local_66[0xf] = 0;
                    local_66[0x10] = 0;
                    local_66[0x11] = 0;
                    local_66[0x12] = 0;
                    local_66[0x13] = 0;
                    local_66[0x14] = 0;
                    local_66[0x15] = 0;
                    local_66[0x16] = 0;
                    local_66[0x17] = 0;
                    local_66[0x18] = 0;
                    local_66[0x19] = 0;
                    local_66[0x1a] = 0;
                    local_66[0x1b] = 0;
                    local_66[0x1c] = 0;
                    local_66[0x1d] = 0;
                    local_66[0x1e] = 0;
                    local_66[0x1f] = 0;
                    local_66[0x20] = 0;
                    local_66[0x21] = 0;
                    local_66[0x22] = 0;
                    local_66[0x23] = 0;
                    local_66[0x24] = 0;
                    local_66[0x25] = 0;
                    local_66[0x26] = 0;
                    local_66[0x27] = 0;
                    local_66[0x28] = 0;
                    local_66[0x29] = 0;
                    local_66[0x2a] = 0;
                    local_66[0x2b] = 0;
                    local_66[0x2c] = 0;
                    local_66[0x2d] = 0;
                    local_66[0x2e] = 0;
                    local_66[0x2f] = 0;
                    local_66[0x30] = 0;
                    local_66[0x31] = 0;
                    local_66[0x32] = 0;
                    local_66[0x33] = 0;
                    local_66[0x34] = 0;
                    local_66[0x35] = 0;
                    local_66[0x36] = 0;
                    local_66[0x37] = 0;
                    if ((bVar2 & 2) == 0) {
                      uVar56 = (uint)*(byte *)(iVar74 + 0xb637a);
                      local_a0 = (uint)*pbVar62;
                      local_c0 = uVar56 & 7;
                      pbVar55 = pbVar76;
                      pbVar64 = pbVar62;
                      if ((*(byte *)(iVar74 + 0xb637a) & 7) == 0 || local_c0 == 1) {
                        uVar63 = 0x11;
                        local_b4 = 0x16;
                        local_d8 = 2;
                      }
                      else {
                        uVar63 = 0x1f;
                        local_b4 = 0x2a;
                        local_d8 = 4;
                      }
                    }
                    else {
                      uVar56 = (uint)*(byte *)(iVar69 + 0xb638b);
                      local_a0 = (uint)*(byte *)(iVar69 + 0xb6389);
                      local_c0 = uVar56 & 7;
                      pbVar55 = pbVar88;
                      if ((*(byte *)(iVar69 + 0xb638b) & 7) == 0 || local_c0 == 1) {
                        uVar63 = 0x2c;
                        local_b4 = 0x26;
                        local_d8 = 2;
                        pbVar64 = (byte *)(iVar69 + 0xb6389);
                      }
                      else {
                        uVar63 = 0x3a;
                        local_b4 = 0x3a;
                        local_d8 = 4;
                        pbVar64 = (byte *)(iVar69 + 0xb6389);
                      }
                    }
                    local_67 = local_68;
                    local_66[0] = local_68;
                    local_66[1] = local_68;
                    local_66[2] = local_68;
                    local_66[3] = local_68;
                    local_66[4] = local_68;
                    bVar57 = local_68;
                    local_66[6] = local_68;
                    bVar1 = local_68;
                    bVar66 = local_68;
                    local_66[9] = local_68;
                    bVar91 = local_68;
                    bVar3 = local_68;
                    bVar4 = local_68;
                    bVar6 = local_68;
                    bVar7 = local_68;
                    bVar8 = local_68;
                    bVar9 = local_68;
                    bVar10 = local_68;
                    bVar11 = local_68;
                    bVar12 = local_68;
                    bVar13 = local_68;
                    bVar14 = local_68;
                    bVar15 = local_68;
                    bVar16 = local_68;
                    bVar17 = local_68;
                    bVar18 = local_68;
                    bVar19 = local_68;
                    bVar20 = local_68;
                    bVar21 = local_68;
                    bVar22 = local_68;
                    bVar23 = local_68;
                    bVar24 = local_68;
                    bVar25 = local_68;
                    bVar26 = local_68;
                    bVar27 = local_68;
                    bVar28 = local_68;
                    bVar29 = local_68;
                    bVar30 = local_68;
                    bVar31 = local_68;
                    bVar32 = local_68;
                    bVar33 = local_68;
                    bVar34 = local_68;
                    bVar35 = local_68;
                    bVar36 = local_68;
                    bVar37 = local_68;
                    bVar38 = local_68;
                    bVar39 = local_68;
                    bVar40 = local_68;
                    bVar41 = local_68;
                    bVar42 = local_68;
                    bVar43 = local_68;
                    bVar44 = local_68;
                    bVar45 = local_68;
                    bVar46 = local_68;
                    bVar47 = local_68;
                    bVar48 = local_68;
                    if (uVar63 <= uVar75) {
                      if ((int)(uVar56 << 0x1b) < 0) {
                        bVar57 = pbVar64[1];
                        local_67 = 0x30;
                        local_68 = bVar57 & 0xf8;
                      }
                      else {
                        local_67 = (byte)uVar56 & 0x30;
                        if ((int)(uVar56 << 0x1a) < 0) {
                          bVar57 = pbVar64[1];
                          local_68 = bVar57 & 0xf8;
                        }
                        else {
                          bVar57 = pbVar64[1];
                          local_68 = 0x80;
                        }
                      }
                      local_66[1] = pbVar64[4];
                      uVar75 = local_d8 * 7;
                      local_67 = (byte)uVar56 & 199 | (byte)((int)pbVar76 << 2) | local_67;
                      local_66[6] = pbVar64[9];
                      local_68 = bVar57 & 3 | local_68;
                      local_66[3] = pbVar64[6];
                      local_66[2] = pbVar64[5];
                      local_66[0] = pbVar64[3] & 0xfb;
                      local_66[4] = pbVar64[7] & 0x77;
                      local_66[9] = pbVar64[8] & 0xf7;
                      if (uVar75 != 7) {
                        local_66[0xd] = pbVar64[0xd];
                        local_66[0xb] = pbVar64[0xb];
                        local_66[10] = pbVar64[10] & 0xfb;
                        local_66[0xc] = pbVar64[0xc];
                        local_66[0x10] = pbVar64[0x10];
                        local_b8 = 0x14;
                        local_66[0xe] = pbVar64[0xe] & 0x77;
                        local_66[0x13] = pbVar64[0xf] & 0xf7;
                        if (uVar75 != 0xe) {
                          uVar56 = 0xe;
                          do {
                            uVar80 = uVar56 + 7 & 0xff;
                            uVar63 = local_b8 + 10 & 0xff;
                            bVar91 = pbVar64[uVar56 + 5];
                            bVar57 = pbVar64[uVar56 + 3];
                            bVar1 = pbVar64[uVar80 + 3];
                            uVar54 = uVar80 + 7 & 0xff;
                            bVar66 = pbVar64[uVar56 + 6];
                            local_66[local_b8 + 1] = pbVar64[uVar56 + 4];
                            local_66[local_b8] = bVar57 & 0xfb;
                            local_66[local_b8 + 3] = bVar66;
                            bVar57 = pbVar64[uVar56 + 7];
                            local_66[local_b8 + 2] = bVar91;
                            bVar66 = pbVar64[uVar56 + 8];
                            bVar91 = pbVar64[uVar80 + 4];
                            local_66[local_b8 + 6] = pbVar64[uVar56 + 9];
                            local_66[local_b8 + 4] = bVar57 & 0x77;
                            local_66[local_b8 + 9] = bVar66 & 0xf7;
                            bVar57 = pbVar64[uVar80 + 5];
                            bVar66 = pbVar64[uVar80 + 6];
                            bVar3 = pbVar64[uVar80 + 9];
                            local_66[uVar63 + 1] = bVar91;
                            bVar91 = pbVar64[uVar80 + 7];
                            bVar4 = pbVar64[uVar80 + 8];
                            local_66[uVar63 + 2] = bVar57;
                            local_66[uVar63 + 3] = bVar66;
                            local_66[uVar63] = bVar1 & 0xfb;
                            local_66[uVar63 + 4] = bVar91 & 0x77;
                            local_66[uVar63 + 6] = bVar3;
                            local_66[uVar63 + 9] = bVar4 & 0xf7;
                            uVar56 = uVar54;
                            local_b8 = uVar63 + 10 & 0xff;
                          } while (uVar54 != uVar75);
                        }
                      }
                      iVar68 = local_d8 * 10;
                      if ((bVar2 & 2) != 0) {
                        bVar1 = pbVar55[0x11];
                        bVar57 = pbVar55[0x13];
                        local_66[0] = local_66[0] | (byte)((bVar1 & 0x40) >> 4);
                        local_66[8] = pbVar55[0x12] & 0x7f | bVar1 << 7;
                        local_66[0x12] = pbVar55[0x14] & 0x7f | bVar57 << 7;
                        local_66[10] = local_66[10] | (byte)((bVar57 & 0x40) >> 4);
                        local_66[7] = (byte)(((uint)bVar1 << 0x1a) >> 0x1b);
                        local_66[0x11] = (byte)(((uint)bVar57 << 0x1a) >> 0x1b);
                        if (1 < local_c0) {
                          bVar1 = pbVar55[0x15];
                          bVar57 = pbVar55[0x17];
                          local_66[0x14] = local_66[0x14] | (byte)((bVar1 & 0x40) >> 4);
                          local_66[0x1c] = pbVar55[0x16] & 0x7f | bVar1 << 7;
                          local_66[0x26] = pbVar55[0x18] & 0x7f | bVar57 << 7;
                          local_66[0x1e] = local_66[0x1e] | (byte)((bVar57 & 0x40) >> 4);
                          local_66[0x1b] = (byte)(((uint)bVar1 << 0x1a) >> 0x1b);
                          local_66[0x25] = (byte)(((uint)bVar57 << 0x1a) >> 0x1b);
                        }
                        bVar57 = pbVar55[0x19];
                        bVar1 = pbVar55[0x10];
                        local_66[iVar68] = pbVar55[1] & 0x1f;
                        local_66[iVar68 + 1] =
                             (byte)((bVar57 & 0x40) >> 3) | (bVar1 & 0x78) << 1 | bVar1 & 7;
                        bVar57 = pbVar55[2];
                        bVar1 = pbVar55[3];
                        local_66[iVar68 + 2] = (byte)(((uint)bVar57 << 0x1a) >> 0x1b);
                        local_66[iVar68 + 3] = bVar1 & 0x7f | bVar57 << 7;
                        bVar57 = pbVar55[4];
                        bVar1 = pbVar55[5];
                        local_66[iVar68 + 4] = (byte)(((uint)bVar57 << 0x1a) >> 0x1b);
                        local_66[iVar68 + 5] = bVar1 & 0x7f | bVar57 << 7;
                        bVar57 = pbVar55[6];
                        local_66[iVar68 + 6] = (byte)(((uint)bVar57 << 0x1a) >> 0x1b);
                        local_66[iVar68 + 7] = pbVar55[7] & 0x7f | bVar57 << 7;
                        bVar66 = pbVar55[8];
                        bVar57 = pbVar55[9];
                        local_66[iVar68 + 8] = (byte)(((uint)bVar66 << 0x1a) >> 0x1b);
                        bVar1 = pbVar55[10];
                        local_66[iVar68 + 9] = bVar57 & 0x7f | bVar66 << 7;
                        bVar57 = pbVar55[0xb];
                        local_66[iVar68 + 10] = (byte)(((uint)bVar1 << 0x1a) >> 0x1b);
                        local_66[iVar68 + 0xb] = bVar57 & 0x7f | bVar1 << 7;
                        bVar57 = pbVar55[0xd];
                        bVar1 = pbVar55[0x1a];
                        local_66[iVar68 + 0xc] = pbVar55[0xc] & 0x1f;
                        local_66[iVar68 + 0xd] = bVar57 & 0x1f;
                        if ((int)((uint)bVar1 << 0x1f) < 0) {
                          bVar57 = pbVar55[0xf];
                          local_66[iVar68 + 0xe] = pbVar55[0xe] & 0x1f | 0x80;
                          local_66[iVar68 + 0xf] = bVar57 & 0x1f | 0x80;
                        }
                        else {
                          bVar57 = pbVar55[0xf];
                          local_66[iVar68 + 0xe] = pbVar55[0xe] & 0x1f;
                          local_66[iVar68 + 0xf] = bVar57 & 0x1f;
                        }
                      }
                      MaSndDrv_MultiCnv(&local_68,local_b4);
                      MaSndDrv_SetVoice(param_1,local_ac,local_b0,0,local_a0,0,0,0x7f,&local_68,
                                        local_b4);
                      bVar57 = local_66[5];
                      bVar1 = local_66[7];
                      bVar66 = local_66[8];
                      bVar91 = local_66[10];
                      bVar3 = local_66[0xb];
                      bVar4 = local_66[0xc];
                      bVar6 = local_66[0xd];
                      bVar7 = local_66[0xe];
                      bVar8 = local_66[0xf];
                      bVar9 = local_66[0x10];
                      bVar10 = local_66[0x11];
                      bVar11 = local_66[0x12];
                      bVar12 = local_66[0x13];
                      bVar13 = local_66[0x14];
                      bVar14 = local_66[0x15];
                      bVar15 = local_66[0x16];
                      bVar16 = local_66[0x17];
                      bVar17 = local_66[0x18];
                      bVar18 = local_66[0x19];
                      bVar19 = local_66[0x1a];
                      bVar20 = local_66[0x1b];
                      bVar21 = local_66[0x1c];
                      bVar22 = local_66[0x1d];
                      bVar23 = local_66[0x1e];
                      bVar24 = local_66[0x1f];
                      bVar25 = local_66[0x20];
                      bVar26 = local_66[0x21];
                      bVar27 = local_66[0x22];
                      bVar28 = local_66[0x23];
                      bVar29 = local_66[0x24];
                      bVar30 = local_66[0x25];
                      bVar31 = local_66[0x26];
                      bVar32 = local_66[0x27];
                      bVar33 = local_66[0x28];
                      bVar34 = local_66[0x29];
                      bVar35 = local_66[0x2a];
                      bVar36 = local_66[0x2b];
                      bVar37 = local_66[0x2c];
                      bVar38 = local_66[0x2d];
                      bVar39 = local_66[0x2e];
                      bVar40 = local_66[0x2f];
                      bVar41 = local_66[0x30];
                      bVar42 = local_66[0x31];
                      bVar43 = local_66[0x32];
                      bVar44 = local_66[0x33];
                      bVar45 = local_66[0x34];
                      bVar46 = local_66[0x35];
                      bVar47 = local_66[0x36];
                      bVar48 = local_66[0x37];
                    }
                  }
                  else {
                    local_68 = 0;
                    local_67 = 0;
                    local_66[0] = 0;
                    local_66[1] = 0;
                    local_66[2] = 0;
                    local_66[3] = 0;
                    local_66[4] = 0;
                    local_66[5] = 0;
                    local_66[6] = 0;
                    local_66[7] = 0;
                    local_66[8] = 0;
                    local_66[9] = 0;
                    local_66[10] = 0;
                    local_66[0xb] = 0;
                    local_66[0xc] = 0;
                    local_66[0xd] = 0;
                    local_66[0xe] = 0;
                    local_66[0xf] = 0;
                    local_66[0x10] = 0;
                    local_66[0x11] = 0;
                    local_66[0x12] = 0;
                    local_66[0x13] = 0;
                    local_66[0x14] = 0;
                    local_66[0x15] = 0;
                    local_66[0x16] = 0;
                    local_66[0x17] = 0;
                    local_66[0x18] = 0;
                    local_66[0x19] = 0;
                    local_66[0x1a] = 0;
                    local_66[0x1b] = 0;
                    if ((bVar2 & 2) == 0) {
                      uVar63 = 0x10;
                      uVar56 = 0xe;
                      pbVar55 = pbVar93;
                      pbVar64 = pbVar76;
                    }
                    else {
                      uVar63 = 0x2b;
                      uVar56 = 0x1e;
                      pbVar55 = (byte *)(iVar60 + 0xb639f);
                      pbVar64 = pbVar100;
                    }
                    bVar57 = local_66[5];
                    bVar1 = local_66[7];
                    bVar66 = local_66[8];
                    bVar91 = local_66[10];
                    bVar3 = local_66[0xb];
                    bVar4 = local_66[0xc];
                    bVar6 = local_66[0xd];
                    bVar7 = local_66[0xe];
                    bVar8 = local_66[0xf];
                    bVar9 = local_66[0x10];
                    bVar10 = local_66[0x11];
                    bVar11 = local_66[0x12];
                    bVar12 = local_66[0x13];
                    bVar13 = local_66[0x14];
                    bVar14 = local_66[0x15];
                    bVar15 = local_66[0x16];
                    bVar16 = local_66[0x17];
                    bVar17 = local_66[0x18];
                    bVar18 = local_66[0x19];
                    bVar19 = local_66[0x1a];
                    bVar20 = local_66[0x1b];
                    if (uVar63 <= uVar75) {
                      local_68 = pbVar55[2];
                      if ((int)((uint)pbVar55[3] << 0x1d) < 0) {
                        local_68 = local_68 & 0xf8;
                        local_67 = 0x30;
                      }
                      else {
                        local_67 = local_68 & 1;
                        if ((local_68 & 1) == 0) {
                          local_68 = 0x80;
                        }
                        else {
                          local_68 = local_68 & 0xf8;
                          local_67 = 0x20;
                        }
                      }
                      local_66[2] = pbVar55[6];
                      local_66[1] = pbVar55[5];
                      local_67 = pbVar55[3] & 0xc3 | (byte)((int)pbVar76 << 2) | local_67;
                      local_66[6] = pbVar55[9];
                      local_66[7] = pbVar55[10];
                      local_66[8] = pbVar55[0xb];
                      local_66[0] = pbVar55[4] & 0xfa;
                      local_66[9] = pbVar55[0xc];
                      local_66[10] = pbVar55[0xd];
                      local_66[0xb] = pbVar55[0xe];
                      local_66[3] = pbVar55[7] & 0xfc;
                      local_66[4] = pbVar55[8] & 0x77;
                      if ((bVar2 & 2) != 0) {
                        local_66[0xd] =
                             (byte)((pbVar64[0x19] & 0x40) >> 3) | (pbVar64[0x10] & 0x78) << 1 |
                             pbVar64[0x10] & 7;
                        local_67 = local_67 | (*pbVar64 & 2) << 1;
                        local_66[0xf] = pbVar64[3] & 0x7f | pbVar64[2] << 7;
                        local_66[0xe] = (byte)(((uint)pbVar64[2] << 0x1a) >> 0x1b);
                        local_66[0x13] = pbVar64[7] & 0x7f | pbVar64[6] << 7;
                        local_66[0x11] = pbVar64[5] & 0x7f | pbVar64[4] << 7;
                        local_66[0x10] = (byte)(((uint)pbVar64[4] << 0x1a) >> 0x1b);
                        local_66[0x15] = pbVar64[9] & 0x7f | pbVar64[8] << 7;
                        local_66[0x12] = (byte)(((uint)pbVar64[6] << 0x1a) >> 0x1b);
                        local_66[0x17] = pbVar64[0xb] & 0x7f | pbVar64[10] << 7;
                        local_66[0x14] = (byte)(((uint)pbVar64[8] << 0x1a) >> 0x1b);
                        local_66[0xc] = pbVar64[1] & 0x1f;
                        local_66[0x18] = pbVar64[0xc] & 0x1f;
                        local_66[0x19] = pbVar64[0xd] & 0x1f;
                        local_66[0x16] = (byte)(((uint)pbVar64[10] << 0x1a) >> 0x1b);
                        local_66[0x1a] = pbVar64[0xe] & 0x1f;
                        if ((int)((uint)pbVar64[0x1a] << 0x1f) < 0) {
                          local_66[0x1a] = local_66[0x1a] | 0x80;
                          local_66[0x1b] = pbVar64[0xf] & 0x1f | 0x80;
                        }
                        else {
                          local_66[0x1b] = pbVar64[0xf] & 0x1f;
                        }
                      }
                      bVar57 = *pbVar55;
                      bVar1 = pbVar55[1];
                      uVar75 = pbVar55[0xf] & 0x7f;
                      if (-1 < (int)((uint)pbVar55[0xf] << 0x18)) {
                        FUN_000ad2a0(param_1,uVar75);
                        uVar75 = uVar75 + 0x80;
                      }
                      MaSndDrv_SetVoice(param_1,local_ac,local_b0,1,
                                        (uint)bVar1 + (uint)bVar57 * 0x100,uVar75,0,0x7f,&local_68,
                                        uVar56);
                      bVar57 = local_66[5];
                      bVar1 = local_66[7];
                      bVar66 = local_66[8];
                      bVar91 = local_66[10];
                      bVar3 = local_66[0xb];
                      bVar4 = local_66[0xc];
                      bVar6 = local_66[0xd];
                      bVar7 = local_66[0xe];
                      bVar8 = local_66[0xf];
                      bVar9 = local_66[0x10];
                      bVar10 = local_66[0x11];
                      bVar11 = local_66[0x12];
                      bVar12 = local_66[0x13];
                      bVar13 = local_66[0x14];
                      bVar14 = local_66[0x15];
                      bVar15 = local_66[0x16];
                      bVar16 = local_66[0x17];
                      bVar17 = local_66[0x18];
                      bVar18 = local_66[0x19];
                      bVar19 = local_66[0x1a];
                      bVar20 = local_66[0x1b];
                      bVar21 = local_66[0x1c];
                      bVar22 = local_66[0x1d];
                      bVar23 = local_66[0x1e];
                      bVar24 = local_66[0x1f];
                      bVar25 = local_66[0x20];
                      bVar26 = local_66[0x21];
                      bVar27 = local_66[0x22];
                      bVar28 = local_66[0x23];
                      bVar29 = local_66[0x24];
                      bVar30 = local_66[0x25];
                      bVar31 = local_66[0x26];
                      bVar32 = local_66[0x27];
                      bVar33 = local_66[0x28];
                      bVar34 = local_66[0x29];
                      bVar35 = local_66[0x2a];
                      bVar36 = local_66[0x2b];
                      bVar37 = local_66[0x2c];
                      bVar38 = local_66[0x2d];
                      bVar39 = local_66[0x2e];
                      bVar40 = local_66[0x2f];
                      bVar41 = local_66[0x30];
                      bVar42 = local_66[0x31];
                      bVar43 = local_66[0x32];
                      bVar44 = local_66[0x33];
                      bVar45 = local_66[0x34];
                      bVar46 = local_66[0x35];
                      bVar47 = local_66[0x36];
                      bVar48 = local_66[0x37];
                    }
                  }
                }
              }
              goto LAB_000b63c4;
            }
LAB_000b6cee:
            iVar79 = *(int *)(param_1 + 4);
          }
        }
        if (*(byte *)(iVar79 + 0x1c76) != 0x10) {
          MaSndDrv_SetHvCh(param_1,(uint)*(byte *)(iVar79 + 0x1c76));
          MaSndDrv_SetHvScript(param_1,*(uchar **)(iVar79 + 0xc10),*(uint *)(iVar79 + 0xc14));
          MaSndDrv_SetHvVoice(param_1,0xff,*(uchar **)(iVar79 + 0xc08),*(uint *)(iVar79 + 0xc0c));
        }
      }
LAB_000b613c:
      uVar51 = 0;
      goto LAB_000b613e;
    }
  }
LAB_000b6d28:
  uVar51 = 0xffffffff;
LAB_000b613e:
  if (local_2c == *piVar67) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar51);
code_r0x000b6196:
  iVar61 = iVar60 + 5;
  if (*(byte *)(iVar92 + 4) == 2) {
    iVar92 = iVar74 + iVar61;
    bVar57 = *(byte *)(iVar74 + iVar61) & 0xf8;
    if (((*(byte *)(iVar74 + iVar61) & 0xf8) != 0) || (uVar70 != 0x13)) goto LAB_000b6276;
    local_67 = 0x80;
    local_68 = *(byte *)(iVar92 + 3) & 3 | 0x80;
    bVar1 = *(byte *)(iVar92 + 4);
    uVar70 = (uint)bVar1;
    bVar66 = *(byte *)(iVar92 + 5);
    bVar91 = *(byte *)(iVar92 + 7);
    bVar3 = *(byte *)(iVar92 + 6);
    uVar95 = (uint)(bVar66 >> 6) | (uVar70 & 3) << 2;
    if ((int)(uVar70 << 0x1c) < 0) {
      if ((int)(uVar70 << 0x1d) < 0) {
        local_66[1] = 0x50;
        local_66[0] = 0;
      }
      else {
        local_66[1] = *(char *)(uVar95 + iVar89 + 0xb6190) << 4;
        local_66[0] = 0;
      }
    }
    else {
      cVar53 = *(char *)(uVar95 + iVar68 + 0xb618e);
      if ((int)(uVar70 << 0x1d) < 0) {
        local_66[1] = cVar53 << 4;
        local_66[0] = local_66[1];
      }
      else {
        local_66[1] = 0x80;
        local_66[0] = cVar53 << 4;
      }
    }
    local_66[4] = (bVar1 >> 4 & 1) + 4;
    local_66[2] = (bVar3 >> 2 & 0xf) +
                  *(char *)(((uint)(bVar3 >> 6) | (bVar66 & 3) << 2) + iVar58 + 0xac) * '\x10';
    local_66[1] = local_66[1] + (*(byte *)(((bVar66 & 0x3f) >> 2) + iVar58 + 0x9c) & 0xf);
    local_66[6] = (bVar91 & 7) + (bVar91 & 8);
    local_66[3] = (bVar91 >> 4 | (bVar3 & 3) << 4) << 2;
    local_66[9] = (bVar1 >> 5) << 4;
    bVar1 = *(byte *)(iVar92 + 8);
    uVar70 = (uint)bVar1;
    bVar66 = *(byte *)(iVar92 + 10);
    bVar91 = *(byte *)(iVar92 + 9);
    uVar95 = (uint)(bVar91 >> 6) | (uVar70 & 3) << 2;
    if ((int)(uVar70 << 0x1c) < 0) {
      local_66[0xb] = 0x50;
      local_66[10] = bVar57;
      if (-1 < (int)(uVar70 << 0x1d)) {
        local_66[0xb] = *(char *)(iVar58 + uVar95 + 0x9c) << 4;
      }
    }
    else {
      cVar53 = *(char *)(iVar58 + uVar95 + 0x9c);
      if ((int)(uVar70 << 0x1d) < 0) {
        local_66[0xb] = cVar53 << 4;
        local_66[10] = local_66[0xb];
      }
      else {
        local_66[0xb] = 0x80;
        local_66[10] = cVar53 << 4;
      }
    }
    local_66[0xe] = (bVar1 >> 4 & 1) + 4;
    local_66[0xb] = local_66[0xb] + (*(byte *)(((bVar91 & 0x3f) >> 2) + iVar69 + 0x9c) & 0xf);
    local_66[0xd] = (*(byte *)(iVar92 + 0xb) >> 4 | (bVar66 & 3) << 4) << 2;
    local_66[0xc] =
         (bVar66 >> 2 & 0xf) +
         *(char *)(iVar69 + ((uint)(bVar66 >> 6) | (bVar91 & 3) << 2) + 0xac) * '\x10';
    local_66[0x10] = *(byte *)(iVar92 + 0xb) & 8;
    local_66[0x13] = (bVar1 >> 5) << 4;
    local_66[5] = bVar57;
    local_66[7] = bVar57;
    local_66[8] = bVar57;
    local_66[0xf] = bVar57;
    local_66[0x11] = bVar57;
    local_66[0x12] = bVar57;
    MaSndDrv_MultiCnv(&local_68,0x16);
    iVar61 = *(int *)(param_1 + 4) + (local_d8 + 0x1074) * 2;
    *(undefined1 *)(iVar61 + 8) = *(undefined1 *)(iVar92 + 1);
    *(byte *)(iVar61 + 9) = *(byte *)(iVar92 + 2) & 0x7f;
    iVar92 = MaSndDrv_SetVoice(param_1,1,local_d8,0,0,0,0,0x7f,&local_68,0x16);
  }
  else {
    iVar92 = iVar74 + iVar61;
    bVar57 = *(byte *)(iVar74 + iVar61) & 0xf0;
    if ((*(byte *)(iVar74 + iVar61) & 0xf0) != 0) goto LAB_000b6276;
    bVar1 = *(byte *)(iVar92 + 3);
    local_67 = bVar1 & 199;
    local_68 = *(byte *)(iVar92 + 4) & 3 | 0x80;
    local_66[0] = bVar57;
    local_66[1] = bVar57;
    local_66[2] = bVar57;
    local_66[3] = bVar57;
    local_66[4] = bVar57;
    local_66[5] = bVar57;
    local_66[6] = bVar57;
    local_66[7] = bVar57;
    local_66[8] = bVar57;
    local_66[9] = bVar57;
    local_66[10] = bVar57;
    local_66[0xb] = bVar57;
    local_66[0xc] = bVar57;
    local_66[0xd] = bVar57;
    local_66[0xe] = bVar57;
    local_66[0xf] = bVar57;
    local_66[0x10] = bVar57;
    local_66[0x11] = bVar57;
    local_66[0x12] = bVar57;
    local_66[0x13] = bVar57;
    local_66[0x14] = bVar57;
    local_66[0x15] = bVar57;
    local_66[0x16] = bVar57;
    local_66[0x17] = bVar57;
    local_66[0x18] = bVar57;
    local_66[0x19] = bVar57;
    local_66[0x1a] = bVar57;
    local_66[0x1b] = bVar57;
    local_66[0x1c] = bVar57;
    local_66[0x1d] = bVar57;
    local_66[0x1e] = bVar57;
    local_66[0x1f] = bVar57;
    local_66[0x20] = bVar57;
    local_66[0x21] = bVar57;
    local_66[0x22] = bVar57;
    local_66[0x23] = bVar57;
    local_66[0x24] = bVar57;
    local_66[0x25] = bVar57;
    local_66[0x26] = bVar57;
    local_66[0x27] = bVar57;
    if ((bVar1 & 7) == 0 || (bVar1 & 7) == 1) {
      iVar101 = 2;
      local_bc = 0x16;
    }
    else {
      if (uVar70 < 0x1c) goto LAB_000b6276;
      iVar101 = 4;
      local_bc = 0x2a;
    }
    uVar95 = (bVar1 & 0x3f) >> 3;
    uVar70 = 0;
    while( true ) {
      local_cc = iVar74 + iVar61;
      iVar87 = iVar92 + uVar70;
      bVar57 = *(byte *)(iVar87 + 5);
      iVar65 = (uVar70 & 0x7f) * 2;
      bVar1 = *(byte *)(iVar87 + 9);
      uVar56 = (uint)bVar1;
      bVar91 = *(byte *)(iVar87 + 6) & 0xf0;
      bVar66 = bVar91;
      if ((bVar57 & 4) != 0) {
        bVar66 = 0;
      }
      bVar3 = *(byte *)(iVar87 + 7);
      if ((bVar57 & 2) != 0) {
        bVar91 = 0x40;
      }
      uVar70 = uVar70 + 5 & 0xff;
      bVar4 = *(byte *)(iVar87 + 8);
      local_66[iVar65 + 1] = bVar91 + (*(byte *)(iVar87 + 6) & 0xf);
      local_66[iVar65 + 2] = bVar3;
      local_66[iVar65 + 3] = bVar4;
      local_66[iVar65] = bVar66 + (bVar57 & 1);
      local_66[iVar65 + 9] = bVar57 & 0xf0;
      local_66[iVar65 + 4] =
           ((bVar1 >> 6) * '\x02' - (char)((int)((uint)bVar57 << 0x1c) >> 0x1f)) +
           (char)(((uVar56 & 0x3f) >> 4) << 5) + (char)(((uVar56 & 0xf) >> 3) << 4);
      local_66[iVar65 + 6] = (char)uVar95 + (char)((uVar56 & 7) << 3);
      if (uVar70 == iVar101 * 5) break;
      uVar95 = 0;
    }
    MaSndDrv_MultiCnv(&local_68,local_bc);
    iVar92 = *(int *)(param_1 + 4) + (local_d8 + 0x1074) * 2;
    *(undefined1 *)(iVar92 + 8) = *(undefined1 *)(local_cc + 1);
    *(byte *)(iVar92 + 9) = *(byte *)(local_cc + 2) & 0x7f;
    iVar92 = MaSndDrv_SetVoice(param_1,1,local_d8,0,0,0,0,0x7f,&local_68,local_bc);
  }
  if (iVar92 == 0) {
    local_d8 = local_d8 + 1 & 0xff;
  }
LAB_000b6276:
  if (0xf < local_d8) goto LAB_000b613c;
  iVar60 = (uint)*(byte *)(iVar74 + iVar60 + 2) + iVar85;
  goto LAB_000b610e;
}

