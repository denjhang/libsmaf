/* MaS2PCnvCN_Convert @ 000c893c 12432B */


/* WARNING: Removing unreachable block (ram,0x000c9fcc) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* YAMAHA::MaS2PCnvCN_Convert(unsigned char*, unsigned int, void*) */

int YAMAHA::MaS2PCnvCN_Convert(uchar *param_1,uint param_2,void *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  ushort uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uchar *puVar10;
  uchar *puVar11;
  byte bVar12;
  undefined1 uVar13;
  int iVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  uchar *puVar18;
  uchar *extraout_r2;
  byte *pbVar19;
  byte bVar20;
  byte bVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  uchar uVar27;
  int iVar28;
  code *pcVar29;
  uchar *puVar30;
  int iVar31;
  undefined4 uVar32;
  char cVar33;
  undefined1 uVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  uint uVar38;
  undefined1 *puVar39;
  int iVar40;
  int iVar41;
  uint uVar42;
  char *pcVar43;
  int iVar44;
  int iVar45;
  int *piVar46;
  uchar *puVar47;
  byte *pbVar48;
  undefined2 uVar49;
  uint uVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  uint uVar54;
  int *piVar55;
  bool bVar56;
  uint local_8c;
  uint local_88;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_54;
  byte local_30 [12];
  
  iVar7 = DAT_000c9618;
  iVar51 = DAT_000c960c;
  if (*(int *)(DAT_000c960c + 0xc8948) != 1) {
    return -1;
  }
  if (param_2 == 0 || param_1 == (uchar *)0x0) {
    return -2;
  }
  if (*(int *)(DAT_000c960c + 0xc8954) == 0) {
    return 0;
  }
  local_7c = (uint)*(byte *)(DAT_000c960c + 0xc896c);
  if (local_7c == 0) {
LAB_000c89b4:
    local_88 = *(uint *)(DAT_000c9618 + 0xc89d0);
    uVar8 = *(uint *)(DAT_000c9618 + 0xc89cc);
    if (local_88 <= uVar8) {
      return 0;
    }
    puVar39 = (undefined1 *)(DAT_000c9618 + 0xc89e4);
    uVar34 = *(undefined1 *)(DAT_000c9618 + 0xc89dd);
    *(undefined1 *)(DAT_000c9618 + 0xc89dc) = 4;
    *(undefined1 *)(iVar7 + 0xc89ec) = *puVar39;
    *(undefined1 *)(iVar7 + 0xc89ed) = uVar34;
    *(undefined1 *)(iVar7 + 0xc89e0) = 0;
    *(undefined1 *)(iVar7 + 0xc94d8) = 0;
    *(undefined4 *)(iVar7 + 0xc94dc) = 0;
    *(undefined1 *)(iVar7 + 0xc94e0) = 0;
    *(undefined4 *)(iVar7 + 0xc94e4) = 0;
    *(undefined1 *)(iVar7 + 0xc94ed) = 0;
    *(undefined1 *)(iVar7 + 0xc94ef) = 0;
    *(undefined1 *)(iVar7 + 0xc94f0) = 0;
    *(undefined4 *)(iVar7 + 0xc94f4) = 0;
    *(undefined2 *)(iVar7 + 0xc94f8) = 0;
    *(undefined1 *)(iVar7 + 0xc94fa) = 0;
    *(undefined4 *)(iVar7 + 0xc94fc) = 0;
    *(undefined4 *)(iVar7 + 0xc9504) = 0;
    *(undefined4 *)(iVar7 + 0xc89e8) = 0;
    *(undefined4 *)(iVar7 + 0xc89f0) = 0;
    *(undefined1 *)(iVar7 + 0xc89f6) = 0;
    *(undefined1 *)(iVar7 + 0xc89fa) = 0;
    *(undefined1 *)(iVar7 + 0xc89fc) = 0;
    *(undefined1 *)(iVar7 + 0xc94da) = 1;
    *(undefined1 *)(iVar7 + 0xc94db) = 1;
    *(undefined1 *)(iVar7 + 0xc89f8) = 1;
    *(undefined1 *)(iVar7 + 0xc94ec) = 7;
    *(undefined1 *)(iVar7 + 0xc89f9) = 7;
    *(undefined1 *)(iVar7 + 0xc94ee) = 6;
    *(undefined1 *)(iVar7 + 0xc89fb) = 6;
    *(int *)(iVar7 + 0xc94e8) = iVar7 + 0xc89e8;
    *(undefined2 *)(iVar7 + 0xc89f4) = 0x19a;
    *(undefined1 *)(iVar7 + 0xc89f7) = 0xc;
    *(undefined1 *)(iVar7 + 0xc89fd) = 1;
    *(undefined4 *)(iVar7 + 0xc8a00) = 0;
    *(undefined1 *)(iVar7 + 0xc89fe) = 1;
    iVar51 = DAT_000c963c;
    if (*(char *)(iVar7 + 0xc89d8) == '\0') {
      iVar14 = *(int *)(iVar7 + 0xc89c8);
      do {
        uVar50 = *(uint *)(iVar7 + 0xc94dc);
        pcVar43 = (char *)(iVar14 + uVar8);
        if (99 < uVar50) break;
        if ((local_88 - uVar8 < 2) || (*(byte *)(iVar14 + uVar8) < 0xa1)) {
          uVar8 = uVar8 + 1;
          *(uint *)(iVar51 + 0xc97c8) = uVar50 + 1;
          *(uint *)(iVar51 + 0xc8cb8) = uVar8;
          if (*pcVar43 == ']') {
            *(undefined1 *)(iVar51 + 0xc8cc4) = 1;
            break;
          }
        }
        else {
          uVar8 = uVar8 + 2;
          *(uint *)(iVar7 + 0xc94dc) = uVar50 + 2;
          *(uint *)(iVar7 + 0xc89cc) = uVar8;
        }
      } while (uVar8 < local_88);
    }
    iVar26 = DAT_000c962c;
    iVar14 = DAT_000c9628;
    iVar7 = DAT_000c9620;
    iVar51 = DAT_000c961c;
    if ((0 < (int)(local_88 - uVar8)) && (uVar50 = *(uint *)(DAT_000c961c + 0xc95ac), uVar50 < 100))
    {
      iVar52 = DAT_000c9624 + 0xc8aac;
      iVar22 = DAT_000c9620 + 0xc8c1a;
      pbVar19 = (byte *)(DAT_000c962c + 0xc8ab4);
      local_7c = 0;
      iVar28 = local_88 - uVar8;
      do {
        uVar16 = uVar8 + 1;
        iVar35 = *(int *)(iVar51 + 0xc8a98);
        *(uint *)(iVar51 + 0xc8aa4) = uVar16;
        bVar15 = *(byte *)(iVar35 + uVar8);
        uVar54 = (uint)bVar15;
        uVar6 = uVar54 - 0x61;
        iVar36 = iVar28;
        if (uVar6 < 0x1a) {
          if (uVar8 < local_88) {
            *(uint *)(iVar51 + 0xc8a9c) = uVar16;
            *pbVar19 = bVar15;
            iVar36 = uVar50 + 1;
            *(int *)(iVar51 + 0xc95ac) = iVar36;
            if (uVar16 < local_88) {
              bVar15 = *(byte *)(iVar35 + uVar16);
              uVar38 = (uint)bVar15;
              if (0x19 < uVar38 - 0x61) {
                uVar42 = 0;
                uVar50 = 0;
                uVar9 = 1;
                uVar25 = uVar38;
                uVar38 = uVar54;
                goto LAB_000c99ec;
              }
              uVar16 = uVar8 + 2;
              iVar36 = uVar50 + 2;
              *(uint *)(iVar51 + 0xc8a9c) = uVar16;
              *(byte *)(iVar26 + 0xc8ab5) = bVar15;
              *(int *)(iVar51 + 0xc95ac) = iVar36;
              if (local_88 <= uVar16) {
                iVar36 = local_88 - uVar16;
                uVar8 = uVar16;
                goto LAB_000c8bf8;
              }
              pbVar48 = (byte *)(iVar35 + uVar16);
              uVar17 = (uint)*pbVar48;
              if (0x19 < uVar17 - 0x61) {
                uVar42 = 1;
                uVar50 = 1;
                uVar9 = 2;
                uVar25 = uVar17;
                goto LAB_000c99ec;
              }
              uVar16 = uVar8 + 3;
              iVar36 = uVar50 + 3;
              *(byte *)(iVar26 + 0xc8ab6) = *pbVar48;
              *(uint *)(iVar51 + 0xc8a9c) = uVar16;
              *(int *)(iVar51 + 0xc95ac) = iVar36;
              if (local_88 <= uVar16) {
                iVar36 = local_88 - uVar16;
                uVar8 = uVar16;
                goto LAB_000c8bf8;
              }
              pbVar48 = (byte *)(iVar35 + uVar16);
              uVar38 = (uint)*pbVar48;
              if (0x19 < uVar38 - 0x61) {
                uVar42 = 1;
                uVar50 = 2;
                uVar9 = 3;
                uVar25 = uVar38;
                uVar38 = uVar17;
                goto LAB_000c99ec;
              }
              uVar16 = uVar8 + 4;
              *(byte *)(iVar26 + 0xc8ab7) = *pbVar48;
              iVar36 = uVar50 + 4;
              *(uint *)(iVar51 + 0xc8a9c) = uVar16;
              *(int *)(iVar51 + 0xc95ac) = iVar36;
              iVar44 = DAT_000c9634;
              iVar41 = DAT_000c9630;
              if (local_88 <= uVar16) {
LAB_000c8d82:
                iVar36 = local_88 - uVar16;
                uVar8 = uVar16;
                goto LAB_000c8bf8;
              }
              pbVar48 = (byte *)(iVar35 + uVar16);
              uVar17 = (uint)*pbVar48;
              if (0x19 < uVar17 - 0x61) {
                uVar42 = 1;
                uVar50 = 3;
                uVar9 = 4;
                uVar25 = uVar17;
                goto LAB_000c99ec;
              }
              uVar16 = uVar8 + 5;
              iVar36 = uVar50 + 5;
              *(byte *)(DAT_000c9630 + 0xc8b8a) = *pbVar48;
              *(uint *)(iVar44 + 0xc8b98) = uVar16;
              *(int *)((int)&DAT_000c96a8 + iVar44) = iVar36;
              if (local_88 <= uVar16) {
                iVar36 = local_88 - uVar16;
                uVar8 = uVar16;
                goto LAB_000c8bf8;
              }
              pbVar48 = (byte *)(iVar35 + uVar16);
              uVar38 = (uint)*pbVar48;
              if (uVar38 - 0x61 < 0x1a) {
                uVar16 = uVar8 + 6;
                iVar36 = uVar50 + 6;
                *(byte *)(iVar41 + 0xc8b8b) = *pbVar48;
                *(uint *)(iVar44 + 0xc8b98) = uVar16;
                *(int *)((int)&DAT_000c96a8 + iVar44) = iVar36;
                if (uVar16 < local_88) {
                  bVar15 = *(byte *)(iVar35 + uVar16);
                  uVar17 = (uint)bVar15;
                  if (uVar17 - 0x61 < 0x1a) {
                    iVar36 = uVar50 + 7;
                    uVar16 = uVar8 + 7;
                    *(int *)((int)&DAT_000c96a8 + iVar44) = iVar36;
                    *(uint *)(iVar44 + 0xc8b98) = uVar16;
                    *(byte *)(iVar41 + 0xc8b8c) = bVar15;
                    if (local_88 <= uVar16) goto LAB_000c8d82;
                    if (*(byte *)(iVar35 + uVar16) - 0x61 < 0x1a) {
                      iVar36 = local_88 - uVar16;
                      uVar8 = uVar16;
                      goto LAB_000c8bf8;
                    }
                    uVar42 = 1;
                    uVar50 = 6;
                    uVar9 = 7;
                    uVar25 = (uint)*(byte *)(iVar35 + uVar16);
                    uVar38 = uVar17;
                  }
                  else {
                    uVar42 = 1;
                    uVar50 = 5;
                    uVar9 = 6;
                    uVar25 = uVar17;
                  }
                  goto LAB_000c99ec;
                }
              }
              else {
                uVar42 = 1;
                uVar50 = 4;
                uVar9 = 5;
                uVar25 = uVar38;
                uVar38 = uVar17;
LAB_000c99ec:
                iVar35 = DAT_000ca6d0;
                uVar25 = uVar25 - 0x30;
                if (uVar25 < 5) {
                  uVar8 = uVar16 + 1;
                  *(uint *)(DAT_000ca6d0 + 0xc9a1a) = uVar8;
                  *(int *)(iVar35 + 0xca52a) = iVar36 + 1;
                  iVar36 = DAT_000ca6e8;
                  if (uVar38 == 0x72) {
                    if (2 < uVar9) {
                      bVar56 = false;
                      goto LAB_000c9a18;
                    }
                    if (uVar9 != 2) goto LAB_000c9a14;
                    if (uVar54 != 0x65) {
                      uVar50 = 1;
                      bVar56 = false;
                      uVar42 = uVar50;
                      goto LAB_000c9a18;
                    }
                    uVar6 = 4;
                    bVar56 = true;
                  }
                  else {
LAB_000c9a14:
                    bVar56 = true;
                    uVar50 = uVar9;
                    uVar42 = 1;
LAB_000c9a18:
                    if (0x19 < uVar6) {
                      uVar42 = 0;
                    }
                    uVar9 = uVar50;
                    if (uVar42 == 0) {
                      iVar36 = local_88 - uVar8;
                      local_7c = (uint)*(byte *)(DAT_000ca70c + 0xc9e00);
                      goto LAB_000c8bf8;
                    }
                  }
                  uVar50 = (uint)*(short *)(iVar7 + (uVar6 * 7 + uVar9) * 2 + 0xc8aac);
                  if ((int)uVar50 < 0) {
                    iVar36 = local_88 - uVar8;
                    local_7c = (uint)*(byte *)(DAT_000cb5f8 + 0xcaa9a);
                  }
                  else if (uVar50 < 0x19a) {
                    iVar31 = 0;
                    iVar35 = uVar50 * 0x20;
                    iVar44 = DAT_000ca6d4 + 0xc9a66;
                    iVar41 = DAT_000ca6dc + 0xc9a70;
                    uVar6 = 0;
                    uVar16 = uVar54;
                    do {
                      iVar40 = DAT_000ca6e0 + 0xc9a74 + uVar50 * 0x20;
                      uVar38 = uVar6;
                      if (*(byte *)(iVar40 + uVar6 + 0x174) == uVar16) {
                        uVar38 = uVar6 + 1;
                        if (uVar9 <= uVar38) break;
                        uVar16 = (uint)*(byte *)(iVar41 + uVar38);
                        if (*(byte *)(iVar40 + uVar38 + 0x174) == uVar16) {
                          uVar38 = uVar6 + 2;
                          if (uVar9 <= uVar38) break;
                          uVar16 = (uint)*(byte *)(iVar41 + uVar38);
                          if (*(byte *)(iVar40 + uVar38 + 0x174) == uVar16) {
                            uVar38 = uVar6 + 3;
                            if (uVar9 <= uVar38) break;
                            uVar16 = (uint)*(byte *)(iVar41 + uVar38);
                            if (*(byte *)(iVar40 + uVar38 + 0x174) == uVar16) {
                              uVar38 = uVar6 + 4;
                              if (uVar9 <= uVar38) break;
                              uVar16 = (uint)*(byte *)(iVar41 + uVar38);
                              if (*(byte *)(iVar40 + uVar38 + 0x174) == uVar16) {
                                uVar38 = uVar6 + 5;
                                if (uVar9 <= uVar38) break;
                                iVar40 = uVar50 * 0x20 + DAT_000ca6d8 + 0xc9a6a;
                                uVar16 = (uint)*(byte *)(iVar44 + uVar38);
                                if ((*(byte *)(iVar40 + uVar38 + 0x174) == uVar16) &&
                                   ((uVar38 = uVar6 + 6, uVar9 <= uVar38 ||
                                    ((uVar16 = (uint)*(byte *)(iVar44 + uVar38),
                                     *(byte *)(iVar40 + uVar38 + 0x174) == uVar16 &&
                                     ((uVar38 = uVar6 + 7, uVar9 <= uVar38 ||
                                      (uVar16 = (uint)*(byte *)(iVar44 + uVar38),
                                      *(byte *)(iVar40 + uVar38 + 0x174) == uVar16)))))))) break;
                              }
                            }
                          }
                        }
                      }
                      if (*(byte *)(iVar22 + iVar35 + iVar31) != uVar54) {
                        iVar36 = local_88 - uVar8;
                        local_7c = (uint)*(byte *)(DAT_000ca708 + 0xc9d98);
                        goto LAB_000c8bf8;
                      }
                      uVar50 = uVar50 + 1;
                      if (uVar50 == 0x19a) {
                        iVar36 = local_88 - uVar8;
                        local_7c = (uint)*(byte *)(DAT_000ca6fc + 0xc9d36);
                        goto LAB_000c8bf8;
                      }
                      iVar31 = iVar31 + 0x20;
                      uVar6 = uVar38;
                    } while (uVar38 < uVar9);
                    if ((bVar56) || (*(char *)(DAT_000ca6e4 + uVar50 * 0x20 + 0xc9cc1) != '\0')) {
                      iVar35 = DAT_000ca6e8 + 0xc9b50 + local_7c * 0x1c;
                      *(int *)(DAT_000ca6e8 + 0xca67c) = iVar35 + 0x2c;
                      *(undefined4 *)(iVar35 + 0x2c) = 0;
                      *(undefined1 *)(iVar35 + 0x30) = *(undefined1 *)(iVar36 + 0xc9b78);
                      uVar34 = *(undefined1 *)(iVar36 + 0xc9b71);
                      *(undefined4 *)(iVar35 + 0x34) = 0;
                      *(undefined1 *)(iVar35 + 0x3a) = 0;
                      *(undefined1 *)(iVar35 + 0x3e) = 0;
                      *(undefined1 *)(iVar35 + 0x40) = 0;
                      *(undefined4 *)(iVar35 + 0x44) = 0;
                      *(undefined1 *)(iVar35 + 0x3c) = 1;
                      *(undefined1 *)(iVar35 + 0x41) = 1;
                      *(undefined1 *)(iVar35 + 0x42) = 1;
                      *(undefined1 *)(iVar35 + 0x31) = uVar34;
                      *(undefined2 *)(iVar35 + 0x38) = 0x19a;
                      *(undefined1 *)(iVar35 + 0x3b) = 0xc;
                      *(undefined1 *)(iVar35 + 0x3d) = 7;
                      *(undefined1 *)(iVar35 + 0x3f) = 6;
                      iVar35 = DAT_000ca6ec;
                      if (*(char *)(iVar36 + 0xca66d) == '\x01') {
                        uVar8 = (uint)*(ushort *)(DAT_000ca700 + uVar50 * 0x20 + 0xc9ebc);
                      }
                      else {
                        uVar8 = 200;
                      }
                      iVar36 = *(int *)((int)&DAT_000ca6c8 + DAT_000ca6ec + 2);
                      iVar41 = uVar8 + (int)*(short *)(DAT_000ca6ec + 0xc9bc4);
                      if (iVar41 < *(int *)(DAT_000ca6ec + 0xc9ba2)) {
                        *(int *)(iVar36 + 8) = *(int *)(DAT_000ca6ec + 0xc9ba2);
                      }
                      else {
                        *(int *)(iVar36 + 8) = iVar41;
                      }
                      *(undefined1 *)(*(int *)((int)&DAT_000ca6c8 + iVar35 + 2) + 5) =
                           *(undefined1 *)(iVar35 + 0xc9bbf);
                      *(undefined1 *)(*(int *)((int)&DAT_000ca6c8 + iVar35 + 2) + 4) =
                           *(undefined1 *)(iVar35 + 0xc9bc6);
                      *(short *)(*(int *)((int)&DAT_000ca6c8 + iVar35 + 2) + 0xc) = (short)uVar50;
                      uVar34 = (undefined1)uVar25;
                      if (uVar25 == 0) {
                        cVar33 = *(char *)((int)&DAT_000ca6c0 + iVar35 + 2);
                        iVar36 = *(int *)((int)&DAT_000ca6c8 + iVar35 + 2);
                        if (cVar33 == '\x01') {
                          *(undefined1 *)(iVar36 + 0xe) = 6;
                        }
                        else if (cVar33 == '\x02') {
                          *(undefined1 *)(iVar36 + 0xe) = 7;
                        }
                        else if (cVar33 == '\x03') {
                          *(undefined1 *)(iVar36 + 0xe) = 8;
                        }
                        else {
                          if (cVar33 != '\x04') goto LAB_000c9bf8;
                          *(undefined1 *)(iVar36 + 0xe) = 9;
                        }
                      }
                      else if (uVar25 == 2) {
                        iVar36 = *(int *)((int)&DAT_000ca6c8 + iVar35 + 2);
                        if (*(char *)((int)&DAT_000ca6c0 + iVar35 + 2) != '\x01') goto LAB_000c9bf8;
                        *(undefined1 *)(iVar36 + 0xe) = 10;
                      }
                      else if (uVar25 == 4) {
                        iVar36 = *(int *)((int)&DAT_000ca6c8 + iVar35 + 2);
                        if (*(char *)((int)&DAT_000ca6c0 + iVar35 + 2) == '\x03') {
                          uVar34 = 4;
                          *(undefined1 *)(iVar36 + 0xe) = 0xb;
                        }
                        else {
                          *(undefined1 *)(iVar36 + 0xe) = 4;
                        }
                      }
                      else {
                        iVar36 = *(int *)((int)&DAT_000ca6c8 + iVar35 + 2);
LAB_000c9bf8:
                        *(undefined1 *)(iVar36 + 0xe) = uVar34;
                      }
                      puVar39 = *(undefined1 **)((int)&DAT_000ca728 + DAT_000ca6f0 + 2);
                      *(undefined1 *)((int)&DAT_000ca724 + DAT_000ca6f0 + 2) = uVar34;
                      if (puVar39 != (undefined1 *)0x0) {
                        *puVar39 = uVar34;
                      }
                      if (bVar56) {
                        *(undefined1 *)(*(int *)(DAT_000ca704 + 0xca87c) + 0x10) = 1;
                      }
                      else {
                        *(undefined1 *)(*(int *)((int)&DAT_000ca748 + DAT_000ca6f4 + 2) + 0x10) = 0;
                      }
                      iVar36 = DAT_000ca6f8;
                      *(undefined4 *)(*(int *)((int)&DAT_000ca760 + DAT_000ca6f8) + 0x18) =
                           *(undefined4 *)(DAT_000ca6f8 + 0xc9c4c);
                      **(undefined4 **)((int)&DAT_000ca760 + iVar36) = 0;
                      *(undefined1 *)(*(int *)((int)&DAT_000ca760 + iVar36) + 0x11) =
                           *(undefined1 *)((int)&DAT_000ca764 + iVar36);
                      *(undefined1 *)(*(int *)((int)&DAT_000ca760 + iVar36) + 0x12) =
                           *(undefined1 *)((int)&DAT_000ca764 + iVar36 + 1);
                      *(undefined1 *)(*(int *)((int)&DAT_000ca760 + iVar36) + 0x13) =
                           *(undefined1 *)((int)&DAT_000ca764 + iVar36 + 2);
                      *(undefined1 *)(*(int *)((int)&DAT_000ca760 + iVar36) + 0x14) =
                           *(undefined1 *)((int)&DAT_000ca764 + iVar36 + 3);
                      *(undefined1 *)(*(int *)((int)&DAT_000ca760 + iVar36) + 0x15) =
                           *(undefined1 *)((int)&DAT_000ca750 + iVar36 + 2);
                      *(undefined1 *)(*(int *)((int)&DAT_000ca760 + iVar36) + 0x16) =
                           *(undefined1 *)((int)&DAT_000ca750 + iVar36 + 3);
                      cVar33 = *(char *)((int)&DAT_000ca750 + iVar36);
                      bVar15 = *(char *)(iVar36 + 0xc9c58) + 1;
                      *(undefined1 *)((int)&DAT_000ca764 + iVar36 + 1) = 0;
                      *(undefined1 *)((int)&DAT_000ca764 + iVar36 + 3) = 0;
                      *(undefined1 *)((int)&DAT_000ca764 + iVar36) = 7;
                      local_7c = (uint)bVar15;
                      *(undefined1 *)((int)&DAT_000ca764 + iVar36 + 2) = 6;
                      iVar35 = *(int *)((int)&DAT_000ca760 + iVar36);
                      *(byte *)(iVar36 + 0xc9c58) = bVar15;
                      *(char *)((int)&DAT_000ca750 + iVar36) = cVar33 + '\x01';
                      *(undefined1 *)((int)&DAT_000ca750 + iVar36 + 2) = 1;
                      local_88 = *(uint *)(iVar36 + 0xc9c48);
                      uVar8 = *(uint *)(iVar36 + 0xc9c44);
                      *(undefined1 *)((int)&DAT_000ca750 + iVar36 + 3) = 1;
                      *(int *)((int)&DAT_000ca75c + iVar36) = iVar35 + 0xf;
                      iVar36 = local_88 - uVar8;
                    }
                    else {
                      iVar36 = local_88 - uVar8;
                      local_7c = (uint)*(byte *)(DAT_000ca714 + 0xc9eb2);
                    }
                  }
                  else {
                    iVar36 = local_88 - uVar8;
                    local_7c = (uint)*(byte *)(DAT_000ca718 + 0xc9ec8);
                  }
                  goto LAB_000c8bf8;
                }
              }
              iVar36 = local_88 - uVar16;
              uVar8 = uVar16;
            }
            else {
              iVar36 = local_88 - uVar16;
              uVar8 = uVar16;
            }
          }
        }
        else if (uVar8 < local_88) {
          *(uint *)(iVar51 + 0xc8a9c) = uVar16;
          *(uint *)(iVar51 + 0xc95ac) = uVar50 + 1;
          uVar8 = *(byte *)(iVar35 + uVar8) - 0x20;
          if ((uVar8 & 0xff) < 0x5f) {
            iVar36 = iVar52 + uVar8 * 8;
            cVar33 = *(char *)(iVar36 + 4);
            if (cVar33 == '\0') {
              local_7c = (uint)*(byte *)(iVar51 + 0xc8ab0);
              iVar36 = local_88 - uVar16;
              uVar8 = uVar16;
            }
            else {
              pcVar29 = *(code **)(iVar52 + uVar8 * 8);
              if ((pcVar29 == (code *)0x0) ||
                 (iVar36 = (*pcVar29)(*(undefined1 *)(iVar36 + 5)), -1 < iVar36)) {
                if (cVar33 == '\n') {
                  local_7c = (uint)*(byte *)(DAT_000c9648 + 0xc8d64);
                  break;
                }
                local_7c = (uint)*(byte *)(iVar14 + 0xc8ad2);
                local_88 = *(uint *)(iVar14 + 0xc8ac2);
                iVar36 = local_88 - *(uint *)(iVar14 + 0xc8abe);
                uVar8 = *(uint *)(iVar14 + 0xc8abe);
              }
              else {
                local_7c = (uint)*(byte *)(iVar51 + 0xc8ab0);
                local_88 = *(uint *)(iVar51 + 0xc8aa0);
                iVar36 = local_88 - *(uint *)(iVar51 + 0xc8a9c);
                uVar8 = *(uint *)(iVar51 + 0xc8a9c);
              }
            }
          }
          else {
            local_7c = (uint)*(byte *)(iVar51 + 0xc8ab0);
            iVar36 = local_88 - uVar16;
            uVar8 = uVar16;
          }
        }
LAB_000c8bf8:
        iVar35 = DAT_000c9644;
        if (iVar28 == iVar36) {
          uVar8 = uVar8 + 1;
          iVar36 = local_88 - uVar8;
          piVar46 = (int *)(DAT_000c9644 + 0xc9838);
          *(uint *)(DAT_000c9644 + 0xc8d28) = uVar8;
          *(int *)(iVar35 + 0xc9838) = *piVar46 + 1;
        }
        if (iVar36 < 1) break;
        if (99 < local_7c) goto LAB_000c8d6e;
        uVar50 = *(uint *)(DAT_000c9638 + 0xc9738);
        iVar28 = iVar36;
      } while (uVar50 < 100);
      if (local_7c != 0) {
LAB_000c8d6e:
        uVar8 = (uint)*(byte *)(DAT_000c9650 + 0xc98aa);
        goto LAB_000c8978;
      }
    }
    uVar8 = (uint)*(byte *)(DAT_000c964c + 0xc9884);
LAB_000c8980:
    iVar51 = DAT_000c9610;
    piVar46 = (int *)(DAT_000c9610 + 0xc94ce);
    *(char *)(DAT_000c9610 + 0xc94be) = (char)uVar8 + '\x01';
    if (*piVar46 == 0) {
      *(undefined4 *)(iVar51 + 0xc94ce) = 1;
    }
    iVar51 = DAT_000c9614 + 0xc89a0;
  }
  else {
    uVar8 = (uint)*(byte *)(DAT_000c960c + 0xc947c);
    if (local_7c < uVar8) goto LAB_000c89b4;
    if (local_7c != uVar8) {
LAB_000c8978:
      iVar14 = DAT_000c965c;
      iVar7 = DAT_000c9658;
      iVar51 = DAT_000c9654;
      if (uVar8 < local_7c) {
        iVar52 = DAT_000c9654 + 0xc9236;
        iVar26 = DAT_000c9658 + 0xc9238;
        iVar28 = DAT_000c965c + 0xc923e;
        local_54 = uVar8;
        do {
          iVar36 = DAT_000c9670;
          iVar22 = DAT_000c9660;
          iVar44 = DAT_000c9660 + 0xc8dc8;
          iVar41 = iVar44 + local_54 * 0x1c;
          iVar35 = *(int *)(iVar41 + 0x2c);
          if (iVar35 == 1) {
LAB_000c8e52:
            iVar22 = 0;
            uVar8 = local_54 + 1 & 0xff;
            *(char *)(iVar44 + 0xb34) = (char)(local_54 + 1);
          }
          else {
            if (iVar35 == 2) {
              if (*(uint *)(DAT_000c9660 + 0xc990c) < 0x7fffffffU - *(int *)(iVar41 + 0x34)) {
                *(uint *)(DAT_000c9660 + 0xc990c) =
                     *(uint *)(DAT_000c9660 + 0xc990c) + *(int *)(iVar41 + 0x34);
              }
              iVar44 = DAT_000c966c + 0xc8e54;
              goto LAB_000c8e52;
            }
            uVar50 = local_54 + 1;
            uVar34 = (undefined1)uVar50;
            if (iVar35 == 0) {
              uVar8 = uVar50 & 0xff;
              *(undefined4 *)(DAT_000c9660 + 0xc9908) = 0;
              *(undefined1 *)(iVar22 + 0xc98fc) = uVar34;
              uVar4 = *(ushort *)(iVar41 + 0x38);
              uVar50 = (uint)uVar4;
              *(undefined4 *)(iVar36 + 0xc8e7e) = 0;
              *(undefined4 *)(iVar36 + 0xc8e82) = 0;
              *(undefined1 *)(iVar36 + 0xc8e86) = 0;
              *(undefined1 *)(iVar36 + 0xc8e87) = 0;
              *(undefined1 *)(iVar36 + 0xc8e88) = 0;
              *(undefined1 *)(iVar36 + 0xc8e89) = 0;
              *(undefined1 *)(iVar36 + 0xc908e) = 0;
              *(undefined1 *)(iVar36 + 0xc8e8d) = 0;
              *(undefined1 *)(iVar36 + 0xc9290) = 0;
              *(undefined1 *)(iVar36 + 0xc9314) = 0;
              *(undefined1 *)(iVar36 + 0xc9916) = 0;
              *(undefined1 *)(iVar36 + 0xc9312) = 0;
              if (0x199 < uVar50) {
                iVar22 = 0;
                goto LAB_000c8dfe;
              }
              iVar35 = *(int *)(iVar41 + 0x34);
              bVar15 = *(byte *)(iVar41 + 0x30);
              cVar33 = *(char *)(iVar41 + 0x3c);
              *(undefined1 *)(iVar36 + 0xc8e86) = *(undefined1 *)(iVar41 + 0x31);
              *(ushort *)(iVar36 + 0xc8e8a) = uVar4;
              *(byte *)(iVar36 + 0xc8e87) = bVar15;
              *(int *)(iVar36 + 0xc8e7e) = iVar35;
              *(char *)(iVar36 + 0xc8e8c) = cVar33;
              *(undefined1 *)(iVar36 + 0xc8e88) = 1;
              *(undefined1 *)(iVar36 + 0xc9312) = 1;
              iVar22 = DAT_000c9678;
              if (cVar33 == '\x01') {
                bVar12 = *(byte *)(DAT_000cb610 + uVar50 * 0x20 + 0xcaca0);
              }
              else {
                bVar12 = *(byte *)(DAT_000c9674 + uVar50 * 0x20 + 0xc9069);
              }
              cVar33 = *(char *)(iVar41 + 0x3a);
              *(byte *)(DAT_000c9678 + 0xc8f03) = bVar12;
              *(char *)(iVar22 + 0xc938d) = cVar33;
              if ((cVar33 == '\x03') &&
                 (*(char *)(iVar41 + 0x3b) == '\x03' || *(char *)(iVar41 + 0x3b) == '\f')) {
                *(undefined1 *)(iVar22 + 0xc938d) = 5;
              }
              iVar22 = DAT_000cb60c;
              if (*(char *)(iVar41 + 0x41) == '\0') {
                uVar50 = (uint)*(byte *)(DAT_000cb608 + 0xcab06);
                if (uVar50 == 5) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = 1;
                  *(undefined1 *)(DAT_000cb60c + 0xcaf9c) = 0;
                  *(undefined4 *)(iVar22 + 0xcafa0) = 0;
                  *(undefined1 *)(iVar22 + 0xcafa4) = 0;
                  *(undefined1 *)(iVar22 + 0xcaf9a) = 1;
                }
              }
              else {
                uVar6 = 0;
                uVar50 = (uint)*(byte *)(DAT_000c967c + 0xc8f42);
              }
              iVar22 = DAT_000c9680;
              if (*(char *)(iVar41 + 0x42) == '\0') {
                *(undefined1 *)(DAT_000c9680 + 0xc99d8) = 0;
                *(undefined4 *)(iVar22 + 0xc99dc) = 0;
                *(undefined1 *)(iVar22 + 0xc99e0) = 0;
                *(undefined1 *)(iVar22 + 0xc99d4) = 1;
              }
              iVar22 = DAT_000c9684;
              bVar20 = *(byte *)(iVar41 + 0x3d);
              if (bVar20 < 7) {
                uVar34 = *(undefined1 *)(iVar41 + 0x3e);
                iVar36 = DAT_000c9684 + 0xc9402 + uVar6 * 0xc;
                *(byte *)(iVar36 + 4) = bVar20;
                cVar33 = *(char *)(iVar22 + 0xc9404);
                *(undefined1 *)(iVar36 + 0xc) = uVar34;
                bVar21 = cVar33 + 1;
                *(undefined4 *)(iVar36 + 8) = 0;
                uVar6 = (uint)bVar21;
                *(byte *)(iVar22 + 0xc9404) = bVar21;
              }
              if (uVar50 == 5) {
                if (bVar20 < 7) {
                  uVar16 = uVar6 - 1;
                  uVar6 = uVar16 & 0xff;
                  *(char *)(DAT_000cb5fc + 0xcaf32) = (char)uVar16;
                }
                iVar22 = DAT_000cb604;
                iVar36 = DAT_000cb600 + 0xcaaac + (local_7c + uVar8 & 0x1f) * 2;
                iVar44 = DAT_000cb604 + 0xcaf4e + uVar6 * 0xc;
                uVar34 = *(undefined1 *)(iVar36 + 0x1cd);
                *(undefined1 *)(iVar44 + 4) = *(undefined1 *)(iVar36 + 0x1cc);
                cVar33 = *(char *)(iVar22 + 0xcaf50);
                *(undefined1 *)(iVar44 + 0xc) = uVar34;
                *(undefined4 *)(iVar44 + 8) = 0;
                *(char *)(iVar22 + 0xcaf50) = cVar33 + '\x01';
              }
              iVar22 = DAT_000c9688;
              if (*(byte *)(iVar41 + 0x3f) < 6) {
                uVar34 = *(undefined1 *)(iVar41 + 0x40);
                iVar44 = (uint)*(byte *)(DAT_000c9688 + 0xc9a4a) * 0xc + 0x608;
                iVar36 = DAT_000c9688 + 0xc9446 + iVar44;
                *(byte *)(DAT_000c9688 + 0xc9446 + iVar44) = *(byte *)(iVar41 + 0x3f);
                *(undefined1 *)(iVar36 + 8) = uVar34;
                *(undefined4 *)(iVar36 + 4) = 0;
                *(char *)(iVar22 + 0xc9a4a) = *(char *)(iVar22 + 0xc9a4a) + '\x01';
              }
              iVar31 = DAT_000c968c + 0xc8fe0;
              cVar33 = *(char *)(DAT_000c968c + 0xc9b1e) + '\x01';
              *(char *)(DAT_000c968c + 0xc9b1e) = cVar33;
              iVar44 = DAT_000c969c;
              iVar36 = DAT_000c9698;
              iVar22 = DAT_000c9694;
              if (uVar8 < local_7c) {
                iVar40 = *(int *)(iVar31 + uVar8 * 0x1c + 0x2c);
                if (iVar40 != 0) {
                  iVar45 = iVar31 + uVar8 * 0x1c + 0x2c;
                  uVar6 = (uint)*(byte *)(DAT_000c9690 + 0xc9434);
                  iVar37 = DAT_000c9694 + 0xc94bc;
                  iVar31 = uVar8 * 0x1c + iVar31 + 0x2c;
                  iVar23 = DAT_000c9698 + 0xc94c4;
                  bVar56 = true;
                  iVar53 = DAT_000c969c + 0xc94dc;
                  do {
                    uVar16 = uVar8 + 1;
                    if (iVar40 == 1) {
                      if (((*(char *)(iVar31 + 0x15) == '\0') && (uVar50 != 5)) &&
                         (-1 < (int)((uint)*(byte *)(iVar36 + 0xc94c6) << 0x18))) {
                        iVar40 = iVar23 + (uint)*(byte *)(iVar36 + 0xc94c6) * 0xc;
                        *(undefined1 *)(iVar40 + 4) = 0;
                        bVar20 = *(byte *)(iVar36 + 0xc94c4);
                        *(undefined1 *)(iVar40 + 0xc) = 0;
                        cVar5 = *(char *)(iVar36 + 0xc94c6);
                        *(uint *)(iVar40 + 8) = (uint)bVar20;
                        *(char *)(iVar36 + 0xc94c6) = cVar5 + '\x01';
                      }
                      if ((*(char *)(iVar31 + 0x16) == '\0') &&
                         ((*(byte *)(iVar22 + 0xc9ac0) & 0x80) == 0)) {
                        iVar24 = (uint)*(byte *)(iVar22 + 0xc9ac0) * 0xc + 0x608;
                        iVar40 = iVar37 + iVar24;
                        *(undefined1 *)(iVar37 + iVar24) = 0;
                        bVar20 = *(byte *)(iVar22 + 0xc94bc);
                        *(undefined1 *)(iVar40 + 8) = 0;
                        *(uint *)(iVar40 + 4) = (uint)bVar20;
                        *(char *)(iVar22 + 0xc9ac0) = *(char *)(iVar22 + 0xc9ac0) + '\x01';
                      }
                      if ((*(byte *)(iVar31 + 0x11) < 7) &&
                         (-1 < (int)((uint)*(byte *)(iVar44 + 0xc94de) << 0x18))) {
                        uVar34 = *(undefined1 *)(iVar31 + 0x12);
                        iVar40 = iVar53 + (uint)*(byte *)(iVar44 + 0xc94de) * 0xc;
                        *(byte *)(iVar40 + 4) = *(byte *)(iVar31 + 0x11);
                        bVar20 = *(byte *)(iVar44 + 0xc94dc);
                        cVar5 = *(char *)(iVar44 + 0xc94de);
                        *(undefined1 *)(iVar40 + 0xc) = uVar34;
                        *(uint *)(iVar40 + 8) = (uint)bVar20;
                        *(char *)(iVar44 + 0xc94de) = cVar5 + '\x01';
                        if (uVar50 == 5) {
                          bVar20 = *(char *)(iVar44 + 0xc94de) - 1;
                          *(byte *)(iVar44 + 0xc94de) = bVar20;
LAB_000c9e36:
                          if (-1 < (int)((uint)bVar20 << 0x18)) {
                            iVar24 = DAT_000ca710 + 0xc9e50 + (local_7c + uVar16 & 0x1f) * 2;
                            iVar40 = iVar28 + (uint)bVar20 * 0xc;
                            uVar34 = *(undefined1 *)(iVar24 + 0x1cd);
                            *(undefined1 *)(iVar40 + 4) = *(undefined1 *)(iVar24 + 0x1cc);
                            *(undefined1 *)(iVar40 + 0xc) = uVar34;
                            cVar5 = *(char *)(iVar14 + 0xc9240);
                            *(uint *)(iVar40 + 8) = (uint)*(byte *)(iVar14 + 0xc923e);
                            *(char *)(iVar14 + 0xc9240) = cVar5 + '\x01';
                          }
                        }
                      }
                      else if (uVar50 == 5) {
                        bVar20 = *(byte *)(DAT_000ca720 + 0xca3fa);
                        goto LAB_000c9e36;
                      }
                      if ((*(byte *)(iVar31 + 0x13) < 6) &&
                         (-1 < (int)((uint)*(byte *)(iVar7 + 0xc983c) << 0x18))) {
                        uVar34 = *(undefined1 *)(iVar31 + 0x14);
                        iVar40 = (uint)*(byte *)(iVar7 + 0xc983c) * 0xc + 0x608;
                        *(byte *)(iVar26 + iVar40) = *(byte *)(iVar31 + 0x13);
                        iVar40 = iVar40 + iVar26;
                        uVar8 = (uint)*(byte *)(iVar7 + 0xc9238);
                        *(undefined1 *)(iVar40 + 8) = uVar34;
                        *(uint *)(iVar40 + 4) = uVar8;
                        *(char *)(iVar7 + 0xc983c) = *(char *)(iVar7 + 0xc983c) + '\x01';
                      }
                      else {
                        uVar8 = (uint)*(byte *)(DAT_000ca6cc + 0xc9e72);
                      }
                      if (-1 < (int)(uVar6 << 0x18)) {
                        if (*(char *)(iVar31 + 5) == '\x01') {
                          if (bVar56) {
                            bVar56 = false;
                            iVar40 = uVar6 * 4;
                            uVar6 = uVar6 + 1 & 0xff;
                            *(uint *)(DAT_000cba5c + iVar40 + 0xcb67a) = uVar8;
                          }
                          else {
                            bVar56 = false;
                          }
                        }
                        else if (*(char *)(iVar31 + 5) == '\0') {
                          if (bVar56) {
                            bVar56 = true;
                          }
                          else {
                            iVar40 = uVar6 * 4;
                            uVar6 = uVar6 + 1 & 0xff;
                            bVar56 = true;
                            *(uint *)(DAT_000ca6c0 + iVar40 + 0xc994e) = uVar8;
                          }
                        }
                      }
                      *(char *)(DAT_000ca6c4 + 0xc9e56) = (char)uVar8 + '\x01';
                      if (local_7c <= uVar16) goto LAB_000c99c0;
                    }
                    else {
                      if (local_7c <= uVar16) {
LAB_000c99c0:
                        *(char *)(DAT_000ca6c8 + 0xc9de4) = (char)uVar6;
                        goto LAB_000c9200;
                      }
                      if (*(int *)(iVar45 + 0x1c) != 0) {
                        if (*(int *)(iVar45 + 0x1c) != 1) {
                          uVar38 = ~uVar16 + local_7c & 7;
                          iVar24 = iVar31;
                          uVar54 = uVar16;
                          if (uVar38 != 0) {
                            uVar54 = uVar8 + 2;
                            if ((local_7c <= uVar54) || (*(int *)(iVar31 + 0x38) == 0))
                            goto LAB_000c91d4;
                            iVar24 = iVar31 + 0x1c;
                            if (*(int *)(iVar31 + 0x38) == 1) goto LAB_000c91ba;
                            if (uVar38 != 1) {
                              if (uVar38 != 2) {
                                if (uVar38 != 3) {
                                  if (uVar38 != 4) {
                                    if (uVar38 != 5) {
                                      if (uVar38 != 6) {
                                        uVar54 = uVar8 + 3;
                                        if (*(int *)(iVar31 + 0x54) == 0) goto LAB_000c91d4;
                                        iVar24 = iVar31 + 0x38;
                                        if (*(int *)(iVar31 + 0x54) == 1) goto LAB_000c91ba;
                                      }
                                      piVar46 = (int *)(iVar24 + 0x38);
                                      uVar54 = uVar54 + 1;
                                      if (*piVar46 == 0) goto LAB_000c91d4;
                                      iVar24 = iVar24 + 0x1c;
                                      if (*piVar46 == 1) goto LAB_000c91ba;
                                    }
                                    piVar46 = (int *)(iVar24 + 0x38);
                                    uVar54 = uVar54 + 1;
                                    if (*piVar46 == 0) goto LAB_000c91d4;
                                    iVar24 = iVar24 + 0x1c;
                                    if (*piVar46 == 1) goto LAB_000c91ba;
                                  }
                                  piVar46 = (int *)(iVar24 + 0x38);
                                  uVar54 = uVar54 + 1;
                                  if (*piVar46 == 0) goto LAB_000c91d4;
                                  iVar24 = iVar24 + 0x1c;
                                  if (*piVar46 == 1) goto LAB_000c91ba;
                                }
                                piVar46 = (int *)(iVar24 + 0x38);
                                uVar54 = uVar54 + 1;
                                if (*piVar46 == 0) goto LAB_000c91d4;
                                iVar24 = iVar24 + 0x1c;
                                if (*piVar46 == 1) goto LAB_000c91ba;
                              }
                              piVar46 = (int *)(iVar24 + 0x38);
                              uVar54 = uVar54 + 1;
                              if (*piVar46 == 0) goto LAB_000c91d4;
                              iVar24 = iVar24 + 0x1c;
                              if (*piVar46 == 1) goto LAB_000c91ba;
                            }
                          }
                          do {
                            if ((local_7c <= uVar54 + 1) || (*(int *)(iVar24 + 0x38) == 0))
                            goto LAB_000c91d4;
                            if (*(int *)(iVar24 + 0x38) == 1) break;
                            if (*(int *)(iVar24 + 0x54) == 0) goto LAB_000c91d4;
                            if (*(int *)(iVar24 + 0x54) == 1) break;
                            if (*(int *)(iVar24 + 0x70) == 0) goto LAB_000c91d4;
                            if (*(int *)(iVar24 + 0x70) == 1) break;
                            if (*(int *)(iVar24 + 0x8c) == 0) goto LAB_000c91d4;
                            if (*(int *)(iVar24 + 0x8c) == 1) break;
                            if (*(int *)(iVar24 + 0xa8) == 0) goto LAB_000c91d4;
                            if (*(int *)(iVar24 + 0xa8) == 1) break;
                            if (*(int *)(iVar24 + 0xc4) == 0) goto LAB_000c91d4;
                            if (*(int *)(iVar24 + 0xc4) == 1) break;
                            if (*(int *)(iVar24 + 0xe0) == 0) goto LAB_000c91d4;
                            if (*(int *)(iVar24 + 0xe0) == 1) break;
                            piVar46 = (int *)(iVar24 + 0xfc);
                            if (*piVar46 == 0) goto LAB_000c91d4;
                            iVar24 = iVar24 + 0xe0;
                            uVar54 = uVar54 + 8;
                          } while (*piVar46 != 1);
                        }
LAB_000c91ba:
                        if (iVar40 == 2) {
                          if ((int)((uint)*(byte *)(iVar51 + 0xc983a) << 0x18) < 0) {
                            bVar20 = *(byte *)(iVar51 + 0xc9236);
                          }
                          else {
                            iVar40 = (uint)*(byte *)(iVar51 + 0xc983a) * 0xc + 0x608;
                            *(undefined1 *)(iVar52 + iVar40) = 3;
                            iVar40 = iVar40 + iVar52;
                            bVar20 = *(byte *)(iVar51 + 0xc9236);
                            *(undefined1 *)(iVar40 + 8) = 1;
                            *(uint *)(iVar40 + 4) = (uint)bVar20;
                            *(char *)(iVar51 + 0xc983a) = *(char *)(iVar51 + 0xc983a) + '\x01';
                          }
                          iVar40 = DAT_000cb614;
                          *(undefined4 *)(iVar45 + 8) = 0;
                          *(byte *)(iVar40 + 0xcb014) = bVar20 + 1;
                        }
                        else {
                          *(uint *)(iVar45 + 8) =
                               iVar35 * (uint)*(byte *)((int)&DAT_000c9664 + DAT_000c96a0 + 2);
                        }
                      }
                    }
LAB_000c91d4:
                    iVar45 = iVar45 + 0x1c;
                    iVar31 = iVar31 + 0x1c;
                    iVar40 = *(int *)(DAT_000c96a4 + uVar16 * 0x1c + 0xc9212);
                    uVar8 = uVar16;
                  } while (iVar40 != 0);
                  *(char *)((int)&DAT_000c9618 + DAT_000c96a8) = (char)uVar6;
                }
              }
LAB_000c9200:
              iVar22 = DAT_000c96ac;
              uVar8 = (uint)*(byte *)((int)&DAT_000c96a4 + DAT_000c96ac + 2);
              iVar35 = iVar35 * uVar8;
              *(int *)(DAT_000c96ac + 0xc9212) = iVar35;
              if (uVar8 == 0) {
                uVar8 = 0;
                local_78 = 0;
              }
              else {
                bVar15 = *(byte *)((int)&DAT_000c96a8 + iVar22);
                if (5 < uVar50) {
                  uVar50 = 4;
                  *(undefined1 *)(DAT_000c96b0 + 0xc9250) = 4;
                }
                iVar22 = DAT_000cb64c;
                if (cVar33 == '\x01') {
                  local_8c = (uint)*(short *)(DAT_000cba60 + uVar50 * 6 + 0xcb8fa);
                }
                else if (*(char *)(DAT_000c96b4 + 0xc9d62) == cVar33) {
                  local_8c = (uint)*(short *)(DAT_000cb638 + uVar50 * 6 + 0xcb24c);
                }
                else {
                  local_8c = (uint)*(short *)(DAT_000c96b8 + uVar50 * 6 + 0xc9464);
                }
                if (bVar15 == 0) {
                  if (*(char *)(DAT_000cb618 + 0xcb026) == '\0') goto LAB_000c927a;
LAB_000c9286:
                  uVar8 = (uint)*(byte *)(DAT_000c96c4 + 0xc972f);
                  iVar22 = DAT_000c96c8 + 0xc94c4;
                  if (0xc < uVar8) {
                    uVar8 = 0;
                    *(undefined1 *)(DAT_000c96c4 + 0xc972f) = 0;
                  }
                  iVar35 = DAT_000c96d4;
                  iVar36 = DAT_000c96d0;
                  uVar50 = (uint)*(byte *)(iVar22 + uVar8 * 0x12);
                  iVar22 = iVar22 + uVar8 * 0x12;
                  uVar8 = 0;
                  if (uVar50 != 0) {
                    bVar15 = *(byte *)(iVar22 + 2);
                    iVar44 = *(int *)(DAT_000c96cc + 0xc9e00);
                    if (0x7e < bVar15) {
                      bVar15 = 0x7f;
                    }
                    iVar23 = (int)*(short *)(iVar22 + 4) + local_8c + iVar44;
                    iVar40 = DAT_000c96d0 + 0xc92ea;
                    iVar31 = DAT_000c96d4 + 0xc92f0;
                    if (iVar23 + 0x2000U < 0x4000) {
                      uVar49 = (undefined2)iVar23;
                    }
                    else if (iVar23 < 0x2000) {
                      uVar49 = 0xe000;
                    }
                    else {
                      uVar49 = 0x1fff;
                    }
                    uVar8 = 1;
                    *(byte *)(DAT_000c96d0 + 0xc9302) = bVar15;
                    uVar6 = 1;
                    *(undefined2 *)(iVar36 + 0xc9304) = uVar49;
                    iVar23 = 4;
                    if (1 < uVar50) {
                      if ((uVar50 - 1 & 1) != 0) {
                        bVar15 = *(byte *)(iVar22 + 6);
                        uVar6 = (int)*(short *)(iVar22 + 8) + local_8c + iVar44;
                        if (0x7e < bVar15) {
                          bVar15 = 0x7f;
                        }
                        if (uVar6 + 0x2000 < 0x4000) {
                          uVar6 = uVar6 & 0xffff;
                        }
                        else if ((int)uVar6 < 0x2000) {
                          uVar6 = 0xe000;
                        }
                        else {
                          uVar6 = 0x1fff;
                        }
                        if (*(byte *)(iVar35 + 0xc9308) == bVar15) {
                          if (uVar6 != *(ushort *)(iVar35 + 0xc930a)) {
                            if (bVar15 != 0) goto LAB_000c933e;
                            *(short *)(iVar35 + 0xc930a) = (short)uVar6;
                          }
                        }
                        else {
LAB_000c933e:
                          uVar8 = 2;
                          *(byte *)(iVar36 + 0xc9306) = bVar15;
                          *(short *)(iVar36 + 0xc9308) = (short)uVar6;
                        }
                        uVar6 = 2;
                        iVar23 = 8;
                        if (uVar50 < 3) goto LAB_000c9400;
                      }
                      do {
                        bVar15 = *(byte *)(iVar22 + iVar23 + 2);
                        if (0x7e < bVar15) {
                          bVar15 = 0x7f;
                        }
                        if (uVar8 < 0x80) {
                          uVar16 = (int)*(short *)(iVar22 + iVar23 + 4) + local_8c + iVar44;
                          if (uVar16 + 0x2000 < 0x4000) {
                            uVar16 = uVar16 & 0xffff;
                          }
                          else if ((int)uVar16 < 0x2000) {
                            uVar16 = 0xe000;
                          }
                          else {
                            uVar16 = 0x1fff;
                          }
                          if ((uVar8 == 0) ||
                             (iVar36 = iVar31 + (uVar8 + 3) * 4, *(byte *)(iVar36 + 8) != bVar15)) {
LAB_000c93a0:
                            iVar36 = uVar8 + 4;
                            uVar8 = uVar8 + 1;
                            iVar36 = iVar40 + iVar36 * 4;
                            *(byte *)(iVar36 + 8) = bVar15;
                          }
                          else {
                            if (uVar16 == *(ushort *)(iVar36 + 10)) goto LAB_000c93b2;
                            if ((bVar15 != 0) &&
                               ((uVar8 == 1 || (bVar15 != *(byte *)(iVar31 + uVar8 * 4 + 0x10)))))
                            goto LAB_000c93a0;
                          }
                          *(short *)(iVar36 + 10) = (short)uVar16;
                        }
LAB_000c93b2:
                        iVar36 = iVar22 + iVar23 + 4;
                        bVar15 = *(byte *)(iVar36 + 2);
                        if (0x7e < bVar15) {
                          bVar15 = 0x7f;
                        }
                        if (uVar8 < 0x80) {
                          uVar16 = (int)*(short *)(iVar36 + 4) + local_8c + iVar44;
                          if (uVar16 + 0x2000 < 0x4000) {
                            uVar16 = uVar16 & 0xffff;
                          }
                          else if ((int)uVar16 < 0x2000) {
                            uVar16 = 0xe000;
                          }
                          else {
                            uVar16 = 0x1fff;
                          }
                          if ((uVar8 == 0) ||
                             (iVar36 = iVar31 + (uVar8 + 3) * 4, *(byte *)(iVar36 + 8) != bVar15)) {
LAB_000c93e6:
                            iVar36 = uVar8 + 4;
                            uVar8 = uVar8 + 1;
                            iVar36 = iVar40 + iVar36 * 4;
                            *(byte *)(iVar36 + 8) = bVar15;
                            *(short *)(iVar36 + 10) = (short)uVar16;
                          }
                          else if (uVar16 != *(ushort *)(iVar36 + 10)) {
                            if ((bVar15 != 0) &&
                               ((uVar8 == 1 || (bVar15 != *(byte *)(iVar31 + uVar8 * 4 + 0x10)))))
                            goto LAB_000c93e6;
                            *(short *)(iVar36 + 10) = (short)uVar16;
                          }
                        }
                        uVar6 = uVar6 + 2;
                        iVar23 = iVar23 + 8;
                      } while (uVar6 < uVar50);
                    }
LAB_000c9400:
                    uVar8 = uVar8 & 0xff;
                  }
                  *(char *)(DAT_000c96d8 + 0xc941f) = (char)uVar8;
                }
                else {
                  if ((bVar15 == 1) && (*(char *)(DAT_000c96bc + 0xc9712) == '\0')) {
LAB_000c927a:
                    *(undefined4 *)(DAT_000c96c0 + 0xc9dbc) = 0;
                    goto LAB_000c9286;
                  }
                  iVar36 = *(int *)(DAT_000cb648 + 0xcbeaa) + local_8c;
                  if (iVar36 + 0x2000U < 0x4000) {
                    uVar49 = (undefined2)iVar36;
                  }
                  else if (iVar36 < 0x2000) {
                    uVar49 = 0xe000;
                  }
                  else {
                    uVar49 = 0x1fff;
                  }
                  pbVar48 = (byte *)(DAT_000cb64c + 0xcb84c);
                  uVar8 = (uint)*(byte *)(DAT_000cb64c + 0xcb840);
                  pbVar19 = pbVar48 + (short)(ushort)bVar15 * 0xc;
                  iVar36 = *(int *)((int)&DAT_000cbee4 + DAT_000cb650);
                  iVar35 = DAT_000cb654 + (uVar8 - 1) * 4;
                  iVar40 = DAT_000cb65c + 0xcb3de;
                  uVar50 = 1;
                  iVar44 = DAT_000cb660 + 0xcb3e4;
                  iVar31 = DAT_000cb658 + 0xcb6d4;
                  *(undefined2 *)(DAT_000cb64c + 0xcb3be) = uVar49;
                  *(undefined1 *)(iVar22 + 0xcb3bc) = 0;
                  do {
                    uVar6 = (uint)pbVar48[-8];
                    iVar22 = *(int *)(pbVar48 + -4);
                    bVar15 = *pbVar48;
                    uVar16 = (uint)*(byte *)(iVar31 + uVar6 * 0x12);
                    iVar23 = iVar31 + uVar6 * 0x12;
                    if (uVar16 != 0) {
                      uVar54 = 0;
                      iVar37 = iVar23;
                      do {
                        uVar38 = (uint)*(byte *)(iVar37 + 2) + iVar22 * 0x7f;
                        if (uVar8 - 2 < 0x7f) {
                          uVar38 = *(int *)(iVar35 + 0xcb73a) * uVar38 >> 0xf;
                          if (0x7e < uVar38) {
                            uVar38 = 0x7f;
                          }
                        }
                        else if (uVar8 == 1) {
                          if (0x7e < uVar38) {
                            uVar38 = 0x7f;
                          }
                        }
                        else if (uVar8 < 0x81) {
                          uVar38 = 0;
                        }
                        else {
                          uVar38 = __udivsi3(uVar38,uVar8);
                          if (0x7e < uVar38) {
                            uVar38 = 0x7f;
                          }
                        }
                        iVar53 = (int)*(short *)(iVar37 + 4) * (int)(short)(ushort)bVar15 + local_8c
                        ;
                        iVar45 = iVar53;
                        if (iVar53 < -0x10eb4 || 0x10eb4 < iVar53) {
                          iVar45 = -0x10eb4;
                          if (0x10eb4 < iVar53) {
                            iVar45 = 0x10eb4;
                          }
                        }
                        if (uVar50 < 0x80) {
                          uVar42 = iVar45 + iVar36;
                          if (uVar42 + 0x2000 < 0x4000) {
                            uVar9 = uVar42 & 0xffff;
                          }
                          else {
                            uVar9 = 0x1fff;
                            if ((int)uVar42 < 0x2000) {
                              uVar9 = 0xe000;
                            }
                          }
                          iVar45 = iVar40 + (uVar50 + 3) * 4;
                          if (*(byte *)(iVar45 + 8) == uVar38) {
                            if (uVar9 == *(ushort *)(iVar45 + 10)) goto LAB_000cb4ec;
                            if ((uVar38 != 0) &&
                               ((uVar50 == 1 || (uVar38 != *(byte *)(iVar40 + uVar50 * 4 + 0x10)))))
                            goto LAB_000cb4dc;
                          }
                          else {
LAB_000cb4dc:
                            iVar45 = uVar50 + 4;
                            uVar50 = uVar50 + 1;
                            iVar45 = iVar44 + iVar45 * 4;
                            *(char *)(iVar45 + 8) = (char)uVar38;
                          }
                          *(short *)(iVar45 + 10) = (short)uVar9;
                        }
LAB_000cb4ec:
                        uVar54 = uVar54 + 1;
                        if (uVar6 == 0) {
                          iVar36 = 0;
                        }
                        iVar37 = iVar37 + 4;
                      } while (uVar54 < uVar16);
                      iVar23 = (int)*(short *)(iVar23 + uVar16 * 4) * (int)(short)(ushort)bVar15;
                      iVar22 = iVar23;
                      if (iVar23 < -0x10eb4 || 0x10eb4 < iVar23) {
                        iVar22 = -0x10eb4;
                        if (0x10eb4 < iVar23) {
                          iVar22 = 0x10eb4;
                        }
                      }
                      iVar22 = iVar36 + iVar22;
                      iVar36 = iVar22;
                      if ("" < (char *)(iVar22 + 0x10eb4)) {
                        iVar36 = -0x10eb4;
                        if (0x10eb4 < iVar22) {
                          iVar36 = 0x10eb4;
                        }
                      }
                    }
                    pbVar48 = pbVar48 + 0xc;
                  } while (pbVar48 != pbVar19);
                  *(int *)(&UNK_000cc0aa + DAT_000cb664) = iVar36;
                  if ((uVar50 < 0x7f) && (*(char *)(DAT_000cb668 + uVar50 * 4 + 0xcb592) != '\x7f'))
                  {
                    iVar36 = local_8c + iVar36;
                    if (iVar36 + 0x2000U < 0x4000) {
                      uVar49 = (undefined2)iVar36;
                    }
                    else if (iVar36 < 0x2000) {
                      uVar49 = 0xe000;
                    }
                    else {
                      uVar49 = 0x1fff;
                    }
                    iVar22 = uVar50 + 4;
                    uVar50 = uVar50 + 1;
                    iVar22 = DAT_000cb66c + 0xcb5b8 + iVar22 * 4;
                    *(undefined2 *)(iVar22 + 10) = uVar49;
                    *(undefined1 *)(iVar22 + 8) = 0x7f;
                  }
                  uVar8 = uVar50 & 0xff;
                  *(char *)((int)&DAT_000cb5e0 + DAT_000cb670 + 3) = (char)uVar50;
                }
                iVar22 = DAT_000c96e4;
                uVar50 = (uint)*(byte *)(DAT_000c96e0 + 0xc9eb2);
                iVar36 = *(short *)(DAT_000c96dc + 0xc9f4c) + 0x60;
                if ((ushort)(*(short *)(DAT_000c96dc + 0xc9f4c) + 0x60U) < 0x80) {
                  uVar49 = (undefined2)iVar36;
                }
                else if (iVar36 < 0x80) {
                  uVar49 = 0;
                }
                else {
                  uVar49 = 0x7f;
                }
                *(undefined2 *)((int)&DAT_000c9668 + DAT_000c96e4 + 2) = uVar49;
                *(undefined1 *)((int)&DAT_000c9668 + iVar22) = 0;
                if (uVar50 == 0) {
                  uVar6 = 1;
LAB_000ca9d8:
                  iVar22 = *(short *)(DAT_000cb5f0 + 0xcb51c) + 0x60;
                  if ((ushort)(*(short *)(DAT_000cb5f0 + 0xcb51c) + 0x60U) < 0x80) {
                    uVar49 = (undefined2)iVar22;
                  }
                  else if (iVar22 < 0x80) {
                    uVar49 = 0;
                  }
                  else {
                    uVar49 = 0x7f;
                  }
                  iVar22 = uVar6 + 0x84;
                  uVar6 = uVar6 + 1;
                  iVar22 = DAT_000cb5f4 + 0xcaa18 + iVar22 * 4;
                  *(undefined2 *)(iVar22 + 0xc) = uVar49;
                  *(undefined1 *)(iVar22 + 10) = 0x7f;
                }
                else {
                  iVar31 = iVar22 + 0xc98ea;
                  uVar16 = (uint)*(byte *)(iVar22 + 0xc98ea);
                  uVar8 = (uint)*(ushort *)(DAT_000c96e8 + 0xc9fa8);
                  iVar36 = DAT_000c96ec + 0xc9a02;
                  iVar35 = DAT_000c96f4 + 0xc9486;
                  uVar6 = 1;
                  iVar22 = DAT_000c96f0 + (uVar16 - 1) * 4;
                  iVar44 = DAT_000c96f8 + 0xc9496;
                  local_80 = 1;
                  local_8c = 0;
                  do {
                    uVar54 = (uint)*(byte *)(iVar31 + 0x608);
                    if (uVar54 == 3) {
                      if (local_8c < 2) {
                        if (local_80 < uVar50) {
                          if (*(char *)(iVar31 + 0x614) == '\x03') {
                            uVar42 = (uVar50 + 1) - local_80;
                            uVar38 = uVar42 - 2 & 7;
                            local_8c = 2;
                            if (uVar38 == 0) {
                              uVar9 = 2;
                              iVar40 = iVar31 + 0x608;
                            }
                            else {
                              iVar40 = iVar31 + 0x614;
                              if (*(char *)(iVar31 + 0x620) != '\x03') goto LAB_000c94c0;
                              uVar9 = 3;
                              if (uVar38 != 1) {
                                if (uVar38 != 2) {
                                  if (uVar38 != 3) {
                                    if (uVar38 != 4) {
                                      if (uVar38 != 5) {
                                        local_8c = uVar9;
                                        if (uVar38 != 6) {
                                          iVar40 = iVar31 + 0x620;
                                          if (*(char *)(iVar31 + 0x62c) != '\x03')
                                          goto LAB_000c94c0;
                                          local_8c = 4;
                                        }
                                        pcVar43 = (char *)(iVar40 + 0x18);
                                        iVar40 = iVar40 + 0xc;
                                        uVar9 = local_8c + 1;
                                        if (*pcVar43 != '\x03') goto LAB_000c94c0;
                                      }
                                      local_8c = uVar9;
                                      pcVar43 = (char *)(iVar40 + 0x18);
                                      iVar40 = iVar40 + 0xc;
                                      uVar9 = local_8c + 1;
                                      if (*pcVar43 != '\x03') goto LAB_000c94c0;
                                    }
                                    local_8c = uVar9;
                                    pcVar43 = (char *)(iVar40 + 0x18);
                                    iVar40 = iVar40 + 0xc;
                                    uVar9 = local_8c + 1;
                                    if (*pcVar43 != '\x03') goto LAB_000c94c0;
                                  }
                                  local_8c = uVar9;
                                  pcVar43 = (char *)(iVar40 + 0x18);
                                  iVar40 = iVar40 + 0xc;
                                  uVar9 = local_8c + 1;
                                  if (*pcVar43 != '\x03') goto LAB_000c94c0;
                                }
                                local_8c = uVar9;
                                pcVar43 = (char *)(iVar40 + 0x18);
                                iVar40 = iVar40 + 0xc;
                                uVar9 = local_8c + 1;
                                if (*pcVar43 != '\x03') goto LAB_000c94c0;
                              }
                            }
                            while ((((((local_8c = uVar9, uVar9 != uVar42 &&
                                       (*(char *)(iVar40 + 0x18) == '\x03')) &&
                                      (local_8c = uVar9 + 1, *(char *)(iVar40 + 0x24) == '\x03')) &&
                                     ((local_8c = uVar9 + 2, *(char *)(iVar40 + 0x30) == '\x03' &&
                                      (local_8c = uVar9 + 3, *(char *)(iVar40 + 0x3c) == '\x03'))))
                                    && ((local_8c = uVar9 + 4, *(char *)(iVar40 + 0x48) == '\x03' &&
                                        ((local_8c = uVar9 + 5, *(char *)(iVar40 + 0x54) == '\x03'
                                         && (local_8c = uVar9 + 6,
                                            *(char *)(iVar40 + 0x60) == '\x03')))))) &&
                                   (local_8c = uVar9 + 7, *(char *)(iVar40 + 0x6c) == '\x03'))) {
                              uVar9 = uVar9 + 8;
                              iVar40 = iVar40 + 0x60;
                            }
                          }
                          else {
                            local_8c = 1;
                          }
                        }
                        else {
                          local_8c = 1;
                        }
                        goto LAB_000c94c0;
                      }
                      local_8c = local_8c - 1;
                    }
                    else {
                      local_8c = 0;
LAB_000c94c0:
                      iVar40 = *(int *)(iVar31 + 0x60c);
                      iVar23 = iVar36 + uVar54 * 0x12;
                      bVar15 = *(byte *)(iVar31 + 0x610);
                      uVar38 = (uint)*(byte *)(iVar36 + uVar54 * 0x12);
                      if (uVar38 != 0) {
                        uVar42 = 0;
                        iVar37 = iVar23;
                        do {
                          uVar9 = (uint)*(byte *)(iVar37 + 2);
                          if (uVar54 == 3) {
                            uVar9 = local_8c * uVar9;
                          }
                          uVar9 = uVar9 + iVar40 * 0x7f;
                          if (uVar16 - 2 < 0x7f) {
                            uVar9 = *(int *)(iVar22 + 0xc980c) * uVar9 >> 0xf;
                            if (0x7e < uVar9) {
                              uVar9 = 0x7f;
                            }
                          }
                          else if (uVar16 == 1) {
                            if (0x7e < uVar9) {
                              uVar9 = 0x7f;
                            }
                          }
                          else if (uVar16 < 0x81) {
                            uVar9 = 0;
                          }
                          else {
                            uVar9 = __udivsi3(uVar9,uVar16);
                            if (0x7e < uVar9) {
                              uVar9 = 0x7f;
                            }
                          }
                          iVar45 = (int)*(short *)(iVar37 + 4) * (int)(short)(ushort)bVar15;
                          if (iVar45 < -99 || 99 < iVar45) {
                            if (iVar45 < 100) {
                              iVar45 = -99;
                            }
                            else {
                              iVar45 = 99;
                            }
                          }
                          if (uVar6 < 0x80) {
                            uVar25 = (short)uVar8 + iVar45 + 0x60;
                            if (0x7f < uVar25) {
                              if ((int)uVar25 < 0x80) {
                                uVar25 = 0;
                              }
                              else {
                                uVar25 = 0x7f;
                              }
                            }
                            iVar45 = iVar35 + (uVar6 + 0x83) * 4;
                            if (*(byte *)(iVar45 + 10) == uVar9) {
                              if ((int)*(short *)(iVar45 + 0xc) == uVar25) goto LAB_000c9586;
                              if ((uVar9 != 0) &&
                                 ((uVar6 == 1 || (uVar9 != *(byte *)(iVar35 + uVar6 * 4 + 0x212)))))
                              goto LAB_000c9574;
                            }
                            else {
LAB_000c9574:
                              iVar45 = uVar6 + 0x84;
                              uVar6 = uVar6 + 1;
                              iVar45 = iVar44 + iVar45 * 4;
                              *(char *)(iVar45 + 10) = (char)uVar9;
                            }
                            *(short *)(iVar45 + 0xc) = (short)uVar25;
                          }
LAB_000c9586:
                          uVar42 = uVar42 + 1;
                          if (uVar54 == 0) {
                            uVar8 = 0;
                          }
                          iVar37 = iVar37 + 4;
                        } while (uVar42 < uVar38);
                        iVar40 = (int)*(short *)(iVar23 + uVar38 * 4) * (int)(short)(ushort)bVar15;
                        if (iVar40 < -99 || 99 < iVar40) {
                          if (iVar40 < 100) {
                            iVar40 = -99;
                          }
                          else {
                            iVar40 = 99;
                          }
                        }
                        uVar54 = (short)uVar8 + iVar40;
                        if (uVar54 + 99 < 199) {
                          uVar8 = uVar54 & 0xffff;
                        }
                        else {
                          uVar8 = 0xff9d;
                          if (99 < (int)uVar54) {
                            uVar8 = 99;
                          }
                        }
                      }
                    }
                    iVar31 = iVar31 + 0xc;
                    bVar56 = local_80 < uVar50;
                    local_80 = local_80 + 1;
                  } while (bVar56);
                  *(short *)(DAT_000ca724 + 0xcab40) = (short)uVar8;
                  if (uVar6 < 0x7f) {
                    uVar8 = (uint)*(byte *)(DAT_000cb5ec + 0xca9df);
                    if (*(char *)(DAT_000cb5ec + uVar6 * 4 + 0xcabde) != '\x7f') goto LAB_000ca9d8;
                  }
                  else {
                    uVar8 = (uint)*(byte *)(DAT_000ca728 + 0xca029);
                  }
                }
                local_78 = uVar6 & 0xff;
                bVar12 = *(byte *)(DAT_000ca72c + 0xca033);
                bVar15 = *(byte *)(DAT_000ca72c + 0xca031);
                iVar35 = *(int *)(DAT_000ca72c + 0xca028);
                *(char *)(DAT_000ca72c + 0xca238) = (char)uVar6;
              }
              iVar31 = DAT_000cb644;
              iVar44 = DAT_000cb63c;
              iVar36 = DAT_000ca734;
              iVar22 = DAT_000ca730;
              local_7c = (uint)bVar15;
              local_88 = (uint)bVar12;
              if (iVar35 == 0) {
                *(undefined1 *)(DAT_000cb5e8 + 0xcadd4) = 0;
                uVar50 = 0;
              }
              else {
                uVar50 = (uint)*(byte *)(DAT_000ca730 + 0xca460);
                if (uVar50 != 0) {
                  uVar6 = (uint)*(byte *)(DAT_000ca730 + 0xca4e2);
                  if (uVar6 - 2 < 0x7f) {
                    puVar39 = (undefined1 *)(DAT_000ca730 + 0xca461);
                    piVar55 = (int *)(DAT_000cb63c + 0xcb042 + uVar50 * 4);
                    piVar46 = (int *)(DAT_000cb63c + 0xcb046);
                    iVar36 = *(int *)(DAT_000cb640 + uVar6 * 4 + 0xcb420);
                    uVar6 = ((int)piVar55 + (-4 - (DAT_000cb63c + 0xcb042)) & 0xfU) >> 2;
                    uVar16 = (uint)(iVar36 * *(int *)(DAT_000cb63c + 0xcb046) * 0x7f) >> 0xf;
                    if (0x7e < uVar16) {
                      uVar16 = 0x7f;
                    }
                    *(char *)(DAT_000ca730 + 0xca461) = (char)uVar16;
                    if (piVar46 != piVar55) {
                      if (uVar6 != 0) {
                        if (uVar6 != 1) {
                          if (uVar6 != 2) {
                            piVar46 = (int *)(iVar44 + 0xcb04a);
                            puVar39 = (undefined1 *)(iVar22 + 0xca462);
                            uVar6 = (uint)(iVar36 * *(int *)(iVar44 + 0xcb04a) * 0x7f) >> 0xf;
                            if (0x7e < uVar6) {
                              uVar6 = 0x7f;
                            }
                            *(char *)(iVar22 + 0xca462) = (char)uVar6;
                          }
                          piVar46 = piVar46 + 1;
                          uVar6 = (uint)(iVar36 * *piVar46 * 0x7f) >> 0xf;
                          if (0x7e < uVar6) {
                            uVar6 = 0x7f;
                          }
                          puVar39 = puVar39 + 1;
                          *puVar39 = (char)uVar6;
                        }
                        piVar46 = piVar46 + 1;
                        uVar6 = (uint)(iVar36 * *piVar46 * 0x7f) >> 0xf;
                        if (0x7e < uVar6) {
                          uVar6 = 0x7f;
                        }
                        puVar39 = puVar39 + 1;
                        *puVar39 = (char)uVar6;
                        if (piVar46 == piVar55) goto LAB_000ca170;
                      }
                      do {
                        piVar2 = piVar46 + 1;
                        piVar3 = piVar46 + 2;
                        iVar44 = piVar46[3];
                        piVar46 = piVar46 + 4;
                        iVar22 = *piVar46;
                        uVar16 = (uint)(iVar36 * *piVar2 * 0x7f) >> 0xf;
                        uVar6 = (uint)(iVar36 * *piVar3 * 0x7f) >> 0xf;
                        if (0x7e < uVar16) {
                          uVar16 = 0x7f;
                        }
                        if (0x7e < uVar6) {
                          uVar6 = 0x7f;
                        }
                        puVar39[1] = (char)uVar16;
                        uVar16 = (uint)(iVar36 * iVar44 * 0x7f) >> 0xf;
                        puVar39[2] = (char)uVar6;
                        if (0x7e < uVar16) {
                          uVar16 = 0x7f;
                        }
                        puVar39[3] = (char)uVar16;
                        uVar6 = (uint)(iVar36 * iVar22 * 0x7f) >> 0xf;
                        if (0x7e < uVar6) {
                          uVar6 = 0x7f;
                        }
                        puVar39 = puVar39 + 4;
                        *puVar39 = (char)uVar6;
                      } while (piVar46 != piVar55);
                    }
                  }
                  else if (uVar6 < 0x81) {
                    if (uVar6 == 1) {
                      puVar39 = (undefined1 *)(DAT_000ca730 + 0xca461);
                      piVar46 = (int *)(DAT_000cb644 + 0xcb15c);
                      piVar55 = (int *)(DAT_000cb644 + 0xcb158 + uVar50 * 4);
                      uVar6 = *(int *)(DAT_000cb644 + 0xcb15c) * 0x7f;
                      uVar16 = ((int)piVar55 + (-4 - (DAT_000cb644 + 0xcb158)) & 0x1fU) >> 2;
                      if (0x7e < uVar6) {
                        uVar6 = 0x7f;
                      }
                      *(char *)(DAT_000ca730 + 0xca461) = (char)uVar6;
                      if (piVar46 != piVar55) {
                        if (uVar16 != 0) {
                          if (uVar16 != 1) {
                            if (uVar16 != 2) {
                              if (uVar16 != 3) {
                                if (uVar16 != 4) {
                                  if (uVar16 != 5) {
                                    if (uVar16 != 6) {
                                      piVar46 = (int *)(iVar31 + 0xcb160);
                                      uVar6 = *piVar46 * 0x7f;
                                      if (0x7e < uVar6) {
                                        uVar6 = 0x7f;
                                      }
                                      puVar39 = (undefined1 *)(iVar22 + 0xca462);
                                      *puVar39 = (char)uVar6;
                                    }
                                    piVar46 = piVar46 + 1;
                                    uVar6 = *piVar46 * 0x7f;
                                    if (0x7e < uVar6) {
                                      uVar6 = 0x7f;
                                    }
                                    puVar39 = puVar39 + 1;
                                    *puVar39 = (char)uVar6;
                                  }
                                  piVar46 = piVar46 + 1;
                                  uVar6 = *piVar46 * 0x7f;
                                  if (0x7e < uVar6) {
                                    uVar6 = 0x7f;
                                  }
                                  puVar39 = puVar39 + 1;
                                  *puVar39 = (char)uVar6;
                                }
                                piVar46 = piVar46 + 1;
                                uVar6 = *piVar46 * 0x7f;
                                if (0x7e < uVar6) {
                                  uVar6 = 0x7f;
                                }
                                puVar39 = puVar39 + 1;
                                *puVar39 = (char)uVar6;
                              }
                              piVar46 = piVar46 + 1;
                              uVar6 = *piVar46 * 0x7f;
                              if (0x7e < uVar6) {
                                uVar6 = 0x7f;
                              }
                              puVar39 = puVar39 + 1;
                              *puVar39 = (char)uVar6;
                            }
                            piVar46 = piVar46 + 1;
                            uVar6 = *piVar46 * 0x7f;
                            if (0x7e < uVar6) {
                              uVar6 = 0x7f;
                            }
                            puVar39 = puVar39 + 1;
                            *puVar39 = (char)uVar6;
                          }
                          piVar46 = piVar46 + 1;
                          uVar6 = *piVar46 * 0x7f;
                          if (0x7e < uVar6) {
                            uVar6 = 0x7f;
                          }
                          puVar39 = puVar39 + 1;
                          *puVar39 = (char)uVar6;
                          if (piVar46 == piVar55) goto LAB_000ca170;
                        }
                        do {
                          iVar31 = piVar46[3];
                          iVar22 = piVar46[4];
                          uVar6 = piVar46[2] * 0x7f;
                          iVar44 = piVar46[5];
                          iVar36 = piVar46[6];
                          uVar16 = piVar46[1] * 0x7f;
                          if (0x7e < uVar6) {
                            uVar6 = 0x7f;
                          }
                          if (0x7e < uVar16) {
                            uVar16 = 0x7f;
                          }
                          puVar39[2] = (char)uVar6;
                          puVar39[1] = (char)uVar16;
                          if ((uint)(iVar22 * 0x7f) < 0x7f) {
                            uVar34 = (undefined1)(iVar22 * 0x7f);
                          }
                          else {
                            uVar34 = 0x7f;
                          }
                          uVar6 = iVar44 * 0x7f;
                          uVar16 = iVar36 * 0x7f;
                          if ((uint)(iVar31 * 0x7f) < 0x7f) {
                            uVar13 = (undefined1)(iVar31 * 0x7f);
                          }
                          else {
                            uVar13 = 0x7f;
                          }
                          iVar22 = piVar46[7];
                          puVar39[3] = uVar13;
                          if (0x7e < uVar6) {
                            uVar6 = 0x7f;
                          }
                          piVar46 = piVar46 + 8;
                          iVar36 = *piVar46;
                          if (0x7e < uVar16) {
                            uVar16 = 0x7f;
                          }
                          puVar39[4] = uVar34;
                          uVar54 = iVar22 * 0x7f;
                          puVar39[5] = (char)uVar6;
                          if (0x7e < uVar54) {
                            uVar54 = 0x7f;
                          }
                          uVar6 = iVar36 * 0x7f;
                          puVar39[6] = (char)uVar16;
                          if (0x7e < uVar6) {
                            uVar6 = 0x7f;
                          }
                          puVar39[7] = (char)uVar54;
                          puVar39 = puVar39 + 8;
                          *puVar39 = (char)uVar6;
                        } while (piVar46 != piVar55);
                      }
                    }
                    else {
                      memset((void *)(DAT_000ca730 + 0xca461),0,uVar50);
                    }
                  }
                  else {
                    puVar39 = (undefined1 *)(DAT_000ca730 + 0xca461);
                    piVar55 = (int *)(DAT_000ca734 + 0xca018 + uVar50 * 4);
                    uVar54 = ((int)piVar55 + (-4 - (DAT_000ca734 + 0xca018)) & 0xfU) >> 2;
                    uVar16 = __udivsi3(*(int *)(DAT_000ca734 + 0xca01c) * 0x7f,uVar6);
                    piVar46 = (int *)(iVar36 + 0xca01c);
                    if (0x7e < uVar16) {
                      uVar16 = 0x7f;
                    }
                    *(char *)(iVar22 + 0xca461) = (char)uVar16;
                    if (piVar46 != piVar55) {
                      if (uVar54 != 0) {
                        if (uVar54 != 1) {
                          if (uVar54 != 2) {
                            piVar46 = (int *)(iVar36 + 0xca020);
                            puVar39 = (undefined1 *)(iVar22 + 0xca462);
                            uVar16 = __udivsi3(*(int *)(iVar36 + 0xca020) * 0x7f,uVar6);
                            if (0x7e < uVar16) {
                              uVar16 = 0x7f;
                            }
                            *(char *)(iVar22 + 0xca462) = (char)uVar16;
                          }
                          piVar46 = piVar46 + 1;
                          uVar16 = __udivsi3(*piVar46 * 0x7f,uVar6);
                          if (0x7e < uVar16) {
                            uVar16 = 0x7f;
                          }
                          puVar39 = puVar39 + 1;
                          *puVar39 = (char)uVar16;
                        }
                        piVar46 = piVar46 + 1;
                        uVar16 = __udivsi3(*piVar46 * 0x7f,uVar6);
                        if (0x7e < uVar16) {
                          uVar16 = 0x7f;
                        }
                        puVar39 = puVar39 + 1;
                        *puVar39 = (char)uVar16;
                        if (piVar46 == piVar55) goto LAB_000ca170;
                      }
                      do {
                        uVar16 = __udivsi3(piVar46[1] * 0x7f,uVar6);
                        iVar22 = piVar46[2];
                        if (0x7e < uVar16) {
                          uVar16 = 0x7f;
                        }
                        puVar39[1] = (char)uVar16;
                        uVar16 = __udivsi3(iVar22 * 0x7f,uVar6);
                        iVar22 = piVar46[3];
                        if (0x7e < uVar16) {
                          uVar16 = 0x7f;
                        }
                        puVar39[2] = (char)uVar16;
                        uVar16 = __udivsi3(iVar22 * 0x7f,uVar6);
                        piVar46 = piVar46 + 4;
                        iVar22 = *piVar46;
                        if (uVar16 < 0x7f) {
                          uVar34 = (undefined1)uVar16;
                        }
                        else {
                          uVar34 = 0x7f;
                        }
                        puVar39[3] = uVar34;
                        uVar16 = __udivsi3(iVar22 * 0x7f,uVar6);
                        if (0x7e < uVar16) {
                          uVar16 = 0x7f;
                        }
                        puVar39 = puVar39 + 4;
                        *puVar39 = (char)uVar16;
                      } while (piVar46 != piVar55);
                    }
                  }
                }
              }
LAB_000ca170:
              if ((int)(local_88 << 0x18) < 0) {
                local_88 = 0x7f;
                *(undefined1 *)(DAT_000ca738 + 0xca199) = 0x7f;
              }
              if ((int)(uVar8 << 0x18) < 0) {
                iVar22 = 0x17d;
                *(undefined1 *)(DAT_000ca73c + 0xca1b9) = 0x7f;
              }
              else {
                iVar22 = uVar8 * 3;
              }
              if ((int)(local_78 << 0x18) < 0) {
                iVar36 = 0xfe;
                *(undefined1 *)(DAT_000ca74c + 0xca41c) = 0x7f;
              }
              else {
                iVar36 = local_78 << 1;
              }
              if ((int)(local_7c << 0x18) < 0) {
                *(undefined1 *)(DAT_000ca740 + 0xca1d3) = 0x7f;
              }
              iVar22 = iVar36 + local_88 + iVar22 + uVar50;
              if (iVar22 + 0x13U <= param_2) {
                iVar36 = *(int *)(DAT_000ca750 + 0xca214);
                uVar8 = *(uint *)(DAT_000ca750 + 0xcad54);
                if (iVar36 == 0) {
                  uVar50 = 0;
LAB_000cafe8:
                  bVar15 = (byte)uVar50;
                  iVar36 = 5;
                  iVar40 = 1;
                  iVar35 = 4;
                  iVar44 = 3;
                  iVar37 = 2;
                  iVar23 = 0;
                }
                else {
                  if (uVar8 < 0x1ffff) {
                    if (iVar36 == 0x14) {
                      uVar6 = uVar8 * 0x666 >> 0xf;
                    }
                    else {
                      uVar50 = *(int *)(DAT_000ca750 + 0xca218) * uVar8;
                      uVar6 = uVar50 >> 0xf;
                      if ((uVar50 & 0x4000) != 0) {
                        uVar6 = uVar6 + 1;
                      }
                    }
                  }
                  else {
                    uVar6 = __udivsi3(uVar8,iVar36);
                  }
                  uVar16 = iVar36 * uVar6;
                  uVar50 = uVar6;
                  if (uVar16 < uVar8) {
                    iVar35 = 0;
                    do {
                      uVar50 = uVar6 + 1;
                      if (uVar8 <= uVar16 + iVar35 + iVar36) break;
                      iVar35 = iVar35 + iVar36 + iVar36;
                      uVar50 = uVar6 + 2;
                      if (uVar8 <= uVar16 + iVar35) break;
                      iVar35 = iVar35 + iVar36;
                      uVar50 = uVar6 + 3;
                      if (uVar8 <= uVar16 + iVar35) break;
                      iVar35 = iVar35 + iVar36;
                      uVar50 = uVar6 + 4;
                      if (uVar8 <= uVar16 + iVar35) break;
                      iVar35 = iVar35 + iVar36;
                      uVar50 = uVar6 + 5;
                      if (uVar8 <= uVar16 + iVar35) break;
                      iVar35 = iVar35 + iVar36;
                      uVar50 = uVar6 + 6;
                      if (uVar8 <= uVar16 + iVar35) break;
                      iVar35 = iVar35 + iVar36;
                      uVar50 = uVar6 + 7;
                      if (uVar8 <= uVar16 + iVar35) break;
                      iVar35 = iVar35 + iVar36;
                      uVar50 = uVar6 + 8;
                      if (uVar8 <= uVar16 + iVar35) break;
                      iVar35 = iVar35 + iVar36;
                      uVar50 = uVar6 + 9;
                      if (uVar8 <= uVar16 + iVar35) break;
                      iVar35 = iVar35 + iVar36;
                      uVar50 = uVar6 + 10;
                      if (uVar8 <= uVar16 + iVar35) break;
                      iVar35 = iVar35 + iVar36;
                      uVar50 = uVar6 + 0xb;
                      if (uVar8 <= uVar16 + iVar35) break;
                      iVar35 = iVar35 + iVar36;
                      uVar50 = uVar6 + 0xc;
                      if (uVar8 <= uVar16 + iVar35) break;
                      iVar35 = iVar35 + iVar36;
                      uVar50 = uVar6 + 0xd;
                      if (uVar8 <= uVar16 + iVar35) break;
                      iVar35 = iVar35 + iVar36;
                      uVar50 = uVar6 + 0xe;
                      if (uVar8 <= uVar16 + iVar35) break;
                      iVar35 = iVar35 + iVar36;
                      uVar50 = uVar6 + 0xf;
                      if (uVar8 <= uVar16 + iVar35) break;
                      iVar35 = iVar35 + iVar36;
                      uVar6 = uVar6 + 0x10;
                      uVar50 = uVar6;
                    } while (uVar16 + iVar35 < uVar8);
                  }
                  if (uVar50 < 0x200000) {
                    if (0x3fff < uVar50) {
                      bVar12 = (byte)((uVar50 << 0xb) >> 0x19) | 0x80;
                      bVar20 = (byte)((uVar50 << 0x12) >> 0x19) | 0x80;
                      bVar15 = (byte)uVar50 & 0x7f;
                      goto LAB_000ca342;
                    }
                    if (uVar50 < 0x80) goto LAB_000cafe8;
                    bVar15 = (byte)uVar50 & 0x7f;
                    bVar20 = (byte)((uVar50 << 0x12) >> 0x19) | 0x80;
                    iVar36 = 6;
                    iVar35 = 5;
                    iVar44 = 4;
                    iVar40 = 2;
                    iVar37 = 3;
                    iVar23 = 1;
                    iVar31 = 0;
                  }
                  else {
                    bVar20 = 0xff;
                    bVar12 = 0xff;
                    bVar15 = 0x7f;
LAB_000ca342:
                    iVar36 = 7;
                    iVar35 = 6;
                    iVar37 = 4;
                    iVar23 = 2;
                    iVar31 = 1;
                    *param_1 = bVar12;
                    iVar44 = 5;
                    iVar40 = 3;
                  }
                  param_1[iVar31] = bVar20;
                }
                iVar31 = DAT_000ca754;
                param_1[iVar23] = bVar15;
                param_1[iVar40] = 0x90;
                iVar40 = DAT_000ca758;
                bVar15 = *(byte *)(iVar31 + 0xca37e);
                if (0x7e < bVar15) {
                  bVar15 = 0x7f;
                }
                param_1[iVar37] = bVar15 | 0x80;
                bVar15 = *(byte *)(iVar31 + 0xca37f);
                if (0x7e < bVar15) {
                  bVar15 = 0x7f;
                }
                param_1[iVar44] = bVar15;
                iVar44 = *(int *)(iVar40 + 0xca37e);
                uVar8 = *(uint *)(iVar31 + 0xca376);
                if (iVar44 == 0) {
                  uVar50 = 0;
LAB_000cafdc:
                  bVar20 = (byte)uVar50;
                  iVar44 = 0;
                }
                else {
                  if (uVar8 < 0x1ffff) {
                    if (iVar44 == 0x14) {
                      uVar6 = uVar8 * 0x666 >> 0xf;
                    }
                    else {
                      uVar50 = *(int *)(iVar40 + 0xca382) * uVar8;
                      uVar6 = uVar50 >> 0xf;
                      if ((uVar50 & 0x4000) != 0) {
                        uVar6 = uVar6 + 1;
                      }
                    }
                  }
                  else {
                    uVar6 = __udivsi3(uVar8,iVar44);
                  }
                  uVar16 = iVar44 * uVar6;
                  uVar50 = uVar6;
                  if (uVar16 < uVar8) {
                    iVar31 = 0;
                    do {
                      uVar50 = uVar6 + 1;
                      if (uVar8 <= uVar16 + iVar31 + iVar44) break;
                      iVar31 = iVar31 + iVar44 + iVar44;
                      uVar50 = uVar6 + 2;
                      if (uVar8 <= uVar16 + iVar31) break;
                      iVar31 = iVar31 + iVar44;
                      uVar50 = uVar6 + 3;
                      if (uVar8 <= uVar16 + iVar31) break;
                      iVar31 = iVar31 + iVar44;
                      uVar50 = uVar6 + 4;
                      if (uVar8 <= uVar16 + iVar31) break;
                      iVar31 = iVar31 + iVar44;
                      uVar50 = uVar6 + 5;
                      if (uVar8 <= uVar16 + iVar31) break;
                      iVar31 = iVar31 + iVar44;
                      uVar50 = uVar6 + 6;
                      if (uVar8 <= uVar16 + iVar31) break;
                      iVar31 = iVar31 + iVar44;
                      uVar50 = uVar6 + 7;
                      if (uVar8 <= uVar16 + iVar31) break;
                      iVar31 = iVar31 + iVar44;
                      uVar50 = uVar6 + 8;
                      if (uVar8 <= uVar16 + iVar31) break;
                      iVar31 = iVar31 + iVar44;
                      uVar50 = uVar6 + 9;
                      if (uVar8 <= uVar16 + iVar31) break;
                      iVar31 = iVar31 + iVar44;
                      uVar50 = uVar6 + 10;
                      if (uVar8 <= uVar16 + iVar31) break;
                      iVar31 = iVar31 + iVar44;
                      uVar50 = uVar6 + 0xb;
                      if (uVar8 <= uVar16 + iVar31) break;
                      iVar31 = iVar31 + iVar44;
                      uVar50 = uVar6 + 0xc;
                      if (uVar8 <= uVar16 + iVar31) break;
                      iVar31 = iVar31 + iVar44;
                      uVar50 = uVar6 + 0xd;
                      if (uVar8 <= uVar16 + iVar31) break;
                      iVar31 = iVar31 + iVar44;
                      uVar50 = uVar6 + 0xe;
                      if (uVar8 <= uVar16 + iVar31) break;
                      iVar31 = iVar31 + iVar44;
                      uVar50 = uVar6 + 0xf;
                      if (uVar8 <= uVar16 + iVar31) break;
                      iVar31 = iVar31 + iVar44;
                      uVar6 = uVar6 + 0x10;
                      uVar50 = uVar6;
                    } while (uVar16 + iVar31 < uVar8);
                  }
                  if (uVar50 < 0x200000) {
                    if (0x3fff < uVar50) {
                      bVar12 = (byte)((uVar50 << 0xb) >> 0x19) | 0x80;
                      bVar15 = (byte)((uVar50 << 0x12) >> 0x19) | 0x80;
                      bVar20 = (byte)uVar50 & 0x7f;
                      goto LAB_000ca4ba;
                    }
                    if (uVar50 < 0x80) goto LAB_000cafdc;
                    bVar20 = (byte)uVar50 & 0x7f;
                    bVar15 = (byte)((uVar50 << 0x12) >> 0x19) | 0x80;
                    iVar44 = 1;
                    iVar31 = 0;
                  }
                  else {
                    bVar15 = 0xff;
                    bVar12 = 0xff;
                    bVar20 = 0x7f;
LAB_000ca4ba:
                    iVar44 = 2;
                    iVar31 = 1;
                    param_1[iVar35] = bVar12;
                  }
                  (param_1 + iVar35)[iVar31] = bVar15;
                }
                iVar31 = DAT_000ca75c;
                iVar36 = iVar36 + iVar44;
                param_1[iVar44 + iVar35] = bVar20;
                iVar35 = DAT_000ca760;
                bVar15 = (char)iVar31 - 0x28;
                puVar30 = *(uchar **)(iVar31 + 0xca4e4);
                iVar44 = *(int *)(DAT_000ca760 + 0xca4de);
                *(undefined4 *)(DAT_000ca760 + 0xcb022) = *(undefined4 *)(iVar31 + 0xca4e0);
                if (iVar44 == 0) {
                  puVar11 = (uchar *)0x0;
LAB_000cafce:
                  bVar12 = (byte)puVar11;
                  pbVar48 = local_30;
                  uVar8 = 1;
                }
                else {
                  puVar18 = "ARM4CLpf13sdAlRate48000E";
                  if (puVar30 < "RM4CLpf13sdAlRate48000E") {
                    if (iVar44 == 0x14) {
                      puVar10 = (uchar *)((uint)((int)puVar30 * 0x666) >> 0xf);
                    }
                    else {
                      uVar8 = *(int *)(iVar35 + 0xca4e2) * (int)puVar30;
                      puVar10 = (uchar *)(uVar8 >> 0xf);
                      if ((uVar8 & 0x4000) != 0) {
                        puVar10 = puVar10 + 1;
                      }
                    }
                  }
                  else {
                    puVar10 = (uchar *)__udivsi3(puVar30,iVar44);
                    puVar18 = extraout_r2;
                  }
                  puVar47 = (uchar *)(iVar44 * (int)puVar10);
                  puVar11 = puVar10;
                  if (puVar47 < puVar30) {
                    iVar35 = 0;
                    do {
                      puVar18 = puVar10 + 1;
                      puVar11 = puVar18;
                      if (puVar30 <= puVar47 + iVar35 + iVar44) break;
                      iVar35 = iVar35 + iVar44 + iVar44;
                      puVar11 = puVar10 + 2;
                      if (puVar30 <= puVar47 + iVar35) break;
                      iVar35 = iVar35 + iVar44;
                      puVar11 = puVar10 + 3;
                      if (puVar30 <= puVar47 + iVar35) break;
                      iVar35 = iVar35 + iVar44;
                      puVar11 = puVar10 + 4;
                      if (puVar30 <= puVar47 + iVar35) break;
                      iVar35 = iVar35 + iVar44;
                      puVar11 = puVar10 + 5;
                      if (puVar30 <= puVar47 + iVar35) break;
                      iVar35 = iVar35 + iVar44;
                      puVar11 = puVar10 + 6;
                      if (puVar30 <= puVar47 + iVar35) break;
                      iVar35 = iVar35 + iVar44;
                      puVar11 = puVar10 + 7;
                      if (puVar30 <= puVar47 + iVar35) break;
                      iVar35 = iVar35 + iVar44;
                      puVar11 = puVar10 + 8;
                      if (puVar30 <= puVar47 + iVar35) break;
                      iVar35 = iVar35 + iVar44;
                      puVar11 = puVar10 + 9;
                      if (puVar30 <= puVar47 + iVar35) break;
                      iVar35 = iVar35 + iVar44;
                      puVar11 = puVar10 + 10;
                      if (puVar30 <= puVar47 + iVar35) break;
                      iVar35 = iVar35 + iVar44;
                      puVar11 = puVar10 + 0xb;
                      if (puVar30 <= puVar47 + iVar35) break;
                      iVar35 = iVar35 + iVar44;
                      puVar11 = puVar10 + 0xc;
                      if (puVar30 <= puVar47 + iVar35) break;
                      iVar35 = iVar35 + iVar44;
                      puVar11 = puVar10 + 0xd;
                      if (puVar30 <= puVar47 + iVar35) break;
                      iVar35 = iVar35 + iVar44;
                      puVar11 = puVar10 + 0xe;
                      if (puVar30 <= puVar47 + iVar35) break;
                      iVar35 = iVar35 + iVar44;
                      puVar11 = puVar10 + 0xf;
                      if (puVar30 <= puVar47 + iVar35) break;
                      iVar35 = iVar35 + iVar44;
                      puVar10 = puVar10 + 0x10;
                      puVar18 = puVar47 + iVar35;
                      puVar11 = puVar10;
                    } while (puVar18 < puVar30);
                  }
                  bVar15 = (byte)puVar18;
                  if ("" < puVar11) {
                    bVar15 = 0xff;
                    local_30[0] = 0xff;
                    bVar12 = 0x7f;
LAB_000ca602:
                    pbVar48 = local_30 + 2;
                    pbVar19 = local_30 + 1;
                    uVar8 = 3;
                  }
                  else {
                    if ((uchar *)0x3fff < puVar11) {
                      local_30[0] = (byte)((uint)((int)puVar11 << 0xb) >> 0x19) | 0x80;
                      bVar15 = (byte)(((uint)puVar11 & 0x3fff) >> 7) | 0x80;
                      bVar12 = (byte)puVar11 & 0x7f;
                      goto LAB_000ca602;
                    }
                    if (puVar11 < (uchar *)0x80) goto LAB_000cafce;
                    pbVar48 = local_30 + 1;
                    bVar12 = (byte)puVar11 & 0x7f;
                    bVar15 = (byte)(((uint)puVar11 & 0x3fff) >> 7) | 0x80;
                    pbVar19 = local_30;
                    uVar8 = 2;
                  }
                  *pbVar19 = bVar15;
                }
                uVar50 = iVar22 + 4 + uVar8;
                *pbVar48 = bVar12;
                bVar12 = (byte)uVar50;
                if (0x7f < uVar50) {
                  bVar15 = (byte)(uVar50 >> 7);
                  bVar12 = bVar12 & 0x7f;
                  puVar30 = param_1;
                }
                puVar11 = param_1;
                iVar22 = DAT_000cb5d4;
                if (0x7f < uVar50) {
                  puVar30[iVar36] = bVar15 | 0x80;
                  puVar11 = puVar30;
                  iVar22 = DAT_000cb5d4;
                }
                uVar50 = (uint)(0x7f < uVar50);
                iVar35 = iVar36 + 1 + uVar50;
                param_1[uVar50 + iVar36] = bVar12;
                puVar11[iVar35] = local_30[0];
                iVar36 = iVar35 + 1;
                if (uVar8 != 1) {
                  bVar56 = uVar8 != 2;
                  iVar36 = iVar35 + 2;
                  if (bVar56) {
                    uVar8 = (uint)local_30[2];
                  }
                  puVar11[iVar35 + 1] = local_30[1];
                  if (bVar56) {
                    puVar11[iVar36] = (uchar)uVar8;
                    iVar36 = iVar35 + 3;
                  }
                }
                param_1[iVar36] = *(uchar *)(DAT_000ca764 + 0xca691);
                uVar8 = (uint)*(ushort *)(DAT_000ca764 + 0xca692);
                DAT_000cb5d4 = iVar22;
                if (uVar8 < 0x19a) {
                  if (*(char *)(DAT_000ca764 + 0xca694) == '\x01') {
                    iVar35 = DAT_000cb634 + uVar8 * 0x20 + 0xcb122;
                  }
                  else {
                    iVar35 = DAT_000ca768 + uVar8 * 0x20 + 0xca829;
                  }
                  iVar44 = iVar36 + 1;
                  if (*(char *)((int)&DAT_000ca6c0 + DAT_000ca76c + 3) != '\0') {
                    uVar8 = 0;
                    puVar30 = param_1 + iVar36;
                    iVar36 = iVar44;
                    do {
                      uVar50 = uVar8 + 1;
                      iVar44 = iVar36 + 1;
                      uVar6 = uVar8 + 6;
                      uVar42 = uVar8 + 3;
                      puVar30[1] = *(uchar *)(iVar35 + uVar8);
                      uVar38 = uVar8 + 4;
                      uVar54 = uVar8 + 5;
                      uVar9 = uVar8 + 2;
                      uVar16 = uVar8 + 7;
                      uVar8 = uVar8 + 8;
                      if (*(byte *)((int)&DAT_000ca6c0 + DAT_000ca76c + 3) <= uVar50) break;
                      iVar44 = iVar36 + 2;
                      puVar30[2] = *(uchar *)(iVar35 + uVar50);
                      if (*(byte *)((int)&DAT_000ca6c0 + DAT_000ca76c + 3) <= uVar9) break;
                      iVar44 = iVar36 + 3;
                      puVar30[3] = *(uchar *)(iVar35 + uVar9);
                      if (*(byte *)((int)&DAT_000ca6c0 + DAT_000ca76c + 3) <= uVar42) break;
                      iVar44 = iVar36 + 4;
                      puVar30[4] = *(uchar *)(iVar35 + uVar42);
                      if (*(byte *)((int)&DAT_000ca6c0 + DAT_000ca76c + 3) <= uVar38) break;
                      iVar44 = iVar36 + 5;
                      puVar30[5] = *(uchar *)(iVar35 + uVar38);
                      if (*(byte *)((int)&DAT_000ca6c0 + DAT_000ca76c + 3) <= uVar54) break;
                      iVar44 = iVar36 + 6;
                      puVar30[6] = *(uchar *)(iVar35 + uVar54);
                      if (*(byte *)((int)&DAT_000ca6c0 + DAT_000ca76c + 3) <= uVar6) break;
                      iVar44 = iVar36 + 7;
                      puVar30[7] = *(uchar *)(iVar35 + uVar6);
                      if (*(byte *)((int)&DAT_000ca6c0 + DAT_000ca76c + 3) <= uVar16) break;
                      iVar44 = iVar36 + 8;
                      puVar30[8] = *(uchar *)(iVar35 + uVar16);
                      puVar30 = puVar30 + 8;
                      iVar36 = iVar44;
                    } while (uVar8 < *(byte *)((int)&DAT_000ca6c0 + DAT_000ca76c + 3));
                  }
                  iVar36 = iVar44 + 1;
                  puVar30 = param_1 + iVar44;
                  param_1[iVar44] = *(uchar *)(iVar22 + 0xca889);
                  if (*(char *)(iVar22 + 0xca889) != '\0') {
                    uVar8 = 0;
                    iVar35 = iVar22 + 0xca87a;
                    do {
                      bVar15 = *(byte *)(iVar35 + 0x10);
                      if ((int)((uint)bVar15 << 0x18) < 0) {
                        *(undefined1 *)(iVar35 + 0x10) = 0x7f;
                        bVar15 = 0x7f;
                      }
                      puVar30[1] = bVar15;
                      uVar50 = (int)*(short *)(iVar35 + 0x12) + 0x2000;
                      if ((ushort)(*(short *)(iVar35 + 0x12) + 0x2000U) < 0x4000) {
                        bVar15 = (byte)uVar50;
                        if (uVar50 < 0x80) goto LAB_000cafc8;
                        uVar27 = (uchar)((uVar50 & 0x7fff) >> 7);
                        bVar15 = bVar15 & 0x7f;
LAB_000ca8c4:
                        puVar30[3] = uVar27;
                      }
                      else {
                        if (0x3fff < (int)uVar50) {
                          bVar15 = 0x7f;
                          uVar27 = '\x7f';
                          goto LAB_000ca8c4;
                        }
                        bVar15 = 0;
LAB_000cafc8:
                        puVar30[3] = '\0';
                      }
                      puVar30[2] = bVar15;
                      uVar8 = uVar8 + 1;
                      iVar36 = iVar36 + 3;
                      iVar35 = iVar35 + 4;
                      puVar30 = puVar30 + 3;
                    } while (uVar8 < *(byte *)(iVar22 + 0xca889));
                  }
                  iVar22 = DAT_000cb5d8;
                  iVar35 = iVar36 + 1;
                  puVar30 = param_1 + iVar36;
                  param_1[iVar36] = *(uchar *)(DAT_000cb5d8 + 0xcaafe);
                  if (*(char *)(DAT_000cb5d8 + 0xcaafe) != '\0') {
                    iVar36 = DAT_000cb5d8 + 0xca8ee;
                    uVar8 = 0;
                    do {
                      bVar15 = *(byte *)(iVar36 + 0x212);
                      iVar35 = iVar35 + 2;
                      if ((int)((uint)bVar15 << 0x18) < 0) {
                        *(undefined1 *)(iVar36 + 0x212) = 0x7f;
                        bVar15 = 0x7f;
                      }
                      puVar30[1] = bVar15;
                      uVar4 = *(ushort *)(iVar36 + 0x214);
                      uVar27 = (uchar)uVar4;
                      if (0x7f < uVar4) {
                        if ((short)uVar4 < 0x80) {
                          uVar27 = '\0';
                        }
                        else {
                          uVar27 = '\x7f';
                        }
                      }
                      puVar30 = puVar30 + 2;
                      *puVar30 = uVar27;
                      uVar8 = uVar8 + 1;
                      iVar36 = iVar36 + 4;
                    } while (uVar8 < *(byte *)(iVar22 + 0xcaafe));
                  }
                  iVar36 = DAT_000cb5dc;
                  iVar22 = iVar35 + 1;
                  param_1[iVar35] = *(uchar *)(DAT_000cb5dc + 0xcad66);
                  if (*(char *)(DAT_000cb5dc + 0xcad66) != '\0') {
                    pbVar48 = (byte *)(DAT_000cb5dc + 0xcad67);
                    pbVar19 = param_1 + iVar35;
                    do {
                      bVar15 = *pbVar48;
                      iVar22 = iVar22 + 1;
                      if ((int)((uint)bVar15 << 0x18) < 0) {
                        *pbVar48 = 0x7f;
                        bVar15 = 0x7f;
                      }
                      pbVar19 = pbVar19 + 1;
                      *pbVar19 = bVar15;
                      pbVar48 = pbVar48 + 1;
                    } while ((uint)((int)pbVar19 - (int)(param_1 + iVar35)) <
                             (uint)*(byte *)(iVar36 + 0xcad66));
                  }
                  iVar36 = DAT_000cb5e4;
                  puVar1 = (undefined4 *)(DAT_000cb5e0 + 0xca99a);
                  *(undefined1 *)(DAT_000cb5e0 + 0xca9a5) = 0;
                  *(undefined4 *)(iVar36 + 0xcb4d8) = *puVar1;
                  uVar8 = (uint)*(byte *)(iVar36 + 0xcb4c8);
                  if (iVar22 == 0) goto LAB_000ca9a8;
                  goto LAB_000c8dfe;
                }
                iVar35 = *(int *)(DAT_000ca764 + 0xca686);
              }
              iVar44 = DAT_000ca748;
              iVar36 = DAT_000ca744;
              iVar22 = -3;
              *(int *)(DAT_000ca744 + 0xcad2e) = iVar35;
              uVar8 = (uint)*(byte *)(iVar36 + 0xcad1e);
              *(undefined1 *)(iVar44 + 0xca1ff) = 0;
            }
            else if (iVar35 == 3) {
              uVar8 = uVar50 & 0xff;
              *(undefined1 *)(DAT_000c9660 + 0xc98fc) = uVar34;
              if (*(int *)(iVar41 + 0x2c) != 3) {
LAB_000c9f4e:
                uVar8 = uVar50 & 0xff;
                iVar22 = 0;
                goto LAB_000c8dfe;
              }
              if (5 < param_2) {
                iVar36 = *(int *)(iVar41 + 0x34);
                if (iVar36 == 0) {
                  uVar8 = *(uint *)(iVar22 + 0xc990c);
                  *(undefined4 *)(iVar22 + 0xc9910) = 0;
                  *(undefined4 *)(iVar22 + 0xc990c) = 0;
                }
                else {
                  uVar50 = *(uint *)(iVar22 + 0xc9910);
                  uVar8 = iVar36 - *(int *)(iVar22 + 0xc9908);
                  *(int *)(iVar22 + 0xc990c) =
                       (*(int *)(iVar22 + 0xc990c) + *(int *)(iVar22 + 0xc9908)) - iVar36;
                  uVar32 = *(undefined4 *)(iVar41 + 0x34);
                  if (uVar8 < uVar50) {
                    *(uint *)(iVar22 + 0xc9910) = uVar50 - uVar8;
                  }
                  *(undefined4 *)(iVar22 + 0xc9908) = uVar32;
                  if (uVar8 >= uVar50) {
                    *(undefined4 *)(iVar22 + 0xc9910) = 0;
                  }
                }
                iVar22 = *(int *)(DAT_000cba64 + 0xcb748);
                if (iVar22 == 0) {
                  uVar50 = 0;
LAB_000cb97a:
                  bVar12 = (byte)uVar50;
                  iVar31 = 1;
                  iVar22 = 4;
                  iVar36 = 3;
                  iVar44 = 2;
                  iVar35 = 0;
                }
                else {
                  if (uVar8 < 0x1ffff) {
                    if (iVar22 == 0x14) {
                      uVar6 = uVar8 * 0x666 >> 0xf;
                    }
                    else {
                      uVar50 = *(int *)(DAT_000cba64 + 0xcb74c) * uVar8;
                      uVar6 = uVar50 >> 0xf;
                      if ((uVar50 & 0x4000) != 0) {
                        uVar6 = uVar6 + 1;
                      }
                    }
                  }
                  else {
                    uVar6 = __udivsi3(uVar8,iVar22);
                  }
                  uVar16 = iVar22 * uVar6;
                  uVar50 = uVar6;
                  if (uVar16 < uVar8) {
                    iVar36 = 0;
                    do {
                      uVar50 = uVar6 + 1;
                      if (uVar8 <= uVar16 + iVar36 + iVar22) break;
                      iVar36 = iVar36 + iVar22 + iVar22;
                      uVar50 = uVar6 + 2;
                      if (uVar8 <= uVar16 + iVar36) break;
                      iVar36 = iVar36 + iVar22;
                      uVar50 = uVar6 + 3;
                      if (uVar8 <= uVar16 + iVar36) break;
                      iVar36 = iVar36 + iVar22;
                      uVar50 = uVar6 + 4;
                      if (uVar8 <= uVar16 + iVar36) break;
                      iVar36 = iVar36 + iVar22;
                      uVar50 = uVar6 + 5;
                      if (uVar8 <= uVar16 + iVar36) break;
                      iVar36 = iVar36 + iVar22;
                      uVar50 = uVar6 + 6;
                      if (uVar8 <= uVar16 + iVar36) break;
                      iVar36 = iVar36 + iVar22;
                      uVar50 = uVar6 + 7;
                      if (uVar8 <= uVar16 + iVar36) break;
                      iVar36 = iVar36 + iVar22;
                      uVar50 = uVar6 + 8;
                      if (uVar8 <= uVar16 + iVar36) break;
                      iVar36 = iVar36 + iVar22;
                      uVar50 = uVar6 + 9;
                      if (uVar8 <= uVar16 + iVar36) break;
                      iVar36 = iVar36 + iVar22;
                      uVar50 = uVar6 + 10;
                      if (uVar8 <= uVar16 + iVar36) break;
                      iVar36 = iVar36 + iVar22;
                      uVar50 = uVar6 + 0xb;
                      if (uVar8 <= uVar16 + iVar36) break;
                      iVar36 = iVar36 + iVar22;
                      uVar50 = uVar6 + 0xc;
                      if (uVar8 <= uVar16 + iVar36) break;
                      iVar36 = iVar36 + iVar22;
                      uVar50 = uVar6 + 0xd;
                      if (uVar8 <= uVar16 + iVar36) break;
                      iVar36 = iVar36 + iVar22;
                      uVar50 = uVar6 + 0xe;
                      if (uVar8 <= uVar16 + iVar36) break;
                      iVar36 = iVar36 + iVar22;
                      uVar50 = uVar6 + 0xf;
                      if (uVar8 <= uVar16 + iVar36) break;
                      iVar36 = iVar36 + iVar22;
                      uVar6 = uVar6 + 0x10;
                      uVar50 = uVar6;
                    } while (uVar16 + iVar36 < uVar8);
                  }
                  if (uVar50 < 0x200000) {
                    if (0x3fff < uVar50) {
                      bVar20 = (byte)((uVar50 << 0xb) >> 0x19) | 0x80;
                      bVar15 = (byte)((uVar50 << 0x12) >> 0x19) | 0x80;
                      bVar12 = (byte)uVar50 & 0x7f;
                      goto LAB_000cb870;
                    }
                    if (uVar50 < 0x80) goto LAB_000cb97a;
                    bVar12 = (byte)uVar50 & 0x7f;
                    bVar15 = (byte)((uVar50 << 0x12) >> 0x19) | 0x80;
                    iVar22 = 5;
                    iVar36 = 4;
                    iVar31 = 2;
                    iVar44 = 3;
                    iVar35 = 1;
                    iVar40 = 0;
                  }
                  else {
                    bVar15 = 0xff;
                    bVar20 = 0xff;
                    bVar12 = 0x7f;
LAB_000cb870:
                    iVar36 = 5;
                    iVar31 = 3;
                    iVar44 = 4;
                    iVar35 = 2;
                    iVar40 = 1;
                    *param_1 = bVar20;
                    iVar22 = 6;
                  }
                  param_1[iVar40] = bVar15;
                }
                param_1[iVar35] = bVar12;
                param_1[iVar31] = 0xb0;
                iVar35 = DAT_000cba68;
                param_1[iVar44] = '\x16';
                bVar15 = *(byte *)(iVar41 + 0x31);
                if (9 < bVar15) {
                  bVar15 = 9;
                  *(undefined1 *)(iVar41 + 0x31) = 9;
                }
                param_1[iVar36] = bVar15;
                uVar8 = (uint)(byte)(&UNK_000cc3e0)[iVar35];
                goto LAB_000c8dfe;
              }
LAB_000ca9a8:
              iVar22 = -3;
            }
            else {
              if (iVar35 != 4) {
                if (iVar35 != 5) {
                  uVar8 = uVar50 & 0xff;
                  *(undefined1 *)(DAT_000c9660 + 0xc98fc) = uVar34;
                  iVar22 = 0;
                  goto LAB_000c8dfe;
                }
                uVar8 = uVar50 & 0xff;
                *(undefined1 *)(DAT_000c9660 + 0xc98fc) = uVar34;
                if (*(int *)(iVar41 + 0x2c) != 5) goto LAB_000c9f4e;
                if (param_2 < 5) goto LAB_000ca9a8;
                iVar36 = *(int *)(iVar41 + 0x34);
                if (iVar36 == 0) {
                  uVar8 = *(uint *)(iVar22 + 0xc990c);
                  *(undefined4 *)(iVar22 + 0xc9910) = 0;
                  *(undefined4 *)(iVar22 + 0xc990c) = 0;
                }
                else {
                  uVar8 = iVar36 - *(int *)(iVar22 + 0xc9908);
                  *(int *)(iVar22 + 0xc990c) =
                       (*(int *)(iVar22 + 0xc990c) + *(int *)(iVar22 + 0xc9908)) - iVar36;
                  *(undefined4 *)(iVar22 + 0xc9908) = *(undefined4 *)(iVar41 + 0x34);
                  if (uVar8 < *(uint *)(iVar22 + 0xc9910)) {
                    *(uint *)(DAT_000cb61c + 0xcb730) = *(uint *)(iVar22 + 0xc9910) - uVar8;
                  }
                  else {
                    *(undefined4 *)(&UNK_000cc516 + DAT_000cba6c) = 0;
                  }
                }
                iVar22 = *(int *)(DAT_000cb620 + 0xcabf6);
                if (iVar22 == 0) {
                  uVar50 = 0;
LAB_000cb92c:
                  bVar12 = (byte)uVar50;
                  iVar44 = 1;
                  iVar22 = 3;
                  iVar36 = 2;
                  iVar31 = 0;
                }
                else {
                  if (uVar8 < 0x1ffff) {
                    if (iVar22 == 0x14) {
                      uVar6 = uVar8 * 0x666 >> 0xf;
                    }
                    else {
                      uVar50 = *(int *)(DAT_000cb620 + 0xcabfa) * uVar8;
                      uVar6 = uVar50 >> 0xf;
                      if ((uVar50 & 0x4000) != 0) {
                        uVar6 = uVar6 + 1;
                      }
                    }
                  }
                  else {
                    uVar6 = __udivsi3(uVar8,iVar22);
                  }
                  uVar16 = iVar22 * uVar6;
                  uVar50 = uVar6;
                  if (uVar16 < uVar8) {
                    iVar36 = 0;
                    do {
                      uVar50 = uVar6 + 1;
                      if (uVar8 <= uVar16 + iVar36 + iVar22) break;
                      iVar36 = iVar36 + iVar22 + iVar22;
                      uVar50 = uVar6 + 2;
                      if (uVar8 <= uVar16 + iVar36) break;
                      iVar36 = iVar36 + iVar22;
                      uVar50 = uVar6 + 3;
                      if (uVar8 <= uVar16 + iVar36) break;
                      iVar36 = iVar36 + iVar22;
                      uVar50 = uVar6 + 4;
                      if (uVar8 <= uVar16 + iVar36) break;
                      iVar36 = iVar36 + iVar22;
                      uVar50 = uVar6 + 5;
                      if (uVar8 <= uVar16 + iVar36) break;
                      iVar36 = iVar36 + iVar22;
                      uVar50 = uVar6 + 6;
                      if (uVar8 <= uVar16 + iVar36) break;
                      iVar36 = iVar36 + iVar22;
                      uVar50 = uVar6 + 7;
                      if (uVar8 <= uVar16 + iVar36) break;
                      iVar36 = iVar36 + iVar22;
                      uVar50 = uVar6 + 8;
                      if (uVar8 <= uVar16 + iVar36) break;
                      iVar36 = iVar36 + iVar22;
                      uVar50 = uVar6 + 9;
                      if (uVar8 <= uVar16 + iVar36) break;
                      iVar36 = iVar36 + iVar22;
                      uVar50 = uVar6 + 10;
                      if (uVar8 <= uVar16 + iVar36) break;
                      iVar36 = iVar36 + iVar22;
                      uVar50 = uVar6 + 0xb;
                      if (uVar8 <= uVar16 + iVar36) break;
                      iVar36 = iVar36 + iVar22;
                      uVar50 = uVar6 + 0xc;
                      if (uVar8 <= uVar16 + iVar36) break;
                      iVar36 = iVar36 + iVar22;
                      uVar50 = uVar6 + 0xd;
                      if (uVar8 <= uVar16 + iVar36) break;
                      iVar36 = iVar36 + iVar22;
                      uVar50 = uVar6 + 0xe;
                      if (uVar8 <= uVar16 + iVar36) break;
                      iVar36 = iVar36 + iVar22;
                      uVar50 = uVar6 + 0xf;
                      if (uVar8 <= uVar16 + iVar36) break;
                      iVar36 = iVar36 + iVar22;
                      uVar6 = uVar6 + 0x10;
                      uVar50 = uVar6;
                    } while (uVar16 + iVar36 < uVar8);
                  }
                  if (uVar50 < 0x200000) {
                    if (0x3fff < uVar50) {
                      bVar20 = (byte)((uVar50 << 0xb) >> 0x19) | 0x80;
                      bVar15 = (byte)((uVar50 << 0x12) >> 0x19) | 0x80;
                      bVar12 = (byte)uVar50 & 0x7f;
                      goto LAB_000cad08;
                    }
                    if (uVar50 < 0x80) goto LAB_000cb92c;
                    iVar22 = 4;
                    bVar12 = (byte)uVar50 & 0x7f;
                    bVar15 = (byte)((uVar50 << 0x12) >> 0x19) | 0x80;
                    iVar44 = 2;
                    iVar36 = 3;
                    iVar31 = 1;
                    iVar35 = 0;
                  }
                  else {
                    bVar15 = 0xff;
                    bVar20 = 0xff;
                    bVar12 = 0x7f;
LAB_000cad08:
                    iVar44 = 3;
                    iVar36 = 4;
                    iVar31 = 2;
                    iVar35 = 1;
                    *param_1 = bVar20;
                    iVar22 = 5;
                  }
                  param_1[iVar35] = bVar15;
                }
                param_1[iVar31] = bVar12;
                param_1[iVar44] = 0xc0;
                bVar15 = *(byte *)(iVar41 + 0x31);
                if ((int)((uint)bVar15 << 0x18) < 0) {
                  if (0xe2 < bVar15) {
                    bVar15 = 0xe3;
                  }
                  param_1[iVar36] = bVar15;
                }
                else {
                  if (0x62 < bVar15) {
                    bVar15 = 99;
                  }
                  param_1[iVar36] = bVar15;
                }
                uVar8 = (uint)*(byte *)(DAT_000cb624 + 0xcb880);
                goto LAB_000c8dfe;
              }
              uVar8 = uVar50 & 0xff;
              *(undefined1 *)(DAT_000c9660 + 0xc98fc) = uVar34;
              if (*(int *)(iVar41 + 0x2c) != 4) goto LAB_000c9f4e;
              if (param_2 < 6) goto LAB_000ca9a8;
              iVar36 = *(int *)(iVar41 + 0x34);
              if (iVar36 == 0) {
                uVar8 = *(uint *)(iVar22 + 0xc990c);
                *(undefined4 *)(iVar22 + 0xc9910) = 0;
                *(undefined4 *)(iVar22 + 0xc990c) = 0;
              }
              else {
                uVar50 = *(uint *)(iVar22 + 0xc9910);
                uVar8 = iVar36 - *(int *)(iVar22 + 0xc9908);
                *(int *)(iVar22 + 0xc990c) =
                     (*(int *)(iVar22 + 0xc990c) + *(int *)(iVar22 + 0xc9908)) - iVar36;
                uVar32 = *(undefined4 *)(iVar41 + 0x34);
                if (uVar8 < uVar50) {
                  *(uint *)(iVar22 + 0xc9910) = uVar50 - uVar8;
                }
                *(undefined4 *)(iVar22 + 0xc9908) = uVar32;
                if (uVar8 >= uVar50) {
                  *(undefined4 *)(iVar22 + 0xc9910) = 0;
                }
              }
              iVar22 = *(int *)(DAT_000cb628 + 0xcadae);
              if (iVar22 == 0) {
                uVar50 = 0;
LAB_000cba06:
                bVar15 = (byte)uVar50;
                iVar35 = 1;
                iVar22 = 4;
                iVar36 = 3;
                iVar44 = 2;
                iVar31 = 0;
              }
              else {
                if (uVar8 < 0x1ffff) {
                  if (iVar22 == 0x14) {
                    uVar6 = uVar8 * 0x666 >> 0xf;
                  }
                  else {
                    uVar50 = *(int *)(DAT_000cb628 + 0xcadb2) * uVar8;
                    uVar6 = uVar50 >> 0xf;
                    if ((uVar50 & 0x4000) != 0) {
                      uVar6 = uVar6 + 1;
                    }
                  }
                }
                else {
                  uVar6 = __udivsi3(uVar8,iVar22);
                }
                uVar16 = iVar22 * uVar6;
                uVar50 = uVar6;
                if (uVar16 < uVar8) {
                  iVar36 = 0;
                  do {
                    uVar50 = uVar6 + 1;
                    if (uVar8 <= uVar16 + iVar36 + iVar22) break;
                    iVar36 = iVar36 + iVar22 + iVar22;
                    uVar50 = uVar6 + 2;
                    if (uVar8 <= uVar16 + iVar36) break;
                    iVar36 = iVar36 + iVar22;
                    uVar50 = uVar6 + 3;
                    if (uVar8 <= uVar16 + iVar36) break;
                    iVar36 = iVar36 + iVar22;
                    uVar50 = uVar6 + 4;
                    if (uVar8 <= uVar16 + iVar36) break;
                    iVar36 = iVar36 + iVar22;
                    uVar50 = uVar6 + 5;
                    if (uVar8 <= uVar16 + iVar36) break;
                    iVar36 = iVar36 + iVar22;
                    uVar50 = uVar6 + 6;
                    if (uVar8 <= uVar16 + iVar36) break;
                    iVar36 = iVar36 + iVar22;
                    uVar50 = uVar6 + 7;
                    if (uVar8 <= uVar16 + iVar36) break;
                    iVar36 = iVar36 + iVar22;
                    uVar50 = uVar6 + 8;
                    if (uVar8 <= uVar16 + iVar36) break;
                    iVar36 = iVar36 + iVar22;
                    uVar50 = uVar6 + 9;
                    if (uVar8 <= uVar16 + iVar36) break;
                    iVar36 = iVar36 + iVar22;
                    uVar50 = uVar6 + 10;
                    if (uVar8 <= uVar16 + iVar36) break;
                    iVar36 = iVar36 + iVar22;
                    uVar50 = uVar6 + 0xb;
                    if (uVar8 <= uVar16 + iVar36) break;
                    iVar36 = iVar36 + iVar22;
                    uVar50 = uVar6 + 0xc;
                    if (uVar8 <= uVar16 + iVar36) break;
                    iVar36 = iVar36 + iVar22;
                    uVar50 = uVar6 + 0xd;
                    if (uVar8 <= uVar16 + iVar36) break;
                    iVar36 = iVar36 + iVar22;
                    uVar50 = uVar6 + 0xe;
                    if (uVar8 <= uVar16 + iVar36) break;
                    iVar36 = iVar36 + iVar22;
                    uVar50 = uVar6 + 0xf;
                    if (uVar8 <= uVar16 + iVar36) break;
                    iVar36 = iVar36 + iVar22;
                    uVar6 = uVar6 + 0x10;
                    uVar50 = uVar6;
                  } while (uVar16 + iVar36 < uVar8);
                }
                if (uVar50 < 0x200000) {
                  if (0x3fff < uVar50) {
                    bVar20 = (byte)((uVar50 << 0xb) >> 0x19) | 0x80;
                    bVar12 = (byte)((uVar50 << 0x12) >> 0x19) | 0x80;
                    bVar15 = (byte)uVar50 & 0x7f;
                    goto LAB_000caed8;
                  }
                  if (uVar50 < 0x80) goto LAB_000cba06;
                  bVar15 = (byte)uVar50 & 0x7f;
                  bVar12 = (byte)((uVar50 << 0x12) >> 0x19) | 0x80;
                  iVar22 = 5;
                  iVar36 = 4;
                  iVar35 = 2;
                  iVar44 = 3;
                  iVar31 = 1;
                  iVar40 = 0;
                }
                else {
                  bVar12 = 0xff;
                  bVar20 = 0xff;
                  bVar15 = 0x7f;
LAB_000caed8:
                  iVar36 = 5;
                  iVar35 = 3;
                  iVar44 = 4;
                  iVar31 = 2;
                  iVar40 = 1;
                  *param_1 = bVar20;
                  iVar22 = 6;
                }
                param_1[iVar40] = bVar12;
              }
              param_1[iVar31] = bVar15;
              param_1[iVar35] = 0xb0;
              param_1[iVar44] = '\x14';
              iVar35 = DAT_000cb630;
              uVar8 = (uint)(byte)(*(byte *)(iVar41 + 0x31) - 1);
              if (4 < uVar8) {
                if (*(byte *)(iVar41 + 0x31) < 6) {
                  uVar8 = 0;
                }
                else {
                  uVar8 = 4;
                }
              }
              param_1[iVar36] = (uchar)*(undefined2 *)(DAT_000cb62c + uVar8 * 2 + 0xcb524);
              uVar8 = (uint)*(byte *)((int)&DAT_000cba6c + iVar35);
            }
          }
LAB_000c8dfe:
          if (uVar8 == local_54) {
            uVar50 = uVar8 + 1;
            uVar8 = uVar50 & 0xff;
            *(char *)(DAT_000c9668 + 0xc995c) = (char)uVar50;
          }
          if (iVar22 != 0) {
            *(undefined4 *)(DAT_000ca71c + 0xcaa86) = *(undefined4 *)(iVar41 + 0x44);
            return iVar22;
          }
          local_7c = (uint)*(byte *)(DAT_000c9664 + 0xc8e3a);
          local_54 = uVar8;
        } while (uVar8 < local_7c);
      }
      goto LAB_000c8980;
    }
    piVar46 = (int *)(DAT_000c960c + 0xc948c);
    *(byte *)(DAT_000c960c + 0xc947c) = *(byte *)(DAT_000c960c + 0xc896c) + 1;
    if (*piVar46 == 0) {
      *(undefined4 *)(iVar51 + 0xc948c) = 1;
    }
    iVar51 = DAT_000c9640 + 0xc8d0a;
  }
  *(undefined4 *)(iVar51 + 0xb4c) = *(undefined4 *)(iVar51 + 0x10);
  if (param_2 < 5) {
    *(undefined4 *)(&UNK_000c84ba + DAT_000c7998) = 0;
    return -3;
  }
  iVar51 = *(int *)(DAT_000c7990 + 0xc77f0);
  uVar8 = *(uint *)(&UNK_000c8330 + DAT_000c7990);
  if (iVar51 == 0) {
    uVar50 = 0;
LAB_000c792c:
    bVar20 = (byte)uVar50;
    iVar28 = 1;
    iVar7 = 3;
    iVar26 = 2;
    iVar51 = 0;
    goto LAB_000c78f8;
  }
  if (uVar8 < 0x1ffff) {
    if (iVar51 == 0x14) {
      uVar6 = uVar8 * 0x666 >> 0xf;
    }
    else {
      uVar50 = *(int *)(DAT_000c7990 + 0xc77f4) * uVar8;
      uVar6 = uVar50 >> 0xf;
      if ((uVar50 & 0x4000) != 0) {
        uVar6 = uVar6 + 1;
      }
    }
  }
  else {
    uVar6 = __udivsi3(uVar8,iVar51);
  }
  uVar16 = iVar51 * uVar6;
  uVar50 = uVar6;
  if (uVar16 < uVar8) {
    iVar7 = 0;
    do {
      uVar50 = uVar6 + 1;
      if (uVar8 <= iVar7 + iVar51 + uVar16) break;
      iVar7 = iVar7 + iVar51 + iVar51;
      uVar50 = uVar6 + 2;
      if (uVar8 <= iVar7 + uVar16) break;
      iVar7 = iVar7 + iVar51;
      uVar50 = uVar6 + 3;
      if (uVar8 <= iVar7 + uVar16) break;
      iVar7 = iVar7 + iVar51;
      uVar50 = uVar6 + 4;
      if (uVar8 <= iVar7 + uVar16) break;
      iVar7 = iVar7 + iVar51;
      uVar50 = uVar6 + 5;
      if (uVar8 <= iVar7 + uVar16) break;
      iVar7 = iVar7 + iVar51;
      uVar50 = uVar6 + 6;
      if (uVar8 <= iVar7 + uVar16) break;
      iVar7 = iVar7 + iVar51;
      uVar50 = uVar6 + 7;
      if (uVar8 <= iVar7 + uVar16) break;
      iVar7 = iVar7 + iVar51;
      uVar50 = uVar6 + 8;
      if (uVar8 <= iVar7 + uVar16) break;
      iVar7 = iVar7 + iVar51;
      uVar50 = uVar6 + 9;
      if (uVar8 <= iVar7 + uVar16) break;
      iVar7 = iVar7 + iVar51;
      uVar50 = uVar6 + 10;
      if (uVar8 <= iVar7 + uVar16) break;
      iVar7 = iVar7 + iVar51;
      uVar50 = uVar6 + 0xb;
      if (uVar8 <= iVar7 + uVar16) break;
      iVar7 = iVar7 + iVar51;
      uVar50 = uVar6 + 0xc;
      if (uVar8 <= iVar7 + uVar16) break;
      iVar7 = iVar7 + iVar51;
      uVar50 = uVar6 + 0xd;
      if (uVar8 <= iVar7 + uVar16) break;
      iVar7 = iVar7 + iVar51;
      uVar50 = uVar6 + 0xe;
      if (uVar8 <= iVar7 + uVar16) break;
      iVar7 = iVar7 + iVar51;
      uVar50 = uVar6 + 0xf;
      if (uVar8 <= iVar7 + uVar16) break;
      iVar7 = iVar7 + iVar51;
      uVar6 = uVar6 + 0x10;
      uVar50 = uVar6;
    } while (iVar7 + uVar16 < uVar8);
  }
  if (uVar50 < 0x200000) {
    if (0x3fff < uVar50) {
      bVar12 = (byte)((uVar50 << 0xb) >> 0x19) | 0x80;
      bVar15 = (byte)((uVar50 << 0x12) >> 0x19) | 0x80;
      bVar20 = (byte)uVar50 & 0x7f;
      goto LAB_000c78e8;
    }
    if (uVar50 < 0x80) goto LAB_000c792c;
    iVar28 = 2;
    bVar15 = (byte)((uVar50 << 0x12) >> 0x19) | 0x80;
    bVar20 = (byte)uVar50 & 0x7f;
    iVar7 = 4;
    iVar26 = 3;
    iVar51 = 1;
    iVar14 = 0;
  }
  else {
    bVar12 = 0xff;
    bVar20 = 0x7f;
    bVar15 = bVar12;
LAB_000c78e8:
    *param_1 = bVar12;
    iVar7 = 5;
    iVar28 = 3;
    iVar26 = 4;
    iVar51 = 2;
    iVar14 = 1;
  }
  param_1[iVar14] = bVar15;
LAB_000c78f8:
  iVar14 = DAT_000c7994;
  param_1[iVar51] = bVar20;
  param_1[iVar28] = 0xff;
  param_1[iVar26] = '\0';
  *(undefined4 *)(&UNK_000c844a + iVar14) = 0;
  *(undefined4 *)(&UNK_000c844e + iVar14) = 0;
  return iVar7;
}

